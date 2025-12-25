#include "global.h"
#include "bg.h"
#include "dma3.h"
#include "event_data.h"
#include "field_specials.h"
#include "field_weather.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item_menu.h"
#include "list_menu.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "overworld.h"
#include "palette.h"
#include "scanline_effect.h"
#include "script.h"
#include "sound.h"
#include "sprite.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "window.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "new_menu_helpers.h"
#include "help_message.h"
#include "event_object_movement.h"
#include "field_player_avatar.h"

#define WINDOW_PALETTE_NUM 14
#define OVERLAY_PALETTE_NUM 15

struct MusicPlayerSong
{
    const u8 *name;
    u16 songId;
    u16 flagId;
    const u8 *desc;
};

static const u8 sText_Title[] = _("MUSIC PLAYER");
static const u8 sText_Locked[] = _("?????");
static const u8 sText_Exit[] = _("EXIT");

static const u8 sText_Help_Field[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}PLAY {B_BUTTON}EXIT"); 
static const u8 sText_Help_Bag[] = _("{DPAD_UPDOWN}PICK {A_BUTTON}PLAY {B_BUTTON}CANCEL");

static const u8 sName_Pallet[] = _("PALLET TOWN");
static const u8 gText_MusicPlayer_PalletDesc[] = _("A song");

static const u8 sName_VSGym[] = _("VS GYM LEADER");
static const u8 gText_MusicPlayer_VSGymLeaderDesc[] = _("A song");


static const u8 sName_SSAnne[] = _("SS ANNE");
static const u8 gText_MusicPlayer_SSAnneDesc[] = _("A song");


static const u8 sName_Victory[] = _("VICTORY ROAD");
static const u8 gText_MusicPlayer_VictoryRoadDesc[] = _("A song");

static const u8 sName_Olivine[] = _("OLIVINE CITY");
static const u8 gText_MusicPlayer_OlivineDesc[] = _("Future Johto content");

static const u8 sName_OlivineLighthouse[] = _("OLIVINE LIGHTHOUSE");
static const u8 gText_MusicPlayer_OlivineLighthouseDesc[] = _("Future Johto content");

static const struct MusicPlayerSong sSongList[] = 
{
    { sName_Pallet, MUS_PALLET, 0, gText_MusicPlayer_PalletDesc },
    { sName_VSGym, MUS_VS_GYM_LEADER, 0, gText_MusicPlayer_VSGymLeaderDesc },
    { sName_SSAnne, MUS_SS_ANNE, 0, gText_MusicPlayer_SSAnneDesc },
    { sName_Victory, MUS_VICTORY_ROAD, 0, gText_MusicPlayer_VictoryRoadDesc },
    { sName_Olivine, MUS_OLIVINE, 0, gText_MusicPlayer_OlivineDesc },
    { sName_OlivineLighthouse, MUS_OLIVINE_LIGHTHOUSE, 0, gText_MusicPlayer_OlivineLighthouseDesc },
};

#define LIST_COUNT ARRAY_COUNT(sSongList)

struct MusicPlayerStruct
{
    struct ListMenuItem listItems[LIST_COUNT + 1];
    u8 songNames[LIST_COUNT + 1][32];
    u16 scrollOffset;
    u16 selectedRowIndex;
    u8 listTaskId;
    u8 windowId;     // Dynamic window ID
    bool8 isOverlay; // Mode Tracker
};

static EWRAM_DATA struct MusicPlayerStruct *sMusicPlayer = NULL;

static const struct BgTemplate sBgTemplates_Bag[] =
{
   {
       .bg = 0,
       .charBaseIndex = 0,
       .mapBaseIndex = 31,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 0,
       .baseTile = 0
   },
   {
       .bg = 1,
       .charBaseIndex = 0, 
       .mapBaseIndex = 30,
       .screenSize = 0,
       .paletteMode = 0,
       .priority = 1,
       .baseTile = 0
   }
};

static const struct WindowTemplate sWindowTemplates_Bag[] =
{
    // Window 0: Title Header
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 2,
        .width = 26,
        .height = 2,
        .paletteNum = WINDOW_PALETTE_NUM,
        .baseBlock = 10
    },
    // Window 1: Main List
    {
        .bg = 0,
        .tilemapLeft = 2,
        .tilemapTop = 6,
        .width = 26,
        .height = 12,
        .paletteNum = WINDOW_PALETTE_NUM,
        .baseBlock = 64
    },
    // Window 2: Top Help Bar
    {
        .bg = 0,
        .tilemapLeft = 0,
        .tilemapTop = 0,
        .width = 30,
        .height = 2,
        .paletteNum = WINDOW_PALETTE_NUM,
        .baseBlock = 376
    },
    DUMMY_WIN_TEMPLATE
};

