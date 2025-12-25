#include "global.h"
#include "gflib.h"
#include "decoration.h"
#include "event_data.h"
#include "event_scripts.h"
#include "item_menu.h"
#include "list_menu.h"
#include "menu.h"
#include "menu_helpers.h"
#include "script.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "money.h"
#include "overworld.h"
#include "constants/decorations.h"
#include "constants/songs.h"
#include "constants/items.h"

#define WIN_LIST 0
#define WIN_DESC 1
#define WIN_MONEY 2

#define tCurrentDecorIndex data[0]
#define tScrollOffset data[1]
#define tSelectedRow data[2]
#define tListPtrLow data[3]
#define tListPtrHigh data[4]
#define tListMenuTaskId data[5]

struct ShopItem
{
    u16 decorId;
    u16 price;
};

static struct ListMenuItem *sShopListMenuItems;
static u8 sNumShopItems;

static const struct WindowTemplate sShopWindowTemplates[] =
{
    [WIN_LIST] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 19,
        .height = 12,
        .paletteNum = 15,
        .baseBlock = 0x0001
    },
    [WIN_DESC] = {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 15,
        .width = 26,
        .height = 4,
        .paletteNum = 15,
        .baseBlock = 0x00E5
    },
    [WIN_MONEY] = {
        .bg = 0,
        .tilemapLeft = 1,
        .tilemapTop = 1,
        .width = 10,
        .height = 2,
        .paletteNum = 15,
        .baseBlock = 0x0150
    },
    DUMMY_WIN_TEMPLATE
};

void ScheduleBgCopyTilemapToVram(u8 bgId);

bool8 AddDecoration(u16 decoration)
{
    return TRUE;
}

static void Task_InitDecorationShop(u8 taskId);
static void Task_HandleShopInput(u8 taskId);
static void Shop_OnCursorMove(s32 itemIndex, bool8 onInit, struct ListMenu *list);
static void Shop_PrintItemName(u8 windowId, u32 itemId, u8 y);
static void Shop_AskToBuy(u8 taskId);
static void Shop_ConfirmBuy(u8 taskId);
static void Shop_CancelBuy(u8 taskId);
static void Shop_Exit(u8 taskId);
static void BuyMenuSubtractMoney(u8 taskId);
static void BuyMenuDecorationsDisplayMessage(u8 taskId, const u8 *text, TaskFunc callback);
static void BuyMenuConfirmDecorationsPurchase(u8 taskId, const struct YesNoFuncTable *yesNo);

static const struct YesNoFuncTable sShopConfirmYesNo =
{
    .yesFunc = Shop_ConfirmBuy,
    .noFunc = Shop_CancelBuy
};

void StartDecorationShop(void)
{
    u8 taskId = CreateTask(Task_InitDecorationShop, 0);
    
    gTasks[taskId].tListPtrLow = gSpecialVar_0x8004 & 0xFFFF;
    gTasks[taskId].tListPtrHigh = (gSpecialVar_0x8004 >> 16) & 0xFFFF;
}

static void Task_InitDecorationShop(u8 taskId)
{
    struct ListMenuTemplate listTemplate;
    u16 *inputList = (u16 *)(gTasks[taskId].tListPtrLow | (gTasks[taskId].tListPtrHigh << 16));
    u16 i = 0;
    
    while (inputList[i] != DECOR_NONE && inputList[i] != 0xFFFF)
        i++;
    sNumShopItems = i;

    sShopListMenuItems = Alloc((sNumShopItems + 1) * sizeof(struct ListMenuItem));

    for (i = 0; i < sNumShopItems; i++)
    {
        sShopListMenuItems[i].label = gDecorations[inputList[i]].name;
        sShopListMenuItems[i].index = inputList[i];
    }
    sShopListMenuItems[sNumShopItems].label = gFameCheckerText_Cancel;
    sShopListMenuItems[sNumShopItems].index = LIST_CANCEL;

    LockPlayerFieldControls();
    InitWindows(sShopWindowTemplates);
    PrintMoneyAmountInMoneyBox(WIN_MONEY, GetMoney(&gSaveBlock1Ptr->money), 0);

    listTemplate.items = sShopListMenuItems;
    listTemplate.moveCursorFunc = Shop_OnCursorMove;
    listTemplate.itemPrintFunc = Shop_PrintItemName;
    listTemplate.totalItems = sNumShopItems + 1;
    listTemplate.maxShowed = 6;
    listTemplate.windowId = WIN_LIST;
    listTemplate.header_X = 0;
    listTemplate.item_X = 8;
    listTemplate.cursor_X = 0;
    listTemplate.upText_Y = 1;
    listTemplate.cursorPal = 2;
    listTemplate.fillValue = 1;
    listTemplate.cursorShadowPal = 3;
    listTemplate.lettersSpacing = 0;
    listTemplate.itemVerticalPadding = 0;
    listTemplate.scrollMultiple = LIST_NO_MULTIPLE_SCROLL;
    listTemplate.fontId = FONT_NORMAL;
    listTemplate.cursorKind = 0;

    gTasks[taskId].tListMenuTaskId = ListMenuInit(&listTemplate, 0, 0);
    
    DrawStdFrameWithCustomTileAndPalette(WIN_LIST, FALSE, 0x214, 14);
    DrawStdFrameWithCustomTileAndPalette(WIN_DESC, FALSE, 0x214, 14);
    DrawStdFrameWithCustomTileAndPalette(WIN_MONEY, FALSE, 0x214, 14);
    
    ScheduleBgCopyTilemapToVram(0);
    gTasks[taskId].func = Task_HandleShopInput;
}

