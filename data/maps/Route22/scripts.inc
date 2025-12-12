# 1 "data/maps/Route22/scripts.pory"

# 2 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerTop::
# 3 "data/maps/Route22/scripts.pory"
	lockall
# 4 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 5 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 6 "data/maps/Route22/scripts.pory"
	end
# 7 "data/maps/Route22/scripts.pory"

# 8 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerMid::
# 9 "data/maps/Route22/scripts.pory"
	lockall
# 10 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 11 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 9
# 12 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 13 "data/maps/Route22/scripts.pory"
	end
# 14 "data/maps/Route22/scripts.pory"

# 15 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalTriggerBottom::
# 16 "data/maps/Route22/scripts.pory"
	lockall
# 17 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 18 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 9
# 19 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_EarlyRival
# 20 "data/maps/Route22/scripts.pory"
	end
# 21 "data/maps/Route22/scripts.pory"

# 22 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRival::
# 23 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 24 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 25 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 26 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalApproach
# 27 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalApproach
# 28 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalApproachBottom
# 29 "data/maps/Route22/scripts.pory"
	delay 6
# 30 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalIntro
# 31 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_EarlyRivalSquirtle
# 32 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_EarlyRivalBulbasaur
# 33 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_EarlyRivalCharmander
# 34 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_EarlyRivalPostBattle
# 35 "data/maps/Route22/scripts.pory"
	closemessage
# 36 "data/maps/Route22/scripts.pory"
	delay 10
# 37 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 38 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_EarlyRivalExit
# 39 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_EarlyRivalExit
# 40 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_EarlyRivalExitBottom
# 41 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 42 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 43 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 2
# 44 "data/maps/Route22/scripts.pory"
	releaseall
# 45 "data/maps/Route22/scripts.pory"
	end
# 46 "data/maps/Route22/scripts.pory"

# 47 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalApproach::
# 48 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 49 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 50 "data/maps/Route22/scripts.pory"
	return
# 51 "data/maps/Route22/scripts.pory"

# 52 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalApproachBottom::
# 53 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 54 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 55 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 56 "data/maps/Route22/scripts.pory"
	return
# 57 "data/maps/Route22/scripts.pory"

# 58 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalSquirtle::
# 59 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_SQUIRTLE, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 60 "data/maps/Route22/scripts.pory"
	return
# 61 "data/maps/Route22/scripts.pory"

# 62 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalBulbasaur::
# 63 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_BULBASAUR, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 64 "data/maps/Route22/scripts.pory"
	return
# 65 "data/maps/Route22/scripts.pory"

# 66 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalCharmander::
# 67 "data/maps/Route22/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_ROUTE22_EARLY_CHARMANDER, 0, Route22_Text_EarlyRivalDefeat, Text_RivalVictory
# 68 "data/maps/Route22/scripts.pory"
	return
# 69 "data/maps/Route22/scripts.pory"

# 70 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalExit::
# 71 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExit
# 72 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route22/scripts.pory"
	return
# 74 "data/maps/Route22/scripts.pory"

# 75 "data/maps/Route22/scripts.pory"
Route22_EventScript_EarlyRivalExitBottom::
# 76 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_EarlyRivalExitBottom
# 77 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 78 "data/maps/Route22/scripts.pory"
	return
# 79 "data/maps/Route22/scripts.pory"

# 80 "data/maps/Route22/scripts.pory"
Route22_Movement_UnusedRivalExit:: @ 8
# 81 "data/maps/Route22/scripts.pory"
	walk_right
# 82 "data/maps/Route22/scripts.pory"
	walk_right
# 83 "data/maps/Route22/scripts.pory"
	walk_right
# 84 "data/maps/Route22/scripts.pory"
	walk_right
# 85 "data/maps/Route22/scripts.pory"
	walk_right
# 86 "data/maps/Route22/scripts.pory"
	walk_right
# 87 "data/maps/Route22/scripts.pory"
	walk_right
# 88 "data/maps/Route22/scripts.pory"
	step_end
# 89 "data/maps/Route22/scripts.pory"

# 90 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExit::
# 91 "data/maps/Route22/scripts.pory"
	walk_down
# 92 "data/maps/Route22/scripts.pory"
	walk_right
# 93 "data/maps/Route22/scripts.pory"
	walk_right
# 94 "data/maps/Route22/scripts.pory"
	walk_right
# 95 "data/maps/Route22/scripts.pory"
	walk_right
# 96 "data/maps/Route22/scripts.pory"
	walk_right
# 97 "data/maps/Route22/scripts.pory"
	walk_down
