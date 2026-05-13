Route26_NorthEntrance_MapScripts::
	.byte 0


Route26_NorthEntrance_Guard_1::
# 5 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 6 "data/maps/Route26_NorthEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Guard_1_Text_0
# 8 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Guard_2::
# 15 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 16 "data/maps/Route26_NorthEntrance/scripts.pory"
	faceplayer
# 17 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Guard_2_Text_0
# 18 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 19 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Badge_Guard::
# 25 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 26 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Player
# 27 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 28 "data/maps/Route26_NorthEntrance/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, Route26_NorthEntrance_Badge_Guard_1
# 41 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_1
# 42 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmessage
# 43 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 44 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 45 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 46 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end

Route26_NorthEntrance_Badge_Guard_1:
# 30 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_0
# 31 "data/maps/Route26_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE28, 1
# 32 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmessage
# 33 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 34 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 35 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 36 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Badge_Guard_Trigger::
# 53 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 54 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Player
# 55 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 56 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Trigger_Text_0
# 57 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmessage
# 58 "data/maps/Route26_NorthEntrance/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, Route26_NorthEntrance_Badge_Guard_Trigger_1
# 71 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_1
# 72 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmessage
# 73 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 74 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_Route26_NorthEntrance_Walk_Down_1
# 75 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 76 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 77 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 78 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end

Route26_NorthEntrance_Badge_Guard_Trigger_1:
# 60 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Badge_Guard_Text_0
# 61 "data/maps/Route26_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE28, 1
# 62 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmessage
# 63 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 64 "data/maps/Route26_NorthEntrance/scripts.pory"
	applymovement LOCALID_ROUTE28_GATE_GUARD, Movement_Route26_NorthEntrance_Badge_Guard_Face_Down
# 65 "data/maps/Route26_NorthEntrance/scripts.pory"
	waitmovement
# 66 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


# 83 "data/maps/Route26_NorthEntrance/scripts.pory"
Movement_Route26_NorthEntrance_Badge_Guard_Face_Player:
# 85 "data/maps/Route26_NorthEntrance/scripts.pory"
	face_player
# 86 "data/maps/Route26_NorthEntrance/scripts.pory"
	step_end

# 89 "data/maps/Route26_NorthEntrance/scripts.pory"
Movement_Route26_NorthEntrance_Badge_Guard_Face_Down:
# 91 "data/maps/Route26_NorthEntrance/scripts.pory"
	face_down
# 92 "data/maps/Route26_NorthEntrance/scripts.pory"
	step_end

# 95 "data/maps/Route26_NorthEntrance/scripts.pory"
Movement_Route26_NorthEntrance_Walk_Down_1:
# 97 "data/maps/Route26_NorthEntrance/scripts.pory"
	walk_down
# 98 "data/maps/Route26_NorthEntrance/scripts.pory"
	step_end

Route26_NorthEntrance_Guard_1_Text_0:
# 7 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Oh, hello.\n"
	.string "It's rare that we get visitors...\p"
	.string "Please, go on ahead! You must\n"
	.string "be a very strong TRAINER.$"

Route26_NorthEntrance_Guard_2_Text_0:
# 17 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Wow, a visitor!\n"
	.string "It's rare to see another TRAINER!\p"
	.string "ROUTE 28 is up ahead, it\n"
	.string "leads to JOHTO'S MT. SILVER.$"

Route26_NorthEntrance_Badge_Guard_Text_0:
# 30 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "...Oh!\n"
	.string "That is the ZEPHYRBADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_LEVEL_UP}{PAUSE 0x60}{RESUME_MUSIC}\p"
	.string "Okay, then.\n"
	.string "Please, go right ahead.$"

Route26_NorthEntrance_Badge_Guard_Text_1:
# 41 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Only truly skilled TRAINERS are\n"
	.string "allowed through.\p"
	.string "You don't have the ZEPHYRBADGE\n"
	.string "yet! Sorry, rules are rules.\p"
	.string "I can't let you pass.$"

Route26_NorthEntrance_Badge_Guard_Trigger_Text_0:
# 56 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Halt!$"
