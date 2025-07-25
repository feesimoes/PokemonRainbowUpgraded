EventScript_UseRockClimb::
	goto_if_questlog EventScript_UseRockClimbEnd
	checkitem ITEM_ROCK_CLIMB_KIT, 1
	lockall
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_UseRockClimbRelease
	msgbox Text_UsedRockClimb
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
EventScript_UseRockClimbRelease:
	releaseall
    end
EventScript_UseRockClimbEnd:
	end

EventScript_CantUseRockClimb::
	lockall
	msgbox Text_CantUseRockClimb
	releaseall
	end
