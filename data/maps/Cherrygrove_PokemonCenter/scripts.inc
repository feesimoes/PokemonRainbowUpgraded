Cherrygrove_PokemonCenter_MapScripts::
# 3 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	return

