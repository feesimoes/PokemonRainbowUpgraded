SproutTower_1F_MapScripts::
# 3 "data/maps/SproutTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SproutTower_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SproutTower_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/SproutTower_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SPROUT_TOWER
	return


SproutTower_1F_Statues::
# 11 "data/maps/SproutTower_1F/scripts.pory"
	lock
# 12 "data/maps/SproutTower_1F/scripts.pory"
	faceplayer
# 13 "data/maps/SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_Statues_Text_0
# 14 "data/maps/SproutTower_1F/scripts.pory"
	closemessage
# 15 "data/maps/SproutTower_1F/scripts.pory"
	release
	end


SproutTower_1F_Old_Woman::
# 21 "data/maps/SproutTower_1F/scripts.pory"
	lock
# 22 "data/maps/SproutTower_1F/scripts.pory"
	faceplayer
# 23 "data/maps/SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_Old_Woman_Text_0
# 24 "data/maps/SproutTower_1F/scripts.pory"
	closemessage
# 25 "data/maps/SproutTower_1F/scripts.pory"
	release
	end


SproutTower_1F_Old_Man_1::
# 31 "data/maps/SproutTower_1F/scripts.pory"
	lock
# 32 "data/maps/SproutTower_1F/scripts.pory"
	faceplayer
# 33 "data/maps/SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_Old_Man_1_Text_0
# 34 "data/maps/SproutTower_1F/scripts.pory"
	closemessage
# 35 "data/maps/SproutTower_1F/scripts.pory"
	release
	end


SproutTower_1F_Battle_Girl::
# 41 "data/maps/SproutTower_1F/scripts.pory"
	lock
# 42 "data/maps/SproutTower_1F/scripts.pory"
	faceplayer
# 43 "data/maps/SproutTower_1F/scripts.pory"
	msgbox SproutTower_1F_Battle_Girl_Text_0
# 44 "data/maps/SproutTower_1F/scripts.pory"
	closemessage
# 45 "data/maps/SproutTower_1F/scripts.pory"
	release
	end


SproutTower_1F_Statues_Text_0:
# 13 "data/maps/SproutTower_1F/scripts.pory"
	.string "SPROUT TOWER$"

SproutTower_1F_Old_Woman_Text_0:
# 23 "data/maps/SproutTower_1F/scripts.pory"
	.string "Hello, young one...\n"
	.string "This is SPROUT TOWER.\p"
	.string "A bit far from home, are we?\n"
	.string "ELDER LI is quite tough!$"

SproutTower_1F_Old_Man_1_Text_0:
# 33 "data/maps/SproutTower_1F/scripts.pory"
	.string "SPROUT TOWER can withstand the\n"
	.string "harshest natural conditions...\p"
	.string "If you have what it takes,\n"
	.string "the real challenge lies above.$"

SproutTower_1F_Battle_Girl_Text_0:
# 43 "data/maps/SproutTower_1F/scripts.pory"
	.string "Hyah! Ugh, not again!\n"
	.string "I'm still training, yet...\p"
	.string "I always make it to ELDER LI,\n"
	.string "and return in defeat...$"
