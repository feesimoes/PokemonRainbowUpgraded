#include "constants/vars.h"

EventScript_RepelWoreOff::
	checkitem ITEM_MAX_REPEL, 1
	vgoto_if_eq VAR_RESULT, TRUE, EventScript_RepelWoreOffUseMaxRepelNext
	checkitem ITEM_SUPER_REPEL, 1
	vgoto_if_eq VAR_RESULT, TRUE, EventScript_RepelWoreOffUseSuperRepelNext
	checkitem ITEM_REPEL, 1
	vgoto_if_eq VAR_RESULT, TRUE, EventScript_RepelWoreOffUseRepelNext
	msgbox Text_RepelWoreOffNoMoreLeft, MSGBOX_SIGN
	end
	
EventScript_UseAnotherRepelFromBag::
	buffernumberstring STR_VAR_1, VAR_REPEL_STEP_COUNT
	end

EventScript_RepelWoreOffUseMaxRepelNext::
	msgbox Text_RepelWoreOffUseMaxRepelNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOffUseSuperRepelNext
	setvar VAR_REPEL_STEP_COUNT, 250
	buffernumberstring STR_VAR_1, VAR_REPEL_STEP_COUNT
	msgbox Text_UsedAnotherRepel, MSGBOX_SIGN
	end
	
EventScript_RepelWoreOffUseSuperRepelNext::
	checkitem ITEM_SUPER_REPEL, 1
	vgoto_if_eq VAR_RESULT, FALSE, EventScript_RepelWoreOffUseRepelNext
	msgbox Text_UseSuperRepelNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOffUseRepelNext
	setvar VAR_REPEL_STEP_COUNT, 200
	buffernumberstring STR_VAR_1, VAR_REPEL_STEP_COUNT
	msgbox Text_UsedAnotherRepel, MSGBOX_SIGN
	end

EventScript_RepelWoreOffUseRepelNext::
	checkitem ITEM_REPEL, 1
	vgoto_if_eq VAR_RESULT, FALSE, EventScript_RepelWoreOffCancelRepel
	msgbox Text_UseRepelNext, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_RepelWoreOffCancelRepel
	setvar VAR_REPEL_STEP_COUNT, 100
	buffernumberstring STR_VAR_1, VAR_REPEL_STEP_COUNT
	msgbox Text_UsedAnotherRepel, MSGBOX_SIGN
	end

EventScript_RepelWoreOffCancelRepel::
	msgbox Text_RepelWoreOffDecidedAgainstUsingAnother, MSGBOX_SIGN
	end

Text_RepelWoreOffUseMaxRepelNext::
	.string "REPEL's effect wore off…\n"
	.string "Use a MAX REPEL next?$"

Text_UseSuperRepelNext::
	.string "REPEL's effect wore off…\n"
	.string "Use a SUPER REPEL next?$"

Text_UseRepelNext::
	.string "REPEL's effect wore off…\n"
	.string "Use a REPEL next?$"

Text_RepelWoreOff::
	.string "REPEL's effect wore off…\n"
	.string "Use another REPEL?$"

Text_UsedAnotherRepel::
	.string "You used another REPEL,\n"
	.string "{STR_VAR_1} more steps!$"

Text_RepelWoreOffDecidedAgainstUsingAnother::
	.string "{PLAYER} decided against\n"
	.string "Using another REPEL.$"

Text_RepelWoreOffNoMoreLeft::
	.string "REPEL's effect wore off…\n"
	.string "Shoot, there's no more!$"
