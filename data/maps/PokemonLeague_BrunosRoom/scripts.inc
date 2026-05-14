# 1 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_MapScripts::
# 3 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_BrunosRoom_OnResume
# 4 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_BrunosRoom_OnLoad
# 5 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_BrunosRoom_OnWarp
# 6 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_BrunosRoom_OnFrame
# 7 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 9 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnResume::
# 10 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_DetermineSetVar
# 11 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 13 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 15 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_DetermineSetVar::
# 16 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 2
# 17 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 18 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 19 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 20 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnLoad::
# 21 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_DetermineDoorActions
# 22 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 23 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 2, PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 24 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 25 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 26 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_DetermineDoorActions::
# 27 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_BrunosRoom_EventScript_SetDoorOpen
# 28 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_BrunosRoom_EventScript_CloseEntry
# 29 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 30 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_CloseEntry::
# 32 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_CloseEntry
# 33 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 34 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_SetDoorOpen::
# 36 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpen
# 37 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 38 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnWarp::
# 40 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth
# 41 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 42 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 43 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_TurnPlayerNorth::
# 44 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 45 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 46 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 47 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_OnFrame::
# 48 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 1, PokemonLeague_BrunosRoom_EventScript_EnterRoom
# 49 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	.2byte 0
# 50 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 51 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom::
# 52 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lockall
# 53 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_EnterRoom
# 54 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_EnterRoom2
# 55 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 2
# 56 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	releaseall
# 57 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 58 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 59 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_EnterRoom2::
# 60 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 3
# 61 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	releaseall
# 62 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 63 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 64 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno::
# 65 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 66 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	faceplayer
# 67 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 68 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_Bruno2
# 69 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 70 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 0
# 71 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	famechecker FAMECHECKER_BRUNO, 1
# 72 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Intro
# 73 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 74 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 75 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Battle
# 76 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 77 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno
# 78 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 79 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 80 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Bruno2::
# 81 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_BrunosRoom_EventScript_PostBattle
# 82 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Intro
# 83 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 84 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 85 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_BrunosRoom_EventScript_Rematch
# 86 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 87 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto PokemonLeague_BrunosRoom_EventScript_DefeatedBruno2
# 88 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 89 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 90 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Intro::
# 91 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_Intro
# 92 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 93 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 94 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_RematchIntro::
# 95 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_RematchIntro
# 96 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 97 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 98 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Battle::
# 99 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO, PokemonLeague_BrunosRoom_Text_Defeat
# 100 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 101 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 102 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_Rematch::
# 103 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_BRUNO_2, PokemonLeague_BrunosRoom_Text_Defeat
# 104 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 105 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 106 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_PostBattle::
# 107 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 108 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 109 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 110 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 111 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 112 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 113 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 114 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 115 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 116 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno::
# 117 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_BRUNO
# 118 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 119 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 120 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 121 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 122 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 123 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 124 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 125 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 126 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 127 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 128 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_DefeatedBruno2::
# 129 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setflag FLAG_DEFEATED_AGATHA
# 130 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoor
# 131 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	msgbox PokemonLeague_BrunosRoom_Text_PostBattle
# 132 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	closemessage
# 133 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight
# 134 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft
# 135 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 136 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown
# 137 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
# 138 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	end
# 139 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 140 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayLeft::
# 141 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterLeft
# 142 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 143 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 144 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 145 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayRight::
# 146 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterRight
# 147 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 148 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return
# 149 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"

# 150 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EventScript_BrunoLookAwayDown::
# 151 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_BRUNO, Common_Movement_WalkInPlaceFasterDown
# 152 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement 0
# 153 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	return

PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp::
# 158 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_7
PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_5:
# 166 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_unset FLAG_SYS_GAME_CLEAR, PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_4
PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_1:
# 173 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	release
	end

PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_2:
# 160 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 161 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_BrunosRoom_EnterNextRoom_Up
# 162 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement
# 163 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 164 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_KARENS_ROOM, 6, 21
	goto PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_3:
# 168 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	lock
# 169 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_BrunosRoom_EnterNextRoom_Up
# 170 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	waitmovement
# 171 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	warp MAP_POKEMON_LEAGUE_AGATHAS_ROOM, 6, 12
	goto PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_4:
# 166 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_BRUNO, PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_3
	goto PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_1

PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_7:
# 158 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_AGATHA, PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_2
	goto PokemonLeague_BrunosRoom_EventScript_HandleNextRoomWarp_5


# 177 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
PokemonLeague_BrunosRoom_EnterNextRoom_Up:
# 179 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	walk_up
# 180 "data/maps/PokemonLeague_BrunosRoom/scripts.pory"
	step_end
