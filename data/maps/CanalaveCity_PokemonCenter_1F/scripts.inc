CanalaveCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CANALAVE_CITY
	return

CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CANALAVE_CITY
	return

CanalaveCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/CanalaveCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return

