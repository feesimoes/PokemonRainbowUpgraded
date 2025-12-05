#ifndef GUARD_FIELD_SPECIALS_H
#define GUARD_FIELD_SPECIALS_H

#include "global.h"

u8 GetLeadMonIndex(void);
s32 CountDigits(s32 number);
void TV_PrintIntToStringVar(u8 varidx, s32 number);
u16 GetStarterSpecies(void);
void StopPokemonLeagueLightingEffectTask(void);
void FieldCB_ShowPortholeView(void);
u8 ContextNpcGetTextColor(void);
void SetPCBoxToSendMon(u8);
u16 GetPCBoxToSendMon(void);
bool8 IsDestinationBoxFull(void);
bool8 ShouldShowBoxWasFullMessage(void);
u16 GetHiddenItemAttr(u32 hiddenItem, u8 attr);
u8 GetUnlockedSeviiAreas(void);
u32 GetPlayerTrainerId(void);
bool8 CutMoveRuinValleyCheck(void);
void CutMoveOpenDottedHoleDoor(void);
void RunMassageCooldownStepCounter(void);
void IncrementResortGorgeousStepCounter(void);
void IncrementBirthIslandRockStepCount(void);
void ResetCyclingRoadChallengeData(void);
void ResetFieldTasksArgs(void);
bool8 UsedPokemonCenterWarp(void);
void QuestLog_CheckDepartingIndoorsMap(void);
void QuestLog_TryRecordDepartedLocation(void);
void GetBountyTaskMonAndReward(void);
void CheckMonClaimBountyTaskReward(void);
void GetBountyTaskMonAndReward(void);
u16 SampleBountyTaskMon(void);
u16 SampleBountyTaskMonLvl(void);
u16 SampleBountyTaskBall(void);
u16 SampleBountyTaskReward(void);
void MakeMewLegalJPNEmeraldEvent(void);

#endif // GUARD_FIELD_SPECIALS_H
