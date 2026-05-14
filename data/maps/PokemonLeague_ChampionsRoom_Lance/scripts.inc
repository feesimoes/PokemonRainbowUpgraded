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
PokemonLeague_ChampionsRoom_Lance_EventScript_TurnPlayerNorth::
# 10 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 11 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 12 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 13 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_QuestLogEnd::
# 14 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger
# 15 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	releaseall
# 16 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 17 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 18 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_StopSceneTrigger::
# 19 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 20 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	return
# 21 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 22 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnLoad::
# 23 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 0
# 24 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 25 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 26 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnResume::
# 27 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_0x8004, 4
# 28 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call PokemonLeague_EventScript_DoLightingEffect
# 29 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 30 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 31 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnWarp::
# 32 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_Lance_EventScript_TurnPlayerNorth
# 33 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.2byte 0
# 34 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 35 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_OnFrame::
# 36 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_ChampionsRoom_Lance_EventScript_EnterRoom
# 37 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.2byte 0
# 38 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 39 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EventScript_EnterRoom::
# 40 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	lockall
# 41 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 42 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_2
# 43 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Movement_PlayerEnter
# 44 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement 0
# 45 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay 20
# 46 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	playbgm MUS_LEGEND_TRAINER, FALSE
# 47 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call_if_unset FLAG_JOHTO_QUEST_COMPLETED, PokemonLeague_ChampionsRoom_Lance_EventScript_Intro
# 48 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	call_if_set FLAG_JOHTO_QUEST_COMPLETED, PokemonLeague_ChampionsRoom_Lance_EventScript_Intro
# 49 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	goto_if_questlog PokemonLeague_ChampionsRoom_Lance_EventScript_QuestLogEnd
# 50 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_3
# 51 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_5
# 52 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	savebgm MUS_SLOW_PALLET
# 53 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
    call PokemonLeague_ChampionsRoom_Lance_EventScript_Battle
# 54 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_4
# 55 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	clearflag FLAG_TEMP_5
# 56 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_DEFEATED_CHAMP
# 57 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setflag FLAG_TEMP_4
# 58 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
    call PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle
# 59 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	releaseall
# 60 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	end
# 61 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 62 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Movement_PlayerEnter::
# 63 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 64 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 65 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 66 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 67 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 68 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 69 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 70 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 71 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 72 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 73 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end
# 74 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"

# 75 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Movement_PlayerExit::
# 76 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_16
# 77 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_left
# 78 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 79 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 80 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 81 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_right
# 82 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 83 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 84 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 85 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 86 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_8
# 87 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 88 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 89 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro::
# 95 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 96 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	playbgm MUS_LEGEND_TRAINER, FALSE
# 97 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_0
# 98 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_1
# 99 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
	return


PokemonLeague_ChampionsRoom_Lance_EventScript_Battle::
# 105 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	trainerbattle_no_intro TRAINER_CHAMPION_LANCE, PokemonLeague_ChampionsRoom_Lance_EventScript_Battle_Text_0
	return


PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle::
# 111 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 112 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_0
# 113 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_1
# 114 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
# 115 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay 24
# 116 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_LANCE, PokemonLeague_ChampionsRoom_Lance_WalkTowardsHallOfFameDoor
# 117 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 118 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Player_SomberWalkFollow
# 119 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 120 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	msgbox PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_2
# 121 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	closemessage
# 122 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_CHAMPIONS_ROOM_LANCE, PokemonLeague_ChampionsRoom_Lance_EnterHallOfFameDoor
# 123 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 124 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	playse SE_EXIT
# 125 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitse
# 126 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_ChampionsRoom_Lance_Player_EnterHallOfFameDoor
# 127 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitmovement
# 128 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	specialvar VAR_RESULT, GetStarterSpecies
# 129 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 130 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	warp MAP_POKEMON_LEAGUE_HALL_OF_FAME_LANCE, 5, 12
# 131 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	waitstate
	return


# 134 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_WalkTowardsHallOfFameDoor:
# 136 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 136 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 136 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 136 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 137 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	face_down
# 138 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 141 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_EnterHallOfFameDoor:
# 143 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 144 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 145 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 148 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Player_SomberWalkFollow:
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 150 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_slow_up
# 151 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	face_down
# 152 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	delay_16
# 153 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

# 156 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
PokemonLeague_ChampionsRoom_Lance_Player_EnterHallOfFameDoor:
# 158 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 158 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 158 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 158 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	walk_up
# 159 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	set_invisible
# 160 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	step_end

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_0:
# 97 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "I've been waiting for you...\n"
	.string "{PLAYER}!\p"
	.string "There's no need for words.\n"
	.string "With {RIVAL} gone, you see...\p"
	.string "Our glorious POKéMON LEAGUE... I,\n"
	.string "no, all of us...\p"
	.string "We couldn't just let our\n"
	.string "reputations go to ruin!$"

PokemonLeague_ChampionsRoom_Lance_EventScript_Intro_Text_1:
# 98 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "So, you're here, now...\n"
	.string "We will battle.\p"
	.string "As the most powerful TRAINER,\n"
	.string "and POKéMON LEAGUE CHAMPION...\p"
	.string "I, LANCE, DRAGON MASTER,\n"
	.string "accept your challenge, {PLAYER}!$"

PokemonLeague_ChampionsRoom_Lance_EventScript_Battle_Text_0:
# 105 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...It's over.\n"
	.string "But, it's an odd feeling...\p"
	.string "I'm not angry that I lost.\n"
	.string "In fact, I feel happy.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_0:
# 112 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...Whew!\n"
	.string "You've become truly powerful...\p"
	.string "{PLAYER}, your POKéMON responded\n"
	.string "to your upstanding nature.\p"
	.string "As TRAINER, you'll continue to\n"
	.string "grow strong with POKéMON.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_1:
# 113 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "With that being said, it is\n"
	.string "time. {PLAYER}...\p"
	.string "Please, come with me.$"

PokemonLeague_ChampionsRoom_Lance_EventScript_PostBattle_Text_2:
# 120 "data/maps/PokemonLeague_ChampionsRoom_Lance/scripts.pory"
	.string "...This way, please.$"
