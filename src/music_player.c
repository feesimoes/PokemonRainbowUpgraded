#include "global.h"
#include "music_player.h"
#include "script.h"
#include "window.h"
#include "text.h"
#include "menu.h"
#include "strings.h"
#include "constants/songs.h"
#include "field_weather.h"
#include "task.h"
#include "malloc.h"
#include "palette.h"
#include "list_menu.h"
#include "string_util.h"

#define tTrackCount data[1]
#define tTrackId data[5]
#define tListTaskId data[7]

void CreateMusicMenu(const u16 *musicTracks);

struct MusicData
{
    void (*callback)(void);
    const u16 *trackList;
    u16 trackCount;
    u16 selectedRow;
    u16 scrollOffset;
};

static const struct WindowTemplate sMusicMenuWindowTemplate =
{
    .bg = 0,
    .tilemapLeft = 2,
    .tilemapTop = 1,
    .width = 12,
    .height = 6,
    .paletteNum = 15,
    .baseBlock = 8
};

static EWRAM_DATA struct MusicData sMusicData = {0};
static EWRAM_DATA u8 sMusicMenuWindowId = 0;
EWRAM_DATA u16 (*gMusicMenuTilemapBuffer1)[0x400] = {0};
EWRAM_DATA u16 (*gMusicMenuTilemapBuffer2)[0x400] = {0};
EWRAM_DATA u16 (*gMusicMenuTilemapBuffer3)[0x400] = {0};
EWRAM_DATA u16 (*gMusicMenuTilemapBuffer4)[0x400] = {0};
EWRAM_DATA struct ListMenuItem *sMusicMenuListMenu = {0};
static EWRAM_DATA u8 (*sMusicMenuItemStrings)[13] = {0};

