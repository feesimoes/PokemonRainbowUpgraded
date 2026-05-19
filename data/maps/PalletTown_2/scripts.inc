PalletTown_2_MapScripts::
# 3 "data/maps/PalletTown_2/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PalletTown_2_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

PalletTown_2_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/PalletTown_2/scripts.pory"
	setweather WEATHER_SUNNY
# 6 "data/maps/PalletTown_2/scripts.pory"
	doweather
	return

