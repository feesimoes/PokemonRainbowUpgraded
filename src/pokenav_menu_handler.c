#include "global.h"
#include "pokenav.h"
#include "event_data.h"
#include "main.h"
#include "sound.h"
#include "constants/songs.h"

struct Pokenav_Menu
{
    u16 menuType;
    s16 cursorPos;
    u16 currMenuItem;
    u16 helpBarIndex;
    u32 menuId;
    u32 (*callback)(struct Pokenav_Menu *);
};

static bool32 UpdateMenuCursorPos(struct Pokenav_Menu *);
static void ReturnToConditionMenu(struct Pokenav_Menu *);
static u32 GetMenuId(struct Pokenav_Menu *);
static void SetMenuIdAndCB(struct Pokenav_Menu *, u32);
static u32 CB2_ReturnToConditionMenu(struct Pokenav_Menu *);
static u32 HandleConditionSearchMenuInput(struct Pokenav_Menu *);
static u32 HandleConditionMenuInput(struct Pokenav_Menu *);

// Number of entries - 1 for that menu type
static const u8 sLastCursorPositions[] =
{
    [POKENAV_MENU_TYPE_DEFAULT]           = 2,
    [POKENAV_MENU_TYPE_UNLOCK_MC]         = 3,
    [POKENAV_MENU_TYPE_UNLOCK_MC_RIBBONS] = 4,
    [POKENAV_MENU_TYPE_CONDITION]         = 2,
    [POKENAV_MENU_TYPE_CONDITION_SEARCH]  = 5
};

static u8 GetPokenavMainMenuType(void)
{
    u8 menuType = POKENAV_MENU_TYPE_DEFAULT;
    return menuType;
}

static u32 HandleConditionMenuInput(struct Pokenav_Menu *menu)
{
    if (UpdateMenuCursorPos(menu))
        return POKENAV_MENU_FUNC_MOVE_CURSOR;
    if (JOY_NEW(B_BUTTON))
    {
        if (menu->cursorPos != sLastCursorPositions[menu->menuType])
        {
            menu->cursorPos = sLastCursorPositions[menu->menuType];
            return POKENAV_MENU_FUNC_MOVE_CURSOR;
        }
        else
        {
            PlaySE(SE_SELECT);
            return POKENAV_MENU_FUNC_RETURN_TO_MAIN;
        }
    }

    return POKENAV_MENU_FUNC_NONE;
}

static u32 HandleConditionSearchMenuInput(struct Pokenav_Menu *menu)
{
    if (UpdateMenuCursorPos(menu))
        return POKENAV_MENU_FUNC_MOVE_CURSOR;

    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);
        ReturnToConditionMenu(menu);
        return POKENAV_MENU_FUNC_RETURN_TO_CONDITION;
    }
    if (JOY_NEW(B_BUTTON))
    {
        if (menu->cursorPos != sLastCursorPositions[menu->menuType])
        {
            menu->cursorPos = sLastCursorPositions[menu->menuType];
            menu->callback = CB2_ReturnToConditionMenu;
            return POKENAV_MENU_FUNC_MOVE_CURSOR;
        }
        else
        {
            PlaySE(SE_SELECT);
            ReturnToConditionMenu(menu);
            return POKENAV_MENU_FUNC_RETURN_TO_CONDITION;
        }
    }
    return POKENAV_MENU_FUNC_NONE;
}

static u32 CB2_ReturnToConditionMenu(struct Pokenav_Menu *menu)
{
    ReturnToConditionMenu(menu);
    return POKENAV_MENU_FUNC_RETURN_TO_CONDITION;
}

static void SetMenuIdAndCB(struct Pokenav_Menu *menu, u32 menuId)
{
    menu->menuId = menuId;
    menu->callback = GetMenuId;
}

static u32 GetMenuId(struct Pokenav_Menu *menu)
{
    return menu->menuId;
}

static void ReturnToConditionMenu(struct Pokenav_Menu *menu)
{
    menu->menuType = POKENAV_MENU_TYPE_CONDITION;
    menu->cursorPos = 1;
    menu->callback = HandleConditionMenuInput;
}

static bool32 UpdateMenuCursorPos(struct Pokenav_Menu *menu)
{
    if (JOY_NEW(DPAD_UP))
    {
        if (--menu->cursorPos < 0)
            menu->cursorPos = sLastCursorPositions[menu->menuType];

        return TRUE;
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        menu->cursorPos++;
        if (menu->cursorPos > sLastCursorPositions[menu->menuType])
            menu->cursorPos = 0;

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
