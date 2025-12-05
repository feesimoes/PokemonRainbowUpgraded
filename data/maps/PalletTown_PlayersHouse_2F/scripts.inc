# 1 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 2 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_MapScripts::
# 3 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_PlayersHouse_2F_OnTransition
# 4 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_PlayersHouse_2F_OnWarp
# 5 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.byte 0
# 6 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 7 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_OnTransition::
# 8 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_EventScript_SetRespawn
# 9 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 10 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 11 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_SetRespawn::
# 12 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 13 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	return
# 14 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 15 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_OnWarp::
# 16 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 0, PalletTown_PlayersHouse_2F_FirstWarpIn
# 17 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.2byte 0
# 18 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 19 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_FirstWarpIn::
# 20 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 21 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PLAYERS_HOUSE_2F, 1
# 22 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 23 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
# 24 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
    setflag FLAG_HIDE_VERMILION_MR_FUJI
# 25 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
    setflag FLAG_HIDE_VERMILION_BLAINE
# 26 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 27 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 28 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_Sign::
# 29 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
# 30 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 31 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 32 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_PC::
# 33 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 34 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lockall
# 35 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
# 36 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special Script_SetHelpContext
# 37 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 38 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOn
# 39 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 40 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox Text_PlayerBootedUpPC
# 41 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 42 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 43 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 44 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 45 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 46 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 47 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
# 48 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 49 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 50 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOff
# 51 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 52 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 53 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end

PalletTown_PlayersHouse_2F_EventScript_NES::
# 57 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 58 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 60 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 61 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, PalletTown_PlayersHouse_2F_EventScript_NES_1
# 98 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS, PalletTown_PlayersHouse_2F_EventScript_NES_7
# 140 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 141 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 142 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 143 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_1:
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_4
# 89 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 90 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 91 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 92 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_4:
# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_10
# 80 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 81 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 82 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 83 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_7:
# 100 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 101 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_13
# 131 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 132 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 133 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 134 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_10:
# 68 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_2
# 70 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 72 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 73 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 74 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 75 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_13:
# 103 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS
# 104 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_4
# 105 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 106 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 107 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 108 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 109 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 110 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 111 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 112 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 113 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 115 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 116 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_5
# 117 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 118 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 119 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 120 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_POKEDEX
# 121 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 122 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 123 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 124 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 125 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 126 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 58 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} played with the NES.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_1:
# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Continue playing?$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_2:
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} ventured through ROUTE 1,\n"
	.string "where they met MISTY.\p"
	.string "They were informed of VIRIDIAN CITY\n"
	.string "which was up ahead.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_3:
# 72 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Okay!\n"
	.string "It's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_4:
# 104 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} secured their first victory\n"
	.string "against TEAM ROCKET!\p"
	.string "{PLAYER} then got OAK's PARCEL\n"
	.string "from the POKé MART clerk.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_5:
# 116 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} delivered this to PROF. OAK,\n"
	.string "and got entrusted with a POKéDEX.$"
