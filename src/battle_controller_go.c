#include "global.h"
#include "gflib.h"
#include "battle.h"
#include "battle_anim.h"
#include "battle_controllers.h"
#include "battle_interface.h"
#include "battle_message.h"
#include "data.h"
#include "item_menu.h"
#include "link.h"
#include "main.h"
#include "pokeball.h"
#include "util.h"
#include "strings.h"
#include "constants/songs.h"
#include "constants/battle_anim.h"

static void GOHandleGetMonData(void);
static void GOHandleGetRawMonData(void);
static void GOHandleSetMonData(void);
static void GOHandleSetRawMonData(void);
static void GOHandleLoadMonSprite(void);
static void GOHandleSwitchInAnim(void);
static void GOHandleReturnMonToBall(void);
static void GOHandleDrawTrainerPic(void);
static void GOHandleTrainerSlide(void);
static void GOHandleTrainerSlideBack(void);
static void GOHandleFaintAnimation(void);
static void GOHandlePaletteFade(void);
static void GOHandleSuccessBallThrowAnim(void);
static void GOHandleBallThrowAnim(void);
static void GOHandlePause(void);
static void GOHandleMoveAnimation(void);
static void GOHandlePrintString(void);
static void GOHandlePrintSelectionString(void);
static void GOHandleChooseAction(void);
static void GOHandleUnknownYesNoBox(void);
static void GOHandleChooseMove(void);
static void GOHandleChooseItem(void);
static void GOHandleChoosePokemon(void);
static void GOHandleCmd23(void);
static void GOHandleHealthBarUpdate(void);
static void GOHandleExpUpdate(void);
static void GOHandleStatusIconUpdate(void);
static void GOHandleStatusAnimation(void);
static void GOHandleStatusXor(void);
static void GOHandleDataTransfer(void);
static void GOHandleDMA3Transfer(void);
static void GOHandlePlayBGM(void);
static void GOHandleCmd32(void);
static void GOHandleTwoReturnValues(void);
static void GOHandleChosenMonReturnValue(void);
static void GOHandleOneReturnValue(void);
static void GOHandleOneReturnValue_Duplicate(void);
static void GOHandleCmd37(void);
static void GOHandleCmd38(void);
static void GOHandleCmd39(void);
static void GOHandleCmd40(void);
static void GOHandleHitAnimation(void);
static void GOHandleCmd42(void);
static void GOHandlePlaySE(void);
static void GOHandlePlayFanfareOrBGM(void);
static void GOHandleFaintingCry(void);
static void GOHandleIntroSlide(void);
static void GOHandleIntroTrainerBallThrow(void);
static void GOHandleDrawPartyStatusSummary(void);
static void GOHandleHidePartyStatusSummary(void);
static void GOHandleEndBounceEffect(void);
static void GOHandleSpriteInvisibility(void);
static void GOHandleBattleAnimation(void);
static void GOHandleLinkStandbyMsg(void);
static void GOHandleResetActionMoveSelection(void);
static void GOHandleCmd55(void);
static void GOCmdEnd(void);
static void GOHandleBallSwitch(void);

static void GOBufferRunCommand(void);
static void GOBufferExecCompleted(void);
static void CompleteWhenChosePokeblock(void);

