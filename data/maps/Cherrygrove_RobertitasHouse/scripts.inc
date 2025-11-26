Cherrygrove_RobertitasHouse_MapScripts::
	.byte 0


Cherrygrove_RobertitasHouse_EventScript_Robertita::
# 8 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	lock
# 9 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	applymovement LOCALID_PLAYER, Cherrygrove_RobertitasHouse_Startled_Emote
# 10 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	msgbox Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_0
# 11 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	waitmessage
# 12 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	closemessage
# 13 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	applymovement 1, Cherrygrove_RobertitasHouse_Face_Player
# 14 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	waitmovement
# 15 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	msgbox Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_1
# 16 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	waitmessage
# 17 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	closemessage
# 18 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	msgbox Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_2
# 19 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	waitmessage
# 20 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	closemessage
# 21 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	release
	end


# 25 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
Cherrygrove_RobertitasHouse_Face_Player:
# 27 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	face_player
# 28 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	step_end

# 31 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
Cherrygrove_RobertitasHouse_Startled_Emote:
# 33 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	emote_exclamation_mark
# 34 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	step_end

Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_0:
# 10 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	.string "BREAKING NEWS!!!\n"
	.string "An evil organization, driven out of\l"
	.string "KANTO is-$"

Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_1:
# 15 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "Oh, hi! Sorry, did I startle you?\n"
	.string "I'm an aspiring self-proclaimed NEWS\l"
	.string "EXPERT!\p"
	.string "I want to start my own show\n"
	.string "on the GOLDENROD RADIO soon.$"

Cherrygrove_RobertitasHouse_EventScript_Robertita_Text_2:
# 18 "data/maps/Cherrygrove_RobertitasHouse/scripts.pory"
	.string "Anyways, I should get back to my\n"
	.string "practice.\p"
	.string "My rival, BUENA, is gaining on me,\n"
	.string "in terms of popularity.$"
