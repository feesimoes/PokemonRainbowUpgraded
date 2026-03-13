RuinsOfAlph_MapScripts::
# 3 "data/maps/RuinsOfAlph/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RuinsOfAlph_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RuinsOfAlph_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/RuinsOfAlph/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_RUINS_OF_ALPH
	return

