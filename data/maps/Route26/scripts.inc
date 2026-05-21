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


Route26_EventScript_CooltrainerMarcos::
# 126 "data/maps/Route26/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_MARCOS, 0, Route26_Text_CooltrainerMarcosIntro, Route26_Text_CooltrainerMarcosDefeated
# 129 "data/maps/Route26/scripts.pory"
	msgbox Route26_EventScript_CooltrainerMarcos_Text_0
# 130 "data/maps/Route26/scripts.pory"
	closemessage
# 131 "data/maps/Route26/scripts.pory"
	releaseall
	end


TRIGGER_SCRIPT_TEST_1::
# 146 "data/maps/Route26/scripts.pory"
	lockall
# 147 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 148 "data/maps/Route26/scripts.pory"
	applymovement 4, movement_camper1
# 149 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route26/scripts.pory"
	compare VAR_TEMP_6, 2
	goto_if_eq TRIGGER_SCRIPT_TEST_1_2
# 158 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_2, MSGBOX_YESNO
# 159 "data/maps/Route26/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne TRIGGER_SCRIPT_TEST_1_5
# 165 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_4
# 166 "data/maps/Route26/scripts.pory"
	closemessage
# 167 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_6, 2
# 168 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 0
# 169 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_2:
# 151 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_0
# 152 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
# 153 "data/maps/Route26/scripts.pory"
	closemessage
# 154 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 155 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_4:
# 172 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_5
# 173 "data/maps/Route26/scripts.pory"
	closemessage
# 174 "data/maps/Route26/scripts.pory"
	setvar VAR_TEMP_5, 1
# 175 "data/maps/Route26/scripts.pory"
	releaseall
	end

TRIGGER_SCRIPT_TEST_1_5:
# 161 "data/maps/Route26/scripts.pory"
	msgbox TRIGGER_SCRIPT_TEST_1_Text_3
# 162 "data/maps/Route26/scripts.pory"
	trainerbattle_no_intro TRAINER_RUIN_MANIAC_LAWSON, TRIGGER_SCRIPT_TEST_1_Text_1
	goto TRIGGER_SCRIPT_TEST_1_4


# 179 "data/maps/Route26/scripts.pory"
movement_camper1:
# 180 "data/maps/Route26/scripts.pory"
	emote_double_exclamation_mark
# 181 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1::
# 185 "data/maps/Route26/scripts.pory"
	lock
# 186 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 187 "data/maps/Route26/scripts.pory"
	closemessage
# 188 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 194 "data/maps/Route26/scripts.pory"
	lock
# 195 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 196 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 197 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 198 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 199 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 200 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 201 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 202 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 203 "data/maps/Route26/scripts.pory"
	closemessage
# 204 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 205 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 206 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 207 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 208 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 211 "data/maps/Route26/scripts.pory"
	removeobject 1
# 212 "data/maps/Route26/scripts.pory"
	removeobject 2
# 213 "data/maps/Route26/scripts.pory"
	removeobject 3
# 214 "data/maps/Route26/scripts.pory"
	release
	end


# 218 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 219 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 220 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 221 "data/maps/Route26/scripts.pory"
	step_end

# 224 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 225 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 225 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 226 "data/maps/Route26/scripts.pory"
	step_end

# 229 "data/maps/Route26/scripts.pory"
movement_route26_npc_face_player:
# 230 "data/maps/Route26/scripts.pory"
	face_player
# 231 "data/maps/Route26/scripts.pory"
	step_end

Route26_NorthEntrance_Badge_Guard::
# 241 "data/maps/Route26/scripts.pory"
	lock
# 242 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Player
# 243 "data/maps/Route26/scripts.pory"
	waitmovement
# 244 "data/maps/Route26/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, Route26_NorthEntrance_Badge_Guard_1
# 257 "data/maps/Route26/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_1
# 258 "data/maps/Route26/scripts.pory"
	waitmessage
# 259 "data/maps/Route26/scripts.pory"
	closemessage
# 260 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 261 "data/maps/Route26/scripts.pory"
	waitmovement
# 262 "data/maps/Route26/scripts.pory"
	releaseall
	end

Route26_NorthEntrance_Badge_Guard_1:
# 246 "data/maps/Route26/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_0
# 247 "data/maps/Route26/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE28, 1
# 248 "data/maps/Route26/scripts.pory"
	waitmessage
# 249 "data/maps/Route26/scripts.pory"
	closemessage
# 250 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 251 "data/maps/Route26/scripts.pory"
	waitmovement
# 252 "data/maps/Route26/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Badge_Guard_Trigger::
# 269 "data/maps/Route26/scripts.pory"
	lock
# 270 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Player
# 271 "data/maps/Route26/scripts.pory"
	waitmovement
# 272 "data/maps/Route26/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Trigger_Text_0
# 273 "data/maps/Route26/scripts.pory"
	waitmessage
