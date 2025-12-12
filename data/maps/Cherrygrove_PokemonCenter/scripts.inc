Cherrygrove_PokemonCenter_MapScripts::
# 3 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD
# 8 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 13 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_OnLoad
# 6 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 10 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_OnTransition
# 11 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CHERRYGROVE_CITY
	return

Cherrygrove_PokemonCenter_MapScripts_MAP_SCRIPT_ON_RESUME:
# 15 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_OnResume
	return


Cherrygrove_PokemonCenter_Exit_UnionRoom::
# 21 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 22 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Cherrygrove_PokemonCenter_Exit_UnionRoom_1
	return

Cherrygrove_PokemonCenter_Exit_UnionRoom_1:
# 24 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_EventScript_ExitUnionRoom
	return


Cherrygrove_PokemonCenter_Exit_CableClub::
# 30 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 31 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Cherrygrove_PokemonCenter_Exit_CableClub_1
	return

Cherrygrove_PokemonCenter_Exit_CableClub_1:
# 33 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call CableClub_EventScript_ExitLinkRoom
	return


Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service::
# 39 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 40 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 7, Movement_Violet_PokemonCenter_1F_Face_Player
# 41 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0
# 42 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Nurse::
# 48 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 49 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	faceplayer
# 50 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	call EventScript_PkmnCenterNurse
# 51 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man::
# 57 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 58 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 2, Cherrygrove_PokemonCenter_1F_Face_Player
# 59 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man_Text_0
# 60 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid::
# 66 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 67 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 8, Cherrygrove_PokemonCenter_1F_Face_Player
# 68 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid_Text_0
# 69 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


Cherrygrove_PokemonCenter_1F_EventScript_Gentleman::
# 75 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	lock
# 76 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	applymovement 3, Cherrygrove_PokemonCenter_1F_Face_Player
# 77 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	msgbox Cherrygrove_PokemonCenter_1F_EventScript_Gentleman_Text_0
# 78 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	release
	end


# 82 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
Cherrygrove_PokemonCenter_1F_Face_Player:
# 84 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	face_player
# 85 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	step_end

Cherrygrove_PokemonCenter_1F_Attendant_Out_Of_Service_Text_0:
# 41 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "I'm terribly sorry, but we\n"
	.string "are undergoing some maintenance.$"

Cherrygrove_PokemonCenter_1F_EventScript_Fat_Man_Text_0:
# 59 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "Munch, munch...\n"
	.string "Mmm...\p"
	.string "SLOWPOKE TAIL is so tasty!\n"
	.string "...Huh, what's that?\p"
	.string "It's chopped off of a SLOWPOKE?\n"
	.string "Don't be ridiculous! Scram!$"

Cherrygrove_PokemonCenter_1F_EventScript_GBA_Kid_Text_0:
# 68 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "I'm enjoying this game!\n"
	.string "It's fun to play with friends!$"

Cherrygrove_PokemonCenter_1F_EventScript_Gentleman_Text_0:
# 77 "data/maps/Cherrygrove_PokemonCenter/scripts.pory"
	.string "Watching my grandson grow up\n"
	.string "reminds me of simpler times.$"