// --- Overlay Window Template ---
// A floating window in the center-ish of the screen
static const struct WindowTemplate sWindowTemplate_Overlay = 
{
    .bg = 0,
    .tilemapLeft = 14, // Right side of screen
    .tilemapTop = 1,
    .width = 15,
    .height = 12, // Enough for 5-6 items
    .paletteNum = OVERLAY_PALETTE_NUM,
    .baseBlock = 0x200 // High base block to avoid conflicts with map logic
};

// --- Function Prototypes ---

static void MainCB2_Bag(void);
static void VBlankCB_Bag(void);
static void Task_MusicPlayerFadeIn_Bag(u8 taskId);
static void Task_MusicPlayerMain(u8 taskId);
static void Task_MusicPlayerFadeOut_Bag(u8 taskId);
static void Task_MusicPlayerWaitFadeAndExit_Bag(u8 taskId);
static void ListMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list);

// --- Shared Helpers ---

static void InitMusicPlayerData(bool8 isOverlay)
{
    u32 i;
    
    sMusicPlayer = AllocZeroed(sizeof(struct MusicPlayerStruct));
    sMusicPlayer->scrollOffset = 0;
    sMusicPlayer->selectedRowIndex = 0;
    sMusicPlayer->isOverlay = isOverlay;

    // Populate List Items
    for (i = 0; i < LIST_COUNT; i++)
    {
        bool8 unlocked = (sSongList[i].flagId == 0 || FlagGet(sSongList[i].flagId));
        
        if (unlocked)
            StringCopy(sMusicPlayer->songNames[i], sSongList[i].name);
        else
            StringCopy(sMusicPlayer->songNames[i], sText_Locked);

        sMusicPlayer->listItems[i].label = sMusicPlayer->songNames[i];
        sMusicPlayer->listItems[i].index = i;
    }

    StringCopy(sMusicPlayer->songNames[LIST_COUNT], sText_Exit);
    sMusicPlayer->listItems[LIST_COUNT].label = sMusicPlayer->songNames[LIST_COUNT];
    sMusicPlayer->listItems[LIST_COUNT].index = -2; // Special Exit ID
}

void InitMusicPlayer(void)
{
    InitMusicPlayerData(TRUE);
    CreateTask(Task_MusicPlayerFadeIn_Bag, 80);
    SetMainCallback2(MainCB2_Bag);
}

static void LoadUI_Bag(void)
{
    struct ListMenuTemplate listTemplate;

    InitBgsFromTemplates(0, sBgTemplates_Bag, ARRAY_COUNT(sBgTemplates_Bag));
    FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 32, 32);
    FillBgTilemapBufferRect_Palette0(1, 0, 0, 0, 32, 32);
    
    InitWindows(sWindowTemplates_Bag);
    DeactivateAllTextPrinters();
    
    LoadStdWindowGfx(0, 0xD4, WINDOW_PALETTE_NUM);
    LoadPalette(gStandardMenuPalette, BG_PLTT_ID(WINDOW_PALETTE_NUM), PLTT_SIZE_4BPP);

    DrawStdWindowFrame(0, FALSE);
    AddTextPrinterParameterized(0, FONT_NORMAL, sText_Title, 8, 1, 0, NULL);
    PutWindowTilemap(0);
    
    // Help
    FillWindowPixelBuffer(2, PIXEL_FILL(0));
    {
        const u8 color[] = {0, 1, 2}; 
        AddTextPrinterParameterized3(2, FONT_SMALL, 4, 0, color, 0, sText_Help_Bag);
    }
    PutWindowTilemap(2);

    // --- List Setup ---
    listTemplate.items = sMusicPlayer->listItems;
    listTemplate.moveCursorFunc = ListMenu_MoveCursorFunc;
    listTemplate.itemPrintFunc = NULL; 
    listTemplate.totalItems = LIST_COUNT + 1;
    listTemplate.maxShowed = 6;
    listTemplate.windowId = 1;
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

    // Draw List Window Frame
    DrawStdWindowFrame(1, FALSE);

    gMultiuseListMenuTemplate = listTemplate;
    sMusicPlayer->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sMusicPlayer->scrollOffset, sMusicPlayer->selectedRowIndex);

    CopyBgTilemapBufferToVram(0);
    CopyBgTilemapBufferToVram(1);
    ShowBg(0);
    ShowBg(1);
}

static void Task_MusicPlayerFadeIn_Bag(u8 taskId)
{
    LoadUI_Bag();
    SetVBlankCallback(VBlankCB_Bag);
    gTasks[taskId].func = Task_MusicPlayerMain;
}