static void (*const sGOBufferCommands[CONTROLLER_CMDS_COUNT])(void) =
{
    [CONTROLLER_GETMONDATA]               = GOHandleGetMonData,
    [CONTROLLER_GETRAWMONDATA]            = GOHandleGetRawMonData,
    [CONTROLLER_SETMONDATA]               = GOHandleSetMonData,
    [CONTROLLER_SETRAWMONDATA]            = GOHandleSetRawMonData,
    [CONTROLLER_LOADMONSPRITE]            = GOHandleLoadMonSprite,
    [CONTROLLER_SWITCHINANIM]             = GOHandleSwitchInAnim,
    [CONTROLLER_RETURNMONTOBALL]          = GOHandleReturnMonToBall,
    [CONTROLLER_DRAWTRAINERPIC]           = GOHandleDrawTrainerPic,
    [CONTROLLER_TRAINERSLIDE]             = GOHandleTrainerSlide,
    [CONTROLLER_TRAINERSLIDEBACK]         = GOHandleTrainerSlideBack,
    [CONTROLLER_FAINTANIMATION]           = GOHandleFaintAnimation,
    [CONTROLLER_PALETTEFADE]              = GOHandlePaletteFade,
    [CONTROLLER_SUCCESSBALLTHROWANIM]     = GOHandleSuccessBallThrowAnim,
    [CONTROLLER_BALLTHROWANIM]            = GOHandleBallThrowAnim,
    [CONTROLLER_PAUSE]                    = GOHandlePause,
    [CONTROLLER_MOVEANIMATION]            = GOHandleMoveAnimation,
    [CONTROLLER_PRINTSTRING]              = GOHandlePrintString,
    [CONTROLLER_PRINTSTRINGPLAYERONLY]    = GOHandlePrintSelectionString,
    [CONTROLLER_CHOOSEACTION]             = GOHandleChooseAction,
    [CONTROLLER_UNKNOWNYESNOBOX]          = GOHandleUnknownYesNoBox,
    [CONTROLLER_CHOOSEMOVE]               = GOHandleChooseMove,
    [CONTROLLER_OPENBAG]                  = GOHandleChooseItem,
    [CONTROLLER_CHOOSEPOKEMON]            = GOHandleChoosePokemon,
    [CONTROLLER_23]                       = GOHandleCmd23,
    [CONTROLLER_HEALTHBARUPDATE]          = GOHandleHealthBarUpdate,
    [CONTROLLER_EXPUPDATE]                = GOHandleExpUpdate,
    [CONTROLLER_STATUSICONUPDATE]         = GOHandleStatusIconUpdate,
    [CONTROLLER_STATUSANIMATION]          = GOHandleStatusAnimation,
    [CONTROLLER_STATUSXOR]                = GOHandleStatusXor,
    [CONTROLLER_DATATRANSFER]             = GOHandleDataTransfer,
    [CONTROLLER_DMA3TRANSFER]             = GOHandleDMA3Transfer,
    [CONTROLLER_PLAYBGM]                  = GOHandlePlayBGM,
    [CONTROLLER_32]                       = GOHandleCmd32,
    [CONTROLLER_TWORETURNVALUES]          = GOHandleTwoReturnValues,
    [CONTROLLER_CHOSENMONRETURNVALUE]     = GOHandleChosenMonReturnValue,
    [CONTROLLER_ONERETURNVALUE]           = GOHandleOneReturnValue,
    [CONTROLLER_ONERETURNVALUE_DUPLICATE] = GOHandleOneReturnValue_Duplicate,
    [CONTROLLER_CLEARUNKVAR]              = GOHandleCmd37,
    [CONTROLLER_SETUNKVAR]                = GOHandleCmd38,
    [CONTROLLER_CLEARUNKFLAG]             = GOHandleCmd39,
    [CONTROLLER_TOGGLEUNKFLAG]            = GOHandleCmd40,
    [CONTROLLER_HITANIMATION]             = GOHandleHitAnimation,
    [CONTROLLER_CANTSWITCH]               = GOHandleCmd42,
    [CONTROLLER_PLAYSE]                   = GOHandlePlaySE,
    [CONTROLLER_PLAYFANFARE]              = GOHandlePlayFanfareOrBGM,
    [CONTROLLER_FAINTINGCRY]              = GOHandleFaintingCry,
    [CONTROLLER_INTROSLIDE]               = GOHandleIntroSlide,
    [CONTROLLER_INTROTRAINERBALLTHROW]    = GOHandleIntroTrainerBallThrow,
    [CONTROLLER_DRAWPARTYSTATUSSUMMARY]   = GOHandleDrawPartyStatusSummary,
    [CONTROLLER_HIDEPARTYSTATUSSUMMARY]   = GOHandleHidePartyStatusSummary,
    [CONTROLLER_ENDBOUNCE]                = GOHandleEndBounceEffect,
    [CONTROLLER_SPRITEINVISIBILITY]       = GOHandleSpriteInvisibility,
    [CONTROLLER_BATTLEANIMATION]          = GOHandleBattleAnimation,
    [CONTROLLER_LINKSTANDBYMSG]           = GOHandleLinkStandbyMsg,
    [CONTROLLER_RESETACTIONMOVESELECTION] = GOHandleResetActionMoveSelection,
    [CONTROLLER_ENDLINKBATTLE]            = GOHandleCmd55,
    [CONTROLLER_TERMINATOR_NOP]           = GOCmdEnd,
};

