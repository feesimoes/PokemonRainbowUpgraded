Cherrygrove_RobertosHouse_MapScripts::
	.byte 0


Cherrygrove_RobertosHouse_EventScript_Roberto::
# 5 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	goto_if_set FLAG_CHERRYGROVE_LUCKY_EGG_OBTAINED, Cherrygrove_RobertosHouse_EventScript_Roberto_1
# 17 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	lock
# 18 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	applymovement 1, Cherrygrove_RobertosHouse_Face_Player
# 19 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	msgbox Cherrygrove_RobertosHouse_EventScript_Roberto_Text_1
# 20 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	waitmessage
# 21 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	closemessage
# 22 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	checkitemspace ITEM_LUCKY_EGG, 1
# 23 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Cherrygrove_RobertosHouse_EventScript_Roberto_4
# 35 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	msgbox Cherrygrove_RobertosHouse_EventScript_Roberto_Text_3
# 36 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	waitmessage
# 37 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	closemessage
# 38 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	release
	end

Cherrygrove_RobertosHouse_EventScript_Roberto_1:
# 7 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	lock
# 8 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	applymovement 1, Cherrygrove_RobertosHouse_Face_Player
# 9 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	msgbox Cherrygrove_RobertosHouse_EventScript_Roberto_Text_0
# 10 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	waitmessage
# 11 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	closemessage
# 12 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	release
	end

Cherrygrove_RobertosHouse_EventScript_Roberto_4:
# 25 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	giveitem ITEM_LUCKY_EGG, 1
# 26 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	setflag FLAG_CHERRYGROVE_LUCKY_EGG_OBTAINED
# 27 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	msgbox Cherrygrove_RobertosHouse_EventScript_Roberto_Text_2
# 28 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	waitmessage
# 29 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	closemessage
# 30 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	release
	end


# 44 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
Cherrygrove_RobertosHouse_Face_Player:
# 46 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	face_player
# 47 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	step_end

Cherrygrove_RobertosHouse_EventScript_Roberto_Text_0:
# 9 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	.string "Hey, hey!\n"
	.string "What's new?\p"
	.string "In case you forgot - PRO TIP!\n"
	.string "Give a PARTY POKéMON LUCKY EGG.\p"
	.string "When they defeat an opponent, they\n"
	.string "gain more EXP than usual.$"

Cherrygrove_RobertosHouse_EventScript_Roberto_Text_1:
# 19 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	.string "Hey, hey!\n"
	.string "What's happening?\p"
	.string "You ever wandering on a new road and\n"
	.string "find yourself reading lame TRAINER\l"
	.string "TIPS?\p"
	.string "Well, lemme give you a PRO TIP!$"

Cherrygrove_RobertosHouse_EventScript_Roberto_Text_2:
# 27 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	.string "You can give one of your POKéMON a\n"
	.string "LUCKY EGG to hold.\p"
	.string "It'll cause them to gain more\n"
	.string "EXP if they were in battle.$"

Cherrygrove_RobertosHouse_EventScript_Roberto_Text_3:
# 35 "data/maps/Cherrygrove_RobertosHouse/scripts.pory"
	.string "Aww, I was trying to slip something\n"
	.string "into your BAG, but it's full!\p"
	.string "Come back when you got free\n"
	.string "space for it in your BAG.$"
