DarkCave_2F_MapScripts::
# 3 "data/maps/DarkCave_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DarkCave_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

DarkCave_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/DarkCave_2F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DARK_CAVE
	return

