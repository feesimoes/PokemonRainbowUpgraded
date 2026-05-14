CianwoodCity_MapScripts::
# 3 "data/maps/CianwoodCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/CianwoodCity/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 4
	goto_if_ge CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 9 "data/maps/CianwoodCity/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 3
	goto_if_eq CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 14 "data/maps/CianwoodCity/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 2
	goto_if_eq CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_3
	return

CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_SUICUNE, 18, 2
	return

CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_BLUE, 10, 15
# 12 "data/maps/CianwoodCity/scripts.pory"
	addobject LOCALID_CIANWOOD_BLUE
	return

CianwoodCity_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 16 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_SUICUNE, 18, 11
# 17 "data/maps/CianwoodCity/scripts.pory"
	addobject LOCALID_CIANWOOD_SUICUNE
	return


CianwoodCity_Event_Approach_Suicune::
# 24 "data/maps/CianwoodCity/scripts.pory"
	lock
# 25 "data/maps/CianwoodCity/scripts.pory"
	cleartrainerflag TRAINER_RIVAL_CIANWOOD_CHAMPION
# 26 "data/maps/CianwoodCity/scripts.pory"
	cleartrainerflag TRAINER_RIVAL_CIANWOOD_FORMER_CHAMPION
# 27 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_PLAYER, CianwoodCity_Player_Faces_Up
# 28 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 29 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Suicune_Escapes_1
# 30 "data/maps/CianwoodCity/scripts.pory"
	playse SE_LEDGE
# 31 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 32 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 33 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Suicune_Escapes_2
# 34 "data/maps/CianwoodCity/scripts.pory"
	playse SE_LEDGE
# 35 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 36 "data/maps/CianwoodCity/scripts.pory"
	playse SE_LEDGE
# 37 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 38 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 39 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Suicune_Escapes_3
# 40 "data/maps/CianwoodCity/scripts.pory"
	playse SE_LEDGE
# 41 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 42 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 43 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_SUICUNE, CianwoodCity_Suicune_Escapes_4
# 44 "data/maps/CianwoodCity/scripts.pory"
	playse SE_LEDGE
# 45 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 46 "data/maps/CianwoodCity/scripts.pory"
	playse SE_FLEE
# 47 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 48 "data/maps/CianwoodCity/scripts.pory"
	waitse
# 49 "data/maps/CianwoodCity/scripts.pory"
	fadeoutbgm 0
# 50 "data/maps/CianwoodCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 51 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_0
# 52 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 53 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_BLUE, 10, 15
# 54 "data/maps/CianwoodCity/scripts.pory"
	addobject LOCALID_CIANWOOD_BLUE
# 55 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_BLUE, CianwoodCity_Rival_Blue_Face_Right_Enter
# 56 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 57 "data/maps/CianwoodCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 58 "data/maps/CianwoodCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, CianwoodCity_Event_Approach_Suicune_2
# 89 "data/maps/CianwoodCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL_CHAMP, FALSE
# 90 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_1
# 91 "data/maps/CianwoodCity/scripts.pory"
	waitmessage
# 92 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 93 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_PLAYER, CianwoodCity_Player_Face_Down
# 94 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 95 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_BLUE, CianwoodCity_Rival_Blue_Catches_Up
# 96 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 97 "data/maps/CianwoodCity/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 3
	goto_if_eq CianwoodCity_Event_Approach_Suicune_10
# 104 "data/maps/CianwoodCity/scripts.pory"
	specialvar VAR_RESULT, CheckBadgeCount
# 105 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_6
# 106 "data/maps/CianwoodCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 107 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_7
# 108 "data/maps/CianwoodCity/scripts.pory"
	waitmessage
# 109 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 110 "data/maps/CianwoodCity/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 3
# 111 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_8
# 112 "data/maps/CianwoodCity/scripts.pory"
	closemessage
CianwoodCity_Event_Approach_Suicune_9:
# 114 "data/maps/CianwoodCity/scripts.pory"
	call CianwoodCity_Rival_Champion_Battle
CianwoodCity_Event_Approach_Suicune_1:
# 116 "data/maps/CianwoodCity/scripts.pory"
	release
	end

CianwoodCity_Event_Approach_Suicune_2:
# 60 "data/maps/CianwoodCity/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, FALSE
# 61 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_1
# 62 "data/maps/CianwoodCity/scripts.pory"
	waitmessage
