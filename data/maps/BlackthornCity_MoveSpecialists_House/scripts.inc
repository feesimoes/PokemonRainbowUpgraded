BlackthornCity_MoveSpecialists_House_MapScripts::
	.byte 0


BlackthornCity_Move_Deleter::
# 5 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	lock
# 6 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	faceplayer
# 7 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_0, MSGBOX_YESNO
# 8 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BlackthornCity_Move_Deleter_2
# 14 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_2
# 15 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	closemessage
# 16 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special ChoosePartyMon
# 17 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	waitstate
# 18 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special IsSelectedMonEgg
# 19 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackthornCity_Move_Deleter_6
BlackthornCity_Move_Deleter_5:
# 23 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special GetNumMovesSelectedMonHas
# 24 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq BlackthornCity_Move_Deleter_9
BlackthornCity_Move_Deleter_8:
# 28 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_5
# 29 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	fadescreen FADE_TO_BLACK
# 30 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special SelectMoveDeleterMove
# 31 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 32 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special BufferMoveDeleterNicknameAndMove
# 33 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_6, MSGBOX_YESNO
# 34 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq BlackthornCity_Move_Deleter_11
# 43 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_8
BlackthornCity_Move_Deleter_1:
# 46 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	closemessage
# 47 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	release
	end

BlackthornCity_Move_Deleter_2:
# 10 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_1
	goto BlackthornCity_Move_Deleter_1

BlackthornCity_Move_Deleter_6:
# 21 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_3
	goto BlackthornCity_Move_Deleter_5

BlackthornCity_Move_Deleter_9:
# 26 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_4
	goto BlackthornCity_Move_Deleter_8

BlackthornCity_Move_Deleter_11:
# 36 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special MoveDeleterForgetMove
# 37 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	playfanfare MUS_MOVE_DELETED
# 38 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	waitfanfare
# 39 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Deleter_Text_7
	goto BlackthornCity_Move_Deleter_1


BlackthornCity_Move_Reminder::
# 53 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	lock
# 54 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	faceplayer
# 55 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_0, MSGBOX_YESNO
# 56 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq BlackthornCity_Move_Reminder_2
# 62 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_2
# 63 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	closemessage
# 64 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special ChooseMonForMoveRelearner
# 65 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	waitstate
# 66 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special IsSelectedMonEgg
# 67 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackthornCity_Move_Reminder_5
# 71 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	compare VAR_0x8005, 0
	goto_if_eq BlackthornCity_Move_Reminder_6
# 77 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_5
# 78 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	special TeachMoveRelearnerMove
# 79 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	waitstate
BlackthornCity_Move_Reminder_1:
# 82 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	closemessage
# 83 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	release
	end

BlackthornCity_Move_Reminder_2:
# 58 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_1
	goto BlackthornCity_Move_Reminder_1

BlackthornCity_Move_Reminder_5:
# 69 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_3
	goto BlackthornCity_Move_Reminder_1

BlackthornCity_Move_Reminder_6:
# 73 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	msgbox BlackthornCity_Move_Reminder_Text_4
	goto BlackthornCity_Move_Reminder_1


BlackthornCity_Move_Deleter_Text_0:
# 7 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "...What was I doing again?\n"
	.string "Uh... Oh, right!\p"
	.string "I'm a MOVE DELETER!\n"
	.string "I'll tell you what!\p"
	.string "No charge, completely covered!\n"
	.string "Want a POKéMON to forget moves?$"

BlackthornCity_Move_Deleter_Text_1:
# 10 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "No?\n"
	.string "No to what, exactly?\p"
	.string "Oh, right!\n"
	.string "I'm a MOVE DELETER!\p"
	.string "I'll tell you what!\n"
	.string "...What was I doing again?$"

BlackthornCity_Move_Deleter_Text_2:
# 14 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Which POKéMON will forget a move?$"

BlackthornCity_Move_Deleter_Text_3:
# 21 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "I think that's just an\n"
	.string "EGG... Which came first?\p"
	.string "The POKéMON, or the EGG?\n"
	.string "I forgot, anyways...$"

BlackthornCity_Move_Deleter_Text_4:
# 26 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Your POKéMON only knows\n"
	.string "one move...\p"
	.string "Without any moves, it'll\n"
	.string "STRUGGLE in battle.$"

BlackthornCity_Move_Deleter_Text_5:
# 28 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Which move should be forgotten?$"

BlackthornCity_Move_Deleter_Text_6:
# 33 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "{STR_VAR_1}'s {STR_VAR_2}\n"
	.string "move should be forgotten?$"

BlackthornCity_Move_Deleter_Text_7:
# 39 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "{STR_VAR_1} has forgotten\n"
	.string "{STR_VAR_2} completely.\p"
	.string "Feel free to return here\n"
	.string "whenever!$"

BlackthornCity_Move_Deleter_Text_8:
# 43 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Alright, you can come back\n"
	.string "later, if you want.$"

BlackthornCity_Move_Reminder_Text_0:
# 55 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Hey, I'm a MOVE REMINDER! I\n"
	.string "can remind POKéMON of old moves.\p"
	.string "It's a free service, too!\n"
	.string "So, how about it?$"

BlackthornCity_Move_Reminder_Text_1:
# 58 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Gotcha!\n"
	.string "No worries, then.\p"
	.string "If you change your mind,\n"
	.string "Remember to come back!$"

BlackthornCity_Move_Reminder_Text_2:
# 62 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Sounds good! So...\n"
	.string "Which POKéMON will remember a move?$"

BlackthornCity_Move_Reminder_Text_3:
# 69 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Huh? Sorry, but...\n"
	.string "An EGG has nothing to remember...$"

BlackthornCity_Move_Reminder_Text_4:
# 73 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "Unfortunately, this POKéMON has\n"
	.string "lots more to learn!\p"
	.string "There is nothing I can remind\n"
	.string "it of at this time.$"

BlackthornCity_Move_Reminder_Text_5:
# 77 "data/maps/BlackthornCity_MoveSpecialists_House/scripts.pory"
	.string "You got it!\n"
	.string "Which move should it remember?$"
