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
	lock
# 27 "data/maps/SilphCo_1F/scripts.pory"
	applymovement 2, Movement_Cynthia_Faces_Player
# 28 "data/maps/SilphCo_1F/scripts.pory"
	waitmovement
# 29 "data/maps/SilphCo_1F/scripts.pory"
	playbgm MUS_CYNTHIA, TRUE
# 30 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_0
# 31 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 32 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_1
# 33 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 34 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_2
# 35 "data/maps/SilphCo_1F/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 36 "data/maps/SilphCo_1F/scripts.pory"
	waitfanfare
# 37 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_3
# 38 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 39 "data/maps/SilphCo_1F/scripts.pory"
	msgbox SilphCo_1F_EventScript_CynthiaEncounter_Text_4
# 40 "data/maps/SilphCo_1F/scripts.pory"
	waitmessage
# 41 "data/maps/SilphCo_1F/scripts.pory"
	fadenewbgm MUS_KANTO_ROUTE_GATE
# 42 "data/maps/SilphCo_1F/scripts.pory"
	setflag FLAG_SINNOH_PASS_OBTAINED
# 43 "data/maps/SilphCo_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 44 "data/maps/SilphCo_1F/scripts.pory"
	removeobject 2
# 45 "data/maps/SilphCo_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 46 "data/maps/SilphCo_1F/scripts.pory"
	release
	end


SilphCo_1F_EventScript_CynthiaEncounter_Text_0:
# 30 "data/maps/SilphCo_1F/scripts.pory"
	.string "Oh, is that a POKéDEX?\n"
	.string "You must be helping PROF. OAK?\p"
	.string "What's your name?\p"
	.string "...Oh? Aren't you the same {PLAYER}\n"
	.string "who drove TEAM ROCKET out of here?$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_1:
# 32 "data/maps/SilphCo_1F/scripts.pory"
	.string "My name is CYNTHIA,\n"
	.string "I'm a TRAINER just like you.$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_2:
# 34 "data/maps/SilphCo_1F/scripts.pory"
	.string "You seem to be a strong\n"
	.string "and respectable TRAINER...\p"
	.string "...OK, it's decided!\p"
	.string "I want to give you this!$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_3:
# 37 "data/maps/SilphCo_1F/scripts.pory"
	.string "CYNTHIA: Try using this PASS\n"
	.string "at the VERMILION HARBOR.\p"
	.string "I will let the POKéMON LEAGUE HQ\n"
	.string "know that you have received this.$"

SilphCo_1F_EventScript_CynthiaEncounter_Text_4:
# 39 "data/maps/SilphCo_1F/scripts.pory"
	.string "CYNTHIA: I hope to see you again\n"
	.string "soon, {PLAYER}! Maybe in battle?\p"
	.string "See you later!$"
