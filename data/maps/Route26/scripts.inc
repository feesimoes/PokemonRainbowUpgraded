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
	fadescreen FADE_TO_BLACK
# 9 "data/maps/Route26/scripts.pory"
	removeobject LOCALID_PROF_OAK_RT26
# 10 "data/maps/Route26/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 11 "data/maps/Route26/scripts.pory"
	closemessage
# 12 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Reception_Sign::
# 17 "data/maps/Route26/scripts.pory"
	msgbox Route26_Reception_Sign_Text_0
# 18 "data/maps/Route26/scripts.pory"
	closemessage
# 19 "data/maps/Route26/scripts.pory"
	releaseall
	end


Picknicker_Jamie_Route26_Battle::
# 24 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_PICKNICKER_JAMIE_ROUTE26, Picknicker_Jamie_Route26_Battle_Text_0, Picknicker_Jamie_Route26_Battle_Text_1
# 25 "data/maps/Route26/scripts.pory"
	msgbox Picknicker_Jamie_Route26_Battle_Text_2
# 26 "data/maps/Route26/scripts.pory"
	closemessage
# 27 "data/maps/Route26/scripts.pory"
	releaseall
	end


Kanto_Biker_Dialogue::
# 32 "data/maps/Route26/scripts.pory"
	lock
# 33 "data/maps/Route26/scripts.pory"
	msgbox Kanto_Biker_Dialogue_Text_0
# 34 "data/maps/Route26/scripts.pory"
	closemessage
# 35 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 40 "data/maps/Route26/scripts.pory"
	lockall
# 41 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 42 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 43 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 44 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 52 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 53 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 59 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 60 "data/maps/Route26/scripts.pory"
	closemessage
# 61 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 62 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 63 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 45 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 46 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 47 "data/maps/Route26/scripts.pory"
	closemessage
# 48 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 49 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 66 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 67 "data/maps/Route26/scripts.pory"
	closemessage
# 68 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 69 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 55 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 56 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 73 "data/maps/Route26/scripts.pory"
movement_camper1:
# 74 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 75 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 79 "data/maps/Route26/scripts.pory"
	lock
# 80 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 81 "data/maps/Route26/scripts.pory"
	closemessage
# 82 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 88 "data/maps/Route26/scripts.pory"
	lock
# 89 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 90 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 91 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 92 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 93 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 94 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 95 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 96 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 97 "data/maps/Route26/scripts.pory"
	closemessage
# 98 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 99 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 100 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 101 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 102 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 105 "data/maps/Route26/scripts.pory"
	removeobject 1
# 106 "data/maps/Route26/scripts.pory"
	removeobject 2
# 107 "data/maps/Route26/scripts.pory"
	removeobject 3
# 108 "data/maps/Route26/scripts.pory"
	release
	end


# 112 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 113 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 114 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 115 "data/maps/Route26/scripts.pory"
	step_end

# 118 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 119 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 119 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 119 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 119 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 119 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 120 "data/maps/Route26/scripts.pory"
	step_end

Route26_Professor_Oak_Battle_Text_0:
# 5 "data/maps/Route26/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "Good to see you.\p"
	.string "Beyond this gate here is\n"
	.string "ROUTE 28, it leads to MT. SILVER.\p"
	.string "It's home to the toughest\n"
	.string "and rarest POKéMON!\p"
	.string "But... I need to test your\n"
	.string "skills! Do you have what it takes?$"

Route26_Professor_Oak_Battle_Text_1:
# 5 "data/maps/Route26/scripts.pory"
	.string "Hm... so, you are ready!$"

Route26_Professor_Oak_Battle_Text_2:
# 6 "data/maps/Route26/scripts.pory"
	.string "Please proceed to MT. SILVER!\n"
	.string "Take care in your journey!\p"
	.string "I'll be back at the LAB.\n"
	.string "Do check in sometime!$"

Route26_Reception_Sign_Text_0:
# 17 "data/maps/Route26/scripts.pory"
	.string "POKEMON LEAGUE RECEPTION GATE\n"
	.string "ROUTE 28 - MT. SILVER$"

Picknicker_Jamie_Route26_Battle_Text_0:
# 24 "data/maps/Route26/scripts.pory"
	.string "Do you have rare POKéMON from Kanto?\n"
	.string "Show me, show me!$"

Picknicker_Jamie_Route26_Battle_Text_1:
# 24 "data/maps/Route26/scripts.pory"
	.string "Yup, that's definitely a rare POKéMON!$"

Picknicker_Jamie_Route26_Battle_Text_2:
# 25 "data/maps/Route26/scripts.pory"
	.string "It's too bad I don't have a POKéDEX.\n"
	.string "I wish I could get one!$"

Kanto_Biker_Dialogue_Text_0:
# 33 "data/maps/Route26/scripts.pory"
	.string "You're from KANTO, aren't you?\n"
	.string "Me too, I'm part of the KANTO RIDERS!\p"
	.string "It's a shame though, all POKéMON\n"
	.string "on this route aren't legit?\p"
	.string "The INDIGO LEAGUE said so,\n"
	.string "or something like that.$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 45 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 46 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 52 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 55 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 59 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 66 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 80 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 94 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 96 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