# 274 "data/maps/Route26/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, Route26_NorthEntrance_Badge_Guard_Trigger_1
# 287 "data/maps/Route26/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_1
# 288 "data/maps/Route26/scripts.pory"
	waitmessage
# 289 "data/maps/Route26/scripts.pory"
	closemessage
# 290 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_Route26_NorthEntrance_Walk_Down_1
# 291 "data/maps/Route26/scripts.pory"
	waitmovement
# 292 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 293 "data/maps/Route26/scripts.pory"
	waitmovement
# 294 "data/maps/Route26/scripts.pory"
	releaseall
	end

Route26_NorthEntrance_Badge_Guard_Trigger_1:
# 276 "data/maps/Route26/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_0
# 277 "data/maps/Route26/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE28, 1
# 278 "data/maps/Route26/scripts.pory"
	waitmessage
# 279 "data/maps/Route26/scripts.pory"
	closemessage
# 280 "data/maps/Route26/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 281 "data/maps/Route26/scripts.pory"
	waitmovement
# 282 "data/maps/Route26/scripts.pory"
	releaseall
	end


# 299 "data/maps/Route26/scripts.pory"
Movement_Route26_NorthEntrance_Badge_Guard_Face_Player:
# 301 "data/maps/Route26/scripts.pory"
	face_player
# 302 "data/maps/Route26/scripts.pory"
	step_end

# 305 "data/maps/Route26/scripts.pory"
Movement_Route26_NorthEntrance_Badge_Guard_Face_Down:
# 307 "data/maps/Route26/scripts.pory"
	face_down
# 308 "data/maps/Route26/scripts.pory"
	step_end

# 311 "data/maps/Route26/scripts.pory"
Movement_Route26_NorthEntrance_Walk_Down_1:
# 313 "data/maps/Route26/scripts.pory"
	walk_down
# 314 "data/maps/Route26/scripts.pory"
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
	.string "It's a bit weird though, POKéMON\n"
	.string "found here aren't from KANTO?\p"
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

Route26_EventScript_CooltrainerMarcos_Text_0:
# 129 "data/maps/Route26/scripts.pory"
	.string "Boa batalha! Voce eh forte.$"

TRIGGER_SCRIPT_TEST_1_Text_0:
# 151 "data/maps/Route26/scripts.pory"
	.string "You again?\p"
	.string "Nah this time we battle for real!$"

TRIGGER_SCRIPT_TEST_1_Text_1:
# 152 "data/maps/Route26/scripts.pory"
	.string "Damn, I lost the battle…$"

TRIGGER_SCRIPT_TEST_1_Text_2:
# 158 "data/maps/Route26/scripts.pory"
	.string "Hey I think we should battle..\p"
	.string "What do you think?$"

TRIGGER_SCRIPT_TEST_1_Text_3:
# 161 "data/maps/Route26/scripts.pory"
	.string "Alright lets do this!$"

TRIGGER_SCRIPT_TEST_1_Text_4:
# 165 "data/maps/Route26/scripts.pory"
	.string "Eh, you suck.$"

TRIGGER_SCRIPT_TEST_1_Text_5:
# 172 "data/maps/Route26/scripts.pory"
	.string "Hey man that was a crazy battle, I\n"
	.string "cannot beleieve you won.$"

Test_Script_1_Text_0:
# 186 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 200 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 202 "data/maps/Route26/scripts.pory"
	.string "Run away!$"

Route26_NorthEntrance_Badge_Guard_Text_0:
# 246 "data/maps/Route26/scripts.pory"
	.string "...Oh!\n"
	.string "That is the RISINGBADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_LEVEL_UP}{PAUSE 0x60}{RESUME_MUSIC}\p"
	.string "Okay, then.\n"
	.string "Please, go right ahead.$"

Route26_NorthEntrance_Badge_Guard_Text_1:
# 257 "data/maps/Route26/scripts.pory"
	.string "Only truly skilled TRAINERS are\n"
	.string "allowed through.\p"
	.string "You don't have the RISINGBADGE\n"
	.string "yet! Sorry, rules are rules.\p"
	.string "I can't let you pass.$"

Route26_NorthEntrance_Badge_Guard_Trigger_Text_0:
# 272 "data/maps/Route26/scripts.pory"
	.string "Halt!$"

Route26_Text_CooltrainerMarcosIntro::
# 135 "data/maps/Route26/scripts.pory"
	.string "Voce veio de Kanto?\p"
	.string "Impressionante. Mas aqui em\n"
	.string "Johto as regras sao outras!$"

Route26_Text_CooltrainerMarcosDefeated::
# 140 "data/maps/Route26/scripts.pory"
	.string "Nao esperava isso...\p"
	.string "Voce realmente eh o Campeao.$"
