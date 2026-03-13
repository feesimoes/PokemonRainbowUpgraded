DarkCave_1F_MapScripts::
# 3 "data/maps/DarkCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DarkCave_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

DarkCave_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/DarkCave_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DARK_CAVE
	return

