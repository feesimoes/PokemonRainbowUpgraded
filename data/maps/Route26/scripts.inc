Route26_MapScripts::
	.byte 0


Picknicker_Jamie_Route26_Battle::
# 5 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PICKNICKER_JAMIE_ROUTE26, Picknicker_Jamie_Route26_Battle_Text_0, Picknicker_Jamie_Route26_Battle_Text_1
# 6 "data/maps/Route26/scripts.pory"
	msgbox Picknicker_Jamie_Route26_Battle_Text_2
# 7 "data/maps/Route26/scripts.pory"
	closemessage
# 8 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 13 "data/maps/Route26/scripts.pory"
	lockall
# 14 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 15 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 16 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 25 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 26 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 32 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 33 "data/maps/Route26/scripts.pory"
	closemessage
# 34 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 35 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 36 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 18 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 19 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 20 "data/maps/Route26/scripts.pory"
	closemessage
# 21 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 22 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 39 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 40 "data/maps/Route26/scripts.pory"
	closemessage
# 41 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 42 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 28 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 29 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 46 "data/maps/Route26/scripts.pory"
movement_camper1:
# 47 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 48 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 52 "data/maps/Route26/scripts.pory"
	lock
# 53 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 54 "data/maps/Route26/scripts.pory"
	closemessage
# 55 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 61 "data/maps/Route26/scripts.pory"
	lock
# 62 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 63 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 64 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 65 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 66 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 67 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 68 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 70 "data/maps/Route26/scripts.pory"
	closemessage
# 71 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 72 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 73 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 74 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 75 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 78 "data/maps/Route26/scripts.pory"
	removeobject 1
# 79 "data/maps/Route26/scripts.pory"
	removeobject 2
# 80 "data/maps/Route26/scripts.pory"
	removeobject 3
# 81 "data/maps/Route26/scripts.pory"
	release
	end


# 85 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 86 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 87 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 88 "data/maps/Route26/scripts.pory"
	step_end

# 91 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 92 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 92 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 93 "data/maps/Route26/scripts.pory"
	step_end

Picknicker_Jamie_Route26_Battle_Text_0:
# 5 "data/maps/Route26/scripts.pory"
	.string "Do you have rare Pokémon from Kanto?\n"
	.string "Show me, show me!$"

Picknicker_Jamie_Route26_Battle_Text_1:
# 5 "data/maps/Route26/scripts.pory"
	.string "Yup, that's definitely a rare Pokémon!$"

Picknicker_Jamie_Route26_Battle_Text_2:
# 6 "data/maps/Route26/scripts.pory"
	.string "It's too bad I don't have a Pokédex.\n"
	.string "I wish I could get one!$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 18 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 19 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 25 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 28 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 32 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 39 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 53 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 67 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 69 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
