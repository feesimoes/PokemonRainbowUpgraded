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
	msgbox Route1_Spearows_Bite_Text_0
# 45 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 46 "data/maps/Route1/scripts.pory"
	doweather
# 47 "data/maps/Route1/scripts.pory"
	msgbox Route1_Spearows_Bite_Text_1
# 48 "data/maps/Route1/scripts.pory"
	waitmessage
# 49 "data/maps/Route1/scripts.pory"
	release
	end


Route1_Misty_Thinks_You_Are_Rival::
# 54 "data/maps/Route1/scripts.pory"
	lock
# 55 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Face_Player
# 56 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN
# 57 "data/maps/Route1/scripts.pory"
	doweather
# 58 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_0, MSGBOX_YESNO
# 59 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_1
# 60 "data/maps/Route1/scripts.pory"
	setweather WEATHER_RAIN_THUNDERSTORM
# 61 "data/maps/Route1/scripts.pory"
	doweather
# 62 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_2
# 63 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_3
# 64 "data/maps/Route1/scripts.pory"
	waitmessage
# 65 "data/maps/Route1/scripts.pory"
	closemessage
# 66 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_9
# 67 "data/maps/Route1/scripts.pory"
	waitmovement
# 68 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_9
# 69 "data/maps/Route1/scripts.pory"
	waitmovement
# 70 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_4
# 71 "data/maps/Route1/scripts.pory"
	waitmessage
# 72 "data/maps/Route1/scripts.pory"
	closemessage
# 73 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
# 74 "data/maps/Route1/scripts.pory"
	waitmoncry
# 75 "data/maps/Route1/scripts.pory"
	setweather WEATHER_SUNNY
# 76 "data/maps/Route1/scripts.pory"
	doweather
# 77 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Right_3
# 78 "data/maps/Route1/scripts.pory"
	waitmovement
# 79 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_1
# 80 "data/maps/Route1/scripts.pory"
	waitmovement
# 81 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_1
# 82 "data/maps/Route1/scripts.pory"
	waitmovement
# 83 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Right_3
# 84 "data/maps/Route1/scripts.pory"
	waitmovement
# 85 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 86 "data/maps/Route1/scripts.pory"
	waitmovement
# 87 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 88 "data/maps/Route1/scripts.pory"
	waitmovement
# 89 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_5
# 90 "data/maps/Route1/scripts.pory"
	waitmessage
# 91 "data/maps/Route1/scripts.pory"
	closemessage
# 92 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Left_2
# 93 "data/maps/Route1/scripts.pory"
	waitmovement
# 94 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Left_2
# 95 "data/maps/Route1/scripts.pory"
	waitmovement
# 96 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 97 "data/maps/Route1/scripts.pory"
	waitmovement
# 98 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 99 "data/maps/Route1/scripts.pory"
	waitmovement
# 100 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Up_5
# 101 "data/maps/Route1/scripts.pory"
	waitmovement
# 102 "data/maps/Route1/scripts.pory"
	applymovement 0x08, Route1_Movement_Walk_Right_18
# 103 "data/maps/Route1/scripts.pory"
	waitmovement
# 104 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_6
# 105 "data/maps/Route1/scripts.pory"
	closemessage
# 106 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_7
# 107 "data/maps/Route1/scripts.pory"
	waitmovement
# 108 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Left_18
# 109 "data/maps/Route1/scripts.pory"
	waitmovement
# 110 "data/maps/Route1/scripts.pory"
	applymovement LOCALID_PLAYER, Route1_Movement_Walk_Up_5
# 111 "data/maps/Route1/scripts.pory"
	waitmovement
# 112 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_7
# 113 "data/maps/Route1/scripts.pory"
	waitmessage
# 114 "data/maps/Route1/scripts.pory"
	msgbox Route1_Misty_Thinks_You_Are_Rival_Text_8
# 115 "data/maps/Route1/scripts.pory"
	applymovement 10, Route1_Movement_Walk_Right_18
# 116 "data/maps/Route1/scripts.pory"
	waitmessage
# 117 "data/maps/Route1/scripts.pory"
	waitmovement
# 118 "data/maps/Route1/scripts.pory"
	removeobject 10
# 119 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 120 "data/maps/Route1/scripts.pory"
	release
	end


