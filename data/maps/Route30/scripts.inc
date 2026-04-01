Route30_MapScripts::
# 3 "data/maps/Route30/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route30_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route30_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route30/scripts.pory"
	goto_if_unset FLAG_TEMP_1, Route30_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route30_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route30/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE30_APRICORN_TREE, MOVEMENT_TYPE_FACE_DOWN
	return


Route30_EventScript_Youngster_Joey_Battle::
# 14 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY_ROUTE_30, Route30_EventScript_Youngster_Joey_Battle_Text_0, Route30_EventScript_Youngster_Joey_Battle_Text_1
# 15 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Youngster_Joey_Battle_Text_2
# 16 "data/maps/Route30/scripts.pory"
	closemessage
# 17 "data/maps/Route30/scripts.pory"
	releaseall
	end


Route30_South_Sign::
# 23 "data/maps/Route30/scripts.pory"
	lock
# 24 "data/maps/Route30/scripts.pory"
	msgbox Route30_South_Sign_Text_0
# 25 "data/maps/Route30/scripts.pory"
	closemessage
# 26 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Trainer_Tips_Sign::
# 32 "data/maps/Route30/scripts.pory"
	lock
# 33 "data/maps/Route30/scripts.pory"
	msgbox Route30_Trainer_Tips_Sign_Text_0
# 34 "data/maps/Route30/scripts.pory"
	closemessage
# 35 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Ahead_Is_Route31_Sign::
# 41 "data/maps/Route30/scripts.pory"
	lock
# 42 "data/maps/Route30/scripts.pory"
	msgbox Route30_Ahead_Is_Route31_Sign_Text_0
# 43 "data/maps/Route30/scripts.pory"
	closemessage
# 44 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Mr_Pokemon_House_Sign::
# 50 "data/maps/Route30/scripts.pory"
	lock
# 51 "data/maps/Route30/scripts.pory"
	msgbox Route30_Mr_Pokemon_House_Sign_Text_0
# 52 "data/maps/Route30/scripts.pory"
	closemessage
# 53 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Careful_Boy::
# 59 "data/maps/Route30/scripts.pory"
	lock
# 60 "data/maps/Route30/scripts.pory"
	applymovement 3, Route30_NPC_Face_Player
# 61 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Careful_Boy_Text_0
# 62 "data/maps/Route30/scripts.pory"
	closemessage
# 63 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Youngster::
# 69 "data/maps/Route30/scripts.pory"
	lock
# 70 "data/maps/Route30/scripts.pory"
	applymovement 2, Route30_NPC_Face_Player
# 71 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Youngster_Text_0
# 72 "data/maps/Route30/scripts.pory"
	closemessage
# 73 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Lass::
# 79 "data/maps/Route30/scripts.pory"
	lock
# 80 "data/maps/Route30/scripts.pory"
	applymovement 5, Route30_NPC_Face_Player
# 81 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Lass_Text_0
# 82 "data/maps/Route30/scripts.pory"
	closemessage
# 83 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Super_Nerd::
# 89 "data/maps/Route30/scripts.pory"
	lock
# 90 "data/maps/Route30/scripts.pory"
	applymovement 6, Route30_NPC_Face_Player
# 91 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Super_Nerd_Text_0
# 92 "data/maps/Route30/scripts.pory"
	closemessage
# 93 "data/maps/Route30/scripts.pory"
	release
	end


# 97 "data/maps/Route30/scripts.pory"
Route30_NPC_Face_Player:
# 99 "data/maps/Route30/scripts.pory"
	face_player
# 100 "data/maps/Route30/scripts.pory"
	step_end

EventScript_ApricornTree_Brown::
# 105 "data/maps/Route30/scripts.pory"
	lock
# 106 "data/maps/Route30/scripts.pory"
	goto_if_set FLAG_TEMP_1, EventScript_ApricornTree_Brown_2
