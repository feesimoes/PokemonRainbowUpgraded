GoldenrodCity_MagnetTrainStation_MapScripts::
# 3 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 6 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_2
GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 10 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	playbgm MUS_GOLDENROD, TRUE
	return

GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 8 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
	goto GoldenrodCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1


GoldenrodCity_Badge_Guard::
# 16 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	lock
# 17 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Player
# 18 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 19 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Badge_Guard_1
# 32 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	msgbox GoldenrodCity_Badge_Guard_Text_1
# 33 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 34 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	closemessage
# 35 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Down
# 36 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 37 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	releaseall
	end

GoldenrodCity_Badge_Guard_1:
# 21 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	msgbox GoldenrodCity_Badge_Guard_Text_0
# 22 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRONTRAIN, 1
# 23 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 24 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	closemessage
# 25 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Down
# 26 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 27 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	releaseall
	end


GoldenrodCity_Badge_Guard_Trigger::
# 44 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	lock
# 45 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Player
# 46 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 47 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	msgbox GoldenrodCity_Badge_Guard_Trigger_Text_0
# 48 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 49 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Badge_Guard_Trigger_1
# 62 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	msgbox GoldenrodCity_Badge_Guard_Text_1
# 63 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 64 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	closemessage
# 65 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_GoldenrodStation_Walk_Down
# 66 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 67 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Down
# 68 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 69 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	releaseall
	end

GoldenrodCity_Badge_Guard_Trigger_1:
# 51 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	msgbox GoldenrodCity_Badge_Guard_Text_0
# 52 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRONTRAIN, 1
# 53 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 54 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	closemessage
# 55 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_GOLDENRODCITY_GUARD, Movement_GoldenrodCity_Badge_Guard_Face_Down
# 56 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 57 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	releaseall
	end


# 74 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
Movement_GoldenrodCity_Badge_Guard_Face_Player:
# 76 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	face_player
# 77 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	step_end

# 80 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
Movement_GoldenrodCity_Badge_Guard_Face_Down:
# 82 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	face_down
# 83 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	step_end

# 86 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
Movement_GoldenrodStation_Walk_Down:
# 88 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	walk_down
# 89 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	step_end

GoldenrodCity_Badge_Guard_Text_0:
# 21 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	.string "...Oh!\n"
	.string "That is the PLAINBADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_LEVEL_UP}{PAUSE 0x60}{RESUME_MUSIC}\p"
	.string "Okay, then.\n"
	.string "Please, go right ahead.$"

GoldenrodCity_Badge_Guard_Text_1:
# 32 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	.string "Only truly skilled TRAINERS are\n"
	.string "allowed through.\p"
	.string "You don't have the PLAINBADGE\n"
	.string "yet! Sorry, rules are rules.\p"
	.string "I can't let you pass.$"

GoldenrodCity_Badge_Guard_Trigger_Text_0:
# 47 "data/maps/GoldenrodCity_MagnetTrainStation/scripts.pory"
	.string "Halt!$"
