# 1 "data/maps/SilphCo_1F/scripts.pory"

# 2 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_MapScripts::
# 3 "data/maps/SilphCo_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SilphCo_1F_OnTransition
# 4 "data/maps/SilphCo_1F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_1F/scripts.pory"

# 6 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_OnTransition::
# 7 "data/maps/SilphCo_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SILPH_CO_1F
# 8 "data/maps/SilphCo_1F/scripts.pory"
	end
# 9 "data/maps/SilphCo_1F/scripts.pory"

# 10 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_Receptionist::
# 11 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_WelcomePresidentInBoardroom, MSGBOX_NPC
# 12 "data/maps/SilphCo_1F/scripts.pory"
	end
# 13 "data/maps/SilphCo_1F/scripts.pory"

# 14 "data/maps/SilphCo_1F/scripts.pory"
SilphCo_1F_EventScript_FloorSign::
# 15 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_Text_FloorSign, MSGBOX_SIGN
# 16 "data/maps/SilphCo_1F/scripts.pory"
	end

# 20 "data/maps/SilphCo_1F/scripts.pory"
Movement_Cynthia_Faces_Player:
# 21 "data/maps/SilphCo_1F/scripts.pory"
	face_player
# 22 "data/maps/SilphCo_1F/scripts.pory"
	step_end

SilphCo_1F_EventScript_CynthiaEncounter::
# 26 "data/maps/SilphCo_1F/scripts.pory"
	goto_if_set FLAG_HIDE_SILPH_ROCKETS, SilphCo_1F_EventScript_CynthiaEncounter_1
# 52 "data/maps/SilphCo_1F/scripts.pory"
	lock
# 53 "data/maps/SilphCo_1F/scripts.pory"
	applymovement 2, Movement_Cynthia_Faces_Player
# 54 "data/maps/SilphCo_1F/scripts.pory"
	waitmovement
# 55 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_5
# 56 "data/maps/SilphCo_1F/scripts.pory"
	release
	end

SilphCo_1F_EventScript_CynthiaEncounter_1:
# 28 "data/maps/SilphCo_1F/scripts.pory"
	lock
# 29 "data/maps/SilphCo_1F/scripts.pory"
	applymovement 2, Movement_Cynthia_Faces_Player
# 30 "data/maps/SilphCo_1F/scripts.pory"
	waitmovement
# 31 "data/maps/SilphCo_1F/scripts.pory"
	playbgm MUS_CYNTHIA, TRUE
# 32 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_0
# 33 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 34 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_1
# 35 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 36 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_2
# 37 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_3
# 38 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 39 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_4
# 40 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 41 "data/maps/SilphCo_1F/scripts.pory"
	closemessage
# 42 "data/maps/SilphCo_1F/scripts.pory"
	fadenewbgm MUS_KANTO_ROUTE_GATE
# 43 "data/maps/SilphCo_1F/scripts.pory"
	setflag FLAG_SINNOH_PASS_OBTAINED
# 44 "data/maps/SilphCo_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 45 "data/maps/SilphCo_1F/scripts.pory"
	removeobject 2
# 46 "data/maps/SilphCo_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 47 "data/maps/SilphCo_1F/scripts.pory"
	release
	end


SilphCo_1F_EventScript_CynthiaEncounter_Text_0:
# 32 "data/maps/SilphCo_1F/scripts.pory"
	.string "Oh, is that a POKéDEX?\n"
	.string "You must be helping PROF. OAK!\p"
	.string "So, what's your name?\p"
	.string "...Oh! Aren't you the same {PLAYER}\n"
	.string "who drove TEAM ROCKET out of here?$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_1:
# 34 "data/maps/SilphCo_1F/scripts.pory"
	.string "My name is CYNTHIA,\n"
	.string "I'm a TRAINER just like you.$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_2:
# 36 "data/maps/SilphCo_1F/scripts.pory"
	.string "You seem to be a strong\n"
	.string "and respectable TRAINER...\p"
	.string "...OK, it's decided!$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_3:
# 37 "data/maps/SilphCo_1F/scripts.pory"
	.string "Now, I know I'm asking a big favor\n"
	.string "of you, but you are very capable.\p"
	.string "Please visit VERMILION HARBOR'S\n"
	.string "easternmost port.\p"
	.string "There will be a ferry to SINNOH.$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_4:
# 39 "data/maps/SilphCo_1F/scripts.pory"
	.string "I'm truly grateful for your actions\n"
	.string "here at SILPH CO.\p"
	.string "Now, SINNOH is an entirely different\n"
	.string "region due far north of KANTO.\p"
	.string "Be prepared for a lengthy journey\n"
	.string "...Oh, and bring warm clothes!\p"
	.string "We'll meet again soon, {PLAYER}!$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_5:
# 55 "data/maps/SilphCo_1F/scripts.pory"
	.string "Oh, hello...\n"
	.string "Wait, no, you aren't with SILPH...\p"
	.string "I'm sorry, I thought you were the\n"
	.string "person I was here to interview...$"
