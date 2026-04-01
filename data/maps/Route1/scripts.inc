Route1_MapScripts::
	.byte 0


Route1_EventScript_RouteSign::
# 8 "data/maps/Route1/scripts.pory"
	lock
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_RouteSign_Text_0
# 10 "data/maps/Route1/scripts.pory"
	closemessage
# 11 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_Boy::
# 17 "data/maps/Route1/scripts.pory"
	lock
# 18 "data/maps/Route1/scripts.pory"
	faceplayer
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Boy_Text_0
# 20 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Boy_Text_1
# 21 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_Boy_Text_2
# 22 "data/maps/Route1/scripts.pory"
	closemessage
# 23 "data/maps/Route1/scripts.pory"
	release
	end


Route1_EventScript_MartClerk::
# 29 "data/maps/Route1/scripts.pory"
	lock
# 30 "data/maps/Route1/scripts.pory"
	faceplayer
# 31 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_MartClerk_2
# 52 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_5
# 53 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_6
Route1_EventScript_MartClerk_1:
# 55 "data/maps/Route1/scripts.pory"
	closemessage
# 56 "data/maps/Route1/scripts.pory"
	release
	end

Route1_EventScript_MartClerk_2:
# 33 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_0
# 34 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_1
# 35 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 36 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION, 5
# 37 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route1_EventScript_MartClerk_5
	goto Route1_EventScript_MartClerk_1

Route1_EventScript_MartClerk_5:
# 39 "data/maps/Route1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 40 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_2
# 41 "data/maps/Route1/scripts.pory"
	waitfanfare
# 42 "data/maps/Route1/scripts.pory"
	waitmessage
# 43 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION, 5
# 44 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_3
# 45 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 46 "data/maps/Route1/scripts.pory"
	msgbox Route1_EventScript_MartClerk_Text_4
# 47 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
	goto Route1_EventScript_MartClerk_1


Route1_Spearows_Bite::
# 61 "data/maps/Route1/scripts.pory"
	lock
# 62 "data/maps/Route1/scripts.pory"
	msgbox Route1_Spearows_Bite_Text_0
# 63 "data/maps/Route1/scripts.pory"
	closemessage
# 64 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 65 "data/maps/Route1/scripts.pory"
	doweather
# 66 "data/maps/Route1/scripts.pory"
	faceplayer
# 67 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 68 "data/maps/Route1/scripts.pory"
	waitmoncry
# 69 "data/maps/Route1/scripts.pory"
	msgbox Route1_Spearows_Bite_Text_1
# 70 "data/maps/Route1/scripts.pory"
	closemessage
# 71 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Misty_Thinks_You_Are_Rival::
# 76 "data/maps/Route1/scripts.pory"
	lock
# 77 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_0
# 78 "data/maps/Route1/scripts.pory"
	closemessage
# 79 "data/maps/Route1/scripts.pory"
	faceplayer
# 80 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 81 "data/maps/Route1/scripts.pory"
	doweather
# 82 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_1, MSGBOX_YESNO
# 83 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route1_Misty_Thinks_You_Are_Rival_2
# 94 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_7
# 95 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_8
# 96 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_9
# 97 "data/maps/Route1/scripts.pory"
	closemessage
# 98 "data/maps/Route1/scripts.pory"
	checkplayergender
# 99 "data/maps/Route1/scripts.pory"
	compare VAR_RESULT, MALE
	goto_if_eq Route1_Misty_Thinks_You_Are_Rival_5
# 106 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_12
# 107 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_11
Route1_Misty_Thinks_You_Are_Rival_1:
# 110 "data/maps/Route1/scripts.pory"
	closemessage
# 111 "data/maps/Route1/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 112 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_MISTY, Route1_Misty_Sequence_1
# 113 "data/maps/Route1/scripts.pory"
	delay 4
# 114 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Player_Follow_Sequence_1
# 115 "data/maps/Route1/scripts.pory"
	waitmovement
# 116 "data/maps/Route1/scripts.pory"
	setweather WEATHER_SUNNY
# 117 "data/maps/Route1/scripts.pory"
	doweather
# 118 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_MISTY, Route1_Movement_Face_Player
# 119 "data/maps/Route1/scripts.pory"
	waitmovement