# 63 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 64 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_PLAYER, CianwoodCity_Player_Face_Down
# 65 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 66 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_BLUE, CianwoodCity_Rival_Blue_Catches_Up
# 67 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 68 "data/maps/CianwoodCity/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 3
	goto_if_eq CianwoodCity_Event_Approach_Suicune_6
# 75 "data/maps/CianwoodCity/scripts.pory"
	specialvar VAR_RESULT, CheckBadgeCount
# 76 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_3
# 77 "data/maps/CianwoodCity/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_RESULT
# 78 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_4
# 79 "data/maps/CianwoodCity/scripts.pory"
	waitmessage
# 80 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 81 "data/maps/CianwoodCity/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 3
# 82 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_5
# 83 "data/maps/CianwoodCity/scripts.pory"
	closemessage
CianwoodCity_Event_Approach_Suicune_5:
# 85 "data/maps/CianwoodCity/scripts.pory"
	call CianwoodCity_Rival_Former_Champion_Battle
	goto CianwoodCity_Event_Approach_Suicune_1

CianwoodCity_Event_Approach_Suicune_6:
# 70 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_2
# 71 "data/maps/CianwoodCity/scripts.pory"
	closemessage
	goto CianwoodCity_Event_Approach_Suicune_5

CianwoodCity_Event_Approach_Suicune_10:
# 99 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Event_Approach_Suicune_Text_2
# 100 "data/maps/CianwoodCity/scripts.pory"
	closemessage
	goto CianwoodCity_Event_Approach_Suicune_9


CianwoodCity_Rival_Former_Champion_Battle::
# 123 "data/maps/CianwoodCity/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_CIANWOOD_FORMER_CHAMPION, 0, CianwoodCity_Rival_Former_Champion_Battle_Text_0, CianwoodCity_Rival_Former_Champion_Battle_Text_1
# 124 "data/maps/CianwoodCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 125 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Former_Champion_Battle_Text_2
# 126 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 127 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Former_Champion_Battle_Text_3
# 128 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 129 "data/maps/CianwoodCity/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 4
# 130 "data/maps/CianwoodCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, FALSE
# 131 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_BLUE, CianwoodCity_Rival_Blue_Exits
# 132 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 133 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_BLUE, 18, 3
# 134 "data/maps/CianwoodCity/scripts.pory"
	removeobject LOCALID_CIANWOOD_BLUE
# 135 "data/maps/CianwoodCity/scripts.pory"
	fadedefaultbgm
	return


CianwoodCity_Rival_Champion_Battle::
# 141 "data/maps/CianwoodCity/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_CIANWOOD_CHAMPION, 0, CianwoodCity_Rival_Champion_Battle_Text_0, CianwoodCity_Rival_Champion_Battle_Text_1
# 142 "data/maps/CianwoodCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 143 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Champion_Battle_Text_2
# 144 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 145 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Champion_Battle_Text_3
# 146 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 147 "data/maps/CianwoodCity/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 4
# 148 "data/maps/CianwoodCity/scripts.pory"
	playbgm MUS_RIVAL_EXIT, FALSE
# 149 "data/maps/CianwoodCity/scripts.pory"
	applymovement LOCALID_CIANWOOD_BLUE, CianwoodCity_Rival_Blue_Exits
# 150 "data/maps/CianwoodCity/scripts.pory"
	waitmovement
# 151 "data/maps/CianwoodCity/scripts.pory"
	setobjectxyperm LOCALID_CIANWOOD_BLUE, 18, 3
# 152 "data/maps/CianwoodCity/scripts.pory"
	removeobject LOCALID_CIANWOOD_BLUE
# 153 "data/maps/CianwoodCity/scripts.pory"
	fadedefaultbgm
	return


CianwoodCity_Rival_Blue::
# 159 "data/maps/CianwoodCity/scripts.pory"
	lock
# 160 "data/maps/CianwoodCity/scripts.pory"
	faceplayer
# 161 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Blue_Text_0
# 162 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Blue_Text_1
# 163 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Rival_Blue_Text_2
# 164 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 165 "data/maps/CianwoodCity/scripts.pory"
	release
	end


# 169 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Player_Faces_Up:
# 171 "data/maps/CianwoodCity/scripts.pory"
	face_up_fast
