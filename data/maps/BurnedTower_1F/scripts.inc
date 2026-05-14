BurnedTower_1F_MapScripts::
# 3 "data/maps/BurnedTower_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BurnedTower_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BurnedTower_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/BurnedTower_1F/scripts.pory"
	setflag FLAG_HIDE_BURND_T_EUSINE
# 6 "data/maps/BurnedTower_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BURNED_TOWER
	return


BurnedTower_1F_Statues::
# 12 "data/maps/BurnedTower_1F/scripts.pory"
	lock
# 13 "data/maps/BurnedTower_1F/scripts.pory"
	msgbox BurnedTower_1F_Statues_Text_0
# 14 "data/maps/BurnedTower_1F/scripts.pory"
	closemessage
# 15 "data/maps/BurnedTower_1F/scripts.pory"
	release
	end


BurnedTower_1F_EventProgress_Debug::
# 21 "data/maps/BurnedTower_1F/scripts.pory"
	lock
# 22 "data/maps/BurnedTower_1F/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 1
# 23 "data/maps/BurnedTower_1F/scripts.pory"
	release
	end


BurnedTower_1F_Statues_Text_0:
# 13 "data/maps/BurnedTower_1F/scripts.pory"
	.string "The text is too faded to read.\n"
	.string "There is an unsettling air around...$"