# 98 "data/maps/Route22/scripts.pory"
	walk_down
# 99 "data/maps/Route22/scripts.pory"
	walk_down
# 100 "data/maps/Route22/scripts.pory"
	walk_down
# 101 "data/maps/Route22/scripts.pory"
	walk_down
# 102 "data/maps/Route22/scripts.pory"
	walk_down
# 103 "data/maps/Route22/scripts.pory"
	step_end
# 104 "data/maps/Route22/scripts.pory"

# 105 "data/maps/Route22/scripts.pory"
Route22_Movement_EarlyRivalExitBottom::
# 106 "data/maps/Route22/scripts.pory"
	walk_right
# 107 "data/maps/Route22/scripts.pory"
	walk_right
# 108 "data/maps/Route22/scripts.pory"
	walk_right
# 109 "data/maps/Route22/scripts.pory"
	walk_right
# 110 "data/maps/Route22/scripts.pory"
	walk_down
# 111 "data/maps/Route22/scripts.pory"
	walk_down
# 112 "data/maps/Route22/scripts.pory"
	walk_down
# 113 "data/maps/Route22/scripts.pory"
	walk_down
# 114 "data/maps/Route22/scripts.pory"
	walk_down
# 115 "data/maps/Route22/scripts.pory"
	walk_down
# 116 "data/maps/Route22/scripts.pory"
	walk_down
# 117 "data/maps/Route22/scripts.pory"
	step_end
# 118 "data/maps/Route22/scripts.pory"

# 119 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproach::
# 120 "data/maps/Route22/scripts.pory"
	walk_right
# 121 "data/maps/Route22/scripts.pory"
	walk_right
# 122 "data/maps/Route22/scripts.pory"
	walk_right
# 123 "data/maps/Route22/scripts.pory"
	walk_right
# 124 "data/maps/Route22/scripts.pory"
	walk_right
# 125 "data/maps/Route22/scripts.pory"
	walk_right
# 126 "data/maps/Route22/scripts.pory"
	walk_right
# 127 "data/maps/Route22/scripts.pory"
	step_end
# 128 "data/maps/Route22/scripts.pory"

# 129 "data/maps/Route22/scripts.pory"
Route22_Movement_RivalApproachBottom::
# 130 "data/maps/Route22/scripts.pory"
	walk_right
# 131 "data/maps/Route22/scripts.pory"
	walk_right
# 132 "data/maps/Route22/scripts.pory"
	walk_right
# 133 "data/maps/Route22/scripts.pory"
	walk_right
# 134 "data/maps/Route22/scripts.pory"
	walk_right
# 135 "data/maps/Route22/scripts.pory"
	walk_right
# 136 "data/maps/Route22/scripts.pory"
	walk_right
# 137 "data/maps/Route22/scripts.pory"
	walk_right
# 138 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_down
# 139 "data/maps/Route22/scripts.pory"
	step_end
# 140 "data/maps/Route22/scripts.pory"

# 141 "data/maps/Route22/scripts.pory"
Route22_Movement_PlayerFaceRival::
# 142 "data/maps/Route22/scripts.pory"
	delay_16
# 143 "data/maps/Route22/scripts.pory"
	delay_16
# 144 "data/maps/Route22/scripts.pory"
	delay_16
# 145 "data/maps/Route22/scripts.pory"
	delay_16
# 146 "data/maps/Route22/scripts.pory"
	delay_16
# 147 "data/maps/Route22/scripts.pory"
	delay_16
# 148 "data/maps/Route22/scripts.pory"
	delay_16
# 149 "data/maps/Route22/scripts.pory"
	delay_8
# 150 "data/maps/Route22/scripts.pory"
	walk_in_place_faster_up
# 151 "data/maps/Route22/scripts.pory"
	step_end
# 152 "data/maps/Route22/scripts.pory"

# 153 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerTop::
# 154 "data/maps/Route22/scripts.pory"
	lockall
# 155 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 0
# 156 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 157 "data/maps/Route22/scripts.pory"
	end
# 158 "data/maps/Route22/scripts.pory"

# 159 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerMid::
# 160 "data/maps/Route22/scripts.pory"
	lockall
# 161 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 1
# 162 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 163 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 164 "data/maps/Route22/scripts.pory"
	end
# 165 "data/maps/Route22/scripts.pory"

# 166 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalTriggerBottom::
# 167 "data/maps/Route22/scripts.pory"
	lockall
# 168 "data/maps/Route22/scripts.pory"
	setvar VAR_TEMP_1, 2
# 169 "data/maps/Route22/scripts.pory"
	setobjectxyperm LOCALID_ROUTE22_RIVAL, 25, 5
