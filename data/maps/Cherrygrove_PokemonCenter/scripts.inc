Cherrygrove_PokemonCenter_MapScripts::
# 3 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_OnResume
	return


Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service::
# 19 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 20 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 7, Movement_Violet_PokemonCenter_1F_Face_Player
# 21 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 22 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Nurse::
# 28 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 29 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	faceplayer
# 30 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call EventScript_PkmnCenterNurse
# 31 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man::
# 37 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 38 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 2, Cherrygrove_PokemonCenter_1F_Face_Player
# 39 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man_Text_0
# 40 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid::
# 46 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 47 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 8, Cherrygrove_PokemonCenter_1F_Face_Player
# 48 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid_Text_0
# 49 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Gentleman::
# 55 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 56 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 3, Cherrygrove_PokemonCenter_1F_Face_Player
# 57 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_Gentleman_Text_0
# 58 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


# 62 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
Cherrygrove_PokemonCenter_1F_Face_Player:
# 64 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	face_player
# 65 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	step_end

Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 21 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"

Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man_Text_0:
# 39 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "Munch, munch...\n"
	.string "Mmm...\p"
	.string "SLOWPOKE TAIL is so tasty!\n"
	.string "...Huh, what's that?\p"
	.string "It's chopped off of a SLOWPOKE?\n"
	.string "Don't be ridiculous! Scram!$"

Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid_Text_0:
# 48 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "I'm enjoying this game!\n"
	.string "It's fun to play with friends!$"

Cherrygrove_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 57 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "Watching my grandson grow up\n"
	.string "reminds me of simpler times.$"
