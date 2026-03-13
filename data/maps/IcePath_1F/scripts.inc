IcePath_1F_MapScripts::
# 3 "data/maps/IcePath_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IcePath_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IcePath_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IcePath_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ICE_PATH
	return

