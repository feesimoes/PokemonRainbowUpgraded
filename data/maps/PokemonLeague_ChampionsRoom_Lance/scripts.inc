# 1 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 2 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_MapScripts::
# 3 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PokemonLeague_ChampionsRoom_Lance_OnLoad
# 4 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_ChampionsRoom_Lance_OnWarp
# 5 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, PokemonLeague_ChampionsRoom_Lance_OnResume
# 6 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_ChampionsRoom_Lance_OnFrame
# 7 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.byte 0
# 8 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 9 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnResume::
# 10 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_0x8004, 4
# 11 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 12 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerSquirtle
# 13 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerBulbasaur
# 14 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerCharmander
# 15 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 16 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 17 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerSquirtle::
# 18 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_SQUIRTLE, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 19 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_SQUIRTLE, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 20 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	return
# 21 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 22 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerBulbasaur::
# 23 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_BULBASAUR, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 24 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_BULBASAUR, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 25 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	return
# 26 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 27 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_CheckStopTriggerCharmander::
# 28 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_FIRST_CHARMANDER, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 29 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_defeated TRAINER_CHAMPION_REMATCH_CHARMANDER, PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 30 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	return
# 31 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 32 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnWarp::
# 33 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_Lance_EventScript_TurnPlayerNorth
# 34 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.2byte 0
# 35 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 36 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_TurnPlayerNorth::
# 37 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 38 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 39 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 40 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_QuestLogEnd::
# 41 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 42 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	releaseall
# 43 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 44 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 45 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnLoad::
# 46 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 47 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 48 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 49 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger::
# 50 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 51 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	return
# 52 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 53 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnFrame::
# 54 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_Lance_EventScript_EnterRoom
# 55 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.2byte 0
# 56 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 57 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_EnterRoom::
# 58 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	lockall
# 59 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_2
# 61 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Movement_PlayerEnter
# 62 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement 0
# 63 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay 24
# 64 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call PokemonLeague_ChampionsRoom_Lance_EventScript_Intro
# 65 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_questlog PokemonLeague_ChampionsRoom_Lance_EventScript_QuestLogEnd
# 66 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_3
# 67 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_5
# 68 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	savebgm MUS_SLOW_PALLET
# 69 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
    call PokemonLeague_ChampionsRoom_Lance_EventScript_Battle
# 70 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_4
# 71 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	clearflag FLAG_TEMP_5
# 72 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 73 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_4
# 74 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
    call PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle
# 75 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	releaseall
# 76 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 77 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 78 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Movement_PlayerEnter::
# 79 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 80 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 81 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 82 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 83 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 84 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 85 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 86 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 87 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end
# 89 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 90 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Movement_PlayerExit::
# 91 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_16
# 92 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_left
# 93 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 94 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 95 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 96 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_right
# 97 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 98 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 99 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 100 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 101 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_8
# 102 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 103 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro::
# 109 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 110 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	playbgm MUS_LEGEND_TRAINER, FALSE
# 111 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_0
# 112 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_1
# 113 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
	return


PokemonLeague_ChampionsRoom_Lance_EventScript_Battle::
# 119 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_LANCE, PokemonLeague_ChampionsRoom_Lance_EventScript_Battle_Text_0
	return


PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle::
# 125 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 126 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_0
# 127 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_1
# 128 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
# 129 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay 24
# 130 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_LANCE, PokemonLeague_ChampionsRoom_Lance_WalkTowardsHallOfFameDoor
# 131 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 132 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Player_SomberWalkFollow
# 133 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 134 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_2
# 135 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
# 136 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_LANCE, PokemonLeague_ChampionsRoom_Lance_EnterHallOfFameDoor
# 137 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 138 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	playse SE_EXIT
# 139 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitse
# 140 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Player_EnterHallOfFameDoor
# 141 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 142 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	specialvar VAR_RESULT, GetStarterSpecies
# 143 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 144 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME_LANCE, 5, 12
# 145 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitstate
	return


# 148 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_WalkTowardsHallOfFameDoor:
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 151 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	face_down
# 152 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 155 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EnterHallOfFameDoor:
# 157 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 158 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 159 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 162 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Player_SomberWalkFollow:
# 164 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 164 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 164 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 164 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 165 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	face_down
# 166 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_16
# 167 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 170 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Player_EnterHallOfFameDoor:
# 172 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 172 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 172 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 172 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 173 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 174 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_0:
# 111 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "I've been waiting for you...\n"
	.string "{PLAYER}!\p"
	.string "There's no need for words.\n"
	.string "With {RIVAL} gone, you see...\p"
	.string "Our glorious POKéMON LEAGUE... I,\n"
	.string "no, all of us...\p"
	.string "We couldn't just let our\n"
	.string "reputations go to ruin!$"

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_1:
# 112 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "So, you're here, now...\n"
	.string "We will battle.\p"
	.string "As the most powerful TRAINER,\n"
	.string "and POKéMON LEAGUE CHAMPION...\p"
	.string "I, LANCE, DRAGON MASTER,\n"
	.string "accept your challenge, {PLAYER}!$"

PokemonLeague_ChampionsRoom_Lance_EventScript_Battle_Text_0:
# 119 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...It's over.\n"
	.string "But, it's an odd feeling...\p"
	.string "I'm not angry that I lost.\n"
	.string "In fact, I feel happy.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_0:
# 126 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...Whew!\n"
	.string "You've become truly powerful...\p"
	.string "{PLAYER}, your POKéMON responded\n"
	.string "to your upstanding nature.\p"
	.string "As TRAINER, you'll continue to\n"
	.string "grow strong with POKéMON.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_1:
# 127 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "With that being said, it is\n"
	.string "time. {PLAYER}...\p"
	.string "Please, come with me.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_2:
# 134 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...This way, please.$"
