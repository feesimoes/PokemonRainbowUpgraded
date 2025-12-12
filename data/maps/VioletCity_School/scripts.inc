VioletCity_School_MapScripts::
	.byte 0


VioletCity_School_Earl::
# 5 "data/maps/VioletCity_School/scripts.pory"
	lock
# 6 "data/maps/VioletCity_School/scripts.pory"
	faceplayer
# 7 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_0, MSGBOX_YESNO
# 8 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_2
# 21 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_3
# 22 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_4
# 23 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_5, MSGBOX_YESNO
# 24 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_8
# 49 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
VioletCity_School_Earl_1:
# 52 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 53 "data/maps/VioletCity_School/scripts.pory"
	release
	end

VioletCity_School_Earl_2:
# 10 "data/maps/VioletCity_School/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_School_Earl_5
# 16 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_2
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_5:
# 12 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_1
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_8:
# 26 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_6
# 27 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_7, MSGBOX_YESNO
# 28 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_11
# 44 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_11:
# 30 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_8
# 31 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_7, MSGBOX_YESNO
# 32 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_14
# 39 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_14:
# 34 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_9
# 35 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_10
	goto VioletCity_School_Earl_1


VioletCity_School_Earl_Text_0:
# 7 "data/maps/VioletCity_School/scripts.pory"
	.string "Bonjour! You are TRAINER? Battle\n"
	.string "GYM LEADER, win you did?$"

VioletCity_School_Earl_Text_1:
# 12 "data/maps/VioletCity_School/scripts.pory"
	.string "Ooh, la la!\n"
	.string "Very indeed nice!\p"
	.string "Nothing more do I teach!\n"
	.string "Smart TRAINER you are!$"

VioletCity_School_Earl_Text_2:
# 16 "data/maps/VioletCity_School/scripts.pory"
	.string "Oh! You lie!\n"
	.string "Good it is you study here!$"

VioletCity_School_Earl_Text_3:
# 21 "data/maps/VioletCity_School/scripts.pory"
	.string "Here, teacher I am. Good it\n"
	.string "is you study here, yes!$"

VioletCity_School_Earl_Text_4:
# 22 "data/maps/VioletCity_School/scripts.pory"
	.string "EARL, I am! Wonderful are\n"
	.string "POKéMON, yes? Teach you I will!$"

VioletCity_School_Earl_Text_5:
# 23 "data/maps/VioletCity_School/scripts.pory"
	.string "What you want to know?\n"
	.string "Want to be a winner is you?$"

VioletCity_School_Earl_Text_6:
# 26 "data/maps/VioletCity_School/scripts.pory"
	.string "Good! Teach you, I will!\n"
	.string "In battle, POKéMON top on list.\p"
	.string "The top one, jump out first!\n"
	.string "Change order in list, make easy!$"

VioletCity_School_Earl_Text_7:
# 27 "data/maps/VioletCity_School/scripts.pory"
	.string "More from EARL you want\n"
	.string "to hear?$"

VioletCity_School_Earl_Text_8:
# 30 "data/maps/VioletCity_School/scripts.pory"
	.string "Fine! Teach you, I will!\n"
	.string "If POKéMON come out in battle...\p"
	.string "Some EXP. POINTS it gets.\n"
	.string "Keep out weak POKéMON!\p"
	.string "Switch in battle quick! This way,\n"
	.string "weak POKéMON very strong get!$"

VioletCity_School_Earl_Text_9:
# 34 "data/maps/VioletCity_School/scripts.pory"
	.string "Fine! Teach you, I will!\n"
	.string "POKéMON have goods and bads.\p"
	.string "Because many types. High LV.\n"
	.string "POKéMON not win always if bad types.$"

VioletCity_School_Earl_Text_10:
# 35 "data/maps/VioletCity_School/scripts.pory"
	.string "POKéMON with good types for\n"
	.string "foe you choose, smart battle!\p"
	.string "You come again later! EARL\n"
	.string "tired, but teaches whenever!$"

VioletCity_School_Earl_Text_11:
# 39 "data/maps/VioletCity_School/scripts.pory"
	.string "You come again later, yes?\n"
	.string "EARL teach you whenever!$"
