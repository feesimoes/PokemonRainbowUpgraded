Violet_PokemonCenter_1F_MapScripts::
# 3 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIOLET_CITY
	return

Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIOLET_CITY
	return

Violet_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


Violet_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	applymovement 5, Movement_Violet_PokemonCenter_1F_Face_Player
# 21 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	msgbox Violet_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	release
	end


Violet_PokemonCenter_1F_EventScript_Nurse::
# 28 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 31 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	release
	end


# 35 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
Movement_Violet_PokemonCenter_1F_Face_Player:
# 37 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	face_player
# 38 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	step_end

Violet_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/Violet_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"
