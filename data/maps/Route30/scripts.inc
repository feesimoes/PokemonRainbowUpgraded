Route30_MapScripts::
	.byte 0


Route30_EventScript_Youngster_Joey_Battle::
# 8 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY_ROUTE_30, Route30_EventScript_Youngster_Joey_Battle_Text_0, Route30_EventScript_Youngster_Joey_Battle_Text_1
# 9 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Youngster_Joey_Battle_Text_2
# 10 "data/maps/Route30/scripts.pory"
	closemessage
# 11 "data/maps/Route30/scripts.pory"
	releaseall
	end


Route30_South_Sign::
# 17 "data/maps/Route30/scripts.pory"
	lock
# 18 "data/maps/Route30/scripts.pory"
	msgbox Route30_South_Sign_Text_0
# 19 "data/maps/Route30/scripts.pory"
	closemessage
# 20 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Trainer_Tips_Sign::
# 26 "data/maps/Route30/scripts.pory"
	lock
# 27 "data/maps/Route30/scripts.pory"
	msgbox Route30_Trainer_Tips_Sign_Text_0
# 28 "data/maps/Route30/scripts.pory"
	closemessage
# 29 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Ahead_Is_Route31_Sign::
# 35 "data/maps/Route30/scripts.pory"
	lock
# 36 "data/maps/Route30/scripts.pory"
	msgbox Route30_Ahead_Is_Route31_Sign_Text_0
# 37 "data/maps/Route30/scripts.pory"
	closemessage
# 38 "data/maps/Route30/scripts.pory"
	release
	end


Route30_Mr_Pokemon_House_Sign::
# 44 "data/maps/Route30/scripts.pory"
	lock
# 45 "data/maps/Route30/scripts.pory"
	msgbox Route30_Mr_Pokemon_House_Sign_Text_0
# 46 "data/maps/Route30/scripts.pory"
	closemessage
# 47 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Careful_Boy::
# 53 "data/maps/Route30/scripts.pory"
	lock
# 54 "data/maps/Route30/scripts.pory"
	applymovement 3, Route30_NPC_Face_Player
# 55 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Careful_Boy_Text_0
# 56 "data/maps/Route30/scripts.pory"
	closemessage
# 57 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Youngster::
# 63 "data/maps/Route30/scripts.pory"
	lock
# 64 "data/maps/Route30/scripts.pory"
	applymovement 2, Route30_NPC_Face_Player
# 65 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Youngster_Text_0
# 66 "data/maps/Route30/scripts.pory"
	closemessage
# 67 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Lass::
# 73 "data/maps/Route30/scripts.pory"
	lock
# 74 "data/maps/Route30/scripts.pory"
	applymovement 5, Route30_NPC_Face_Player
# 75 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Lass_Text_0
# 76 "data/maps/Route30/scripts.pory"
	closemessage
# 77 "data/maps/Route30/scripts.pory"
	release
	end


Route30_EventScript_Super_Nerd::
# 83 "data/maps/Route30/scripts.pory"
	lock
# 84 "data/maps/Route30/scripts.pory"
	applymovement 6, Route30_NPC_Face_Player
# 85 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Super_Nerd_Text_0
# 86 "data/maps/Route30/scripts.pory"
	closemessage
# 87 "data/maps/Route30/scripts.pory"
	release
	end


# 91 "data/maps/Route30/scripts.pory"
Route30_NPC_Face_Player:
# 93 "data/maps/Route30/scripts.pory"
	face_player
# 94 "data/maps/Route30/scripts.pory"
	step_end

Route30_EventScript_Youngster_Joey_Battle_Text_0:
# 8 "data/maps/Route30/scripts.pory"
	.string "All right, a KANTO kid!\n"
	.string "Check out my top-percentage POKéMON!$"

Route30_EventScript_Youngster_Joey_Battle_Text_1:
# 8 "data/maps/Route30/scripts.pory"
	.string "My RATTATA is different from\n"
	.string "regular RATTATA, but I lost...$"

Route30_EventScript_Youngster_Joey_Battle_Text_2:
# 9 "data/maps/Route30/scripts.pory"
	.string "So what did you think of RATTATA?\n"
	.string "Bet they don't raise 'em like that in\l"
	.string "KANTO!$"

Route30_South_Sign_Text_0:
# 18 "data/maps/Route30/scripts.pory"
	.string "ROUTE 30 -\n"
	.string "Grassy road with new TRAINERS.$"

Route30_Trainer_Tips_Sign_Text_0:
# 27 "data/maps/Route30/scripts.pory"
	.string "TRAINER TIPS!\n"
	.string "Different moves can affect a field.\p"
	.string "For example, HM01: CUT, can even\n"
	.string "cut tall grass anywhere!$"

Route30_Ahead_Is_Route31_Sign_Text_0:
# 36 "data/maps/Route30/scripts.pory"
	.string "ROUTE 31 is up ahead - Connecting\n"
	.string "to DARK CAVE and VIOLET CITY.$"

Route30_Mr_Pokemon_House_Sign_Text_0:
# 45 "data/maps/Route30/scripts.pory"
	.string "MR. POKéMON'S HOUSE$"

Route30_EventScript_Careful_Boy_Text_0:
# 55 "data/maps/Route30/scripts.pory"
	.string "You ought to be careful here.\n"
	.string "Sometimes wild POKéMON attack...\p"
	.string "But when spotted by a TRAINER,\n"
	.string "they battle you, too!$"

Route30_EventScript_Youngster_Text_0:
# 65 "data/maps/Route30/scripts.pory"
	.string "Darn... I couldn't beat JOEY'S\n"
	.string "RATTATA... It's top-percentage!$"

Route30_EventScript_Lass_Text_0:
# 75 "data/maps/Route30/scripts.pory"
	.string "Did you just touch me?\n"
	.string "Stop that!\p"
	.string "I'm never going to find a cute\n"
	.string "SPINARAK! Stop! Sensory overload!$"

Route30_EventScript_Super_Nerd_Text_0:
# 85 "data/maps/Route30/scripts.pory"
	.string "There's a type of POKé BALL\n"
	.string "that'll catch without fail.\p"
	.string "When it hits the POKé MART,\n"
	.string "I wonder how much it'll be...\p"
	.string "You don't believe me?\n"
	.string "I'm not crazy!$"
