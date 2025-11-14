Cherrygrove_PokemonCenter_MapScripts::
# 3 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_OnResume
	return