// not used
static void GODummy(void)
{
}

void SetControllerToGO(void)
{
    gBattlerControllerFuncs[gActiveBattler] = GOBufferRunCommand;
}

static void GOBufferRunCommand(void)
{
    if (gBattleControllerExecFlags & gBitTable[gActiveBattler])
    {
        if (gBattleBufferA[gActiveBattler][0] < NELEMS(sGOBufferCommands))
            sGOBufferCommands[gBattleBufferA[gActiveBattler][0]]();
        else
            GOBufferExecCompleted();
    }
}

static void HandleInputChooseAction(void)
{
    if (JOY_NEW(A_BUTTON))
    {
        PlaySE(SE_SELECT);

        switch (gActionSelectionCursor[gActiveBattler])
        {
        case 0:
            BtlController_EmitTwoReturnValues(1, B_ACTION_SAFARI_BALL, 0);
            break;
        case 1:
            BtlController_EmitTwoReturnValues(1, B_ACTION_SAFARI_BAIT, 0);
            break;
        case 2:
            BtlController_EmitTwoReturnValues(1, B_ACTION_SAFARI_GO_NEAR, 0);
            break;
        case 3:
            BtlController_EmitTwoReturnValues(1, B_ACTION_SAFARI_RUN, 0);
            break;
        }
        GOBufferExecCompleted();
    }
    else if (JOY_NEW(DPAD_LEFT))
    {
        if (gActionSelectionCursor[gActiveBattler] & 1)
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[gActiveBattler]);
            gActionSelectionCursor[gActiveBattler] ^= 1;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[gActiveBattler], 0);
        }
    }
    else if (JOY_NEW(DPAD_RIGHT))
    {
        if (!(gActionSelectionCursor[gActiveBattler] & 1))
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[gActiveBattler]);
            gActionSelectionCursor[gActiveBattler] ^= 1;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[gActiveBattler], 0);
        }
    }
    else if (JOY_NEW(DPAD_UP))
    {
        if (gActionSelectionCursor[gActiveBattler] & 2)
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[gActiveBattler]);
            gActionSelectionCursor[gActiveBattler] ^= 2;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[gActiveBattler], 0);
        }
    }
    else if (JOY_NEW(DPAD_DOWN))
    {
        if (!(gActionSelectionCursor[gActiveBattler] & 2))
        {
            PlaySE(SE_SELECT);
            ActionSelectionDestroyCursorAt(gActionSelectionCursor[gActiveBattler]);
            gActionSelectionCursor[gActiveBattler] ^= 2;
            ActionSelectionCreateCursorAt(gActionSelectionCursor[gActiveBattler], 0);
        }
    }
}

static void CompleteOnBattlerSpriteCallbackDummy(void)
{
    if (gSprites[gBattlerSpriteIds[gActiveBattler]].callback == SpriteCallbackDummy)
        GOBufferExecCompleted();
}

static void CompleteOnInactiveTextPrinter(void)
{
    if (!IsTextPrinterActive(0))
        GOBufferExecCompleted();
}

static void CompleteOnHealthboxSpriteCallbackDummy(void)
{
    if (gSprites[gHealthboxSpriteIds[gActiveBattler]].callback == SpriteCallbackDummy)
        GOBufferExecCompleted();
}

static void GO_SetBattleEndCallbacks(void)
{
    if (!gPaletteFade.active)
    {
        gMain.inBattle = FALSE;
        gMain.callback1 = gPreBattleCallback1;
        SetMainCallback2(gMain.savedCallback);
    }
}

static void CompleteOnSpecialAnimDone(void)
{
    if (!gDoingBattleAnim || !gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].specialAnimActive)
        GOBufferExecCompleted();
}