# 124 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_2:
# 125 "data/maps/Route1/scripts.pory"
	walk_left
# 125 "data/maps/Route1/scripts.pory"
	walk_left
# 126 "data/maps/Route1/scripts.pory"
	step_end

# 129 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_3:
# 130 "data/maps/Route1/scripts.pory"
	walk_right
# 130 "data/maps/Route1/scripts.pory"
	walk_right
# 130 "data/maps/Route1/scripts.pory"
	walk_right
# 131 "data/maps/Route1/scripts.pory"
	step_end

# 134 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Left_18:
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 135 "data/maps/Route1/scripts.pory"
	walk_left
# 136 "data/maps/Route1/scripts.pory"
	step_end

# 139 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Right_18:
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 140 "data/maps/Route1/scripts.pory"
	walk_right
# 141 "data/maps/Route1/scripts.pory"
	step_end

# 144 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_1:
# 145 "data/maps/Route1/scripts.pory"
	walk_up
# 146 "data/maps/Route1/scripts.pory"
	step_end

# 149 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_5:
# 150 "data/maps/Route1/scripts.pory"
	walk_up
# 150 "data/maps/Route1/scripts.pory"
	walk_up
# 150 "data/maps/Route1/scripts.pory"
	walk_up
# 150 "data/maps/Route1/scripts.pory"
	walk_up
# 150 "data/maps/Route1/scripts.pory"
	walk_up
# 151 "data/maps/Route1/scripts.pory"
	step_end

# 154 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_7:
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 155 "data/maps/Route1/scripts.pory"
	walk_up
# 156 "data/maps/Route1/scripts.pory"
	step_end

# 159 "data/maps/Route1/scripts.pory"
Route1_Movement_Walk_Up_9:
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 160 "data/maps/Route1/scripts.pory"
	walk_up
# 161 "data/maps/Route1/scripts.pory"
	step_end

# 164 "data/maps/Route1/scripts.pory"
Route1_Movement_Face_Player:
# 165 "data/maps/Route1/scripts.pory"
	face_player
# 166 "data/maps/Route1/scripts.pory"
	step_end

# 169 "data/maps/Route1/scripts.pory"
move_face_down:
# 170 "data/maps/Route1/scripts.pory"
	face_down
# 171 "data/maps/Route1/scripts.pory"
	step_end

# 174 "data/maps/Route1/scripts.pory"
exclaimation_mark:
# 175 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 176 "data/maps/Route1/scripts.pory"
	step_end

# 179 "data/maps/Route1/scripts.pory"
move_up_1:
# 180 "data/maps/Route1/scripts.pory"
	walk_up
# 181 "data/maps/Route1/scripts.pory"
	step_end

# 184 "data/maps/Route1/scripts.pory"
move_face_left_fast:
# 185 "data/maps/Route1/scripts.pory"
	face_left_fast
# 186 "data/maps/Route1/scripts.pory"
	step_end

# 189 "data/maps/Route1/scripts.pory"
move_left_1:
# 190 "data/maps/Route1/scripts.pory"
	walk_left
# 191 "data/maps/Route1/scripts.pory"
	step_end

# 193 "data/maps/Route1/scripts.pory"
move_left_2:
# 194 "data/maps/Route1/scripts.pory"
	walk_left
# 194 "data/maps/Route1/scripts.pory"
	walk_left
# 195 "data/maps/Route1/scripts.pory"
	step_end

# 197 "data/maps/Route1/scripts.pory"
move_left_3:
# 198 "data/maps/Route1/scripts.pory"
	walk_left
# 198 "data/maps/Route1/scripts.pory"
	walk_left
# 198 "data/maps/Route1/scripts.pory"
	walk_left
# 199 "data/maps/Route1/scripts.pory"
	step_end

# 201 "data/maps/Route1/scripts.pory"
move_left_4:
# 202 "data/maps/Route1/scripts.pory"
	walk_left
# 202 "data/maps/Route1/scripts.pory"
	walk_left
# 202 "data/maps/Route1/scripts.pory"
	walk_left
# 202 "data/maps/Route1/scripts.pory"
	walk_left
# 203 "data/maps/Route1/scripts.pory"
	step_end

