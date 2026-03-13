SlateportCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD
# 7 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 11 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SLATEPORT_CITY_POKEMON_CENTER_1F
	return

SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 9 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_SLATEPORT_CITY
	return

SlateportCity_PokemonCenter_1F_MapScripts_MAP_SCRIPT_ON_RESUME:
# 13 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call CableClub_OnResume
	return


SlateportCity_PokemonCenter_1F_Nurse::
# 19 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 22 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end


SlateportCity_PokemonCenter_1F_DeliveryMan::
# 28 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	lock
# 29 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	msgbox SlateportCity_PokemonCenter_1F_DeliveryMan_Text_0
# 31 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 32 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	release
	end


SlateportCity_PokemonCenter_1F_DeliveryMan_Text_0:
# 30 "data/maps/SlateportCity_PokemonCenter_1F/scripts.pory"
	.string "Hello. I am waiting for a very\n"
	.string "important... Thing. Any moment, now...$"