static void GOOpenPokeblockCase(void)
{
    if (!gPaletteFade.active)
        gBattlerControllerFuncs[gActiveBattler] = CompleteWhenChosePokeblock;
}

static void CompleteWhenChosePokeblock(void)
{
    if (gMain.callback2 == BattleMainCB2 && !gPaletteFade.active)
    {
        BtlController_EmitOneReturnValue(1, gSpecialVar_ItemId);
        GOBufferExecCompleted();
    }
}

static void CompleteOnFinishedBattleAnimation(void)
{
    if (!gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].animFromTableActive)
        GOBufferExecCompleted();
}

static void GOBufferExecCompleted(void)
{
    gBattlerControllerFuncs[gActiveBattler] = GOBufferRunCommand;
    if (gBattleTypeFlags & BATTLE_TYPE_LINK)
    {
        u8 playerId = GetMultiplayerId();

        PrepareBufferDataTransferLink(2, 4, &playerId);
        gBattleBufferA[gActiveBattler][0] = CONTROLLER_TERMINATOR_NOP;
    }
    else
    {
        gBattleControllerExecFlags &= ~gBitTable[gActiveBattler];
    }
}

// not used
static void CompleteOnFinishedStatusAnimation(void)
{
    if (!gBattleSpritesDataPtr->healthBoxesData[gActiveBattler].statusAnimActive)
        GOBufferExecCompleted();
}

static void GOHandleGetMonData(void)
{
    GOBufferExecCompleted();
}

static void GOHandleGetRawMonData(void)
{
    GOBufferExecCompleted();
}

static void GOHandleSetMonData(void)
{
    GOBufferExecCompleted();
}

static void GOHandleSetRawMonData(void)
{
    GOBufferExecCompleted();
}

static void GOHandleLoadMonSprite(void)
{
    GOBufferExecCompleted();
}

static void GOHandleSwitchInAnim(void)
{
    GOBufferExecCompleted();
}

static void GOHandleReturnMonToBall(void)
{
    GOBufferExecCompleted();
}

static void GOHandleDrawTrainerPic(void)
{
    DecompressTrainerBackPalette(gSaveBlock2Ptr->playerGender, gActiveBattler);
    SetMultiuseSpriteTemplateToTrainerBack(gSaveBlock2Ptr->playerGender, GetBattlerPosition(gActiveBattler));
    gBattlerSpriteIds[gActiveBattler] = CreateSprite(&gMultiuseSpriteTemplate,
                                                     80,
                                                     (8 - gTrainerBackPicCoords[gSaveBlock2Ptr->playerGender].size) * 4 + 80,
                                                     30);
    gSprites[gBattlerSpriteIds[gActiveBattler]].oam.paletteNum = gActiveBattler;
    gSprites[gBattlerSpriteIds[gActiveBattler]].x2 = DISPLAY_WIDTH;
    gSprites[gBattlerSpriteIds[gActiveBattler]].data[0] = -2;
    gSprites[gBattlerSpriteIds[gActiveBattler]].callback = SpriteCB_TrainerSlideIn;
    gBattlerControllerFuncs[gActiveBattler] = CompleteOnBattlerSpriteCallbackDummy;
}

static void GOHandleTrainerSlide(void)
{
    GOBufferExecCompleted();
}

static void GOHandleTrainerSlideBack(void)
{
    GOBufferExecCompleted();
}

static void GOHandleFaintAnimation(void)
{
    GOBufferExecCompleted();
}

static void GOHandlePaletteFade(void)
{
    GOBufferExecCompleted();
}

static void GOHandleSuccessBallThrowAnim(void)
{
    gBattleSpritesDataPtr->animationData->ballThrowCaseId = BALL_3_SHAKES_SUCCESS;
    gDoingBattleAnim = TRUE;
    InitAndLaunchSpecialAnimation(gActiveBattler, gActiveBattler, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), B_ANIM_BALL_THROW_WITH_TRAINER);
    gBattlerControllerFuncs[gActiveBattler] = CompleteOnSpecialAnimDone;
}

