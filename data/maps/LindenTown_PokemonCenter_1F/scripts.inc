LindenTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LINDEN_TOWN
	return

LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LINDEN_TOWN
	return

LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


LindenTown_PokemonCenter_1F_EventScript_Nurse::
# 19 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 22 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Man::
# 28 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	msgbox LindenTown_PokemonCenter_1F_Man_Text_0
# 31 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Sailor::
# 38 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	msgbox LindenTown_PokemonCenter_1F_Sailor_Text_0
# 41 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 42 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Man_Text_0:
# 30 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	.string "This is actually the only\n"
	.string "POKéMON CENTER in all of GUYANA.\p"
	.string "I hear other regions typically\n"
	.string "have these in every town.$"

LindenTown_PokemonCenter_1F_Sailor_Text_0:
# 40 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	.string "A luxury cruise that sails\n"
	.string "around the world...\p"
	.string "Do you think they could fit a\n"
	.string "POKéMON CENTER on it?$"
