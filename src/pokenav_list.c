#include "global.h"
#include "pokenav.h"
#include "window.h"
#include "strings.h"
#include "text.h"
#include "bg.h"
#include "menu.h"
#include "decompress.h"

#define GFXTAG_ARROW 10
#define PALTAG_ARROW 20

struct PokenavListMenuWindow {
    u8 bg;
    u8 fillValue;
    u8 x;
    u8 y;
    u8 width;
    u8 fontId;
    u16 tileOffset;
    u16 windowId;
    u16 unkA;
    u16 numPrinted;
    u16 numToPrint;
};

struct PokenavListWindowState {
    // The index of the element at the top of the window.
    u16 windowTopIndex;
    u16 listLength;
    u16 entriesOffscreen;
    // The index of the cursor, relative to the top of the window.
    u16 selectedIndexOffset;
    u16 entriesOnscreen;
    u32 listItemSize;
    void *listPtr;
};

struct PokenavListSub
{
    struct PokenavListMenuWindow listWindow;
    u32 printStart;
    u32 printIndex;
    u32 itemSize;
    void *listPtr;
    s32 startBgY;
    s32 endBgY;
    s32 moveDelta;
    u32 bgMoveType;
    PokenavListBufferItemFunc bufferItemFunc;
    void (*iconDrawFunc)(u16, u32, u32);
    struct Sprite *upArrow;
    struct Sprite *downArrow;
    u8 itemTextBuffer[64];
};

struct PokenavList
{
    struct PokenavListSub sub;
    u8 tilemapBuffer[BG_SCREEN_SIZE];
    struct PokenavListWindowState windowState;
    s32 eraseIndex;
};

static void InitPokenavListBg(struct PokenavList *);
static void SpriteCB_UpArrow(struct Sprite *);
static void SpriteCB_DownArrow(struct Sprite *);
static void ToggleListArrows(struct PokenavListSub *, bool32);
static void DestroyListArrows(struct PokenavListSub *);
static void CreateListArrowSprites(struct PokenavListWindowState *, struct PokenavListSub *);
static void LoadListArrowGfx(void);
static void EraseListEntry(struct PokenavListMenuWindow *, s32, s32);
static void CreateMoveListWindowTask(s32, struct PokenavListSub *);
static void PrintListItems(void *, u32, u32, u32, u32, struct PokenavListSub *);
static void InitListItems(struct PokenavListWindowState *, struct PokenavListSub *);
static void InitPokenavListWindow(struct PokenavListMenuWindow *);

static const u16 sListArrow_Pal[] = INCBIN_U16("graphics/pokenav/list_arrows.gbapal");
static const u32 sListArrow_Gfx[] = INCBIN_U32("graphics/pokenav/list_arrows.4bpp.lz");

bool32 CreatePokenavList(const struct BgTemplate *bgTemplate, struct PokenavListTemplate *listTemplate, s32 tileOffset)
{
    return TRUE;
}

static void InitPokenavListBg(struct PokenavList *list)
{
    u16 tileNum = (list->sub.listWindow.fillValue << 12) | list->sub.listWindow.tileOffset;
    SetBgTilemapBuffer(list->sub.listWindow.bg, list->tilemapBuffer);
    FillBgTilemapBufferRect_Palette0(list->sub.listWindow.bg, tileNum, 0, 0, 32, 32);
    ChangeBgY(list->sub.listWindow.bg, 0, BG_COORD_SET);
    ChangeBgX(list->sub.listWindow.bg, 0, BG_COORD_SET);
    ChangeBgY(list->sub.listWindow.bg, list->sub.listWindow.y << 11, BG_COORD_SUB);
    CopyBgTilemapBufferToVram(list->sub.listWindow.bg);
}

static void InitPokenavListWindow(struct PokenavListMenuWindow *listWindow)
{
    FillWindowPixelBuffer(listWindow->windowId, PIXEL_FILL(1));
    PutWindowTilemap(listWindow->windowId);
    CopyWindowToVram(listWindow->windowId, COPYWIN_MAP);
}

static void InitListItems(struct PokenavListWindowState *windowState, struct PokenavListSub *subPtr)
{
    s32 numToPrint = windowState->listLength - windowState->windowTopIndex;
    if (numToPrint > windowState->entriesOnscreen)
        numToPrint = windowState->entriesOnscreen;

    PrintListItems(windowState->listPtr, windowState->windowTopIndex, numToPrint, windowState->listItemSize, 0, subPtr);
}

static void PrintListItems(void *listPtr, u32 topIndex, u32 numItems, u32 itemSize, u32 printStart, struct PokenavListSub *list)
{
    if (numItems == 0)
        return;

    list->itemSize = itemSize;
    list->listWindow.numPrinted = 0;
    list->listWindow.numToPrint = numItems;
    list->printIndex = topIndex;
    list->printStart = printStart;
}

