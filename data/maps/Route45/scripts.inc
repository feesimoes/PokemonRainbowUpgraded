Route45_MapScripts::
# 3 "data/maps/Route45/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route45_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route45_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route45/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE45, 1
	goto_if_eq Route45_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route45_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route45/scripts.pory"
	setobjectxyperm LOCALID_DRAGONS_DEN_GUARD, 18, 5
	return


Route45_DarkCave_Sign::
# 14 "data/maps/Route45/scripts.pory"
	lock
# 15 "data/maps/Route45/scripts.pory"
	msgbox Route45_DarkCave_Sign_Text_0
# 16 "data/maps/Route45/scripts.pory"
	closemessage
# 17 "data/maps/Route45/scripts.pory"
	release
	end


Route45_DragonsDenAhead_Sign::
# 23 "data/maps/Route45/scripts.pory"
	lock
# 24 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDenAhead_Sign_Text_0
# 25 "data/maps/Route45/scripts.pory"
	closemessage
# 26 "data/maps/Route45/scripts.pory"
	release
	end


Route45_DragonsDen_Sign::
# 32 "data/maps/Route45/scripts.pory"
	lock
# 33 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDen_Sign_Text_0
# 34 "data/maps/Route45/scripts.pory"
	closemessage
# 35 "data/maps/Route45/scripts.pory"
	release
	end


Route45_DragonsDenRoadblock_Old_Man_1::
# 41 "data/maps/Route45/scripts.pory"
	lock
# 42 "data/maps/Route45/scripts.pory"
	faceplayer
# 43 "data/maps/Route45/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 44 "data/maps/Route45/scripts.pory"
	compare VAR_TEMP_8, 17
	goto_if_eq Route45_DragonsDenRoadblock_Old_Man_1_4
Route45_DragonsDenRoadblock_Old_Man_1_3:
# 50 "data/maps/Route45/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, Route45_DragonsDenRoadblock_Old_Man_1_7
# 63 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDenRoadblock_Old_Man_1_Text_3
Route45_DragonsDenRoadblock_Old_Man_1_1:
# 66 "data/maps/Route45/scripts.pory"
	closemessage
# 67 "data/maps/Route45/scripts.pory"
	release
	end

Route45_DragonsDenRoadblock_Old_Man_1_2:
# 46 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDenRoadblock_Old_Man_1_Text_0
	goto Route45_DragonsDenRoadblock_Old_Man_1_1

Route45_DragonsDenRoadblock_Old_Man_1_4:
# 44 "data/maps/Route45/scripts.pory"
	compare VAR_TEMP_9, 5
	goto_if_eq Route45_DragonsDenRoadblock_Old_Man_1_2
	goto Route45_DragonsDenRoadblock_Old_Man_1_3

Route45_DragonsDenRoadblock_Old_Man_1_7:
# 52 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDenRoadblock_Old_Man_1_Text_1
# 53 "data/maps/Route45/scripts.pory"
	msgbox Route45_DragonsDenRoadblock_Old_Man_1_Text_2
# 54 "data/maps/Route45/scripts.pory"
	delay 30
# 55 "data/maps/Route45/scripts.pory"
	applymovement LOCALID_DRAGONS_DEN_GUARD, Route45_DragonsDenRoadblock_Old_Man_1_AllowPlayerPassage
# 56 "data/maps/Route45/scripts.pory"
	waitmessage
# 57 "data/maps/Route45/scripts.pory"
	waitmovement
# 58 "data/maps/Route45/scripts.pory"
	setobjectxyperm LOCALID_DRAGONS_DEN_GUARD, 18, 5
# 59 "data/maps/Route45/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE45, 1
	goto Route45_DragonsDenRoadblock_Old_Man_1_1


# 71 "data/maps/Route45/scripts.pory"
Route45_DragonsDenRoadblock_Old_Man_1_AllowPlayerPassage:
# 73 "data/maps/Route45/scripts.pory"
	walk_slow_right
# 74 "data/maps/Route45/scripts.pory"
	face_down
# 75 "data/maps/Route45/scripts.pory"
	step_end

Route45_DarkCave_Sign_Text_0:
# 15 "data/maps/Route45/scripts.pory"
	.string "DARK CAVE ENTRANCE -\n"
	.string "ROUTE 45$"

Route45_DragonsDenAhead_Sign_Text_0:
# 24 "data/maps/Route45/scripts.pory"
	.string "DRAGONS' DEN detour ahead!\n"
	.string "BLACKTHORN CITY awaits further up.$"

Route45_DragonsDen_Sign_Text_0:
# 33 "data/maps/Route45/scripts.pory"
	.string "DRAGONS' DEN\n"
	.string "Where TAMERS turn into MASTERS!$"

Route45_DragonsDenRoadblock_Old_Man_1_Text_0:
# 46 "data/maps/Route45/scripts.pory"
	.string "With a heart of gold, and a\n"
	.string "soul with silver lining...\p"
	.string "You will definitely pass tests\n"
	.string "ahead with flying colors, no doubt.$"

Route45_DragonsDenRoadblock_Old_Man_1_Text_1:
# 52 "data/maps/Route45/scripts.pory"
	.string "This place is reserved to our\n"
	.string "rightful DRAGON MASTERS, only...$"

Route45_DragonsDenRoadblock_Old_Man_1_Text_2:
# 53 "data/maps/Route45/scripts.pory"
	.string "Ah, but you wish to earn\n"
	.string "CLAIR'S RISING BADGE, yes?\p"
	.string "Very well. Your display of\n"
	.string "strength is crystal clear...$"

Route45_DragonsDenRoadblock_Old_Man_1_Text_3:
# 63 "data/maps/Route45/scripts.pory"
	.string "This place is reserved to our\n"
	.string "rightful DRAGON MASTERS, only.$"
