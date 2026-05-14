CianwoodCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CIANWOOD_CITY_POKEMON_CENTER_1F
	return

CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CIANWOOD_CITY
	return

CianwoodCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


CianwoodCity_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	msgbox CianwoodCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 23 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	release
	end


CianwoodCity_PokemonCenter_1F_EventScript_Nurse::
# 29 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 32 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	release
	end


CianwoodCity_PokemonCenter_1F_Reset_Beast_Progress::
# 38 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	msgbox CianwoodCity_PokemonCenter_1F_Reset_Beast_Progress_Text_0
# 41 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 42 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 1
# 43 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	release
	end


CianwoodCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"

CianwoodCity_PokemonCenter_1F_Reset_Beast_Progress_Text_0:
# 40 "data/maps/CianwoodCity_PokemonCenter_1F/scripts.pory"
	.string "Progress reset.$"
