Route23_EventScript_MissingBoulderBadge::
	msgbox Text_OnlySkilledTrainersAllowedThrough
	playse SE_BOO
	msgbox Text_CantLetYouPass
	release
	end

Route23_EventScript_MissingBadge::
	message Text_OnlyPassWithBadgeDontHaveYet
	waitmessage
	playse SE_BOO
	waitbuttonpress
	closemessage
	waitse
	release
	end

Route23_EventScript_AlreadyRecognizedBoulderBadge::
	message Text_OhThatsBadgeGoRightAhead
	waitmessage
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	release
	end

Route23_EventScript_AlreadyRecognizedBadge::
	msgbox Text_OnlyPassWithBadgeOhGoAhead
	release
	end

Route23_EventScript_BadgeGuard::
	switch VAR_MAP_SCENE_ROUTE23
	case 0, Route23_EventScript_CheckBoulderBadge
	case 1, Route23_EventScript_CheckCascadeBadge
	case 2, Route23_EventScript_CheckThunderBadge
	case 3, Route23_EventScript_CheckRainbowBadge
	case 4, Route23_EventScript_CheckSoulBadge
	case 5, Route23_EventScript_CheckMarshBadge
	case 6, Route23_EventScript_CheckVolcanoBadge
	case 7, Route23_EventScript_CheckEarthBadge
	end

Route23_EventScript_CheckBoulderBadge::
	goto_if_set FLAG_BADGE01_GET, Route23_EventScript_RecognizeBoulderBadge
	goto Route23_EventScript_MissingBoulderBadge
	end

Route23_EventScript_CheckCascadeBadge::
	goto_if_set FLAG_BADGE02_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckThunderBadge::
	goto_if_set FLAG_BADGE03_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckRainbowBadge::
	goto_if_set FLAG_BADGE04_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckSoulBadge::
	goto_if_set FLAG_BADGE05_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckMarshBadge::
	goto_if_set FLAG_BADGE06_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckVolcanoBadge::
	goto_if_set FLAG_BADGE07_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_CheckEarthBadge::
	goto_if_set FLAG_BADGE08_GET, Route23_EventScript_RecognizeBadge
	goto Route23_EventScript_MissingBadge
	end

Route23_EventScript_RecognizeBoulderBadge::
	message Text_OhThatsBadgeGoRightAhead
	waitmessage
	playfanfare MUS_LEVEL_UP
	waitfanfare
	waitbuttonpress
	setvar VAR_MAP_SCENE_ROUTE23, 1
	release
	end

Route23_EventScript_RecognizeBadge::
	msgbox Text_OnlyPassWithBadgeOhGoAhead
	release
	end

Route23_Movement_WalkDown::
	walk_down
	step_end
