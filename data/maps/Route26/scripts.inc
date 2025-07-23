Route26_MapScripts::
	.byte 0


Route26_Professor_Oak_Battle::
# 5 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PKMN_PROF_PROF_OAK, Route26_Professor_Oak_Battle_Text_0, Route26_Professor_Oak_Battle_Text_1
# 6 "data/maps/Route26/scripts.pory"
	msgbox Route26_Professor_Oak_Battle_Text_2
# 7 "data/maps/Route26/scripts.pory"
	closemessage
# 8 "data/maps/Route26/scripts.pory"
	releaseall
	end


Picknicker_Jamie_Route26_Battle::
# 13 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PICKNICKER_JAMIE_ROUTE26, Picknicker_Jamie_Route26_Battle_Text_0, Picknicker_Jamie_Route26_Battle_Text_1
# 14 "data/maps/Route26/scripts.pory"
	msgbox Picknicker_Jamie_Route26_Battle_Text_2
# 15 "data/maps/Route26/scripts.pory"
	closemessage
# 16 "data/maps/Route26/scripts.pory"
	releaseall
	end


Kanto_Biker_Dialogue::
# 21 "data/maps/Route26/scripts.pory"
	lock
# 22 "data/maps/Route26/scripts.pory"
	msgbox Kanto_Biker_Dialogue_Text_0
# 23 "data/maps/Route26/scripts.pory"
	closemessage
# 24 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 29 "data/maps/Route26/scripts.pory"
	lockall
# 30 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 31 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 32 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 33 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 41 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 42 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 48 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 49 "data/maps/Route26/scripts.pory"
	closemessage
# 50 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 51 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 52 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 34 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 35 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 36 "data/maps/Route26/scripts.pory"
	closemessage
# 37 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 38 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 55 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 56 "data/maps/Route26/scripts.pory"
	closemessage
# 57 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 58 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 44 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 45 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 62 "data/maps/Route26/scripts.pory"
movement_camper1:
# 63 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 64 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 68 "data/maps/Route26/scripts.pory"
	lock
# 69 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 70 "data/maps/Route26/scripts.pory"
	closemessage
# 71 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 77 "data/maps/Route26/scripts.pory"
	lock
# 78 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 79 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 80 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 81 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 82 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 83 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 84 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 85 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 86 "data/maps/Route26/scripts.pory"
	closemessage
# 87 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 88 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 89 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 90 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 91 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 94 "data/maps/Route26/scripts.pory"
	removeobject 1
# 95 "data/maps/Route26/scripts.pory"
	removeobject 2
# 96 "data/maps/Route26/scripts.pory"
	removeobject 3
# 97 "data/maps/Route26/scripts.pory"
	release
	end


# 101 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 102 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 103 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 104 "data/maps/Route26/scripts.pory"
	step_end

# 107 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 108 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 108 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route26/scripts.pory"
	step_end

Route26_Professor_Oak_Battle_Text_0:
# 5 "data/maps/Route26/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "Good to see you.\p"
	.string "Beyond this gate here is the\n"
	.string "ROUTE 28, it leads to MT. SILVER.\p"
	.string "It's home to the toughest\n"
	.string "POKéEMON! But...\p"
	.string "I need to test if you\n"
	.string "have what it takes!$"

Route26_Professor_Oak_Battle_Text_1:
# 5 "data/maps/Route26/scripts.pory"
	.string "So, you are ready...!$"

Route26_Professor_Oak_Battle_Text_2:
# 6 "data/maps/Route26/scripts.pory"
	.string "Very well, {PLAYER}!\n"
	.string "I'd have expected nothing less.\p"
	.string "Please proceed to MT. SILVER!\n"
	.string "Please, take care in your journey!$"

Picknicker_Jamie_Route26_Battle_Text_0:
# 13 "data/maps/Route26/scripts.pory"
	.string "Do you have rare Pokémon from Kanto?\n"
	.string "Show me, show me!$"

Picknicker_Jamie_Route26_Battle_Text_1:
# 13 "data/maps/Route26/scripts.pory"
	.string "Yup, that's definitely a rare Pokémon!$"

Picknicker_Jamie_Route26_Battle_Text_2:
# 14 "data/maps/Route26/scripts.pory"
	.string "It's too bad I don't have a Pokédex.\n"
	.string "I wish I could get one!$"

Kanto_Biker_Dialogue_Text_0:
# 22 "data/maps/Route26/scripts.pory"
	.string "You're from KANTO, aren't you?\p"
	.string "Me too, I'm part of the KANTO RIDER\n"
	.string "FEDERATION!\p"
	.string "It's a shame though, all Pokémon\n"
	.string "on this route aren't considered\n"
	.string "legit by the INDIGO LEAGUE...$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 34 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 35 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 41 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 44 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 48 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 55 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 69 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 83 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 85 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