# 170 "data/maps/Route22/scripts.pory"
	goto Route22_EventScript_LateRival
# 171 "data/maps/Route22/scripts.pory"
	end
# 172 "data/maps/Route22/scripts.pory"

# 173 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRival::
# 174 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 175 "data/maps/Route22/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 176 "data/maps/Route22/scripts.pory"
	addobject LOCALID_ROUTE22_RIVAL
# 177 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, Route22_EventScript_LateRivalApproach
# 178 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, Route22_EventScript_LateRivalApproach
# 179 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, Route22_EventScript_LateRivalApproachBottom
# 180 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalIntro
# 181 "data/maps/Route22/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_ROUTE22_RIVAL
# 182 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 2, Route22_EventScript_LateRivalSquirtle
# 183 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 1, Route22_EventScript_LateRivalBulbasaur
# 184 "data/maps/Route22/scripts.pory"
	call_if_eq VAR_STARTER_MON, 0, Route22_EventScript_LateRivalCharmander
# 185 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LateRivalPostBattle
# 186 "data/maps/Route22/scripts.pory"
	closemessage
# 187 "data/maps/Route22/scripts.pory"
	delay 10
# 188 "data/maps/Route22/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 189 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_LateRivalExit
# 190 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 191 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 192 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE22_RIVAL
# 193 "data/maps/Route22/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 4
# 194 "data/maps/Route22/scripts.pory"
	releaseall
# 195 "data/maps/Route22/scripts.pory"
	end
# 196 "data/maps/Route22/scripts.pory"

# 197 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalApproach::
# 198 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproach
# 199 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 200 "data/maps/Route22/scripts.pory"
	return
# 201 "data/maps/Route22/scripts.pory"

# 202 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalApproachBottom::
# 203 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE22_RIVAL, Route22_Movement_RivalApproachBottom
# 204 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Movement_PlayerFaceRival
# 205 "data/maps/Route22/scripts.pory"
	waitmovement 0
# 206 "data/maps/Route22/scripts.pory"
	return
# 207 "data/maps/Route22/scripts.pory"

# 208 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalSquirtle::
# 209 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_SQUIRTLE, Route22_Text_LateRivalDefeat
# 210 "data/maps/Route22/scripts.pory"
	return
# 211 "data/maps/Route22/scripts.pory"

# 212 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalBulbasaur::
# 213 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_BULBASAUR, Route22_Text_LateRivalDefeat
# 214 "data/maps/Route22/scripts.pory"
	return
# 215 "data/maps/Route22/scripts.pory"

# 216 "data/maps/Route22/scripts.pory"
Route22_EventScript_LateRivalCharmander::
# 217 "data/maps/Route22/scripts.pory"
	trainerbattle_no_intro TRAINER_RIVAL_ROUTE22_LATE_CHARMANDER, Route22_Text_LateRivalDefeat
# 218 "data/maps/Route22/scripts.pory"
	return
# 219 "data/maps/Route22/scripts.pory"

# 220 "data/maps/Route22/scripts.pory"
Route22_Movement_LateRivalExit::
# 221 "data/maps/Route22/scripts.pory"
	walk_left
# 222 "data/maps/Route22/scripts.pory"
	walk_left
# 223 "data/maps/Route22/scripts.pory"
	walk_left
# 224 "data/maps/Route22/scripts.pory"
	walk_left
# 225 "data/maps/Route22/scripts.pory"
	walk_left
# 226 "data/maps/Route22/scripts.pory"
	walk_left
# 227 "data/maps/Route22/scripts.pory"
	walk_left
# 228 "data/maps/Route22/scripts.pory"
	step_end
# 229 "data/maps/Route22/scripts.pory"

# 230 "data/maps/Route22/scripts.pory"
Route22_EventScript_LeagueGateSign::
# 231 "data/maps/Route22/scripts.pory"
	msgbox Route22_Text_LeagueGateSign, MSGBOX_SIGN
# 232 "data/maps/Route22/scripts.pory"
	end

Route22_MapScripts::
# 238 "data/maps/Route22/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route22_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route22_MapScripts_MAP_SCRIPT_ON_LOAD:
# 240 "data/maps/Route22/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE22_LEAGUE_GATE
# 241 "data/maps/Route22/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 12
	goto_if_eq Route22_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 250 "data/maps/Route22/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 13
	goto_if_eq Route22_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 256 "data/maps/Route22/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 243 "data/maps/Route22/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 244 "data/maps/Route22/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route22_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

Route22_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 252 "data/maps/Route22/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 246 "data/maps/Route22/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
# 247 "data/maps/Route22/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return


