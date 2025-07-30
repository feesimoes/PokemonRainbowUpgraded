EventScript_UseRockClimb::
	goto_if_questlog EventScript_UseRockClimbEnd
	checkitem ITEM_ROCK_CLIMB_KIT, 1
	lockall
	msgbox Text_WantToRockClimb, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_UseRockClimbRelease
	msgbox Text_UsedRockClimb, MSGBOX_SIGN
	dofieldeffect FLDEFF_USE_ROCK_CLIMB
EventScript_UseRockClimbRelease::
	releaseall
    end
EventScript_UseRockClimbEnd::
	end
EventScript_CantUseRockClimb::
	lockall
	msgbox Text_CantUseRockClimb, MSGBOX_SIGN
	releaseall
	end

EventScript_ExplorerKitDig::
	msgbox Text_WantToDigDown, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_EscapeUpPrompt
	msgbox Text_UsedExplorerKitDown, MSGBOX_SIGN
	goto_if_eq VAR_EXPLORER_KIT, 1, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, 0, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, -1, EventScript_FallDownDugHole_Tohjo_Falls_B1F
	goto_if_eq VAR_EXPLORER_KIT, -2, EventScript_FallDownDugHole_Tohjo_Falls_B2F
	goto_if_eq VAR_EXPLORER_KIT, -3, EventScript_FallDownDugHole_Tohjo_Falls_B3F
	goto_if_eq VAR_EXPLORER_KIT, -4, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, -5, EventScript_FallDownDugHole_Tohjo_Falls_B5F
	goto_if_eq VAR_EXPLORER_KIT, -6, EventScript_FallDownDugHole_Tohjo_Falls_B6F
	goto_if_eq VAR_EXPLORER_KIT, -7, EventScript_FallDownDugHole_Tohjo_Falls_B7F
	goto_if_eq VAR_EXPLORER_KIT, -8, EventScript_NothingHappened
	releaseall
	end
EventScript_ExplorerKitEnd::
	end
EventScript_EscapeUpPrompt::
	msgbox Text_WantToEscapeUp, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, EventScript_ReleaseExplorerKit
	msgbox Text_UsedExplorerKitUp, MSGBOX_SIGN
	goto_if_eq VAR_EXPLORER_KIT, 1, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, 0, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, -1, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, -2, EventScript_EscapeUpDugHole_Tohjo_Falls_B2F
	goto_if_eq VAR_EXPLORER_KIT, -3, EventScript_EscapeUpDugHole_Tohjo_Falls_B3F
	goto_if_eq VAR_EXPLORER_KIT, -4, EventScript_EscapeUpDugHole_Tohjo_Falls_B4F
	goto_if_eq VAR_EXPLORER_KIT, -5, EventScript_NothingHappened
	goto_if_eq VAR_EXPLORER_KIT, -6, EventScript_EscapeUpDugHole_Tohjo_Falls_B6F
	goto_if_eq VAR_EXPLORER_KIT, -7, EventScript_EscapeUpDugHole_Tohjo_Falls_B7F
	goto_if_eq VAR_EXPLORER_KIT, -8, EventScript_EscapeUpDugHole_Tohjo_Falls_B8F
	releaseall
	end
EventScript_ReleaseExplorerKit::
	releaseall
	end

EventScript_NothingHappened::
	msgbox Text_UsedExplorerKitButNothingHappened, MSGBOX_SIGN
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B1F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B2F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B2F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B3F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B3F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B4F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B4F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B5F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B5F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B6F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B6F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B7F
	releaseall
	end

EventScript_FallDownDugHole_Tohjo_Falls_B7F::
	lockall
	playse SE_FALL
	warphole MAP_TOHJO_FALLS_B8F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B2F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B1F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B3F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B2F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B4F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B3F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B5F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B4F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B6F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B5F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B7F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B6F
	releaseall
	end

EventScript_EscapeUpDugHole_Tohjo_Falls_B8F::
	lockall
	playse SE_WARP_OUT
	warphole MAP_TOHJO_FALLS_B7F
	releaseall
	end