# 113 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Brown_Text_1
# 114 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Brown_Text_2, MSGBOX_YESNO
# 115 "data/maps/Route30/scripts.pory"
	closemessage
# 116 "data/maps/Route30/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_ApricornTree_Brown_5
EventScript_ApricornTree_Brown_1:
# 128 "data/maps/Route30/scripts.pory"
	release
	end

EventScript_ApricornTree_Brown_2:
# 108 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Brown_Text_0
# 109 "data/maps/Route30/scripts.pory"
	closemessage
	goto EventScript_ApricornTree_Brown_1

EventScript_ApricornTree_Brown_5:
# 118 "data/maps/Route30/scripts.pory"
	applymovement LOCALID_ROUTE30_APRICORN_TREE, Movement_DepletedApricornTree
# 119 "data/maps/Route30/scripts.pory"
	waitmovement
# 120 "data/maps/Route30/scripts.pory"
	playfanfare MUS_OBTAIN_BERRY
# 121 "data/maps/Route30/scripts.pory"
	waitfanfare
# 122 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Brown_Text_3
# 123 "data/maps/Route30/scripts.pory"
	closemessage
# 124 "data/maps/Route30/scripts.pory"
	setflag FLAG_TEMP_1
# 125 "data/maps/Route30/scripts.pory"
	setobjectmovementtype LOCALID_ROUTE30_APRICORN_TREE, MOVEMENT_TYPE_FACE_UP
	goto EventScript_ApricornTree_Brown_1


EventScript_ApricornTree_Pink::
# 134 "data/maps/Route30/scripts.pory"
	lock
# 135 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Pink_Text_0
# 136 "data/maps/Route30/scripts.pory"
	closemessage
# 137 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_Red::
# 143 "data/maps/Route30/scripts.pory"
	lock
# 144 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Red_Text_0
# 145 "data/maps/Route30/scripts.pory"
	closemessage
# 146 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_Blue::
# 152 "data/maps/Route30/scripts.pory"
	lock
# 153 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Blue_Text_0
# 154 "data/maps/Route30/scripts.pory"
	closemessage
# 155 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_Green::
# 161 "data/maps/Route30/scripts.pory"
	lock
# 162 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Green_Text_0
# 163 "data/maps/Route30/scripts.pory"
	closemessage
# 164 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_Yellow::
# 170 "data/maps/Route30/scripts.pory"
	lock
# 171 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Yellow_Text_0
# 172 "data/maps/Route30/scripts.pory"
	closemessage
# 173 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_White::
# 179 "data/maps/Route30/scripts.pory"
	lock
# 180 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_White_Text_0
# 181 "data/maps/Route30/scripts.pory"
	closemessage
# 182 "data/maps/Route30/scripts.pory"
	release
	end


EventScript_ApricornTree_Black::
# 188 "data/maps/Route30/scripts.pory"
	lock
# 189 "data/maps/Route30/scripts.pory"
	msgbox EventScript_ApricornTree_Black_Text_0
# 190 "data/maps/Route30/scripts.pory"
	closemessage
# 191 "data/maps/Route30/scripts.pory"
	release
	end


# 195 "data/maps/Route30/scripts.pory"
Movement_DepletedApricornTree:
# 197 "data/maps/Route30/scripts.pory"
	face_up
# 198 "data/maps/Route30/scripts.pory"
	step_end

Route30_EventScript_Youngster_Joey_Battle_Text_0:
# 14 "data/maps/Route30/scripts.pory"
	.string "All right, a KANTO kid!\n"
	.string "Check out my top-percentage POKéMON!$"

Route30_EventScript_Youngster_Joey_Battle_Text_1:
# 14 "data/maps/Route30/scripts.pory"
	.string "My RATTATA is different from\n"
	.string "regular RATTATA, but I lost...$"

Route30_EventScript_Youngster_Joey_Battle_Text_2:
# 15 "data/maps/Route30/scripts.pory"
	.string "So what did you think of my RATTATA?\n"
	.string "Bet they aren't like that in KANTO!$"

