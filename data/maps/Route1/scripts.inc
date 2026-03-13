# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1/scripts.pory"
	release
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 32 "data/maps/Route1/scripts.pory"
	end
# 33 "data/maps/Route1/scripts.pory"

# 34 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route1/scripts.pory"
	end

Route1_Spearows_Bite::
# 42 "data/maps/Route1/scripts.pory"
	lock
# 43 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_SPEAROW, CRY_MODE_NORMAL
# 44 "data/maps/Route1/scripts.pory"
	waitmoncry
# 45 "data/maps/Route1/scripts.pory"
	msgbox Route1_Spearows_Bite_Text_0
# 46 "data/maps/Route1/scripts.pory"
	closemessage
# 47 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 48 "data/maps/Route1/scripts.pory"
	doweather
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_Spearows_Bite_Text_1
# 50 "data/maps/Route1/scripts.pory"
	closemessage
# 51 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Misty_Thinks_You_Are_Rival::
# 56 "data/maps/Route1/scripts.pory"
	lock
# 57 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Face_Player
# 58 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 59 "data/maps/Route1/scripts.pory"
	doweather
# 60 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_0, MSGBOX_YESNO
# 61 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_1
# 62 "data/maps/Route1/scripts.pory"
	closemessage
# 63 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 64 "data/maps/Route1/scripts.pory"
	doweather
# 65 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_2
# 66 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_3
# 67 "data/maps/Route1/scripts.pory"
	closemessage
# 68 "data/maps/Route1/scripts.pory"
	playbgm MUS_FOLLOW_ME, TRUE
# 69 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_9
# 70 "data/maps/Route1/scripts.pory"
	waitmovement
# 71 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_9
# 72 "data/maps/Route1/scripts.pory"
	waitmovement
# 73 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
# 74 "data/maps/Route1/scripts.pory"
	setweather WEATHER_SUNNY
# 75 "data/maps/Route1/scripts.pory"
	doweather
# 76 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Right_3
# 77 "data/maps/Route1/scripts.pory"
	waitmovement
# 78 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_1
# 79 "data/maps/Route1/scripts.pory"
	waitmovement
# 80 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_1
# 81 "data/maps/Route1/scripts.pory"
	waitmovement
# 82 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Right_3
# 83 "data/maps/Route1/scripts.pory"
	waitmovement
# 84 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 85 "data/maps/Route1/scripts.pory"
	waitmovement
# 86 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 87 "data/maps/Route1/scripts.pory"
	waitmovement
# 88 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_4
# 89 "data/maps/Route1/scripts.pory"
	waitmessage
# 90 "data/maps/Route1/scripts.pory"
	closemessage
# 91 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Left_2
# 92 "data/maps/Route1/scripts.pory"
	waitmovement
# 93 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Left_2
# 94 "data/maps/Route1/scripts.pory"
	waitmovement
# 95 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 96 "data/maps/Route1/scripts.pory"
	waitmovement
# 97 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 98 "data/maps/Route1/scripts.pory"
	waitmovement
# 99 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 100 "data/maps/Route1/scripts.pory"
	waitmovement
# 101 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Right_18
# 102 "data/maps/Route1/scripts.pory"
	waitmovement
# 103 "data/maps/Route1/scripts.pory"
	delay 60
# 104 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_5
# 105 "data/maps/Route1/scripts.pory"
	waitmessage
# 106 "data/maps/Route1/scripts.pory"
	closemessage
# 107 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_7
# 108 "data/maps/Route1/scripts.pory"
	waitmovement
# 109 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Left_18
# 110 "data/maps/Route1/scripts.pory"
	waitmovement
# 111 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 112 "data/maps/Route1/scripts.pory"
	waitmovement
# 113 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_6
# 114 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_7
# 115 "data/maps/Route1/scripts.pory"
	waitmessage
# 116 "data/maps/Route1/scripts.pory"
	closemessage
# 117 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_Walk_Right_18
# 118 "data/maps/Route1/scripts.pory"
	waitmovement
# 119 "data/maps/Route1/scripts.pory"
	removeobject 10
# 120 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 121 "data/maps/Route1/scripts.pory"
	release
	end


# 125 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_2:
# 126 "data/maps/Route1/scripts.pory"
	walk_left
# 126 "data/maps/Route1/scripts.pory"
	walk_left
# 127 "data/maps/Route1/scripts.pory"
	step_end

# 130 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_3:
# 131 "data/maps/Route1/scripts.pory"
	walk_right
# 131 "data/maps/Route1/scripts.pory"
	walk_right
# 131 "data/maps/Route1/scripts.pory"
	walk_right
# 132 "data/maps/Route1/scripts.pory"
	step_end

# 135 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_18:
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	walk_left
# 137 "data/maps/Route1/scripts.pory"
	step_end

# 140 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_18:
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	walk_right
# 142 "data/maps/Route1/scripts.pory"
	step_end

# 145 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_1:
# 146 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	step_end

# 150 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_5:
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
Route1_Movement_Walk_Up_7:
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	walk_up
# 157 "data/maps/Route1/scripts.pory"
	step_end

# 160 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_9:
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	walk_up
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
Route1_Movement_Face_Player:
# 166 "data/maps/Route1/scripts.pory"
	face_player
# 167 "data/maps/Route1/scripts.pory"
	step_end

# 170 "data/maps/Route1/scripts.pory"
move_face_down:
# 171 "data/maps/Route1/scripts.pory"
	face_down
# 172 "data/maps/Route1/scripts.pory"
	step_end

# 175 "data/maps/Route1/scripts.pory"
exclaimation_mark:
# 176 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 177 "data/maps/Route1/scripts.pory"
	step_end

