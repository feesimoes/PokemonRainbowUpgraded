#include "play_time.h"
#include "constants/vars.h"
#include "event_data.h"
#include "overworld.h"
#include "palette.h"
#include "constants/map_types.h"
#include "save_menu_util.h"

static u8 sPlayTimeCounterState;

static u8 day;
static u8 hour;
static u8 minute;
static u8 second;
static u8 tick;

enum
{
    STOPPED,
    RUNNING,
    MAXED_OUT,
};

// Custom game time & day of the week implementation
void GameDateTime_Update(void)
{
    if (sPlayTimeCounterState == RUNNING || sPlayTimeCounterState == MAXED_OUT)
    {
        tick++;
        if (tick > 29)
        {
            tick = 0;
            second = (VarGet(VAR_TIME_SECOND) + 1);
            if (second > 59)
            {
                second = 0;
                VarSet(VAR_TIME_SECOND, 0);
                minute = (VarGet(VAR_TIME_MINUTE) + 1);
                if (minute > 59)
                {
                    minute = 0;
                    VarSet(VAR_TIME_MINUTE, 0);
                    hour = (VarGet(VAR_TIME_HOUR) + 1);
                    if (hour > 23)
                    {
                        hour = 0;
                        VarSet(VAR_TIME_HOUR, 0);
                        day = (VarGet(VAR_DAY_DATE) + 1);
                        if (day > 6)
                        {
                            day = 0;
                            VarSet(VAR_DAY_DATE, 0);
                            
                            // Mainly just a safety function to prevent bugs if the player is somehow on the last day
                            if (VarGet(VAR_TIME_DAYS_PLAYED) > 65535)
                            {
                                VarSet(VAR_TIME_DAYS_PLAYED, 0);
                            }
                            else
                            {
                                VarSet(VAR_TIME_DAYS_PLAYED, VarGet(VAR_TIME_DAYS_PLAYED) + 1);
                            }
                        }
                        else
                        {
                            VarSet(VAR_DAY_DATE, day);

                            // Mainly just a safety function to prevent bugs if the player is somehow on the last day
                            if (VarGet(VAR_TIME_DAYS_PLAYED) > 65535)
                            {
                                VarSet(VAR_TIME_DAYS_PLAYED, 0);
                            }
                            else
                            {
                                VarSet(VAR_TIME_DAYS_PLAYED, VarGet(VAR_TIME_DAYS_PLAYED) + 1);
                            }
                        }
                    }
                    else
                    {
                        VarSet(VAR_TIME_HOUR, hour);
                    }
                }
                else
                {
                    VarSet(VAR_TIME_MINUTE, minute);
                }
            }
            else
            {
                VarSet(VAR_TIME_SECOND, second);
            }
        }
    }
}

void PlayTimeCounter_Reset(void)
{
    sPlayTimeCounterState = STOPPED;
    gSaveBlock2Ptr->playTimeHours = 0;
    gSaveBlock2Ptr->playTimeMinutes = 0;
    gSaveBlock2Ptr->playTimeSeconds = 0;
    gSaveBlock2Ptr->playTimeVBlanks = 0;
}

void PlayTimeCounter_Start(void)
{
    sPlayTimeCounterState = RUNNING;
    if (gSaveBlock2Ptr->playTimeHours > 999)
        PlayTimeCounter_SetToMax();
}

void PlayTimeCounter_Stop(void)
{
    sPlayTimeCounterState = STOPPED;
}

void PlayTimeCounter_Update(void)
{
    if (sPlayTimeCounterState == RUNNING)
    {
        gSaveBlock2Ptr->playTimeVBlanks++;
        if (gSaveBlock2Ptr->playTimeVBlanks > 59)
        {
            gSaveBlock2Ptr->playTimeVBlanks = 0;
            gSaveBlock2Ptr->playTimeSeconds++;
            if (gSaveBlock2Ptr->playTimeSeconds > 59)
            {
                gSaveBlock2Ptr->playTimeSeconds = 0;
                gSaveBlock2Ptr->playTimeMinutes++;
                if (gSaveBlock2Ptr->playTimeMinutes > 59)
                {
                    gSaveBlock2Ptr->playTimeMinutes = 0;
                    gSaveBlock2Ptr->playTimeHours++;
                    if (gSaveBlock2Ptr->playTimeHours > 999)
                        PlayTimeCounter_SetToMax();
                }
            }
        }
    }
}

void PlayTimeCounter_SetToMax(void)
{
    sPlayTimeCounterState = MAXED_OUT;
    gSaveBlock2Ptr->playTimeHours = 999;
    gSaveBlock2Ptr->playTimeMinutes = 59;
    gSaveBlock2Ptr->playTimeSeconds = 59;
    gSaveBlock2Ptr->playTimeVBlanks = 59;
}