# 120 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_13
# 121 "data/maps/Route1/scripts.pory"
	closemessage
# 122 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
# 123 "data/maps/Route1/scripts.pory"
	waitmoncry
# 124 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Player_Sequence_1
# 125 "data/maps/Route1/scripts.pory"
	waitmovement
# 126 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_ROUTE1_MISTY, Route1_Misty_Sequence_2
# 127 "data/maps/Route1/scripts.pory"
	waitmovement
# 128 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_14
# 129 "data/maps/Route1/scripts.pory"
	closemessage
# 130 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Player_Sequence_2
# 131 "data/maps/Route1/scripts.pory"
	waitmovement
# 132 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_15
# 133 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_16
# 134 "data/maps/Route1/scripts.pory"
	closemessage
# 135 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_ROUTE1_MISTY
# 136 "data/maps/Route1/scripts.pory"
	addobject LOCALID_VIRIDIAN_MISTY
# 137 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MISTY, Viridian_Misty_Sequence_1
# 138 "data/maps/Route1/scripts.pory"
	waitmovement
# 139 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 140 "data/maps/Route1/scripts.pory"
	removeobject LOCALID_VIRIDIAN_MISTY
# 141 "data/maps/Route1/scripts.pory"
	release
	end

Route1_Misty_Thinks_You_Are_Rival_2:
# 85 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_2
# 86 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_3
# 87 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_4
# 88 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_5
# 89 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_6
# 90 "data/maps/Route1/scripts.pory"
	closemessage
	goto Route1_Misty_Thinks_You_Are_Rival_1

Route1_Misty_Thinks_You_Are_Rival_5:
# 101 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_10
# 102 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_11
	goto Route1_Misty_Thinks_You_Are_Rival_1


# 145 "data/maps/Route1/scripts.pory"
Route1_Misty_Sequence_1:
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	walk_up
# 148 "data/maps/Route1/scripts.pory"
	walk_right
# 148 "data/maps/Route1/scripts.pory"
	walk_right
# 148 "data/maps/Route1/scripts.pory"
	walk_right
# 149 "data/maps/Route1/scripts.pory"
	walk_up
# 149 "data/maps/Route1/scripts.pory"
	walk_up
# 149 "data/maps/Route1/scripts.pory"
	walk_up
# 150 "data/maps/Route1/scripts.pory"
	walk_left
# 150 "data/maps/Route1/scripts.pory"
	walk_left
# 150 "data/maps/Route1/scripts.pory"
	walk_left
# 151 "data/maps/Route1/scripts.pory"
	walk_up
# 151 "data/maps/Route1/scripts.pory"
	walk_up
# 151 "data/maps/Route1/scripts.pory"
	walk_up
# 151 "data/maps/Route1/scripts.pory"
	walk_up
# 151 "data/maps/Route1/scripts.pory"
	walk_up
# 152 "data/maps/Route1/scripts.pory"
	step_end

# 155 "data/maps/Route1/scripts.pory"
Route1_Player_Follow_Sequence_1:
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	walk_up
# 158 "data/maps/Route1/scripts.pory"
	walk_right
# 158 "data/maps/Route1/scripts.pory"
	walk_right
# 158 "data/maps/Route1/scripts.pory"
	walk_right
# 159 "data/maps/Route1/scripts.pory"
	walk_up
# 159 "data/maps/Route1/scripts.pory"
	walk_up
# 159 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_left
# 160 "data/maps/Route1/scripts.pory"
	walk_left
# 160 "data/maps/Route1/scripts.pory"
	walk_left
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 162 "data/maps/Route1/scripts.pory"
	step_end

# 165 "data/maps/Route1/scripts.pory"
Route1_Misty_Sequence_2:
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 167 "data/maps/Route1/scripts.pory"
	walk_up
# 168 "data/maps/Route1/scripts.pory"
	set_invisible
# 169 "data/maps/Route1/scripts.pory"
	step_end

# 172 "data/maps/Route1/scripts.pory"
Viridian_Misty_Sequence_1:
# 174 "data/maps/Route1/scripts.pory"
	walk_right
