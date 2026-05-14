# 1 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 2 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_MapScripts::
# 3 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_KarensRoom_OnResume
# 4 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_KarensRoom_OnLoad
# 5 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_KarensRoom_OnWarp
# 6 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_KarensRoom_OnFrame
# 7 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 9 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_OnResume::
# 10 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setvar VAR_0x8004, 3
# 11 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 13 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 14 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_OnLoad::
# 15 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call_if_eq VAR_MAP_SCENE_POKEMON_LEAGUE, 4, PokemonLeague_KarensRoom_EventScript_CloseEntry
# 16 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call_if_set FLAG_DEFEATED_LANCE, PokemonLeague_KarensRoom_EventScript_SetDoorOpen
# 17 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 18 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 19 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_CloseEntry::
# 20 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_KarensRoom_EventScript_SetEntryClosed
# 21 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	return
# 22 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 23 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_SetDoorOpen::
# 24 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_EventScript_SetDoorOpenLance
# 25 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 27 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_OnWarp::
# 28 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_KarensRoom_EventScript_TurnPlayerNorth
# 29 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.2byte 0
# 30 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 31 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_TurnPlayerNorth::
# 32 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 33 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 34 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 35 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_OnFrame::
# 36 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	map_script_2 VAR_MAP_SCENE_POKEMON_LEAGUE, 3, PokemonLeague_KarensRoom_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 39 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setflag FLAG_TEMP_2
# 42 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 4
# 43 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	releaseall
# 44 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 45 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 46 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_SetEntryClosed::
# 47 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	return
# 48 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 49 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_Movement_WalkThroughCorridor::
# 50 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	walk_up
# 51 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	step_end
# 52 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 53 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_Agatha::
# 54 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	lock
# 55 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	faceplayer
# 56 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 57 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	goto_if_set FLAG_DEFEATED_LANCE, PokemonLeague_KarensRoom_EventScript_PostBattle
# 58 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_KarensRoom_EventScript_RematchIntro
# 59 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setflag FLAG_TEMP_3
# 60 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setflag FLAG_TEMP_5
# 61 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_KarensRoom_EventScript_Battle
# 62 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	clearflag FLAG_TEMP_5
# 63 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	goto PokemonLeague_KarensRoom_EventScript_Defeated
# 64 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 65 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 66 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_RematchIntro::
# 67 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_RematchIntro
# 68 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	return
# 69 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 70 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_Battle::
# 71 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	trainerbattle_no_intro TRAINER_ELITE_FOUR_AGATHA_2, PokemonLeague_KarensRoom_Agatha_Text_Defeat
# 72 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	return
# 73 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 74 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_PostBattle::
# 75 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_PostBattle
# 76 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	release
# 77 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end
# 78 "data/maps/PokemonLeague_KarensRoom/scripts.pory"

# 79 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_EventScript_Defeated::
# 80 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 81 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setvar VAR_0x8004, 0
# 82 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	special Script_TryGainNewFanFromCounter
# 83 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	setflag FLAG_DEFEATED_LANCE
# 84 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	call PokemonLeague_EventScript_OpenDoorLance
# 85 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_PostBattle
# 86 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	closemessage
# 87 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	release
# 88 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	end

PokemonLeague_KarensRoom_DontWanderOff::
# 94 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	lock
# 95 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 96 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_DontWanderOff_Text_0
# 97 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	waitmessage
# 98 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	closemessage
# 99 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_KarensRoom_Player_Face_Left
# 100 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	waitmovement
# 101 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_KarensRoom_Player_Emote
# 102 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	waitmovement
# 103 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 104 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_DontWanderOff_Text_1
# 105 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 106 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	closemessage
# 107 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	release
	end


# 111 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_Player_Face_Left:
# 113 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	face_left
# 114 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	step_end

# 117 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
PokemonLeague_KarensRoom_Player_Emote:
# 119 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	emote_exclamation_mark
# 120 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	step_end

PokemonLeague_KarensRoom_Agatha_Text_RematchIntro::
# 125 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_RematchIntro_Text_0
	end


PokemonLeague_KarensRoom_Agatha_Text_Defeat::
# 131 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_Defeat_Text_0
	end


PokemonLeague_KarensRoom_Agatha_Text_PostBattle::
# 137 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	msgbox PokemonLeague_KarensRoom_Agatha_Text_PostBattle_Text_0
	end


PokemonLeague_KarensRoom_DontWanderOff_Text_0:
# 96 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.string "INDIGO PLATEAU\n"
	.string "The ultimate goal of TRAINERS!\p"
	.string "POKéMON LEAGUE HQ$"

PokemonLeague_KarensRoom_DontWanderOff_Text_1:
# 104 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.string "{PLAYER}...!\n"
	.string "Hello...?\p"
	.string "...Get on with it already!\n"
	.string "...I don't have forever, here!\p"
	.string "Oof!\n"
	.string "My back...!\p"
	.string "...Hurry up already!$"

PokemonLeague_KarensRoom_Agatha_Text_RematchIntro_Text_0:
# 125 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.string "So, we meet again...\p"
	.string "Show me what you've got!$"

PokemonLeague_KarensRoom_Agatha_Text_Defeat_Text_0:
# 131 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.string "Impressive...\p"
	.string "You've grown stronger.$"

PokemonLeague_KarensRoom_Agatha_Text_PostBattle_Text_0:
# 137 "data/maps/PokemonLeague_KarensRoom/scripts.pory"
	.string "Well done, Trainer.\p"
	.string "You've earned this.$"