# 172 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 175 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Suicune_Escapes_1:
# 177 "data/maps/CianwoodCity/scripts.pory"
	emote_exclamation_mark
# 178 "data/maps/CianwoodCity/scripts.pory"
	delay_2
# 179 "data/maps/CianwoodCity/scripts.pory"
	jump_2_up
# 180 "data/maps/CianwoodCity/scripts.pory"
	delay_2
# 181 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 184 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Suicune_Escapes_2:
# 186 "data/maps/CianwoodCity/scripts.pory"
	jump_right
# 186 "data/maps/CianwoodCity/scripts.pory"
	jump_right
# 187 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 190 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Suicune_Escapes_3:
# 192 "data/maps/CianwoodCity/scripts.pory"
	jump_2_up
# 193 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 196 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Suicune_Escapes_4:
# 198 "data/maps/CianwoodCity/scripts.pory"
	jump_up
# 198 "data/maps/CianwoodCity/scripts.pory"
	jump_up
# 199 "data/maps/CianwoodCity/scripts.pory"
	delay_8
# 200 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 203 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Rival_Blue_Face_Right_Enter:
# 205 "data/maps/CianwoodCity/scripts.pory"
	face_right
# 206 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 209 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Rival_Blue_Catches_Up:
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 211 "data/maps/CianwoodCity/scripts.pory"
	walk_right
# 212 "data/maps/CianwoodCity/scripts.pory"
	walk_up
# 212 "data/maps/CianwoodCity/scripts.pory"
	walk_up
# 213 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 216 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Rival_Blue_Exits:
# 218 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 218 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 218 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 219 "data/maps/CianwoodCity/scripts.pory"
	walk_left
# 219 "data/maps/CianwoodCity/scripts.pory"
	walk_left
# 219 "data/maps/CianwoodCity/scripts.pory"
	walk_left
# 219 "data/maps/CianwoodCity/scripts.pory"
	walk_left
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 220 "data/maps/CianwoodCity/scripts.pory"
	walk_down
# 221 "data/maps/CianwoodCity/scripts.pory"
	step_end

# 224 "data/maps/CianwoodCity/scripts.pory"
CianwoodCity_Player_Face_Down:
# 226 "data/maps/CianwoodCity/scripts.pory"
	emote_exclamation_mark
# 227 "data/maps/CianwoodCity/scripts.pory"
	delay_4
# 228 "data/maps/CianwoodCity/scripts.pory"
	face_down
# 229 "data/maps/CianwoodCity/scripts.pory"
	step_end

CianwoodCity_Sign::
# 234 "data/maps/CianwoodCity/scripts.pory"
	lock
# 235 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Sign_Text_0
# 236 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 237 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Gym_Sign::
# 243 "data/maps/CianwoodCity/scripts.pory"
	lock
# 244 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Gym_Sign_Text_0
# 245 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 246 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_CliffEdgeGate_Sign::
# 252 "data/maps/CianwoodCity/scripts.pory"
	lock
# 253 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_CliffEdgeGate_Sign_Text_0
# 254 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 255 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_CameronsHouse_Sign::
# 261 "data/maps/CianwoodCity/scripts.pory"
	lock
# 262 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_CameronsHouse_Sign_Text_0
# 263 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 264 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Pharmacy_Sign::
# 270 "data/maps/CianwoodCity/scripts.pory"
	lock
# 271 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Pharmacy_Sign_Text_0
# 272 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 273 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Lass::
# 279 "data/maps/CianwoodCity/scripts.pory"
	lock
# 280 "data/maps/CianwoodCity/scripts.pory"
	faceplayer
# 281 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Lass_Text_0
# 282 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 283 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Gentleman::
# 289 "data/maps/CianwoodCity/scripts.pory"
	lock
# 290 "data/maps/CianwoodCity/scripts.pory"
	faceplayer
# 291 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Gentleman_Text_0
# 292 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 293 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_FatMan::
# 299 "data/maps/CianwoodCity/scripts.pory"
	lock
# 300 "data/maps/CianwoodCity/scripts.pory"
	faceplayer
# 301 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_FatMan_Text_0
# 302 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 303 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_BattleGirl::
# 309 "data/maps/CianwoodCity/scripts.pory"
	lock
# 310 "data/maps/CianwoodCity/scripts.pory"
	faceplayer