Route22_Force_Player_Off_Ledge_Down::
# 263 "data/maps/Route22/scripts.pory"
	lock
# 264 "data/maps/Route22/scripts.pory"
	playse SE_LEDGE
# 265 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Player_Jump_Off_Ledge_Down
# 266 "data/maps/Route22/scripts.pory"
	waitmovement
# 267 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_Player_Face_Left
# 268 "data/maps/Route22/scripts.pory"
	waitmovement
# 269 "data/maps/Route22/scripts.pory"
	release
# 270 "data/maps/Route22/scripts.pory"
	call Route22_EventScript_Giovanni_Silver
	end


Route22_EventScript_Giovanni_Silver::
# 276 "data/maps/Route22/scripts.pory"
	lock
# 277 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_SILVER, Route22_Silver_Walk_Left_Slowly
# 278 "data/maps/Route22/scripts.pory"
	waitmovement
# 279 "data/maps/Route22/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 280 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_0
# 281 "data/maps/Route22/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 282 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_1
# 283 "data/maps/Route22/scripts.pory"
	delay 30
# 284 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_GIOVANNI, Route22_Giovanni_Face_Up_Slowly
# 285 "data/maps/Route22/scripts.pory"
	waitmovement
# 286 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_2
# 287 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_3
# 288 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_GIOVANNI, Route22_Giovanni_Face_Left_Slowly
# 289 "data/maps/Route22/scripts.pory"
	waitmovement
# 290 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_4
# 291 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_5
# 292 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_6
# 293 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_7
# 294 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_8
# 295 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_9
# 296 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_10
# 297 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_GIOVANNI, Route22_Giovanni_Walk_Left_Out_Of_View
# 298 "data/maps/Route22/scripts.pory"
	waitmovement
# 299 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE_22_GIOVANNI
# 300 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_11
# 301 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_12
# 302 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_13
# 303 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_SILVER, Route22_Silver_Walk_Left_Slowly
# 304 "data/maps/Route22/scripts.pory"
	waitmovement
# 305 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_14
# 306 "data/maps/Route22/scripts.pory"
	waitmessage
# 307 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_SILVER, Route22_Silver_Walk_Right
# 308 "data/maps/Route22/scripts.pory"
	waitmovement
# 309 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_SILVER, Route22_Silver_Emote
# 310 "data/maps/Route22/scripts.pory"
	waitmovement
# 311 "data/maps/Route22/scripts.pory"
	msgbox Route22_EventScript_Giovanni_Silver_Text_15
# 312 "data/maps/Route22/scripts.pory"
	closemessage
# 313 "data/maps/Route22/scripts.pory"
	applymovement LOCALID_ROUTE_22_SILVER, Route22_Silver_Run_Left_Out_Of_View
# 314 "data/maps/Route22/scripts.pory"
	waitmovement
# 315 "data/maps/Route22/scripts.pory"
	removeobject LOCALID_ROUTE_22_SILVER
# 316 "data/maps/Route22/scripts.pory"
	fadedefaultbgm
# 317 "data/maps/Route22/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
# 318 "data/maps/Route22/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 15
# 319 "data/maps/Route22/scripts.pory"
	release
	end


# 323 "data/maps/Route22/scripts.pory"
Route22_Player_Jump_Off_Ledge_Down:
# 325 "data/maps/Route22/scripts.pory"
	jump_2_down
# 326 "data/maps/Route22/scripts.pory"
	step_end

# 329 "data/maps/Route22/scripts.pory"
Route22_Player_Face_Left:
# 331 "data/maps/Route22/scripts.pory"
	face_left
# 332 "data/maps/Route22/scripts.pory"
	step_end

# 335 "data/maps/Route22/scripts.pory"
Route22_Giovanni_Face_Up_Slowly:
# 337 "data/maps/Route22/scripts.pory"
	face_up
# 338 "data/maps/Route22/scripts.pory"
	step_end

# 341 "data/maps/Route22/scripts.pory"
Route22_Giovanni_Walk_Left_Out_Of_View:
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 343 "data/maps/Route22/scripts.pory"
	walk_left
# 344 "data/maps/Route22/scripts.pory"
	step_end

# 347 "data/maps/Route22/scripts.pory"
Route22_Giovanni_Face_Left_Slowly:
# 349 "data/maps/Route22/scripts.pory"
	face_left
# 350 "data/maps/Route22/scripts.pory"
	step_end

# 353 "data/maps/Route22/scripts.pory"
Route22_Silver_Run_Left_Out_Of_View:
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 355 "data/maps/Route22/scripts.pory"
	walk_fast_left
