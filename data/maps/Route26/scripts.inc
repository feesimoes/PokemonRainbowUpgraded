Route26_MapScripts::
	.byte 0


Route26_Professor_Oak_Battle::
# 5 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PKMN_PROF_PROF_OAK, Route26_Professor_Oak_Battle_Text_0, Route26_Professor_Oak_Battle_Text_1
# 6 "data/maps/Route26/scripts.pory"
	msgbox Route26_Professor_Oak_Battle_Text_2
# 7 "data/maps/Route26/scripts.pory"
	setflag FLAG_HIDE_PROF_OAK_RT26
# 8 "data/maps/Route26/scripts.pory"
	closemessage
# 9 "data/maps/Route26/scripts.pory"
	releaseall
	end


Picknicker_Jamie_Route26_Battle::
# 14 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PICKNICKER_JAMIE_ROUTE26, Picknicker_Jamie_Route26_Battle_Text_0, Picknicker_Jamie_Route26_Battle_Text_1
# 15 "data/maps/Route26/scripts.pory"
	msgbox Picknicker_Jamie_Route26_Battle_Text_2
# 16 "data/maps/Route26/scripts.pory"
	closemessage
# 17 "data/maps/Route26/scripts.pory"
	releaseall
	end


Kanto_Biker_Dialogue::
# 22 "data/maps/Route26/scripts.pory"
	lock
# 23 "data/maps/Route26/scripts.pory"
	msgbox Kanto_Biker_Dialogue_Text_0
# 24 "data/maps/Route26/scripts.pory"
	closemessage
# 25 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 30 "data/maps/Route26/scripts.pory"
	lockall
# 31 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 32 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 33 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 42 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 43 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 49 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 50 "data/maps/Route26/scripts.pory"
	closemessage
# 51 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 52 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 53 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 35 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 36 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 37 "data/maps/Route26/scripts.pory"
	closemessage
# 38 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 39 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 56 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 57 "data/maps/Route26/scripts.pory"
	closemessage
# 58 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 59 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 45 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 46 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 63 "data/maps/Route26/scripts.pory"
movement_camper1:
# 64 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 65 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 69 "data/maps/Route26/scripts.pory"
	lock
# 70 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 71 "data/maps/Route26/scripts.pory"
	closemessage
# 72 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 78 "data/maps/Route26/scripts.pory"
	lock
# 79 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 80 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 81 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 82 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 83 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 84 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 85 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 87 "data/maps/Route26/scripts.pory"
	closemessage
# 88 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 89 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 90 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 91 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 92 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 94 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 95 "data/maps/Route26/scripts.pory"
	removeobject 1
# 96 "data/maps/Route26/scripts.pory"
	removeobject 2
# 97 "data/maps/Route26/scripts.pory"
	removeobject 3
# 98 "data/maps/Route26/scripts.pory"
	release
	end


# 102 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 103 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 104 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 105 "data/maps/Route26/scripts.pory"
	step_end

# 108 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 109 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 109 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 110 "data/maps/Route26/scripts.pory"
	step_end

Route26_Professor_Oak_Battle_Text_0:
# 5 "data/maps/Route26/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "Good to see you.\p"
	.string "Beyond this gate here is the\n"
	.string "ROUTE 28, it leads to MT. SILVER.\p"
	.string "It's home to the toughest\n"
	.string "POKéMON! But...\p"
	.string "I need to test if you\n"
	.string "have what it takes!$"

Route26_Professor_Oak_Battle_Text_1:
# 5 "data/maps/Route26/scripts.pory"
	.string "Hm, so... you are ready!$"

Route26_Professor_Oak_Battle_Text_2:
# 6 "data/maps/Route26/scripts.pory"
	.string "Please proceed to MT. SILVER!\n"
	.string "Take care in your journey!$"

Picknicker_Jamie_Route26_Battle_Text_0:
# 14 "data/maps/Route26/scripts.pory"
	.string "Do you have rare Pokémon from Kanto?\n"
	.string "Show me, show me!$"

Picknicker_Jamie_Route26_Battle_Text_1:
# 14 "data/maps/Route26/scripts.pory"
	.string "Yup, that's definitely a rare Pokémon!$"

Picknicker_Jamie_Route26_Battle_Text_2:
# 15 "data/maps/Route26/scripts.pory"
	.string "It's too bad I don't have a Pokédex.\n"
	.string "I wish I could get one!$"

Kanto_Biker_Dialogue_Text_0:
# 23 "data/maps/Route26/scripts.pory"
	.string "You're from KANTO, aren't you?\p"
	.string "Me too, I'm part of the KANTO RIDER\n"
	.string "FEDERATION!\p"
	.string "It's a shame though, all Pokémon\n"
	.string "on this route aren't considered\n"
	.string "legit by the INDIGO LEAGUE...$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 35 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 36 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 42 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 45 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 49 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 56 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 70 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 84 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 86 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