static void GOHandleBallThrowAnim(void)
{
    u8 ballThrowCaseId = gBattleBufferA[gActiveBattler][1];

    gBattleSpritesDataPtr->animationData->ballThrowCaseId = ballThrowCaseId;
    gDoingBattleAnim = TRUE;
    InitAndLaunchSpecialAnimation(gActiveBattler, gActiveBattler, GetBattlerAtPosition(B_POSITION_OPPONENT_LEFT), B_ANIM_BALL_THROW_WITH_TRAINER);
    gBattlerControllerFuncs[gActiveBattler] = CompleteOnSpecialAnimDone;
}

static void GOHandlePause(void)
{
    GOBufferExecCompleted();
}

static void GOHandleMoveAnimation(void)
{
    GOBufferExecCompleted();
}

static void GOHandlePrintString(void)
{
    u16 *stringId;

    gBattle_BG0_X = 0;
    gBattle_BG0_Y = 0;
    stringId = (u16 *)(&gBattleBufferA[gActiveBattler][2]);
    BufferStringBattle(*stringId);
    if (BattleStringShouldBeColored(*stringId))
        BattlePutTextOnWindow(gDisplayedStringBattle, (B_WIN_MSG | B_TEXT_FLAG_NPC_CONTEXT_FONT));
    else
        BattlePutTextOnWindow(gDisplayedStringBattle, B_WIN_MSG);
    gBattlerControllerFuncs[gActiveBattler] = CompleteOnInactiveTextPrinter;
}

static void GOHandlePrintSelectionString(void)
{
    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        GOHandlePrintString();
    else
        GOBufferExecCompleted();
}

static void HandleChooseActionAfterDma3(void)
{
    if (!IsDma3ManagerBusyWithBgCopy())
    {
        gBattle_BG0_X = 0;
        gBattle_BG0_Y = 160;
        gBattlerControllerFuncs[gActiveBattler] = HandleInputChooseAction;
    }
}

static void GOHandleChooseAction(void)
{
    s32 i;

    gBattlerControllerFuncs[gActiveBattler] = HandleChooseActionAfterDma3;
    BattlePutTextOnWindow(gText_EmptyString3, B_WIN_MSG);
    BattlePutTextOnWindow(gText_GOMenu, B_WIN_ACTION_MENU);
    for (i = 0; i < 4; ++i)
        ActionSelectionDestroyCursorAt(i);
    ActionSelectionCreateCursorAt(gActionSelectionCursor[gActiveBattler], 0);
    BattleStringExpandPlaceholdersToDisplayedString(gText_WhatWillPlayerThrow);
    BattlePutTextOnWindow(gDisplayedStringBattle, B_WIN_ACTION_PROMPT);
}

static void GOHandleUnknownYesNoBox(void)
{
    GOBufferExecCompleted();
}

static void GOHandleChooseMove(void)
{
    GOBufferExecCompleted();
}

static void GOHandleChooseItem(void)
{
    GOBufferExecCompleted();
}

static void GOHandleChoosePokemon(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd23(void)
{
    GOBufferExecCompleted();
}

static void GOHandleHealthBarUpdate(void)
{
    GOBufferExecCompleted();
}

static void GOHandleExpUpdate(void)
{
    u8 monId = gBattleBufferA[gActiveBattler][6];

    if (GetMonData(&gPlayerParty[monId], MON_DATA_LEVEL) >= MAX_LEVEL)
    {
        GOBufferExecCompleted();
    }
    else
    {
        s16 expPointsToGive;
        expPointsToGive = T1_READ_16(&gBattleBufferA[gActiveBattler][6]);
        gBattlerControllerFuncs[gActiveBattler] = BattleControllerDummy;
    }
    GOBufferExecCompleted();
}

static void GOHandleStatusIconUpdate(void)
{
    UpdateHealthboxAttribute(gHealthboxSpriteIds[gActiveBattler], &gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], HEALTHBOX_POKEBALLS_TEXT);
    GOBufferExecCompleted();
}

static void GOHandleStatusAnimation(void)
{
    GOBufferExecCompleted();
}

static void GOHandleStatusXor(void)
{
    GOBufferExecCompleted();
}

static void GOHandleDataTransfer(void)
{
    GOBufferExecCompleted();
}

static void GOHandleDMA3Transfer(void)
{
    GOBufferExecCompleted();
}