# 174 "data/maps/Route1/scripts.pory"
	walk_right
# 174 "data/maps/Route1/scripts.pory"
	walk_right
# 174 "data/maps/Route1/scripts.pory"
	walk_right
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 175 "data/maps/Route1/scripts.pory"
	walk_up
# 176 "data/maps/Route1/scripts.pory"
	step_end

# 179 "data/maps/Route1/scripts.pory"
Route1_Player_Sequence_1:
# 181 "data/maps/Route1/scripts.pory"
	emote_question_mark
# 182 "data/maps/Route1/scripts.pory"
	delay_8
# 183 "data/maps/Route1/scripts.pory"
	face_left
# 184 "data/maps/Route1/scripts.pory"
	delay_16
# 185 "data/maps/Route1/scripts.pory"
	delay_16
# 186 "data/maps/Route1/scripts.pory"
	face_right
# 187 "data/maps/Route1/scripts.pory"
	delay_16
# 188 "data/maps/Route1/scripts.pory"
	delay_16
# 189 "data/maps/Route1/scripts.pory"
	face_down
# 190 "data/maps/Route1/scripts.pory"
	delay_16
# 191 "data/maps/Route1/scripts.pory"
	delay_16
# 192 "data/maps/Route1/scripts.pory"
	face_left
# 193 "data/maps/Route1/scripts.pory"
	delay_16
# 194 "data/maps/Route1/scripts.pory"
	delay_16
# 195 "data/maps/Route1/scripts.pory"
	face_right
# 196 "data/maps/Route1/scripts.pory"
	delay_16
# 197 "data/maps/Route1/scripts.pory"
	delay_16
# 198 "data/maps/Route1/scripts.pory"
	face_down
# 199 "data/maps/Route1/scripts.pory"
	delay_16
# 200 "data/maps/Route1/scripts.pory"
	delay_16
# 201 "data/maps/Route1/scripts.pory"
	face_left
# 202 "data/maps/Route1/scripts.pory"
	delay_16
# 203 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 204 "data/maps/Route1/scripts.pory"
	face_up
# 205 "data/maps/Route1/scripts.pory"
	step_end

# 208 "data/maps/Route1/scripts.pory"
Route1_Player_Sequence_2:
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 210 "data/maps/Route1/scripts.pory"
	player_run_up
# 211 "data/maps/Route1/scripts.pory"
	player_run_left
# 211 "data/maps/Route1/scripts.pory"
	player_run_left
# 212 "data/maps/Route1/scripts.pory"
	player_run_up
# 212 "data/maps/Route1/scripts.pory"
	player_run_up
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 213 "data/maps/Route1/scripts.pory"
	player_run_left
# 214 "data/maps/Route1/scripts.pory"
	player_run_up
# 214 "data/maps/Route1/scripts.pory"
	player_run_up
# 214 "data/maps/Route1/scripts.pory"
	player_run_up
# 214 "data/maps/Route1/scripts.pory"
	player_run_up
# 215 "data/maps/Route1/scripts.pory"
	walk_up
# 216 "data/maps/Route1/scripts.pory"
	step_end

# 219 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_2:
# 220 "data/maps/Route1/scripts.pory"
	walk_left
# 220 "data/maps/Route1/scripts.pory"
	walk_left
# 221 "data/maps/Route1/scripts.pory"
	step_end

# 224 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_3:
# 225 "data/maps/Route1/scripts.pory"
	walk_right
# 225 "data/maps/Route1/scripts.pory"
	walk_right
# 225 "data/maps/Route1/scripts.pory"
	walk_right
# 226 "data/maps/Route1/scripts.pory"
	step_end

# 229 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_18:
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 230 "data/maps/Route1/scripts.pory"
	walk_left
# 231 "data/maps/Route1/scripts.pory"
	step_end

# 234 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_18:
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 235 "data/maps/Route1/scripts.pory"
	walk_right
# 236 "data/maps/Route1/scripts.pory"
	step_end

# 239 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_3:
# 240 "data/maps/Route1/scripts.pory"
	walk_up
# 240 "data/maps/Route1/scripts.pory"
	walk_up
# 240 "data/maps/Route1/scripts.pory"
	walk_up
