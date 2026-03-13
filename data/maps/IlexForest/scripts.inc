IlexForest_MapScripts::
# 3 "data/maps/IlexForest/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, IlexForest_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

IlexForest_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/IlexForest/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ILEX_FOREST
	return

