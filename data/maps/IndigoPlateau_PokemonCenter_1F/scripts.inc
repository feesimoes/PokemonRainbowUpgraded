# 1 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_MapScripts::
# 3 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
# 4 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_OnTransition::
# 8 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
# 9 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 10 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor
# 11 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckBlockDoor::
# 14 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, EventScript_Return
# 15 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setobjectxyperm LOCALID_LEAGUE_DOOR_GUARD, 4, 2
# 16 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	return
# 17 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_DoorGuard::
# 19 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 20 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 21 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DEFEATED_LORELEI
# 22 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DEFEATED_BRUNO
# 23 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DEFEATED_AGATHA
# 24 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DEFEATED_LANCE
# 25 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_DEFEATED_CHAMP
# 26 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_LORELEI
# 27 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_LORELEI_2
# 28 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_KOGA
# 29 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_BRUNO
# 30 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_BRUNO_2
# 31 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_AGATHA
# 32 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_AGATHA_2
# 33 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_ELITE_FOUR_LANCE
# 34 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	cleartrainerflag TRAINER_CHAMPION_LANCE
# 35 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_LEAGUE, 0
# 36 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	specialvar VAR_RESULT, IsNationalPokedexEnabled
# 37 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete
# 38 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 39 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 40 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 41 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 42 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_CheckSeviiIslandComplete::
# 43 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete
# 44 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_LoreleiIsAbsentClosedForTimeBeing
# 45 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_SeviiIslandComplete::
# 49 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_FaceEliteFourGoodLuck
# 50 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 51 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_GymGuy::
# 54 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox IndigoPlateau_PokemonCenter_1F_Text_GymGuyAdvice, MSGBOX_NPC
# 55 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 56 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 57 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Clerk::
# 58 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 59 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 60 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 61 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	message Text_MayIHelpYou
# 62 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	waitmessage
# 63 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	pokemart IndigoPlateau_PokemonCenter_1F_Items
# 64 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	msgbox Text_PleaseComeAgain
# 65 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 66 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 67 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 68 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.align 2
# 69 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_Items::
# 70 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 71 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 72 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 73 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_POTION
# 74 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_REVIVE
# 75 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 76 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 77 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	.2byte ITEM_NONE
# 78 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 79 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
# 80 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"

# 81 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
# 82 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	lock
# 83 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	faceplayer
# 84 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 85 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	release
# 86 "data/maps/IndigoPlateau_PokemonCenter_1F/scripts.pory"
	end
