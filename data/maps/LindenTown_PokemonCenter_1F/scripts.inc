LindenTown_PokemonCenter_1F_MapScripts::
# 3 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 7 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LINDEN_TOWN
	return

LindenTown_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 9 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


LindenTown_PokemonCenter_1F_EventScript_Nurse::
# 15 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 16 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 17 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 18 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Man::
# 24 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 25 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 26 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	msgbox LindenTown_PokemonCenter_1F_Man_Text_0
# 27 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 28 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Sailor::
# 34 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	lock
# 35 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 36 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	msgbox LindenTown_PokemonCenter_1F_Sailor_Text_0
# 37 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	closemessage
# 38 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	release
	end


LindenTown_PokemonCenter_1F_Man_Text_0:
# 26 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	.string "This is actually the only\n"
	.string "POKéMON CENTER in all of GUYANA.\p"
	.string "I hear other regions typically\n"
	.string "have these in every town.$"

LindenTown_PokemonCenter_1F_Sailor_Text_0:
# 36 "data/maps/LindenTown_PokemonCenter_1F/scripts.pory"
	.string "A luxury cruise that sails\n"
	.string "around the world...\p"
	.string "Do you think they could fit a\n"
	.string "POKéMON CENTER on it?$"
