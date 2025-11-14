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


Route26_Kanto_Biker_Dialogue::
# 32 "data/maps/Route26/scripts.pory"
	lock
# 33 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_route26_npc_face_player
# 34 "data/maps/Route26/scripts.pory"
	msgbox Route26_Kanto_Biker_Dialogue_Text_0
# 35 "data/maps/Route26/scripts.pory"
	closemessage
# 36 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_BlackBelt_Dialogue::
# 41 "data/maps/Route26/scripts.pory"
	lock
# 42 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_route26_npc_face_player
# 43 "data/maps/Route26/scripts.pory"
	msgbox Route26_BlackBelt_Dialogue_Text_0
# 44 "data/maps/Route26/scripts.pory"
	closemessage
# 45 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Hiker_Dialogue::
# 50 "data/maps/Route26/scripts.pory"
	lock
# 51 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_route26_npc_face_player
# 52 "data/maps/Route26/scripts.pory"
	msgbox Route26_Hiker_Dialogue_Text_0
# 53 "data/maps/Route26/scripts.pory"
	closemessage
# 54 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Path_Sign::
# 59 "data/maps/Route26/scripts.pory"
	msgbox Route26_Path_Sign_Text_0
# 60 "data/maps/Route26/scripts.pory"
	closemessage
# 61 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Move_Reminder_Sign::
# 66 "data/maps/Route26/scripts.pory"
	msgbox Route26_Move_Reminder_Sign_Text_0
# 67 "data/maps/Route26/scripts.pory"
	closemessage
# 68 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Deep_Youngster_Dialogue::
# 73 "data/maps/Route26/scripts.pory"
	lock
# 74 "data/maps/Route26/scripts.pory"
	applymovement 9, movement_route26_npc_face_player
# 75 "data/maps/Route26/scripts.pory"
	msgbox Route26_Deep_Youngster_Dialogue_Text_0
# 76 "data/maps/Route26/scripts.pory"
	closemessage
# 77 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Deep_Lass_Dialogue::
# 82 "data/maps/Route26/scripts.pory"
	lock
# 83 "data/maps/Route26/scripts.pory"
	applymovement 5, movement_route26_npc_face_player
# 84 "data/maps/Route26/scripts.pory"
	msgbox Route26_Deep_Lass_Dialogue_Text_0
# 85 "data/maps/Route26/scripts.pory"
	closemessage
# 86 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Old_Man_Dialogue::
# 91 "data/maps/Route26/scripts.pory"
	lock
# 92 "data/maps/Route26/scripts.pory"
	applymovement 10, movement_route26_npc_face_player
# 93 "data/maps/Route26/scripts.pory"
	msgbox Route26_Old_Man_Dialogue_Text_0
# 94 "data/maps/Route26/scripts.pory"
	closemessage
# 95 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_Fisher_Dialogue::
# 100 "data/maps/Route26/scripts.pory"
	lock
# 101 "data/maps/Route26/scripts.pory"
	applymovement 6, movement_route26_npc_face_player
# 102 "data/maps/Route26/scripts.pory"
	msgbox Route26_Fisher_Dialogue_Text_0
# 103 "data/maps/Route26/scripts.pory"
	closemessage
# 104 "data/maps/Route26/scripts.pory"
	releaseall
	end


Fisherman_Jacob_Route26_Battle::
# 109 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_JACOB, Fisherman_Jacob_Route26_Battle_Text_0, Fisherman_Jacob_Route26_Battle_Text_1
# 110 "data/maps/Route26/scripts.pory"
	msgbox Fisherman_Jacob_Route26_Battle_Text_2
# 111 "data/maps/Route26/scripts.pory"
	closemessage
# 112 "data/maps/Route26/scripts.pory"
	releaseall
	end


Fisherman_Bradley_Route26_Battle::
# 117 "data/maps/Route26/scripts.pory"
	trainerbattle_single TRAINER_FISHERMAN_BRADLEY, Fisherman_Bradley_Route26_Battle_Text_0, Fisherman_Bradley_Route26_Battle_Text_1
# 118 "data/maps/Route26/scripts.pory"
	msgbox Fisherman_Bradley_Route26_Battle_Text_2
# 119 "data/maps/Route26/scripts.pory"
	closemessage
# 120 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 125 "data/maps/Route26/scripts.pory"
	lockall
# 126 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 127 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 128 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 137 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 138 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 144 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 145 "data/maps/Route26/scripts.pory"
	closemessage
# 146 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 147 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 148 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 130 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 131 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 132 "data/maps/Route26/scripts.pory"
	closemessage
# 133 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 134 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 151 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 152 "data/maps/Route26/scripts.pory"
	closemessage
# 153 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 154 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 140 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 141 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 158 "data/maps/Route26/scripts.pory"
movement_camper1:
# 159 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 160 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 164 "data/maps/Route26/scripts.pory"
	lock
# 165 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 166 "data/maps/Route26/scripts.pory"
	closemessage
# 167 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 173 "data/maps/Route26/scripts.pory"
	lock
# 174 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 175 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 176 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 177 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 178 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 179 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 180 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 181 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 182 "data/maps/Route26/scripts.pory"
	closemessage
# 183 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 184 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 185 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 186 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 187 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 190 "data/maps/Route26/scripts.pory"
	removeobject 1
