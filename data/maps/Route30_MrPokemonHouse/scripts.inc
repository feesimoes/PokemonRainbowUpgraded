Route30_MrPokemonHouse_MapScripts::
	.byte 0


# 3 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_ProfessorOakSpotsPlayer:
# 4 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_left
# 5 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	emote_exclamation_mark
# 6 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 9 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_ProfessorOakWalksCloser:
# 10 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_slow_left
# 10 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_slow_left
# 11 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 14 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_Mr_Pokemon_FacesPlayer:
# 15 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_player
# 16 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 19 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_ProfessorOakWalksToTablePlayerNorth:
# 20 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_up
# 21 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 21 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 21 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 22 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_player
# 23 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 26 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_ProfessorOakWalksToTablePlayerSouth:
# 27 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_down
# 27 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_down
# 28 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 28 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 28 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 28 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 29 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_player
# 30 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 32 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_ProfessorOakWalksToTablePlayerLeft:
# 33 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_up
# 34 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 34 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 34 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 34 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 34 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	walk_left
# 35 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_player
# 36 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 39 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_Player_Faces_Down:
# 40 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_down
# 41 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 44 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_Player_Faces_Right:
# 45 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_right
# 46 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

# 49 "data/maps/Route30_MrPokemonHouse/scripts.pory"
Movement_Player_Faces_Up:
# 50 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	face_up
# 51 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	step_end

Event_Talking_To_Professor_Oak_If_Busy::
# 55 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	lock
# 56 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Professor_Oak_If_Busy_Text_0
# 57 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	release
	end


Event_Talking_To_Mr_Pokemon::
# 62 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, Event_Talking_To_Mr_Pokemon_1
# 71 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	lock
# 72 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 1, Movement_Mr_Pokemon_FacesPlayer
# 73 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_1
# 74 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_2
# 75 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 76 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 77 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq Event_Talking_To_Mr_Pokemon_5
# 84 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	giveegg SPECIES_TOGEPI
# 86 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_4
# 87 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 88 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 2, Movement_ProfessorOakSpotsPlayer
# 89 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmovement
# 90 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	playbgm MUS_OAK, FALSE
# 91 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_5
# 92 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 93 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 2, Movement_ProfessorOakWalksCloser
# 94 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmovement
# 95 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 96 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_8, 3
	goto_if_eq Event_Talking_To_Mr_Pokemon_18
Event_Talking_To_Mr_Pokemon_16:
# 101 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_8, 3
	goto_if_eq Event_Talking_To_Mr_Pokemon_15
Event_Talking_To_Mr_Pokemon_13:
# 106 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_8, 2
	goto_if_eq Event_Talking_To_Mr_Pokemon_12
Event_Talking_To_Mr_Pokemon_8:
# 111 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmovement
# 112 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_6
# 113 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 114 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	special EnableNationalPokedex
# 115 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_7
# 116 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 117 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_8
# 118 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 119 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_9
# 120 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	waitmessage
# 121 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	fadescreen FADE_TO_BLACK
# 122 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	removeobject 2
# 123 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 124 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	playbgm MUS_ROUTE_30, TRUE
# 125 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	release
	end

Event_Talking_To_Mr_Pokemon_1:
# 64 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	lock
# 65 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 1, Movement_Mr_Pokemon_FacesPlayer
# 66 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_0
# 67 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	release
	end

Event_Talking_To_Mr_Pokemon_5:
# 79 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	msgbox Event_Talking_To_Mr_Pokemon_Text_3
# 80 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	release
	end

Event_Talking_To_Mr_Pokemon_9:
# 98 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 2, Movement_ProfessorOakWalksToTablePlayerNorth
# 99 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Right
	goto Event_Talking_To_Mr_Pokemon_8

Event_Talking_To_Mr_Pokemon_10:
# 103 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 2, Movement_ProfessorOakWalksToTablePlayerSouth
# 104 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Down
	goto Event_Talking_To_Mr_Pokemon_8

Event_Talking_To_Mr_Pokemon_11:
# 108 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement 2, Movement_ProfessorOakWalksToTablePlayerLeft
# 109 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Player_Faces_Up
	goto Event_Talking_To_Mr_Pokemon_8

Event_Talking_To_Mr_Pokemon_12:
# 106 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_9, 6
	goto_if_eq Event_Talking_To_Mr_Pokemon_11
	goto Event_Talking_To_Mr_Pokemon_8

Event_Talking_To_Mr_Pokemon_15:
# 101 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_9, 7
	goto_if_eq Event_Talking_To_Mr_Pokemon_10
	goto Event_Talking_To_Mr_Pokemon_13

Event_Talking_To_Mr_Pokemon_18:
# 96 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	compare VAR_TEMP_9, 5
	goto_if_eq Event_Talking_To_Mr_Pokemon_9
	goto Event_Talking_To_Mr_Pokemon_16


Event_Talking_To_Professor_Oak_If_Busy_Text_0:
# 56 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "PROF. OAK: Haha! This is great!\n"
	.string "Yes, this should go in here...\p"
	.string "Put that in this...\n"
	.string "But I can't forget this...$"

Event_Talking_To_Mr_Pokemon_Text_0:
# 66 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "MR POKéMON: Life is delightful!\n"
	.string "Always, new discoveries to be made!$"

Event_Talking_To_Mr_Pokemon_Text_1:
# 73 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "Hello, hello! You must be {PLAYER}.\n"
	.string "PROF. OAK has told me about you.\p"
	.string "I hear you are working on\n"
	.string "compiling a detailed POKéDEX.$"

Event_Talking_To_Mr_Pokemon_Text_2:
# 74 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "MR POKéMON: I am MR. POKéMON.\n"
	.string "There's something I want you to have.$"

Event_Talking_To_Mr_Pokemon_Text_3:
# 79 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "Please come back when you\n"
	.string "have room in your party for it.$"

Event_Talking_To_Mr_Pokemon_Text_4:
# 86 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "MR POKéMON: I got it from a couple\n"
	.string "who run a POKéMON DAY-CARE\p"
	.string "near GOLDENROD CITY.\n"
	.string "Please take good care of it!$"

Event_Talking_To_Mr_Pokemon_Text_5:
# 91 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "PROF. OAK: {PLAYER}?\n"
	.string "What are you doing here?$"

Event_Talking_To_Mr_Pokemon_Text_6:
# 112 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "PROF. OAK: It's been a while\n"
	.string "since you started your journey.\p"
	.string "There's no doubt you are talented\n"
	.string "as a POKéMON TRAINER.\p"
	.string "It's time for your POKéDEX\n"
	.string "to match who you are.\p"
	.string "Let me see your POKéDEX...$"

Event_Talking_To_Mr_Pokemon_Text_7:
# 115 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "PROF. OAK: Now, {PLAYER}, it won't be\n"
	.string "easy to complete the POKéDEX.\p"
	.string "However, I am sure you will\n"
	.string "make an honest attempt on my behalf!$"

Event_Talking_To_Mr_Pokemon_Text_8:
# 117 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "Oh, time flies!\n"
	.string "I have a radio show to set up at\l"
	.string "GOLDENROD CITY.\p"
	.string "You must be heading for VIOLET CITY.\n"
	.string "I will let the POKéMON LEAGUE HQ\p"
	.string "know you are adventuring here\n"
	.string "in JOHTO.$"

Event_Talking_To_Mr_Pokemon_Text_9:
# 119 "data/maps/Route30_MrPokemonHouse/scripts.pory"
	.string "Good luck in your journey\n"
	.string "{PLAYER}, I must be going!$"
