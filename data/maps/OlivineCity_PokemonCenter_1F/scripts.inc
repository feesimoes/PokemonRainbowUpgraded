OlivineCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_OLIVINE_CITY_POKEMON_CENTER_1F
	return

OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_OLIVINE_CITY
	return

OlivineCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


OlivineCity_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	msgbox OlivineCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 23 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	release
	end


OlivineCity_PokemonCenter_1F_EventScript_Nurse::
# 29 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 32 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	release
	end


OlivineCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/OlivineCity_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"