# 311 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_BattleGirl_Text_0
# 312 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 313 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Suicune::
# 319 "data/maps/CianwoodCity/scripts.pory"
	lock
# 320 "data/maps/CianwoodCity/scripts.pory"
	msgbox CianwoodCity_Suicune_Text_0
# 321 "data/maps/CianwoodCity/scripts.pory"
	closemessage
# 322 "data/maps/CianwoodCity/scripts.pory"
	release
	end


CianwoodCity_Event_Approach_Suicune_Text_0:
# 51 "data/maps/CianwoodCity/scripts.pory"
	.string "SUICUNE ran away...$"

CianwoodCity_Event_Approach_Suicune_Text_1:
# 61 "data/maps/CianwoodCity/scripts.pory"
	.string "{RIVAL}: Yo! {PLAYER}!$"

CianwoodCity_Event_Approach_Suicune_Text_2:
# 70 "data/maps/CianwoodCity/scripts.pory"
	.string "That legendary SUICUNE ran away?\n"
	.string "Again? Tough luck, bud!\p"
	.string "By the way, did you get stronger\n"
	.string "yet? Come on, I'll take you on!$"

CianwoodCity_Event_Approach_Suicune_Text_3:
# 76 "data/maps/CianwoodCity/scripts.pory"
	.string "Thought I saw you here, pal!\n"
	.string "You're still catching POKéMON?\p"
	.string "Yeah... Oops!\n"
	.string "That was the legendary SUICUNE?$"

CianwoodCity_Event_Approach_Suicune_Text_4:
# 78 "data/maps/CianwoodCity/scripts.pory"
	.string "You only got {STR_VAR_1} BADGES?\n"
	.string "I thought you'd be stronger...\p"
	.string "Me? I've been training up!\n"
	.string "I have 15 BADGES now, bud!$"

CianwoodCity_Event_Approach_Suicune_Text_5:
# 82 "data/maps/CianwoodCity/scripts.pory"
	.string "Anyways, I'm wondering...\n"
	.string "Can you still defeat me?\p"
	.string "Or...\p"
	.string "Should I give the LEAGUE CHAMPION\n"
	.string "thing another try, {PLAYER}?$"

CianwoodCity_Event_Approach_Suicune_Text_6:
# 105 "data/maps/CianwoodCity/scripts.pory"
	.string "Thought I saw you here, pal!\n"
	.string "You're still struggling behind here?\p"
	.string "Yeah... Oops!\n"
	.string "That was the legendary SUICUNE?$"

CianwoodCity_Event_Approach_Suicune_Text_7:
# 107 "data/maps/CianwoodCity/scripts.pory"
	.string "You only got {STR_VAR_1} BADGES?\n"
	.string "I expected that, hah!\p"
	.string "Me? I'm strong as ever!\n"
	.string "I'm CHAMPION of JOHTO, too!$"

CianwoodCity_Event_Approach_Suicune_Text_8:
# 111 "data/maps/CianwoodCity/scripts.pory"
	.string "A proper CHAMPION of KANTO and\n"
	.string "JOHTO should be a challenge...\p"
	.string "Isn't that right, {PLAYER}?$"

CianwoodCity_Rival_Former_Champion_Battle_Text_0:
# 123 "data/maps/CianwoodCity/scripts.pory"
	.string "...Tch, strong as ever.$"

CianwoodCity_Rival_Former_Champion_Battle_Text_1:
# 123 "data/maps/CianwoodCity/scripts.pory"
	.string "Yeah, haha! No way!\n"
	.string "I'm good enough to be CHAMPION!$"

CianwoodCity_Rival_Former_Champion_Battle_Text_2:
# 125 "data/maps/CianwoodCity/scripts.pory"
	.string "...Well, whatever.\n"
	.string "CHUCK isn't here, {PLAYER}.\p"
	.string "I tried to help find him, but had no\n"
	.string "luck there... Maybe...\p"
	.string "I'll need to head back to KANTO, to\n"
	.string "the VIRIDIAN GYM, for now...$"

CianwoodCity_Rival_Former_Champion_Battle_Text_3:
# 127 "data/maps/CianwoodCity/scripts.pory"
	.string "{PLAYER}, I'll beat you some day.\n"
	.string "Don't you forget it!\p"
	.string "Be smellin' ya...\n"
	.string "Later!$"

