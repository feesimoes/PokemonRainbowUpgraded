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

PalletTown_PlayersHouse_2F_EventScript_Bed::
# 58 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_0, MSGBOX_YESNO
# 60 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_2
# 103 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 104 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
PalletTown_PlayersHouse_2F_EventScript_Bed_1:
# 106 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	release
	end

PalletTown_PlayersHouse_2F_EventScript_Bed_2:
# 62 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_2F_EventScript_Bed_6
# 83 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_24
PalletTown_PlayersHouse_2F_EventScript_Bed_22:
# 88 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_21
PalletTown_PlayersHouse_2F_EventScript_Bed_20:
# 95 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_HOUR, 6
PalletTown_PlayersHouse_2F_EventScript_Bed_5:
# 98 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 99 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_1

PalletTown_PlayersHouse_2F_EventScript_Bed_6:
# 64 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_1
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_15
PalletTown_PlayersHouse_2F_EventScript_Bed_13:
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_12
PalletTown_PlayersHouse_2F_EventScript_Bed_11:
# 78 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_HOUR, 6
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_9:
# 68 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_DAY_DATE, 1
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_10:
# 73 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_DAY_DATE, 0
# 74 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_12:
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_10
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_11

PalletTown_PlayersHouse_2F_EventScript_Bed_15:
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_ne PalletTown_PlayersHouse_2F_EventScript_Bed_9
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_13

PalletTown_PlayersHouse_2F_EventScript_Bed_18:
# 85 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_DAY_DATE, 1
# 86 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_19:
# 90 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_DAY_DATE, 0
# 91 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_21:
# 88 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_19
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_20

PalletTown_PlayersHouse_2F_EventScript_Bed_24:
# 83 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_ne PalletTown_PlayersHouse_2F_EventScript_Bed_18
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_22


PalletTown_PlayersHouse_2F_EventScript_NES::
# 112 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 113 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 115 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 116 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, PalletTown_PlayersHouse_2F_EventScript_NES_1
# 153 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS, PalletTown_PlayersHouse_2F_EventScript_NES_7
# 195 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 196 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 197 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 198 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_1:
# 118 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_4
# 144 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 145 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 146 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 147 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_4:
# 120 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 121 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_10
# 135 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 136 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 137 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 138 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_7:
# 155 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 156 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_13
# 186 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 187 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 188 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 189 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_10:
# 123 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 124 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_2
# 125 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 126 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 127 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 128 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 129 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 130 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_13:
# 158 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS
# 159 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 160 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 161 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 162 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 163 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 164 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 165 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 166 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 167 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 168 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 169 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 170 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 171 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_4
# 172 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 173 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 174 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 175 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_POKEDEX
# 176 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 177 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 178 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 179 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 180 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 181 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_2F_EventScript_Bed_Text_0:
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "It's your bed!\n"
	.string "Want to take a nap?$"

PalletTown_PlayersHouse_2F_EventScript_Bed_Text_1:
# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "You and your POKéMON have\n"
	.string "rested up! Great!$"

PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2:
# 98 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Okay!\n"
	.string "It's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 113 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} played with the NES.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_1:
# 120 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Continue playing?$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_2:
# 124 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} ventured through ROUTE 1,\n"
	.string "where they met MISTY.\p"
	.string "They were informed of VIRIDIAN CITY\n"
	.string "which was up ahead.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_3:
# 159 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} secured their first victory\n"
	.string "against TEAM ROCKET!\p"
	.string "{PLAYER} then got OAK's PARCEL\n"
	.string "from the POKé MART clerk.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_4:
# 171 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} delivered this to PROF. OAK,\n"
	.string "and got entrusted with a POKéDEX.$"