# 206 "data/maps/Route1/scripts.pory"
move_left_5:
# 207 "data/maps/Route1/scripts.pory"
	walk_left
# 207 "data/maps/Route1/scripts.pory"
	walk_left
# 207 "data/maps/Route1/scripts.pory"
	walk_left
# 207 "data/maps/Route1/scripts.pory"
	walk_left
# 207 "data/maps/Route1/scripts.pory"
	walk_left
# 208 "data/maps/Route1/scripts.pory"
	step_end

# 211 "data/maps/Route1/scripts.pory"
move_left_16:
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 212 "data/maps/Route1/scripts.pory"
	walk_left
# 213 "data/maps/Route1/scripts.pory"
	step_end

# 215 "data/maps/Route1/scripts.pory"
run_left_16:
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 216 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 217 "data/maps/Route1/scripts.pory"
	step_end

# 220 "data/maps/Route1/scripts.pory"
move_right_16:
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 221 "data/maps/Route1/scripts.pory"
	walk_right
# 222 "data/maps/Route1/scripts.pory"
	step_end

Route1_Spearows_Bite_Text_0:
# 44 "data/maps/Route1/scripts.pory"
	.string "It's a wild POKéMON!\n"
	.string "Darn! Couldn't ID it!\p"
	.string "$"

Route1_Spearows_Bite_Text_1:
# 47 "data/maps/Route1/scripts.pory"
	.string "Ow!\n"
	.string "It gave you a vicious PECK!$"

Route1_Misty_Thinks_You_Are_Rival_Text_0:
# 58 "data/maps/Route1/scripts.pory"
	.string "Argh! How annoying!\n"
	.string "...Oh? Well, welcome back, pest!\p"
	.string "Are you returning my BIKE?$"

Route1_Misty_Thinks_You_Are_Rival_Text_1:
# 59 "data/maps/Route1/scripts.pory"
	.string "...Huh? I appreciate that\n"
	.string "unexpected honesty, but...\p"
	.string "Sorry, I've had a rough day!\n"
	.string "Some loser took off with my BIKE!$"

Route1_Misty_Thinks_You_Are_Rival_Text_2:
# 62 "data/maps/Route1/scripts.pory"
	.string "I can't seem to reel in any\n"
	.string "good POKéMON here either!\p"
	.string "It's getting a bit dark, too, so\n"
	.string "I'll probably head back to CERULEAN.$"

Route1_Misty_Thinks_You_Are_Rival_Text_3:
# 63 "data/maps/Route1/scripts.pory"
	.string "You're a new face!\n"
	.string "Uh huh...\p"
	.string "OK, so you're {PLAYER}!\n"
	.string "I'll remember that!\p"
	.string "I'm MISTY! Here, come with me!\n"
	.string "I could show you to VIRIDIAN CITY!$"

Route1_Misty_Thinks_You_Are_Rival_Text_4:
# 70 "data/maps/Route1/scripts.pory"
	.string "Argh!\n"
	.string "What's with these FLYING POKéMON?\p"
	.string "I can't find any WATER types!$"

Route1_Misty_Thinks_You_Are_Rival_Text_5:
# 89 "data/maps/Route1/scripts.pory"
	.string "Well, would you look at that?\n"
	.string "The rain has finally let up!\p"
	.string "Come on, just a bit more to go!$"

Route1_Misty_Thinks_You_Are_Rival_Text_6:
# 104 "data/maps/Route1/scripts.pory"
	.string "I'm all the way over here,\n"
	.string "SLOWPOKE! By the big red building!$"

Route1_Misty_Thinks_You_Are_Rival_Text_7:
# 112 "data/maps/Route1/scripts.pory"
	.string "We're here!\n"
	.string "This is the POKéMON CENTER.\p"
	.string "NURSE JOY is always happy to heal\n"
	.string "Your POKéMON to full health!\p"
	.string "The best part is that it's free!$"

Route1_Misty_Thinks_You_Are_Rival_Text_8:
# 114 "data/maps/Route1/scripts.pory"
	.string "I'm gonna go over to the POKéMART!\n"
	.string "I definitely need to stock up\p"
	.string "on supplies now, since ROUTE 1.\n"
	.string "OK, see ya!\p"
	.string "Be sure to meet lots of POKéMON!$"