static void GOHandlePlayBGM(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd32(void)
{
    GOBufferExecCompleted();
}

static void GOHandleTwoReturnValues(void)
{
    GOBufferExecCompleted();
}

static void GOHandleChosenMonReturnValue(void)
{
    GOBufferExecCompleted();
}

static void GOHandleOneReturnValue(void)
{
    GOBufferExecCompleted();
}

static void GOHandleOneReturnValue_Duplicate(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd37(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd38(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd39(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd40(void)
{
    GOBufferExecCompleted();
}

static void GOHandleHitAnimation(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd42(void)
{
    GOBufferExecCompleted();
}

static void GOHandlePlaySE(void)
{
    s8 pan;

    if (GetBattlerSide(gActiveBattler) == B_SIDE_PLAYER)
        pan = SOUND_PAN_ATTACKER;
    else
        pan = SOUND_PAN_TARGET;
    PlaySE12WithPanning(gBattleBufferA[gActiveBattler][1] | (gBattleBufferA[gActiveBattler][2] << 8), pan);
    GOBufferExecCompleted();
}

static void GOHandlePlayFanfareOrBGM(void)
{
    PlayFanfare(gBattleBufferA[gActiveBattler][1] | (gBattleBufferA[gActiveBattler][2] << 8));
    GOBufferExecCompleted();
}

static void GOHandleFaintingCry(void)
{
    u16 species = GetMonData(&gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], MON_DATA_SPECIES);

    PlayCry_Normal(species, 25);
    GOBufferExecCompleted();
}

static void GOHandleIntroSlide(void)
{
    HandleIntroSlide(gBattleBufferA[gActiveBattler][1]);
    gIntroSlideFlags |= 1;
    GOBufferExecCompleted();
}

static void GOHandleIntroTrainerBallThrow(void)
{
    UpdateHealthboxAttribute(gHealthboxSpriteIds[gActiveBattler], &gPlayerParty[gBattlerPartyIndexes[gActiveBattler]], HEALTHBOX_POKEBALLS_TEXT);
    StartHealthboxSlideIn(gActiveBattler);
    SetHealthboxSpriteVisible(gHealthboxSpriteIds[gActiveBattler]);
    gBattlerControllerFuncs[gActiveBattler] = CompleteOnHealthboxSpriteCallbackDummy;
}

static void GOHandleDrawPartyStatusSummary(void)
{
    GOBufferExecCompleted();
}

static void GOHandleHidePartyStatusSummary(void)
{
    GOBufferExecCompleted();
}

static void GOHandleEndBounceEffect(void)
{
    GOBufferExecCompleted();
}

static void GOHandleSpriteInvisibility(void)
{
    GOBufferExecCompleted();
}

static void GOHandleBattleAnimation(void)
{
    u8 animationId = gBattleBufferA[gActiveBattler][1];
    u16 argument = gBattleBufferA[gActiveBattler][2] | (gBattleBufferA[gActiveBattler][3] << 8);

    if (TryHandleLaunchBattleTableAnimation(gActiveBattler, gActiveBattler, gActiveBattler, animationId, argument))
        GOBufferExecCompleted();
    else
        gBattlerControllerFuncs[gActiveBattler] = CompleteOnFinishedBattleAnimation;
}

static void GOHandleLinkStandbyMsg(void)
{
    GOBufferExecCompleted();
}

static void GOHandleResetActionMoveSelection(void)
{
    GOBufferExecCompleted();
}

static void GOHandleCmd55(void)
{
    gBattleOutcome = gBattleBufferA[gActiveBattler][1];
    FadeOutMapMusic(5);
    BeginFastPaletteFade(3);
    GOBufferExecCompleted();
    if ((gBattleTypeFlags & BATTLE_TYPE_LINK) && !(gBattleTypeFlags & BATTLE_TYPE_IS_MASTER))
        gBattlerControllerFuncs[gActiveBattler] = GO_SetBattleEndCallbacks;
}

static void GOCmdEnd(void)
{
}

static void GOHandleBallSwitch(void)
{
    BattlePutTextOnWindow(gText_GOChosenBall, B_WIN_CURRENT_BALL);
    GOBufferExecCompleted();
}
