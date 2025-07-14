Route5_MapScripts::
	.byte 0

Route5_EventScript_UndergroundPathSign::
	msgbox Route5_Text_UndergroundPathSign, MSGBOX_SIGN
	end

Route5_ProfOakAideSwitchBattleMode::
	lock
	applymovement 1, Route5_Movement_Face_Player
	msgbox Route5_Text_ProfOakAideSwitchBattleMode, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, TurnGOModeOff
	goto_if_eq VAR_RESULT, YES, TurnGOModeOn
	end

TurnGOModeOff::
	clearflag FLAG_SYS_WILD_GO_MODE
	msgbox Route5_Text_ProfOakAideConfirmation, MSGBOX_DEFAULT
	release
	end

TurnGOModeOn::
	setflag FLAG_SYS_WILD_GO_MODE
	msgbox Route5_Text_ProfOakAideConfirmation, MSGBOX_DEFAULT
	release
	end

Route5_Movement_Face_Player::
	face_player
	step_end
