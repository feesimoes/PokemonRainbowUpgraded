Route26_North_House_MapScripts::
	.byte 0


Route26_Move_Reminder_Dialogue::
# 4 "data/maps/Route26_North_House/scripts.pory"
	lock
# 5 "data/maps/Route26_North_House/scripts.pory"
	applymovement 1, Route26_Move_Reminder_Face_Player
# 6 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_0, MSGBOX_YESNO
# 7 "data/maps/Route26_North_House/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route26_Move_Reminder_Dialogue_2
# 14 "data/maps/Route26_North_House/scripts.pory"
	closemessage
# 15 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_2
# 16 "data/maps/Route26_North_House/scripts.pory"
	closemessage
# 17 "data/maps/Route26_North_House/scripts.pory"
	special ChooseMonForMoveRelearner
# 18 "data/maps/Route26_North_House/scripts.pory"
	waitstate
# 19 "data/maps/Route26_North_House/scripts.pory"
	special IsSelectedMonEgg
# 20 "data/maps/Route26_North_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route26_Move_Reminder_Dialogue_5
# 24 "data/maps/Route26_North_House/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq Route26_Move_Reminder_Dialogue_6
# 30 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_5
# 31 "data/maps/Route26_North_House/scripts.pory"
	special TeachMoveRelearnerMove
# 32 "data/maps/Route26_North_House/scripts.pory"
	waitstate
Route26_Move_Reminder_Dialogue_1:
# 35 "data/maps/Route26_North_House/scripts.pory"
	closemessage
# 36 "data/maps/Route26_North_House/scripts.pory"
	releaseall
	end

Route26_Move_Reminder_Dialogue_2:
# 9 "data/maps/Route26_North_House/scripts.pory"
	closemessage
# 10 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_1
	goto Route26_Move_Reminder_Dialogue_1

Route26_Move_Reminder_Dialogue_5:
# 22 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_3
	goto Route26_Move_Reminder_Dialogue_1

Route26_Move_Reminder_Dialogue_6:
# 26 "data/maps/Route26_North_House/scripts.pory"
	msgbox Route26_Move_Reminder_Dialogue_Text_4
	goto Route26_Move_Reminder_Dialogue_1


# 40 "data/maps/Route26_North_House/scripts.pory"
Route26_Move_Reminder_Face_Player:
# 41 "data/maps/Route26_North_House/scripts.pory"
	face_player
# 42 "data/maps/Route26_North_House/scripts.pory"
	step_end

Route26_Move_Reminder_Dialogue_Text_0:
# 6 "data/maps/Route26_North_House/scripts.pory"
	.string "If your POKéMON forget a move,\n"
	.string "I will gladly remind them!\p"
	.string "It's free of charge!\n"
	.string "So, how about it?$"

Route26_Move_Reminder_Dialogue_Text_1:
# 10 "data/maps/Route26_North_House/scripts.pory"
	.string "Ah, alright!\n"
	.string "No worries, then.\p"
	.string "If you change your mind,\n"
	.string "Remember to come back!$"

Route26_Move_Reminder_Dialogue_Text_2:
# 15 "data/maps/Route26_North_House/scripts.pory"
	.string "Sounds good! So...\n"
	.string "Which POKéMON will remember a move?$"

Route26_Move_Reminder_Dialogue_Text_3:
# 22 "data/maps/Route26_North_House/scripts.pory"
	.string "Hm? I'm sorry, but...\n"
	.string "An EGG has nothing to remember...$"

Route26_Move_Reminder_Dialogue_Text_4:
# 26 "data/maps/Route26_North_House/scripts.pory"
	.string "Unfortunately, this POKéMON has\n"
	.string "much more to learn!\p"
	.string "There is nothing I can remind\n"
	.string "it of at this time.$"

Route26_Move_Reminder_Dialogue_Text_5:
# 30 "data/maps/Route26_North_House/scripts.pory"
	.string "Certainly!\n"
	.string "Which move shall it remember?$"