# 241 "data/maps/Route1/scripts.pory"
	step_end

# 244 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_4:
# 245 "data/maps/Route1/scripts.pory"
	walk_up
# 245 "data/maps/Route1/scripts.pory"
	walk_up
# 245 "data/maps/Route1/scripts.pory"
	walk_up
# 245 "data/maps/Route1/scripts.pory"
	walk_up
# 246 "data/maps/Route1/scripts.pory"
	step_end

# 249 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_5:
# 250 "data/maps/Route1/scripts.pory"
	walk_up
# 250 "data/maps/Route1/scripts.pory"
	walk_up
# 250 "data/maps/Route1/scripts.pory"
	walk_up
# 250 "data/maps/Route1/scripts.pory"
	walk_up
# 250 "data/maps/Route1/scripts.pory"
	walk_up
# 251 "data/maps/Route1/scripts.pory"
	step_end

# 254 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_7:
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 255 "data/maps/Route1/scripts.pory"
	walk_up
# 256 "data/maps/Route1/scripts.pory"
	step_end

# 259 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_1:
# 260 "data/maps/Route1/scripts.pory"
	walk_up
# 261 "data/maps/Route1/scripts.pory"
	step_end

# 264 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_11:
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 265 "data/maps/Route1/scripts.pory"
	walk_up
# 266 "data/maps/Route1/scripts.pory"
	step_end

# 269 "data/maps/Route1/scripts.pory"
Route1_Movement_Face_Player:
# 270 "data/maps/Route1/scripts.pory"
	face_player
# 271 "data/maps/Route1/scripts.pory"
	step_end

# 274 "data/maps/Route1/scripts.pory"
move_face_down:
# 275 "data/maps/Route1/scripts.pory"
	face_down
# 276 "data/maps/Route1/scripts.pory"
	step_end

# 279 "data/maps/Route1/scripts.pory"
exclaimation_mark:
# 280 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 281 "data/maps/Route1/scripts.pory"
	step_end

# 284 "data/maps/Route1/scripts.pory"
move_up_1:
# 285 "data/maps/Route1/scripts.pory"
	walk_up
# 286 "data/maps/Route1/scripts.pory"
	step_end

# 289 "data/maps/Route1/scripts.pory"
move_face_left_fast:
# 290 "data/maps/Route1/scripts.pory"
	face_left_fast
# 291 "data/maps/Route1/scripts.pory"
	step_end

# 294 "data/maps/Route1/scripts.pory"
move_left_1:
# 295 "data/maps/Route1/scripts.pory"
	walk_left
# 296 "data/maps/Route1/scripts.pory"
	step_end

# 298 "data/maps/Route1/scripts.pory"
move_left_2:
# 299 "data/maps/Route1/scripts.pory"
	walk_left
# 299 "data/maps/Route1/scripts.pory"
	walk_left
# 300 "data/maps/Route1/scripts.pory"
	step_end

# 302 "data/maps/Route1/scripts.pory"
move_left_3:
# 303 "data/maps/Route1/scripts.pory"
	walk_left
# 303 "data/maps/Route1/scripts.pory"
	walk_left
# 303 "data/maps/Route1/scripts.pory"
	walk_left
# 304 "data/maps/Route1/scripts.pory"
	step_end

# 306 "data/maps/Route1/scripts.pory"
move_left_4:
# 307 "data/maps/Route1/scripts.pory"
	walk_left
# 307 "data/maps/Route1/scripts.pory"
	walk_left
# 307 "data/maps/Route1/scripts.pory"
	walk_left
# 307 "data/maps/Route1/scripts.pory"
	walk_left
# 308 "data/maps/Route1/scripts.pory"
	step_end

# 311 "data/maps/Route1/scripts.pory"
move_left_5:
# 312 "data/maps/Route1/scripts.pory"
	walk_left
# 312 "data/maps/Route1/scripts.pory"
	walk_left
# 312 "data/maps/Route1/scripts.pory"
	walk_left
# 312 "data/maps/Route1/scripts.pory"
	walk_left
# 312 "data/maps/Route1/scripts.pory"
	walk_left
# 313 "data/maps/Route1/scripts.pory"
	step_end