/*
void CreateMusicMenu(const u16 *musicTracks)
{
    SetMusicTracksAvailable(musicTracks);
    CreateMusicPlayerMenu();
    SetMusicPlayerMenuCallback(ScriptContext_Enable);
}

static void SetMusicTracksAvailable(const u16 *musicTracks)
{
    sMusicData.trackList = musicTracks;
    sMusicData.trackCount = 0;
    if (sMusicData.trackList[0] == 0)
        return;

    while (sMusicData.trackList[sMusicData.trackCount])
    {
        ++sMusicData.trackCount;
    }
}

static void SetMusicPlayerMenuCallback(void (*callback)(void))
{
    sMusicData.callback = callback;
}

static u8 CreateMusicPlayerMenu(void)
{
    sMusicData.selectedRow = 0;

    if (VarGet(VAR_MUSIC_PLAYER_TRACK) != 0)
    {
        sMusicData.selectedRow = VarGet(VAR_MUSIC_PLAYER_TRACK);
    }

    sMusicMenuWindowId = AddWindow(&sMusicMenuWindowTemplate);
    SetStdWindowBorderStyle(sMusicMenuWindowId, 0);
    Menu_InitCursor(sMusicMenuWindowId, FONT_NORMAL, 0, 2, 16, 3, 0);
    PutWindowTilemap(sMusicMenuWindowId);
    CopyWindowToVram(sMusicMenuWindowId, COPYWIN_MAP);
    return CreateTask(Task_MusicMenu, 8);
}

static const struct MenuAction sMusicMenuActions_PlayUnlockedQuit[] =
{
    {gText_MusicPlay, {.void_u8 = Task_HandleMusicMenuPlayIfUnlocked}},
    {gText_MusicQuit, {.void_u8 = Task_HandleMusicMenuQuit}}
};

static void Task_MusicMenu(u8 taskId)
{
    s8 input = Menu_ProcessInputNoWrapAround();

    switch (input)
    {
    case MENU_NOTHING_CHOSEN:
        break;
    case MENU_B_PRESSED:
        PlaySE(SE_SELECT);
        Task_HandleShopMenuQuit(taskId);
        break;
    default:
        sMusicMenuActions_PlayUnlockedQuit[Menu_GetCursorPos()].func.void_u8(taskId);
        break;
    }
}

static void Task_HandleMusicMenuPlayIfUnlocked(u8 taskId)
{
    SetWordTaskArg(taskId, 0xE, (u32)CB2_InitMusicMenu);
    FadeScreen(FADE_TO_BLACK, 0);
    gTasks[taskId].func = Task_GoToMusicMenu;
}

static void Task_GoToMusicMenu(u8 taskId)
{
    if (gPaletteFade.active)
        return;

    SetMainCallback2((void *)GetWordTaskArg(taskId, 0xE));
    FreeAllWindowBuffers();
    DestroyTask(taskId);
}

static void Task_HandleMusicMenuQuit(u8 taskId)
{
    ClearMusicMenuWindow();
    DestroyTask(taskId);
    if (sMusicData.callback != NULL)
        sMusicData.callback();
}

static void ClearMusicMenuWindow(void)
{
    ClearStdWindowAndFrameToTransparent(sMusicMenuWindowId, 2);
    RemoveWindow(sMusicMenuWindowId);
}

static bool8 InitMusicData(void)
{
    gMusicMenuTilemapBuffer1 = Alloc(sizeof(*gMusicMenuTilemapBuffer1));
    if (gMusicMenuTilemapBuffer1 == NULL)
    {
        MusicMenuFreeMemory();
        SetMusicMenuExitCallback();
        return FALSE;
    }

    gMusicMenuTilemapBuffer2 = Alloc(sizeof(*gMusicMenuTilemapBuffer2));
    if (gMusicMenuTilemapBuffer2 == NULL)
    {
        MusicMenuFreeMemory();
        SetMusicMenuExitCallback();
        return FALSE;
    }

    gMusicMenuTilemapBuffer3 = Alloc(sizeof(*gMusicMenuTilemapBuffer3));
    if (gMusicMenuTilemapBuffer3 == NULL)
    {
        MusicMenuFreeMemory();
        SetMusicMenuExitCallback();
        return FALSE;
    }

    gMusicMenuTilemapBuffer4 = Alloc(sizeof(*gMusicMenuTilemapBuffer4));
    if (gMusicMenuTilemapBuffer4 == NULL)
    {
        MusicMenuFreeMemory();
        SetMusicMenuExitCallback();
        return FALSE;
    }

    return TRUE;
}

bool8 MusicMenuBuildListMenuTemplate(void)
{
    u16 i, v;

    sMusicMenuListMenu = Alloc((sMusicData.trackCount + 1) * sizeof(*sMusicMenuListMenu));
    if (sMusicMenuListMenu == NULL
     || (sMusicMenuItemStrings = Alloc((sMusicData.trackCount + 1) * sizeof(*sMusicMenuItemStrings))) == NULL)
    {
        MusicMenuFreeMemory();
        SetShopExitCallback();
        return FALSE;
    }

    for (i = 0; i < sMusicData.trackCount; i++)
    {
        MusicPlayerWriteNameAndIdAt(&sMusicMenuListMenu[i], sMusicData.trackList[i], sMusicMenuItemStrings[i]);
    }
    StringCopy(sMusicMenuItemStrings[i], gFameCheckerText_Cancel);
    sMusicMenuListMenu[i].label = sMusicMenuItemStrings[i];
    sMusicMenuListMenu[i].index = -2;
    gMultiuseListMenuTemplate.items = sMusicMenuListMenu;
    gMultiuseListMenuTemplate.totalItems = sMusicData.trackCount + 1;
    gMultiuseListMenuTemplate.windowId = 4;
    gMultiuseListMenuTemplate.header_X = 0;
    gMultiuseListMenuTemplate.item_X = 9;
    gMultiuseListMenuTemplate.cursor_X = 1;
    gMultiuseListMenuTemplate.lettersSpacing = 0;
    gMultiuseListMenuTemplate.itemVerticalPadding = 2;
    gMultiuseListMenuTemplate.upText_Y = 2;
    gMultiuseListMenuTemplate.fontId = 2;
    gMultiuseListMenuTemplate.fillValue = 0;
    gMultiuseListMenuTemplate.cursorPal = GetFontAttribute(FONT_NORMAL, FONTATTR_COLOR_FOREGROUND);
    gMultiuseListMenuTemplate.cursorShadowPal = GetFontAttribute(FONT_NORMAL, FONTATTR_COLOR_SHADOW);
    gMultiuseListMenuTemplate.moveCursorFunc = MusicMenuPrintTrackDescriptionAndUnlockHint;
    gMultiuseListMenuTemplate.itemPrintFunc = MusicMenuPrintTrackNameInList;
    gMultiuseListMenuTemplate.scrollMultiple = 0;
    gMultiuseListMenuTemplate.cursorKind = 0;

    if ((sMusicData.trackCount + 1) > v)
        gMultiuseListMenuTemplate.maxShowed = v;
    else
        gMultiuseListMenuTemplate.maxShowed = sMusicData.trackCount + 1;
    return TRUE;
}

static void MusicMenuPrintTrackNameInList(u8 windowId, u32 track, u8 y)
{
    s32 x;
    u8 *loc;

    if (track != -2)
    {
        StringCopy(gStringVar1, MusicId_GetName(track));
        x = StringLength(gStringVar1);
        loc = gStringVar4;
        while (x-- != 0)
            *loc++ = 0;
        StringExpandPlaceholders(loc, gText_MusicTrackVar1);
        MusicMenuPrint(windowId, FONT_SMALL, gStringVar4, 0x69, y, 0, 0, TEXT_SKIP_DRAW, 1);
    }
}

static void MusicMenuFreeMemory(void)
{
    if (gMusicMenuTilemapBuffer1 != NULL)
        Free(gMusicMenuTilemapBuffer1);

    if (gMusicMenuTilemapBuffer2 != NULL)
        Free(gMusicMenuTilemapBuffer2);

    if (gMusicMenuTilemapBuffer3 != NULL)
        Free(gMusicMenuTilemapBuffer3);

    if (gMusicMenuTilemapBuffer4 != NULL)
        Free(gMusicMenuTilemapBuffer4);

    if (sMusicMenuListMenu != NULL)
        Free(sMusicMenuListMenu);

    if (sMusicMenuItemStrings != NULL)
        Free(sMusicMenuItemStrings);

    FreeAllWindowBuffers();
}

static void CB2_InitMusicMenu(void)
{
    u8 taskId;

    switch (gMain.state)
    {
    case 0:
        SetVBlankHBlankCallbacksToNull();
        CpuFastFill(0, (void *)OAM, 0x400);
        ScanlineEffect_Stop();
        ResetTempTileDataBuffers();
        FreeAllSpritePalettes();
        ResetPaletteFade();
        ResetSpriteData();
        ResetTasks();
        ClearScheduledBgCopiesToVram();
        ResetMusicMenuIconState();
        if (!(InitMusicData()) || !(MusicMenuBuildListMenuTemplate()))
            return;
        MusicMenuInitBgs();
        FillBgTilemapBufferRect_Palette0(0, 0, 0, 0, 0x20, 0x20);
        FillBgTilemapBufferRect_Palette0(1, 0, 0, 0, 0x20, 0x20);
        FillBgTilemapBufferRect_Palette0(2, 0, 0, 0, 0x20, 0x20);
        FillBgTilemapBufferRect_Palette0(3, 0, 0, 0, 0x20, 0x20);
        MusicMenuInitWindows(sMusicData);
        MusicMenuDecompressBgGraphics();
        gMain.state++;
        break;
    case 1:
        if (FreeTempTileDataBuffersIfPossible())
            return;
        gMain.state++;
        break;
    default:
        sMusicData.selectedRow = 0;
        sMusicData.scrollOffset = 0;
        MusicMenuDrawGraphics();
        MusicMenuAddScrollIndicatorArrows();
        taskId = CreateTask(Task_MusicMenu, 8);
        gTasks[taskId].tListTaskId = ListMenuInit(&gMultiuseListMenuTemplate, 0, 0);
        BlendPalettes(PALETTES_ALL, 0x10, RGB_BLACK);
        BeginNormalPaletteFade(PALETTES_ALL, 0, 0x10, 0, RGB_BLACK);
        SetVBlankCallback(VBlankCB_MusicMenu);
        SetMainCallback2(CB2_MusicMenu);
        break;
    }
}

static void CB2_MusicMenu(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
    DoScheduledBgTilemapCopiesToVram();
}

static void VBlankCB_MusicMenu(void)
{
    LoadOam();
    ProcessSpriteCopyRequests();
    TransferPlttBuffer();
}
*/