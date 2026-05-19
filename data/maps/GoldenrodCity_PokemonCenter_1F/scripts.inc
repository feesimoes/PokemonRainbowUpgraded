GoldenrodCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_GOLDENROD_CITY_POKEMON_CENTER_1F
	return

GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_GOLDENROD_CITY
	return

GoldenrodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


GoldenrodCity_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	msgbox GoldenrodCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 23 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	release
	end


GoldenrodCity_PokemonCenter_1F_EventScript_Nurse::
# 29 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 32 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	release
	end


GoldenrodCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/GoldenrodCity_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"