static void CreateMoveListWindowTask(s32 delta, struct PokenavListSub *list)
{
    list->startBgY = GetBgY(list->listWindow.bg);
    list->endBgY = list->startBgY + (delta << 12);
    if (delta > 0)
        list->bgMoveType = BG_COORD_ADD;
    else
        list->bgMoveType = BG_COORD_SUB;
    list->moveDelta = delta;
}

static void EraseListEntry(struct PokenavListMenuWindow *listWindow, s32 offset, s32 entries)
{
    u8 *tileData = (u8 *)GetWindowAttribute(listWindow->windowId, WINDOW_TILE_DATA);
    u32 width = listWindow->width * 64;

    offset = (listWindow->unkA + offset) & 0xF;
    if (offset + entries <= 16)
    {
        CpuFastFill8(PIXEL_FILL(1), tileData + offset * width, entries * width);
        CopyWindowToVram(listWindow->windowId, COPYWIN_GFX);
    }
    else
    {
        u32 v3 = 16 - offset;
        u32 v4 = entries - v3;

        CpuFastFill8(PIXEL_FILL(1), tileData + offset * width, v3 * width);
        CpuFastFill8(PIXEL_FILL(1), tileData, v4 * width);
        CopyWindowToVram(listWindow->windowId, COPYWIN_GFX);
    }

    CopyWindowToVram(listWindow->windowId, COPYWIN_MAP);
}

// Pointless
static void SetListMarginTile(struct PokenavListMenuWindow *listWindow, bool32 draw)
{
    u16 var;
    u16 *tilemapBuffer = (u16 *)GetBgTilemapBuffer(GetWindowAttribute(listWindow->windowId, WINDOW_BG));
    tilemapBuffer += (listWindow->unkA << 6) + listWindow->x - 1;

    if (draw)
        var = (listWindow->fillValue << 12) | (listWindow->tileOffset + 1);
    else
        var = (listWindow->fillValue << 12) | (listWindow->tileOffset);

    tilemapBuffer[0] = var;
    tilemapBuffer[0x20] = var;
}

#define sTimer data[0]
#define sOffset data[1]
#define sInvisible data[7]

#undef sTimer
#undef sOffset
#undef sInvisible

static void InitPokenavListWindowState(struct PokenavListWindowState *dst, struct PokenavListTemplate *template)
{
    dst->listPtr = template->list;
    dst->windowTopIndex = template->startIndex;
    dst->listLength = template->count;
    dst->listItemSize = template->itemSize;
    dst->entriesOnscreen = template->maxShowed;
    if (dst->entriesOnscreen >= dst->listLength)
    {
        dst->windowTopIndex = 0;
        dst->entriesOffscreen = 0;
        dst->selectedIndexOffset = template->startIndex;
    }
    else
    {
        dst->entriesOffscreen = dst->listLength - dst->entriesOnscreen;
        if (dst->windowTopIndex + dst->entriesOnscreen > dst->listLength)
        {
            dst->selectedIndexOffset = dst->windowTopIndex + dst->entriesOnscreen - dst->listLength;
            dst->windowTopIndex = template->startIndex - dst->selectedIndexOffset;
        }
        else
        {
            dst->selectedIndexOffset = 0;
        }
    }
}

static bool32 CopyPokenavListMenuTemplate(struct PokenavListSub *dest, const struct BgTemplate *bgTemplate, struct PokenavListTemplate *template, s32 tileOffset)
{
    struct WindowTemplate window;

    dest->listWindow.bg = bgTemplate->bg;
    dest->listWindow.tileOffset = tileOffset;
    dest->bufferItemFunc = template->bufferItemFunc;
    dest->iconDrawFunc = template->iconDrawFunc;
    dest->listWindow.fillValue = template->fillValue;
    dest->listWindow.x = template->item_X;
    dest->listWindow.y = template->listTop;
    dest->listWindow.width = template->windowWidth;
    dest->listWindow.fontId = template->fontId;

    window.bg = bgTemplate->bg;
    window.tilemapLeft = template->item_X;
    window.tilemapTop = 0;
    window.width = template->windowWidth;
    window.height = 32;
    window.paletteNum = template->fillValue;
    window.baseBlock = tileOffset + 2;

    dest->listWindow.windowId = AddWindow(&window);
    if (dest->listWindow.windowId == WINDOW_NONE)
        return FALSE;

    dest->listWindow.unkA = 0;
    dest->upArrow = NULL;
    dest->downArrow = NULL;
    return 1;
}
