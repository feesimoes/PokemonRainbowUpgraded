# 1 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_MapScripts::
# 3 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KogasRoom_OnResume
# 4 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_KogasRoom_OnLoad
# 5 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_KogasRoom_OnWarp
# 6 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_KogasRoom_OnFrame
# 7 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 9 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_OnResume::
# 10 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 11 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 14 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_OnLoad::
# 15 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_KogasRoom_EventScript_SetDoorOpen
# 16 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_KogasRoom_EventScript_CloseEntry
# 17 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 23 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 27 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_OnWarp::
# 28 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_KogasRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_OnFrame::
# 36 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_KogasRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_KogasRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
PokemonLeague_KogasRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 43 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	end

PokemonLeague_KogasRoom_EventScript_Koga::
# 50 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	lock
# 51 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	faceplayer
# 52 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 53 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_KogasRoom_EventScript_Koga_2
PokemonLeague_KogasRoom_EventScript_Koga_1:
# 57 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_KogasRoom_EventScript_Koga_Intro
# 58 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_KogasRoom_EventScript_Koga_Battle
# 59 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 60 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	goto PokemonLeague_KogasRoom_EventScript_Koga_PostBattle_OpenDoor
	end

PokemonLeague_KogasRoom_EventScript_Koga_2:
# 55 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_KogasRoom_EventScript_Koga_PostBattle
	goto PokemonLeague_KogasRoom_EventScript_Koga_1


PokemonLeague_KogasRoom_EventScript_Koga_Intro::
# 66 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	msgbox PokemonLeague_KogasRoom_EventScript_Koga_Intro_Text_0
# 67 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	closemessage
	return


PokemonLeague_KogasRoom_EventScript_Koga_Battle::
# 72 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_KOGA, PokemonLeague_KogasRoom_EventScript_Koga_Battle_Text_0
	return


PokemonLeague_KogasRoom_EventScript_Koga_PostBattle::
# 78 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	msgbox PokemonLeague_KogasRoom_EventScript_Koga_PostBattle_Text_0
# 80 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	closemessage
# 81 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	release
	end


PokemonLeague_KogasRoom_EventScript_Koga_PostBattle_OpenDoor::
# 87 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 88 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 89 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 90 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	msgbox PokemonLeague_KogasRoom_EventScript_Koga_PostBattle_Text_0
# 91 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	closemessage
# 92 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	release
	end


PokemonLeague_KogasRoom_EventScript_Koga_Intro_Text_0:
# 66 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.string "Fwahahahaha!\n"
	.string "Do you remember me, child?\p"
	.string "I am KOGA of the ELITE FOUR.\n"
	.string "I was FUCHSIA CITY'S GYM LEADER.\p"
	.string "My intricate styles allowed me to\n"
	.string "reach new heights, a worthy feat!\p"
	.string "POKéMON are not only brute force,\n"
	.string "you shall see soon enough!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

PokemonLeague_KogasRoom_EventScript_Koga_Battle_Text_0:
# 72 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.string "Ah! You've proven your worth.$"

PokemonLeague_KogasRoom_EventScript_Koga_PostBattle_Text_0:
# 79 "data/maps/PokemonLeague_KogasRoom/scripts.pory"
	.string "I subjected you to everything\n"
	.string "I could muster...\p"
	.string "But, my efforts failed.\n"
	.string "I must hone my skills.\p"
	.string "Go on to the next room.\n"
	.string "Put your abilities to the test!$"
