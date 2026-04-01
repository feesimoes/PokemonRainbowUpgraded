NationalPark_MapScripts::
# 3 "data/maps/NationalPark/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NationalPark_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NationalPark_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/NationalPark/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_NATIONAL_PARK
	return