CianwoodCity_Rival_Champion_Battle_Text_0:
# 141 "data/maps/CianwoodCity/scripts.pory"
	.string "WHAT?! You...\n"
	.string "NO! This isn't good...$"

CianwoodCity_Rival_Champion_Battle_Text_1:
# 141 "data/maps/CianwoodCity/scripts.pory"
	.string "See, {PLAYER}?\n"
	.string "Told you I'm the best!$"

CianwoodCity_Rival_Champion_Battle_Text_2:
# 143 "data/maps/CianwoodCity/scripts.pory"
	.string "CHUCK isn't here, {PLAYER}!\p"
	.string "I tried to help find him, but had no\n"
	.string "luck there...\p"
	.string "The fact that you beat me, though,\n"
	.string "proves I need to get stronger!$"

CianwoodCity_Rival_Champion_Battle_Text_3:
# 145 "data/maps/CianwoodCity/scripts.pory"
	.string "{PLAYER}! Don't you dare come for\n"
	.string "me at the POKéMON LEAGUE!\p"
	.string "Smell ya later!$"

CianwoodCity_Rival_Blue_Text_0:
# 161 "data/maps/CianwoodCity/scripts.pory"
	.string "{RIVAL}: I still don't see CHUCK\n"
	.string "around. SUICUNE is back, though!\p"
	.string "Are you gonna catch it?\n"
	.string "For gramps?$"

CianwoodCity_Rival_Blue_Text_1:
# 162 "data/maps/CianwoodCity/scripts.pory"
	.string "Tch...\n"
	.string "There's too many POKéMON...\p"
	.string "I gave up, but, you're ready to\n"
	.string "throw BALLS, right {PLAYER}?$"

CianwoodCity_Rival_Blue_Text_2:
# 163 "data/maps/CianwoodCity/scripts.pory"
	.string "With, like, 10,000 ULTRA BALL(s)?\n"
	.string "Hah! Be smellin' ya later!$"

CianwoodCity_Sign_Text_0:
# 235 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD CITY\n"
	.string "The city near rough seas!$"

CianwoodCity_Gym_Sign_Text_0:
# 244 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD CITY POKéMON GYM\n"
	.string "LEADER: CHUCK\p"
	.string "Still reading signs? No need!\n"
	.string "His roaring fists do the talking!$"

CianwoodCity_CliffEdgeGate_Sign_Text_0:
# 253 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD CITY -\n"
	.string "CLIFF EDGE GATE\p"
	.string "Connecting the JOHTO region to the\n"
	.string "FIORE region! PAL PARK ahead.$"

CianwoodCity_CameronsHouse_Sign_Text_0:
# 262 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD CITY\n"
	.string "CAMERON'S HOUSE$"

CianwoodCity_Pharmacy_Sign_Text_0:
# 271 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD CITY\n"
	.string "MEDICAL PHARMACY\p"
	.string "Over 500 years of tradition...\n"
	.string "We await your medical inquiries.$"

CianwoodCity_Lass_Text_0:
# 281 "data/maps/CianwoodCity/scripts.pory"
	.string "Have you seen PAL PARK yet?\n"
	.string "It's just past CLIFF EDGE GATE.\p"
	.string "As rumor has it, CIANWOOD'S GYM\n"
	.string "LEADER - CHUCK, visits frequently.$"

CianwoodCity_Gentleman_Text_0:
# 291 "data/maps/CianwoodCity/scripts.pory"
	.string "CIANWOOD is such a remote place, it\n"
	.string "doesn't fit in with JOHTO.\p"
	.string "Apparently it resides on a different\n"
	.string "landmass altogether, too...$"

CianwoodCity_FatMan_Text_0:
# 301 "data/maps/CianwoodCity/scripts.pory"
	.string "RAGE CANDY BARS... Oh, man.\n"
	.string "I need to lay off those...$"

CianwoodCity_BattleGirl_Text_0:
# 311 "data/maps/CianwoodCity/scripts.pory"
	.string "My husband, CHUCK, has gone off\n"
	.string "again... I hope he returns...\p"
	.string "Any moment, now...$"

CianwoodCity_Suicune_Text_0:
# 320 "data/maps/CianwoodCity/scripts.pory"
	.string "Wow!\n"
	.string "It's a shiny new SUICUNE!$"
