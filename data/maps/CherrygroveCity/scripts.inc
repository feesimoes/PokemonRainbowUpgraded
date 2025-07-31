CherrygroveCity_MapScripts::
# 3 "data/maps/CherrygroveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CherrygroveCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CherrygroveCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/CherrygroveCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	return