# 316 "data/maps/Route1/scripts.pory"
move_left_16:
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 317 "data/maps/Route1/scripts.pory"
	walk_left
# 318 "data/maps/Route1/scripts.pory"
	step_end

# 320 "data/maps/Route1/scripts.pory"
run_left_16:
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 321 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 322 "data/maps/Route1/scripts.pory"
	step_end

# 325 "data/maps/Route1/scripts.pory"
move_right_16:
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 326 "data/maps/Route1/scripts.pory"
	walk_right
# 327 "data/maps/Route1/scripts.pory"
	step_end

Route1_EventScript_RouteSign_Text_0:
# 9 "data/maps/Route1/scripts.pory"
	.string "ROUTE 1\n"
	.string "PALLET TOWN - VIRIDIAN CITY$"

Route1_EventScript_Boy_Text_0:
# 19 "data/maps/Route1/scripts.pory"
	.string "See those ledges along the road?$"

Route1_EventScript_Boy_Text_1:
# 20 "data/maps/Route1/scripts.pory"
	.string "It's a bit scary, but you can jump\n"
	.string "from them.$"

Route1_EventScript_Boy_Text_2:
# 21 "data/maps/Route1/scripts.pory"
	.string "You can get back to PALLET TOWN\n"
	.string "much quicker that way.$"

Route1_EventScript_MartClerk_Text_0:
# 33 "data/maps/Route1/scripts.pory"
	.string "Hi!\n"
	.string "I work at the POKé MART.\p"
	.string "Have you checked it out in\n"
	.string "VIRIDIAN CITY yet?$"

Route1_EventScript_MartClerk_Text_1:
# 34 "data/maps/Route1/scripts.pory"
	.string "Oh, I know!\n"
	.string "I'll give you free samples.\p"
	.string "It's definitely a big help for\n"
	.string "new TRAINERS like you.\p"
	.string "Here you go!$"

Route1_EventScript_MartClerk_Text_2:
# 40 "data/maps/Route1/scripts.pory"
	.string "{PLAYER} obtained five POTION(s)\n"
	.string "from the POKé MART clerk.$"

Route1_EventScript_MartClerk_Text_3:
# 44 "data/maps/Route1/scripts.pory"
	.string "{PLAYER} put the POTION(s) away in\n"
	.string "the BAG'S ITEMS POCKET.$"

Route1_EventScript_MartClerk_Text_4:
# 46 "data/maps/Route1/scripts.pory"
	.string "Stop by a POKé MART to shop,\n"
	.string "any time you want!\p"
	.string "We aren't exclusive to KANTO!$"

Route1_EventScript_MartClerk_Text_5:
# 52 "data/maps/Route1/scripts.pory"
	.string "Oh, it's you again!\n"
	.string "I was about to head back...\p"
	.string "You can visit us any time you\n"
	.string "want! We buy and sell products.$"

Route1_EventScript_MartClerk_Text_6:
# 53 "data/maps/Route1/scripts.pory"
	.string "We aren't exclusive to KANTO\n"
	.string "either, by the way.\p"
	.string "There are more stores in many\n"
	.string "other regions, it's worldwide!$"

Route1_Spearows_Bite_Text_0:
# 62 "data/maps/Route1/scripts.pory"
	.string "It's a wild POKéMON!\n"
	.string "Darn! No way to ID it!$"

Route1_Spearows_Bite_Text_1:
# 69 "data/maps/Route1/scripts.pory"
	.string "Ow!\n"
	.string "It gave you a vicious PECK!$"

Route1_Misty_Thinks_You_Are_Rival_Text_0:
# 77 "data/maps/Route1/scripts.pory"
	.string "Argh!\n"
	.string "...How annoying!$"

Route1_Misty_Thinks_You_Are_Rival_Text_1:
# 82 "data/maps/Route1/scripts.pory"
	.string "...Oh?\n"
	.string "Are you that pest's friend...?\p"
	.string "Are you going to apologize?!$"

Route1_Misty_Thinks_You_Are_Rival_Text_2:
# 85 "data/maps/Route1/scripts.pory"
	.string "Ugh, I never thought that new\n"
	.string "TRAINERS from PALLET TOWN would...\p"
	.string "Oh, never mind that!$"