# 180 "data/maps/Route1/scripts.pory"
move_up_1:
# 181 "data/maps/Route1/scripts.pory"
	walk_up
# 182 "data/maps/Route1/scripts.pory"
	step_end

# 185 "data/maps/Route1/scripts.pory"
move_face_left_fast:
# 186 "data/maps/Route1/scripts.pory"
	face_left_fast
# 187 "data/maps/Route1/scripts.pory"
	step_end

# 190 "data/maps/Route1/scripts.pory"
move_left_1:
# 191 "data/maps/Route1/scripts.pory"
	walk_left
# 192 "data/maps/Route1/scripts.pory"
	step_end

# 194 "data/maps/Route1/scripts.pory"
move_left_2:
# 195 "data/maps/Route1/scripts.pory"
	walk_left
# 195 "data/maps/Route1/scripts.pory"
	walk_left
# 196 "data/maps/Route1/scripts.pory"
	step_end

# 198 "data/maps/Route1/scripts.pory"
move_left_3:
# 199 "data/maps/Route1/scripts.pory"
	walk_left
# 199 "data/maps/Route1/scripts.pory"
	walk_left
# 199 "data/maps/Route1/scripts.pory"
	walk_left
# 200 "data/maps/Route1/scripts.pory"
	step_end

# 202 "data/maps/Route1/scripts.pory"
move_left_4:
# 203 "data/maps/Route1/scripts.pory"
	walk_left
# 203 "data/maps/Route1/scripts.pory"
	walk_left
# 203 "data/maps/Route1/scripts.pory"
	walk_left
# 203 "data/maps/Route1/scripts.pory"
	walk_left
# 204 "data/maps/Route1/scripts.pory"
	step_end

# 207 "data/maps/Route1/scripts.pory"
move_left_5:
# 208 "data/maps/Route1/scripts.pory"
	walk_left
# 208 "data/maps/Route1/scripts.pory"
	walk_left
# 208 "data/maps/Route1/scripts.pory"
	walk_left
# 208 "data/maps/Route1/scripts.pory"
	walk_left
# 208 "data/maps/Route1/scripts.pory"
	walk_left
# 209 "data/maps/Route1/scripts.pory"
	step_end

# 212 "data/maps/Route1/scripts.pory"
move_left_16:
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	walk_left
# 214 "data/maps/Route1/scripts.pory"
	step_end

# 216 "data/maps/Route1/scripts.pory"
run_left_16:
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 218 "data/maps/Route1/scripts.pory"
	step_end

# 221 "data/maps/Route1/scripts.pory"
move_right_16:
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	walk_right
# 223 "data/maps/Route1/scripts.pory"
	step_end

Route1_Spearows_Bite_Text_0:
# 45 "data/maps/Route1/scripts.pory"
	.string "It's a wild POKéMON!\n"
	.string "Darn! No way to ID it!$"

Route1_Spearows_Bite_Text_1:
# 49 "data/maps/Route1/scripts.pory"
	.string "Ow!\n"
	.string "It gave you a vicious PECK!$"

Route1_Misty_Thinks_You_Are_Rival_Text_0:
# 60 "data/maps/Route1/scripts.pory"
	.string "Argh! How annoying!\n"
	.string "...Oh? Well, welcome back, pest!\p"
	.string "Are you returning my BIKE?$"

Route1_Misty_Thinks_You_Are_Rival_Text_1:
# 61 "data/maps/Route1/scripts.pory"
	.string "...Huh? I appreciate that\n"
	.string "unexpected honesty, but...\p"
	.string "Sorry, I've had a rough day!\n"
	.string "Some loser took off with my BIKE!$"

Route1_Misty_Thinks_You_Are_Rival_Text_2:
# 65 "data/maps/Route1/scripts.pory"
	.string "I can't seem to reel in any\n"
	.string "good POKéMON here either!\p"
	.string "It's getting a bit dark, too, so\n"
	.string "I'll probably head back to CERULEAN.$"

Route1_Misty_Thinks_You_Are_Rival_Text_3:
# 66 "data/maps/Route1/scripts.pory"
	.string "You're a new face!\n"
	.string "Uh huh...\p"
	.string "OK, so you're {PLAYER}!\n"
	.string "I'll remember that!\p"
	.string "I'm MISTY! Here, come with me!\n"
	.string "I could show you to VIRIDIAN CITY!$"

Route1_Misty_Thinks_You_Are_Rival_Text_4:
# 88 "data/maps/Route1/scripts.pory"
	.string "Well, would you look at that?\n"
	.string "The rain has finally let up!\p"
	.string "Come on, just a bit more to go!$"

Route1_Misty_Thinks_You_Are_Rival_Text_5:
# 104 "data/maps/Route1/scripts.pory"
	.string "I'm all the way over here,\n"
	.string "SLOWPOKE! By the big red building!$"

Route1_Misty_Thinks_You_Are_Rival_Text_6:
# 113 "data/maps/Route1/scripts.pory"
	.string "We're here!\n"
	.string "This is the POKéMON CENTER.\p"
	.string "NURSE JOY is always happy to heal\n"
	.string "Your POKéMON to full health!\p"
	.string "The best part is that it's free!$"

Route1_Misty_Thinks_You_Are_Rival_Text_7:
# 114 "data/maps/Route1/scripts.pory"
	.string "I'm gonna go over to the POKéMART!\n"
	.string "I definitely need to stock up\p"
	.string "on supplies now, since ROUTE 1.\n"
	.string "OK, see ya!\p"
	.string "Be sure to meet lots of POKéMON!$"
