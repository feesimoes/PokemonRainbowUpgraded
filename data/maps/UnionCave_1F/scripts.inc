UnionCave_1F_MapScripts::
# 3 "data/maps/UnionCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, UnionCave_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

UnionCave_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/UnionCave_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_UNION_CAVE
	return