# 191 "data/maps/Route26/scripts.pory"
	removeobject 2
# 192 "data/maps/Route26/scripts.pory"
	removeobject 3
# 193 "data/maps/Route26/scripts.pory"
	release
	end


# 197 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 198 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 199 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 200 "data/maps/Route26/scripts.pory"
	step_end

# 203 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 204 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 204 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 204 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 204 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 204 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 205 "data/maps/Route26/scripts.pory"
	step_end

# 208 "data/maps/Route26/scripts.pory"
movement_route26_npc_face_player:
# 209 "data/maps/Route26/scripts.pory"
	face_player
# 210 "data/maps/Route26/scripts.pory"
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
	.string "POKéMON LEAGUE RECEPTION GATE\n"
	.string "ROUTE 28 - MT. SILVER$"

Picknicker_Jamie_Route26_Battle_Text_0:
# 24 "data/maps/Route26/scripts.pory"
	.string "Do you have rare POKéMON?\n"
	.string "Show me, show me!$"

Picknicker_Jamie_Route26_Battle_Text_1:
# 24 "data/maps/Route26/scripts.pory"
	.string "Yup, that's definitely a rare POKéMON!$"

Picknicker_Jamie_Route26_Battle_Text_2:
# 25 "data/maps/Route26/scripts.pory"
	.string "It's too bad I don't have a POKéDEX.\n"
	.string "I wish I could get one!$"

Route26_Kanto_Biker_Dialogue_Text_0:
# 34 "data/maps/Route26/scripts.pory"
	.string "You're from KANTO, aren't you?\n"
	.string "Me too!\p"
	.string "It's a shame though, POKéMON\n"
	.string "on this route aren't legit?\p"
	.string "INDIGO LEAGUE said so,\n"
	.string "or something...$"

Route26_BlackBelt_Dialogue_Text_0:
# 43 "data/maps/Route26/scripts.pory"
	.string "Ahem!\n"
	.string "I have yet but a simple goal...\p"
	.string "To strike terror into rocks!\n"
	.string "...If they had emotion, that is.$"

Route26_Hiker_Dialogue_Text_0:
# 52 "data/maps/Route26/scripts.pory"
	.string "'Ello! Watch your step.\n"
	.string "Bit of a rocky road here!\p"
	.string "Yet, the view's beautiful!$"

Route26_Path_Sign_Text_0:
# 59 "data/maps/Route26/scripts.pory"
	.string "ROUTE 26\n"
	.string "A sloping mountain path to sea.$"

Route26_Move_Reminder_Sign_Text_0:
# 66 "data/maps/Route26/scripts.pory"
	.string "MOVE REMINDER'S HOUSE\n"
	.string "Special licensed POKéMON tutor.$"

Route26_Deep_Youngster_Dialogue_Text_0:
# 75 "data/maps/Route26/scripts.pory"
	.string "I'm not like the others!\n"
	.string "I wear shorts for comfort...\p"
	.string "But even a kid like me knows\n"
	.string "to draw the line at winter!$"

Route26_Deep_Lass_Dialogue_Text_0:
# 84 "data/maps/Route26/scripts.pory"
	.string "Is it wise to try your best?\n"
	.string "If you fail, you may regret it...\p"
	.string "Perhaps, conserving energy is\n"
	.string "the way to go...\p"
	.string "Slow and steady wins the race.$"

Route26_Old_Man_Dialogue_Text_0:
# 93 "data/maps/Route26/scripts.pory"
	.string "Earth...\n"
	.string "Water...\p"
	.string "Ohoho... both coexist for life...\n"
	.string "Perfectly balanced, as should be.$"

Route26_Fisher_Dialogue_Text_0:
# 102 "data/maps/Route26/scripts.pory"
	.string "I enjoy dropping by the\n"
	.string "ocean to reel in fish!\p"
	.string "The trek back uphill is\n"
	.string "a bit rough, though...$"

Fisherman_Jacob_Route26_Battle_Text_0:
# 109 "data/maps/Route26/scripts.pory"
	.string "I have better POKéMON than\n"
	.string "you, kiddo!$"

Fisherman_Jacob_Route26_Battle_Text_1:
# 109 "data/maps/Route26/scripts.pory"
	.string "Tch... Well, at least my\n"
	.string "POKéMON are more unique!$"

Fisherman_Jacob_Route26_Battle_Text_2:
# 110 "data/maps/Route26/scripts.pory"
	.string "Your team was pretty neat.\n"
	.string "Where'd you catch them?$"

Fisherman_Bradley_Route26_Battle_Text_0:
# 117 "data/maps/Route26/scripts.pory"
	.string "Not even a nibble...\n"
	.string "Kid, you're scaring them!$"

Fisherman_Bradley_Route26_Battle_Text_1:
# 117 "data/maps/Route26/scripts.pory"
	.string "There's no way I'd ever\n"
	.string "throw a tip your way!$"

Fisherman_Bradley_Route26_Battle_Text_2:
# 118 "data/maps/Route26/scripts.pory"
	.string "I only paid you because\n"
	.string "you are a POKéMON TRAINER.\p"
	.string "There's a FISHING GURU\n"
	.string "in KANTO, by the way.$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 130 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 131 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 137 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 140 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 144 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 151 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 165 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 179 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 181 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