Route1_Misty_Thinks_You_Are_Rival_Text_3:
# 86 "data/maps/Route1/scripts.pory"
	.string "I'm a decent TRAINER, but I can't\n"
	.string "lie, there's more to learn!$"

Route1_Misty_Thinks_You_Are_Rival_Text_4:
# 87 "data/maps/Route1/scripts.pory"
	.string "I also love WATER-type POKéMON!\n"
	.string "I was fishing here, but...$"

Route1_Misty_Thinks_You_Are_Rival_Text_5:
# 88 "data/maps/Route1/scripts.pory"
	.string "I can't seem to reel in any POKéMON\n"
	.string "at all... Aww...\p"
	.string "It's getting a bit dark too, so\n"
	.string "I'll probably go back to CERULEAN...$"

Route1_Misty_Thinks_You_Are_Rival_Text_6:
# 89 "data/maps/Route1/scripts.pory"
	.string "You're a new face!\n"
	.string "Uh huh...\p"
	.string "Okay, so you're {PLAYER}!\n"
	.string "I'll remember that!\p"
	.string "I'm MISTY! Here, come with me!\n"
	.string "I could show you to VIRIDIAN CITY!$"

Route1_Misty_Thinks_You_Are_Rival_Text_7:
# 94 "data/maps/Route1/scripts.pory"
	.string "Tch...\n"
	.string "Seriously?!\p"
	.string "If I even wanted your apology, I\n"
	.string "would have asked for it!$"

Route1_Misty_Thinks_You_Are_Rival_Text_8:
# 95 "data/maps/Route1/scripts.pory"
	.string "I came here for POKéMON, not to be\n"
	.string "bullied by new TRAINERS!$"

Route1_Misty_Thinks_You_Are_Rival_Text_9:
# 96 "data/maps/Route1/scripts.pory"
	.string "I can't seem to reel in any POKéMON\n"
	.string "at all... Aww...\p"
	.string "It's getting a bit dark too, so I'll\n"
	.string "probably go back to CERULEAN...$"

Route1_Misty_Thinks_You_Are_Rival_Text_10:
# 101 "data/maps/Route1/scripts.pory"
	.string "You're a new face, though!\n"
	.string "Uh huh... Okay...\p"
	.string "Wow, you're {PLAYER}'ERY'UHH-GURL?\n"
	.string "Wow! I forgot already...$"

Route1_Misty_Thinks_You_Are_Rival_Text_11:
# 102 "data/maps/Route1/scripts.pory"
	.string "Anyways, I'm MISTY! Come with me!\n"
	.string "I have to show you VIRIDIAN CITY!$"

Route1_Misty_Thinks_You_Are_Rival_Text_12:
# 106 "data/maps/Route1/scripts.pory"
	.string "You're a new face, though!\n"
	.string "Uh huh... Okay...\p"
	.string "Wow, you're {PLAYER}'ERR'UHH-MAN?\n"
	.string "Wow! I forgot already...$"

Route1_Misty_Thinks_You_Are_Rival_Text_13:
# 120 "data/maps/Route1/scripts.pory"
	.string "Well, would you look at that?\n"
	.string "The rain has finally let up!\p"
	.string "Come on, just a bit more to go!$"

Route1_Misty_Thinks_You_Are_Rival_Text_14:
# 128 "data/maps/Route1/scripts.pory"
	.string "I'm all the way over here,\n"
	.string "SLOWPOKE! By the big red building!$"

Route1_Misty_Thinks_You_Are_Rival_Text_15:
# 132 "data/maps/Route1/scripts.pory"
	.string "We're here!\n"
	.string "This is the POKéMON CENTER.\p"
	.string "NURSE JOY is always happy to heal\n"
	.string "Your POKéMON to full health!\p"
	.string "The best part is that it's free!$"

Route1_Misty_Thinks_You_Are_Rival_Text_16:
# 133 "data/maps/Route1/scripts.pory"
	.string "Anyways, I'll be seeing you!\n"
	.string "I gotta go over to a POKé MART!\p"
	.string "Be sure to meet lots of POKéMON!\n"
	.string "Let's meet again, alright?$"
