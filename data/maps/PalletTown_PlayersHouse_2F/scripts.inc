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
	end
# 25 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 26 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_Sign::
# 27 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Text_PressLRForHelp, MSGBOX_SIGN
# 28 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 29 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 30 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_PC::
# 31 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 32 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lockall
# 33 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
# 34 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special Script_SetHelpContext
# 35 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 36 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOn
# 37 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 38 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox Text_PlayerBootedUpPC
# 39 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 40 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 41 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 42 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 43 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 44 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 45 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
# 46 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 47 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 48 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOff
# 49 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 50 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 51 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end

PalletTown_PlayersHouse_2F_EventScript_NES::
# 55 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 56 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0
# 57 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 58 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, PalletTown_PlayersHouse_2F_EventScript_NES_1
# 96 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS, PalletTown_PlayersHouse_2F_EventScript_NES_7
# 138 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 139 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 140 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 141 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_1:
# 61 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_4
# 87 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 88 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 89 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 90 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_4:
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 64 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_10
# 78 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 79 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 80 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_7:
# 98 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 99 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_13
# 129 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 130 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 131 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 132 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_10:
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 67 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_2
# 68 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 70 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 72 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 73 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_13:
# 101 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS
# 102 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_4
# 103 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 104 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 105 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 106 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 107 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 108 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 109 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 110 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 111 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 112 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 113 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_5
# 115 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 116 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 117 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 118 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_POKEDEX
# 119 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 120 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 121 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 122 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 123 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 124 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 56 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} played with the NES.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_1:
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Continue playing?$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_2:
# 67 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} ventured through ROUTE 1,\n"
	.string "where they met MISTY.\p"
	.string "They were informed of VIRIDIAN CITY\n"
	.string "which was up ahead.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_3:
# 70 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Okay!\n"
	.string "It's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_4:
# 102 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} secured their first victory\n"
	.string "against TEAM ROCKET!\p"
	.string "{PLAYER} then got OAK's PARCEL\n"
	.string "from the POKé MART clerk.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_5:
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} delivered this to PROF. OAK,\n"
	.string "and got entrusted with a POKéDEX.$"