Route30_South_Sign_Text_0:
# 24 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30 -\n"
	.string "Grassy road with new TRAINERS.$"

Route30_Trainer_Tips_Sign_Text_0:
# 33 "data/maps/Route30/scripts.pory"
	.string "TRAINER TIPS!\n"
	.string "Different moves can affect a field.\p"
	.string "For example, HM01: CUT, can even\n"
	.string "cut tall grass anywhere!$"

Route30_Ahead_Is_Route31_Sign_Text_0:
# 42 "data/maps/Route30/scripts.pory"
	.string "ROUTE 31 is up ahead - Connecting\n"
	.string "to DARK CAVE and VIOLET CITY.$"

Route30_Mr_Pokemon_House_Sign_Text_0:
# 51 "data/maps/Route30/scripts.pory"
	.string "MR. POKéMON'S HOUSE$"

Route30_EventScript_Careful_Boy_Text_0:
# 61 "data/maps/Route30/scripts.pory"
	.string "You ought to be careful here.\n"
	.string "Sometimes wild POKéMON attack...\p"
	.string "But when spotted by a TRAINER,\n"
	.string "they battle you, too!$"

Route30_EventScript_Youngster_Text_0:
# 71 "data/maps/Route30/scripts.pory"
	.string "Darn... I couldn't beat JOEY'S\n"
	.string "RATTATA... It's top-percentage!$"

Route30_EventScript_Lass_Text_0:
# 81 "data/maps/Route30/scripts.pory"
	.string "Did you just touch me?\n"
	.string "Stop that!\p"
	.string "I'm never going to find a cute\n"
	.string "SPINARAK! Stop! Sensory overload!$"

Route30_EventScript_Super_Nerd_Text_0:
# 91 "data/maps/Route30/scripts.pory"
	.string "There's a type of POKé BALL\n"
	.string "that'll catch without fail.\p"
	.string "When it hits the POKé MART,\n"
	.string "I wonder how much it'll be...\p"
	.string "You don't believe me?\n"
	.string "I'm not crazy!$"

EventScript_ApricornTree_Brown_Text_0:
# 108 "data/maps/Route30/scripts.pory"
	.string "It's an APRICORN TREE!\n"
	.string "There's nothing left on it.$"

EventScript_ApricornTree_Brown_Text_1:
# 113 "data/maps/Route30/scripts.pory"
	.string "It's an APRICORN TREE!\n"
	.string "It bears 3 BROWN APRICORN(s).$"

EventScript_ApricornTree_Brown_Text_2:
# 114 "data/maps/Route30/scripts.pory"
	.string "Pick it?$"

EventScript_ApricornTree_Brown_Text_3:
# 122 "data/maps/Route30/scripts.pory"
	.string "Since you did not have an\n"
	.string "APRICORN SATCHEL to store them...\p"
	.string "The BROWN APRICORN(s) fell to the\n"
	.string "ground and spoiled! Aww...$"

EventScript_ApricornTree_Pink_Text_0:
# 135 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 PINK APRICORN(s).$"

EventScript_ApricornTree_Red_Text_0:
# 144 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 RED APRICORN(s).$"

EventScript_ApricornTree_Blue_Text_0:
# 153 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 BLUE APRICORN(s).$"

EventScript_ApricornTree_Green_Text_0:
# 162 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 GREEN APRICORN(s).$"

EventScript_ApricornTree_Yellow_Text_0:
# 171 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 YELLOW APRICORN(s).$"

EventScript_ApricornTree_White_Text_0:
# 180 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 WHITE APRICORN(s).$"

EventScript_ApricornTree_Black_Text_0:
# 189 "data/maps/Route30/scripts.pory"
	.string "It's a APRICORN TREE!\n"
	.string "It bears 3 BLACK APRICORN(s).$"
