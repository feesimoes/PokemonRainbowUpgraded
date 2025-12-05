BlackthornCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_BLACKTHORN_CITY_POKEMON_CENTER_1F
	return

BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	return

BlackthornCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


BlackthornCity_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	msgbox BlackthornCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 23 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	release
	end


BlackthornCity_PokemonCenter_1F_EventScript_Nurse::
# 29 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	lock
# 30 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 31 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 32 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	release
	end


BlackthornCity_PokemonCenter_1F_Cooltrainer_F::
# 38 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	lock
# 39 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 40 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	msgbox BlackthornCity_PokemonCenter_1F_Cooltrainer_F_Text_0
# 41 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 42 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	release
	end


BlackthornCity_PokemonCenter_1F_Youngster::
# 48 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	lock
# 49 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 50 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	msgbox BlackthornCity_PokemonCenter_1F_Youngster_Text_0
# 51 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 52 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	release
	end


BlackthornCity_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"

BlackthornCity_PokemonCenter_1F_Cooltrainer_F_Text_0:
# 40 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	.string "A POKéMON TRAINER that isn't\n"
	.string "biased by type preferences...\p"
	.string "Why, they just might be\n"
	.string "stronger than usual opponents.$"

BlackthornCity_PokemonCenter_1F_Youngster_Text_0:
# 50 "data/maps/BlackthornCity_PokemonCenter_1F/scripts.pory"
	.string "I don't understand why CLAIR\n"
	.string "uses DRAGON-TYPE POKéMON.\p"
	.string "I mean, ICE PATH is just\n"
	.string "nearby!$"
