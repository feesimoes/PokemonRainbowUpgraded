# 1 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_MapScripts::
# 3 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_LoreleisRoom_OnResume
# 4 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_LoreleisRoom_OnLoad
# 5 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_LoreleisRoom_OnWarp
# 6 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_LoreleisRoom_OnFrame
# 7 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 9 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnResume::
# 10 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 11 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 14 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnLoad::
# 15 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen
# 16 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_LoreleisRoom_EventScript_CloseEntry
# 17 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 21 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 23 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 25 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 27 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnWarp::
# 28 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_OnFrame::
# 36 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 0, PokemonLeague_LoreleisRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 42 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 1
# 43 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 46 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Lorelei::
# 47 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 48 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	faceplayer
# 49 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 50 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_PostBattle
# 52 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 0
# 53 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	famechecker FAMECHECKER_LORELEI, 1
# 54 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Intro
# 55 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_RematchIntro
# 56 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 57 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 58 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Battle
# 59 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_Rematch
# 60 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 61 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei
# 62 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 63 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 64 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Intro::
# 65 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 66 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_Intro
# 67 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 68 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 69 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_RematchIntro::
# 70 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 71 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_RematchIntro
# 72 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 73 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 74 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Battle::
# 75 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 76 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI, PokemonLeague_LoreleisRoom_Text_Defeat
# 77 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 78 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 79 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_Rematch::
# 80 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 81 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_LORELEI_2, PokemonLeague_LoreleisRoom_Text_Defeat
# 82 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	return
# 83 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 84 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_PostBattle::
# 85 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 86 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 87 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 88 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end
# 89 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"

# 90 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EventScript_DefeatedLorelei::
# 91 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setflag FLAG_DEFEATED_LORELEI
# 92 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 93 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 94 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	msgbox PokemonLeague_LoreleisRoom_Text_PostBattle
# 95 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
# 96 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	end

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp::
# 102 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_7
PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_5:
# 110 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_4
PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1:
# 117 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	release
	end

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_2:
# 104 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 105 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LoreleisRoom_EnterNextRoom_Up
# 106 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	waitmovement
# 107 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 108 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_KOGAS_ROOM, 6, 12
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_3:
# 112 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	lock
# 113 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_LoreleisRoom_EnterNextRoom_Up
# 114 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	waitmovement
# 115 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_BRUNOS_ROOM, 6, 12
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_4:
# 110 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_3
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_7:
# 102 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LORELEI, PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_2
	goto PokemonLeague_LoreleisRoom_EventScript_HandleNextRoomWarp_5


# 121 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
PokemonLeague_LoreleisRoom_EnterNextRoom_Up:
# 123 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	walk_up
# 124 "data/maps/PokemonLeague_LoreleisRoom/scripts.pory"
	step_end
