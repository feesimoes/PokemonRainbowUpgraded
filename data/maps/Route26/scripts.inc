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


Kanto_Biker_Dialogue::
# 13 "data/maps/Route26/scripts.pory"
	lock
# 14 "data/maps/Route26/scripts.pory"
	msgbox Kanto_Biker_Dialogue_Text_0
# 15 "data/maps/Route26/scripts.pory"
	closemessage
# 16 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 21 "data/maps/Route26/scripts.pory"
	lockall
# 22 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 23 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 24 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 25 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 33 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 34 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 40 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 41 "data/maps/Route26/scripts.pory"
	closemessage
# 42 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 43 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 44 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 26 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 27 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 28 "data/maps/Route26/scripts.pory"
	closemessage
# 29 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 30 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 47 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 48 "data/maps/Route26/scripts.pory"
	closemessage
# 49 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 50 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 36 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 37 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 54 "data/maps/Route26/scripts.pory"
movement_camper1:
# 55 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 56 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 60 "data/maps/Route26/scripts.pory"
	lock
# 61 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 62 "data/maps/Route26/scripts.pory"
	closemessage
# 63 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 69 "data/maps/Route26/scripts.pory"
	lock
# 70 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 71 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 72 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 73 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 74 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 75 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 76 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 78 "data/maps/Route26/scripts.pory"
	closemessage
# 79 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 80 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 81 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 82 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 83 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 86 "data/maps/Route26/scripts.pory"
	removeobject 1
# 87 "data/maps/Route26/scripts.pory"
	removeobject 2
# 88 "data/maps/Route26/scripts.pory"
	removeobject 3
# 89 "data/maps/Route26/scripts.pory"
	release
	end


# 93 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 94 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 95 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 96 "data/maps/Route26/scripts.pory"
	step_end

# 99 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 100 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 100 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 101 "data/maps/Route26/scripts.pory"
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

Kanto_Biker_Dialogue_Text_0:
# 14 "data/maps/Route26/scripts.pory"
	.string "You're from KANTO, aren't you?\p"
	.string "Me too, I'm part of the KANTO RIDER\n"
	.string "FEDERATION!\p"
	.string "It's a shame though, all Pokémon\n"
	.string "on this route aren't considered\n"
	.string "legit by the INDIGO LEAGUE...$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 26 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 27 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 33 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 36 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 40 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 47 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 61 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 75 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 77 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
