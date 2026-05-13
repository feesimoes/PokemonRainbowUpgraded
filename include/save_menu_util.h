#ifndef GUARD_SAVE_MENU_UTIL_H
#define GUARD_SAVE_MENU_UTIL_H

#include "constants/easy_chat.h"
#include "constants/vars.h"

enum SaveStat
{
    SAVE_STAT_NAME = 0,
    SAVE_STAT_POKEDEX,
    SAVE_STAT_TIME,
    SAVE_STAT_LOCATION,
    SAVE_STAT_BADGES,
    SAVE_STAT_TIME_HR_RT_ALIGN
};

void SaveStatToString(u8 a0, u8 *a1, u8 a2);
u8 *GetCurrentDay(u8 *dest);

#endif //GUARD_SAVE_MENU_UTIL_H