static void Task_MusicPlayerFadeOut_Bag(u8 taskId)
{
    gTasks[taskId].func = Task_MusicPlayerWaitFadeAndExit_Bag;
}

static void Task_MusicPlayerWaitFadeAndExit_Bag(u8 taskId)
{
    Free(sMusicPlayer);
    UnlockPlayerFieldControls();
    UnfreezeObjectEvents();
    SetMainCallback2(CB2_ReturnToField);
}

static void MainCB2_Bag(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_Bag(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}

// ---------------------------------------------------------
// MODE 2: FIELD / OVERLAY EXECUTION
// ---------------------------------------------------------

static void Task_MusicPlayerOverlay_Cleanup(u8 taskId)
{
    // Clean up List Menu
    DestroyListMenuTask(sMusicPlayer->listTaskId, NULL, NULL);
    
    // Clear and Remove Window
    ClearStdWindowAndFrameToTransparent(sMusicPlayer->windowId, FALSE);
    CopyWindowToVram(sMusicPlayer->windowId, 3);
    RemoveWindow(sMusicPlayer->windowId);
    
    // Free Memory
    Free(sMusicPlayer);
    sMusicPlayer = NULL;

    // Unlock Player Movement
    UnlockPlayerFieldControls();
    UnfreezeObjectEvents();
    DestroyTask(taskId);
}

void InitMusicPlayer_FromSelect(void)
{
    struct ListMenuTemplate listTemplate;
    u8 taskId;

    FreezeObjectEvents();
    HandleEnforcedLookDirectionOnPlayerStopMoving();
    StopPlayerAvatar();

    LockPlayerFieldControls();

    // 2. Alloc Data
    InitMusicPlayerData(TRUE);

    sMusicPlayer->windowId = AddWindow(&sWindowTemplate_Overlay);
    
    // 4. Draw Frame
    DrawStdWindowFrame(sMusicPlayer->windowId, FALSE);
    
    AddTextPrinterParameterized(sMusicPlayer->windowId, FONT_NORMAL, sText_Title, 8, 1, 0, NULL);

    listTemplate.items = sMusicPlayer->listItems;
    listTemplate.moveCursorFunc = ListMenu_MoveCursorFunc;
    listTemplate.itemPrintFunc = NULL;
    listTemplate.totalItems = LIST_COUNT + 1;
    listTemplate.maxShowed = 5; // Smaller list
    listTemplate.windowId = sMusicPlayer->windowId;
    listTemplate.header_X = 0;
    listTemplate.item_X = 8;
    listTemplate.cursor_X = 0;
    listTemplate.upText_Y = 17; // Shift down below Title
    listTemplate.cursorPal = 2;
    listTemplate.fillValue = 1;
    listTemplate.cursorShadowPal = 3;
    listTemplate.lettersSpacing = 0;
    listTemplate.itemVerticalPadding = 0;
    listTemplate.scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD;
    listTemplate.fontId = FONT_NORMAL;
    listTemplate.cursorKind = 0;

    gMultiuseListMenuTemplate = listTemplate;
    sMusicPlayer->listTaskId = ListMenuInit(&gMultiuseListMenuTemplate, sMusicPlayer->scrollOffset, sMusicPlayer->selectedRowIndex);
    
    // 6. Push to VRAM
    CopyWindowToVram(sMusicPlayer->windowId, 3);

    // 7. Create Task to handle input
    taskId = CreateTask(Task_MusicPlayerMain, 80);
}

static void ListMenu_MoveCursorFunc(s32 itemIndex, bool8 onInit, struct ListMenu *list)
{
    if (!onInit)
        PlaySE(SE_SELECT);
}

static void Task_MusicPlayerMain(u8 taskId)
{
    s32 input = ListMenu_ProcessInput(sMusicPlayer->listTaskId);

    if (JOY_NEW(A_BUTTON))
    {
        if (input == -2) // Exit
        {
            PlaySE(SE_SELECT);
            if (sMusicPlayer->isOverlay)
                Task_MusicPlayerOverlay_Cleanup(taskId);
            else
                gTasks[taskId].func = Task_MusicPlayerFadeOut_Bag;
        }
        else if (input >= 0 && input < LIST_COUNT)
        {
            if (sSongList[input].flagId == 0 || FlagGet(sSongList[input].flagId))
            {
                PlayBGM(sSongList[input].songId);
            }
            else
            {
                PlaySE(SE_BOO);
            }
        }
    }
    else if (JOY_NEW(B_BUTTON))
    {
        PlaySE(SE_SELECT);
        if (sMusicPlayer->isOverlay)
            Task_MusicPlayerOverlay_Cleanup(taskId);
        else
            gTasks[taskId].func = Task_MusicPlayerFadeOut_Bag;
    }
}