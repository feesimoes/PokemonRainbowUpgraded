JubilifeCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_JUBILIFE_CITY_POKEMON_CENTER_1F
	return

JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_JUBILIFE_CITY
	return

JubilifeCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


JubilifeCity_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 22 "data/maps/JubilifeCity_PokemonCenter_1F/scripts.pory"
	release
	end