# 356 "data/maps/Route22/scripts.pory"
	step_end

# 359 "data/maps/Route22/scripts.pory"
Route22_Silver_Walk_Left_Slowly:
# 361 "data/maps/Route22/scripts.pory"
	walk_slower_left
# 362 "data/maps/Route22/scripts.pory"
	step_end

# 365 "data/maps/Route22/scripts.pory"
Route22_Silver_Walk_Right:
# 367 "data/maps/Route22/scripts.pory"
	walk_right
# 368 "data/maps/Route22/scripts.pory"
	step_end

# 371 "data/maps/Route22/scripts.pory"
Route22_Silver_Emote:
# 373 "data/maps/Route22/scripts.pory"
	emote_exclamation_mark
# 374 "data/maps/Route22/scripts.pory"
	step_end

Route22_EventScript_Giovanni_Silver_Text_0:
# 280 "data/maps/Route22/scripts.pory"
	.string "???: Dad, wait!\n"
	.string "Hey! Where are you...$"

Route22_EventScript_Giovanni_Silver_Text_1:
# 282 "data/maps/Route22/scripts.pory"
	.string "...\n"
	.string "...$"

Route22_EventScript_Giovanni_Silver_Text_2:
# 286 "data/maps/Route22/scripts.pory"
	.string "GIOVANNI: Son, I must acknowledge\n"
	.string "defeat here, to move on...$"

Route22_EventScript_Giovanni_Silver_Text_3:
# 287 "data/maps/Route22/scripts.pory"
	.string "???: You told me...\n"
	.string "You were number one!\p"
	.string "Not just here, Dad!\n"
	.string "Number one in the entire WORLD!\p"
	.string "Are you gonna quit?!\n"
	.string "Where are you going now?$"

Route22_EventScript_Giovanni_Silver_Text_4:
# 290 "data/maps/Route22/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "GIOVANNI: I will go solo...\n"
	.string "For now...$"

Route22_EventScript_Giovanni_Silver_Text_5:
# 291 "data/maps/Route22/scripts.pory"
	.string "...So that one day, I'll return\n"
	.string "to form a stronger organization!$"

Route22_EventScript_Giovanni_Silver_Text_6:
# 292 "data/maps/Route22/scripts.pory"
	.string "???: What aspect of you was number\n"
	.string "one, then?\p"
	.string "Gathering so many only to be stopped\n"
	.string "by a mere... child!$"

Route22_EventScript_Giovanni_Silver_Text_7:
# 293 "data/maps/Route22/scripts.pory"
	.string "GIOVANNI: Putting together the\n"
	.string "potential of many produced power...\p"
	.string "That's what an organization is.\n"
	.string "That's its strength.$"

Route22_EventScript_Giovanni_Silver_Text_8:
# 294 "data/maps/Route22/scripts.pory"
	.string "But I failed... To make the best use\n"
	.string "of my subordinates' potential...!\p"
	.string "You will witness it one day...\n"
	.string "My TEAM ROCKET'S revival!$"

Route22_EventScript_Giovanni_Silver_Text_9:
# 295 "data/maps/Route22/scripts.pory"
	.string "???: I don't understand you!\n"
	.string "You don't make any sense, Dad!\p"
	.string "If you were number one, you\n"
	.string "wouldn't just... leave!$"

Route22_EventScript_Giovanni_Silver_Text_10:
# 296 "data/maps/Route22/scripts.pory"
	.string "GIOVANNI: ...One day, son.\n"
	.string "You will eventually understand.$"

Route22_EventScript_Giovanni_Silver_Text_11:
# 300 "data/maps/Route22/scripts.pory"
	.string "???: I don't want to understand\n"
	.string "you, coward!\p"
	.string "I will never become someone like you.$"

Route22_EventScript_Giovanni_Silver_Text_12:
# 301 "data/maps/Route22/scripts.pory"
	.string "A coward when you're alone,\n"
	.string "but that changes around others!\p"
	.string "You act like some number one\n"
	.string "tyrant... a fake BOSS to them!$"

Route22_EventScript_Giovanni_Silver_Text_13:
# 302 "data/maps/Route22/scripts.pory"
	.string "I will become strong! I'll be a\n"
	.string "stronger man all by myself!$"

Route22_EventScript_Giovanni_Silver_Text_14:
# 305 "data/maps/Route22/scripts.pory"
	.string "All... By... Myself!$"

Route22_EventScript_Giovanni_Silver_Text_15:
# 311 "data/maps/Route22/scripts.pory"
	.string "...What are you staring at?\n"
	.string "Get lost!$"
