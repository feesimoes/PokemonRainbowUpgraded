# 1 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_MapScripts::
# 3 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 4 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 5 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PokemonLeague_LoreleisRoom_OnTransition
# 6 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 7 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_OnFrame
# 8 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.byte 0
# 9 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 10 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnResume::
# 11 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 12 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 13 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 15 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad::
# 16 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 17 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
# 18 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 19 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 20 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 21 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 22 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 23 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 24 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 25 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 26 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 27 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 28 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnTransition::
# 29 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_POKEMON_LEAGUE_LORELEIS_ROOM
# 30 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 31 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 32 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp::
# 33 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 34 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 35 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 36 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 37 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 38 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 39 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 40 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnFrame::
# 41 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 43 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 44 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 45 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lockall
# 46 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 47 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 48 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	releaseall
# 49 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 50 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 51 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 52 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 53 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	faceplayer
# 54 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 55 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 56 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 57 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 58 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 59 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Intro
# 60 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 61 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 62 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 63 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Battle
# 64 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Rematch
# 65 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 66 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
# 67 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 68 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 69 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Intro::
# 70 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 71 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
# 72 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 73 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 74 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 75 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 76 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
# 77 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 78 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 79 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Battle::
# 80 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 81 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
# 82 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 83 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 84 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 85 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 86 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
# 87 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 88 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 89 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 90 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 91 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 92 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 93 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 94 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 95 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 96 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 97 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 98 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 99 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 100 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 101 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp::
# 107 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_7
PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_5:
# 115 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_4
PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1:
# 122 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
	end

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_2:
# 109 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 110 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LoreleisRoom_EnterNextRoom_Up
# 111 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	waitmovement
# 112 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 113 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_KOGAS_ROOM, 6, 12
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_3:
# 117 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 118 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LoreleisRoom_EnterNextRoom_Up
# 119 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	waitmovement
# 120 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_BRUNOS_ROOM, 6, 12
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_4:
# 115 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_3
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_7:
# 107 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_2
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_5


# 126 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EnterNextRoom_Up:
# 128 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	walk_up
# 129 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	step_end
