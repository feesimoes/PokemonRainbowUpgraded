#include "global.h"
#include "malloc.h"
#include "task.h"
#include "main.h"
#include "overworld.h"
#include "field_weather.h"
#include "palette.h"
#include "pokemon_storage_system.h"
#include "pokenav.h"

struct PokenavResources
{
    u32 (*currentMenuCb1)(void);
    u32 currentMenuIndex;
    u16 mode;
    u16 conditionSearchId;
    void *substructPtrs[POKENAV_SUBSTRUCT_COUNT];
};

static bool32 SetActivePokenavMenu(u32);
static bool32 AnyMonHasRibbon(void);
static void InitKeys_(void);
static void FreePokenavResources(void);
static void VBlankCB_Pokenav(void);
static void CB2_Pokenav(void);
static void Task_Pokenav(u8);

void CB2_InitPokeNav(void)
{
    ResetTasks();
    SetVBlankCallback(NULL);
    CreateTask(Task_Pokenav, 0);
    SetMainCallback2(CB2_Pokenav);
    SetVBlankCallback(VBlankCB_Pokenav);
}

static void FreePokenavResources(void)
{
    int i;
    InitKeys();
}

static bool32 AnyMonHasRibbon(void)
{
    int i, j;

    for (i = 0; i < PARTY_SIZE; i++)
    {
        if (GetMonData(&gPlayerParty[i],  MON_DATA_SANITY_HAS_SPECIES)
            && !GetMonData(&gPlayerParty[i], MON_DATA_SANITY_IS_EGG)
            && GetMonData(&gPlayerParty[i], MON_DATA_RIBBON_COUNT) != 0)
        {
            return TRUE;
        }
    }

    for (j = 0; j < TOTAL_BOXES_COUNT; j++)
    {
        for (i = 0; i < IN_BOX_COUNT; i++)
        {
            if (GetBoxMonDataAt(j, i, MON_DATA_RIBBON_COUNT) != 0)
            {
                return TRUE;
            }
        }
    }

    return FALSE;
}

static void CB2_Pokenav(void)
{
    RunTasks();
    AnimateSprites();
    BuildOamBuffer();
    UpdatePaletteFade();
}

static void VBlankCB_Pokenav(void)
{
    TransferPlttBuffer();
    LoadOam();
    ProcessSpriteCopyRequests();
}

#define tState data[0]

static void Task_Pokenav(u8 taskId)
{
    u32 menuId;
    s16 *data = gTasks[taskId].data;

    switch (tState)
    {
    case 0:
        InitPokenavMainMenu();
        tState = 1;
        break;
    case 1:
        SetActivePokenavMenu(POKENAV_MAIN_MENU);
        tState = 4;
        break;
    case 2:
        tState = 3;
    case 3:
        tState = 5;
        break;
    case 4:
        tState = 3;
        break;
    case 5:
        if (!WaitForPokenavShutdownFade())
        {
            FreePokenavResources();
            SetMainCallback2(CB2_ReturnToFieldWithOpenMenu);
        }
        break;
    }
}

#undef tState

static bool32 SetActivePokenavMenu(u32 menuId)
{
    u32 index = menuId - POKENAV_MENU_IDS_START;
    InitKeys_();
    return TRUE;
}

static void InitKeys_(void)
{
    InitKeys();
}

void SetVBlankCallback_(IntrCallback callback)
{
    SetVBlankCallback(callback);
}

void SetPokenavVBlankCallback(void)
{
    SetVBlankCallback(VBlankCB_Pokenav);
}

void SetSelectedConditionSearch(u32 cursorPos)
{
    u32 searchId = cursorPos;

    if (searchId > POKENAV_MENUITEM_CONDITION_SEARCH_TOUGH - POKENAV_MENUITEM_CONDITION_SEARCH_COOL)
        searchId = 0;
}