static void Task_HandleShopInput(u8 taskId)
{
    s32 input = ListMenu_ProcessInput(gTasks[taskId].tListMenuTaskId);
    
    if (gPaletteFade.active)
        return;

    switch (input)
    {
    case LIST_NOTHING_CHOSEN:
        break;
    case LIST_CANCEL:
        PlaySE(SE_SELECT);
        Shop_Exit(taskId);
        break;
    default:
        PlaySE(SE_SELECT);
        gTasks[taskId].tCurrentDecorIndex = input;
        Shop_AskToBuy(taskId);
        break;
    }
}

static void Shop_OnCursorMove(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    s32 decorId = sShopListMenuItems[itemIndex].index;
    
    FillWindowPixelBuffer(WIN_DESC, PIXEL_FILL(1));
    
    if (decorId == LIST_CANCEL)
        AddTextPrinterParameterized(WIN_DESC, FONT_NORMAL, gText_QuitShopping, 0, 1, 0, NULL);
    else
        AddTextPrinterParameterized(WIN_DESC, FONT_NORMAL, gDecorations[decorId].description, 0, 1, 0, NULL);
}

static void Shop_PrintItemName(u8 windowId, u32 itemId, u8 y)
{
    s32 decorId = itemId;

    if (decorId != LIST_CANCEL)
    {
        ConvertIntToDecimalStringN(gStringVar1, gDecorations[decorId].price, STR_CONV_MODE_RIGHT_ALIGN, 4);
        StringExpandPlaceholders(gStringVar4, gText_PokedollarVar1);
        AddTextPrinterParameterized(windowId, FONT_SMALL, gStringVar4, 0x69, y, 0, NULL);
    }
}

static void Shop_AskToBuy(u8 taskId)
{
    u16 decorId = gTasks[taskId].tCurrentDecorIndex;
    u16 price = gDecorations[decorId].price;
    
    if (!IsEnoughMoney(&gSaveBlock1Ptr->money, price))
    {
        BuyMenuDecorationsDisplayMessage(taskId, gText_YouDontHaveMoney, Task_HandleShopInput);
        return;
    }

    ConvertIntToDecimalStringN(gStringVar1, price, STR_CONV_MODE_LEFT_ALIGN, 5);
    StringCopy(gStringVar2, gDecorations[decorId].name);
    StringExpandPlaceholders(gStringVar4, gText_Var1CertainlyHowMany);
    
    BuyMenuConfirmDecorationsPurchase(taskId, &sShopConfirmYesNo);
}

static void Shop_ConfirmBuy(u8 taskId)
{
    u16 decorId = gTasks[taskId].tCurrentDecorIndex;
    u16 price = gDecorations[decorId].price;
    
    if (AddDecoration(decorId))
    {
        RemoveMoney(&gSaveBlock1Ptr->money, price);
        PrintMoneyAmountInMoneyBox(WIN_MONEY, GetMoney(&gSaveBlock1Ptr->money), 0);
        PlaySE(SE_SHOP);
        BuyMenuDecorationsDisplayMessage(taskId, gText_HereYouGoThankYou, BuyMenuSubtractMoney);
    }
    else
    {
        BuyMenuDecorationsDisplayMessage(taskId, gText_NoMoreRoomForThis, Task_HandleShopInput);
    }
}

static void BuyMenuSubtractMoney(u8 taskId)
{
    gTasks[taskId].func = Task_HandleShopInput;
}

static void Shop_CancelBuy(u8 taskId)
{
    Task_HandleShopInput(taskId);
}

static void Shop_Exit(u8 taskId)
{
    DestroyListMenuTask(gTasks[taskId].tListMenuTaskId, NULL, NULL);
    Free(sShopListMenuItems);
    ClearStdWindowAndFrameToTransparent(WIN_LIST, TRUE);
    ClearStdWindowAndFrameToTransparent(WIN_DESC, TRUE);
    ClearStdWindowAndFrameToTransparent(WIN_MONEY, TRUE);
    RemoveWindow(WIN_LIST);
    RemoveWindow(WIN_DESC);
    RemoveWindow(WIN_MONEY);
    
    UnlockPlayerFieldControls();
    DestroyTask(taskId);
    ScriptContext_Enable();
}

static void BuyMenuDecorationsDisplayMessage(u8 taskId, const u8 *text, TaskFunc callback)
{
    DisplayMessageAndContinueTask(taskId, WIN_DESC, 10, 13, FONT_NORMAL, gSaveBlock2Ptr->optionsTextSpeed, text, callback);
}

static void BuyMenuConfirmDecorationsPurchase(u8 taskId, const struct YesNoFuncTable *yesNo)
{
    CreateYesNoMenuWithCallbacks(taskId, &sShopWindowTemplates[WIN_LIST], 2, 0, 2, 1, 14, yesNo);
}

#include "data/decoration/tiles.h"
#include "data/decoration/description.h"
#include "data/decoration/header.h"
