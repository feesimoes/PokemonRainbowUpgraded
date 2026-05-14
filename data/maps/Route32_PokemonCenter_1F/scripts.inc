Route32_PokemonCenter_1F_MapScripts::
# 3 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE32_POKEMON_CENTER_1F
	return

Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_ROUTE32
	return

Route32_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Route32_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	applymovement 5, Movement_Route32_PokemonCenter_1F_Face_Player
# 21 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	msgbox Route32_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	release
	end


Route32_PokemonCenter_1F_EventScript_Nurse::
# 28 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 31 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	release
	end


# 35 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
Movement_Route32_PokemonCenter_1F_Face_Player:
# 37 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	face_player
# 38 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	step_end

Route32_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/Route32_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"
