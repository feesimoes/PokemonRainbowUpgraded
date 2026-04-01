UnityIsland_MapScripts::
# 3 "data/maps/UnityIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, UnityIsland_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

UnityIsland_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/UnityIsland/scripts.pory"
	clearflag FLAG_0x841
# 6 "data/maps/UnityIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_UNITY_ISLAND
	return

