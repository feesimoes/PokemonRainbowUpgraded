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
    setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 27 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 28 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 29 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
PalletTown_PlayersHouse_2F_EventScript_PC::
# 30 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 31 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lockall
# 32 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, HELPCONTEXT_BEDROOM_PC
# 33 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special Script_SetHelpContext
# 34 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 35 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOn
# 36 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 37 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox Text_PlayerBootedUpPC
# 38 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 39 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitstate
# 40 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 41 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 42 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end
# 43 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"

# 44 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
EventScript_PalletTown_PlayersHouse_2F_ShutDownPC::
# 45 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, 1
# 46 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 47 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special AnimatePcTurnOff
# 48 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	special SetHelpContextForMap
# 49 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
# 50 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	end

PalletTown_PlayersHouse_2F_EventScript_Bed::
# 55 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 56 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_0, MSGBOX_YESNO
# 57 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_2
# 104 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 105 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
PalletTown_PlayersHouse_2F_EventScript_Bed_1:
# 107 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	release
	end

PalletTown_PlayersHouse_2F_EventScript_Bed_2:
# 59 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_BEAT_RIVAL_IN_OAKS_LAB, PalletTown_PlayersHouse_2F_EventScript_Bed_6
# 82 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_24
PalletTown_PlayersHouse_2F_EventScript_Bed_22:
# 88 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_21
PalletTown_PlayersHouse_2F_EventScript_Bed_20:
# 96 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_HOUR, 6
PalletTown_PlayersHouse_2F_EventScript_Bed_5:
# 99 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 100 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_1

PalletTown_PlayersHouse_2F_EventScript_Bed_6:
# 61 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 62 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_1
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_15
PalletTown_PlayersHouse_2F_EventScript_Bed_13:
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_TIME_HOUR, 20
	goto_if_ge PalletTown_PlayersHouse_2F_EventScript_Bed_12
PalletTown_PlayersHouse_2F_EventScript_Bed_11:
# 77 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_HOUR, 6
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_9:
# 65 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_DAY_DATE, 1
# 66 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_DAYS_PLAYED, 1
# 67 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_10:
# 71 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_DAY_DATE, 0
# 72 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_DAYS_PLAYED, 1
# 73 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_12:
# 69 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_10
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_11

PalletTown_PlayersHouse_2F_EventScript_Bed_15:
# 63 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_ne PalletTown_PlayersHouse_2F_EventScript_Bed_9
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_13

PalletTown_PlayersHouse_2F_EventScript_Bed_18:
# 84 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_DAY_DATE, 1
# 85 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_DAYS_PLAYED, 1
# 86 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_19:
# 90 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_DAY_DATE, 0
# 91 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	addvar VAR_TIME_DAYS_PLAYED, 1
# 92 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_TIME_HOUR, 8
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_5

PalletTown_PlayersHouse_2F_EventScript_Bed_21:
# 88 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_Bed_19
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_20

PalletTown_PlayersHouse_2F_EventScript_Bed_24:
# 82 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_DAY_DATE, 6
	goto_if_ne PalletTown_PlayersHouse_2F_EventScript_Bed_18
	goto PalletTown_PlayersHouse_2F_EventScript_Bed_22


PalletTown_PlayersHouse_2F_EventScript_NES::
# 113 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_0
# 115 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, PalletTown_PlayersHouse_2F_EventScript_NES_1
# 152 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_unset FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS, PalletTown_PlayersHouse_2F_EventScript_NES_7
# 194 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 195 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 196 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 197 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_1:
# 117 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_4
# 143 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 144 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 145 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 146 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_4:
# 119 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 120 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_10
# 134 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 135 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 136 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 137 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_7:
# 154 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_1, MSGBOX_YESNO
# 155 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PalletTown_PlayersHouse_2F_EventScript_NES_13
# 185 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 186 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 187 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 188 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_10:
# 122 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 123 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_2
# 124 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 125 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 126 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 127 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 128 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 129 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end

PalletTown_PlayersHouse_2F_EventScript_NES_13:
# 157 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS
# 158 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_3
# 159 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 160 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 161 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 5
# 162 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 163 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 164 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 165 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 166 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 167 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 168 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 2
# 169 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 170 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_NES_Text_4
# 171 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 172 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	giveitem ITEM_TOWN_MAP, 1
# 173 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_TOWN_MAP
# 174 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	setflag FLAG_HIDE_POKEDEX
# 175 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 176 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 177 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2
# 178 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	waitmessage
# 179 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 180 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	releaseall
	end


PalletTown_PlayersHouse_2F_Calendar::
# 205 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	lock
# 206 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	fadenewbgm MUS_SLOW_PALLET
# 207 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Calendar_Text_0
# 208 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	compare VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
	goto_if_ge PalletTown_PlayersHouse_2F_Calendar_2
PalletTown_PlayersHouse_2F_Calendar_1:
# 212 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PalletTown_PlayersHouse_2F_Calendar_5
PalletTown_PlayersHouse_2F_Calendar_4:
# 216 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, PalletTown_PlayersHouse_2F_Calendar_8
PalletTown_PlayersHouse_2F_Calendar_7:
# 220 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, PalletTown_PlayersHouse_2F_Calendar_11
PalletTown_PlayersHouse_2F_Calendar_10:
# 224 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Calendar_Text_4
# 225 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	closemessage
# 226 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	fadedefaultbgm
# 227 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	release
	end

PalletTown_PlayersHouse_2F_Calendar_2:
# 210 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Calendar_Text_1
	goto PalletTown_PlayersHouse_2F_Calendar_1

PalletTown_PlayersHouse_2F_Calendar_5:
# 214 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Calendar_Text_2
	goto PalletTown_PlayersHouse_2F_Calendar_4

PalletTown_PlayersHouse_2F_Calendar_8:
# 218 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	msgbox PalletTown_PlayersHouse_2F_Calendar_Text_3
	goto PalletTown_PlayersHouse_2F_Calendar_7

PalletTown_PlayersHouse_2F_Calendar_11:
	goto PalletTown_PlayersHouse_2F_Calendar_10


PalletTown_PlayersHouse_2F_EventScript_Bed_Text_0:
# 56 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "It's your bed!\n"
	.string "Want to take a nap?$"

PalletTown_PlayersHouse_2F_EventScript_Bed_Text_1:
# 62 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "You and your POKéMON rested up!\n"
	.string "Great!$"

PalletTown_PlayersHouse_2F_EventScript_Bed_Text_2:
# 99 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Okay!\n"
	.string "It's time to go!$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_0:
# 114 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} played with the NES.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_1:
# 119 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "...Continue playing?$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_2:
# 123 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} ventured through ROUTE 1,\n"
	.string "where they met MISTY.\p"
	.string "They were informed of VIRIDIAN CITY\n"
	.string "which was up ahead.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_3:
# 158 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} secured their first victory\n"
	.string "against TEAM ROCKET!\p"
	.string "{PLAYER} then got OAK's PARCEL\n"
	.string "from the POKé MART clerk.$"

PalletTown_PlayersHouse_2F_EventScript_NES_Text_4:
# 170 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} delivered this to PROF. OAK,\n"
	.string "and got entrusted with a POKéDEX.$"

PalletTown_PlayersHouse_2F_Calendar_Text_0:
# 207 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "It's your CALENDAR!\n"
	.string "What a neat little throwback!\p"
	.string "MONDAY, FEBRUARY 26, 1996 -\n"
	.string "An ordinary day of NES gaming.$"

PalletTown_PlayersHouse_2F_Calendar_Text_1:
# 210 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "TUESDAY, FEBRUARY 27, 1996 -\n"
	.string "POKéMON DAY! PROF. OAK'S big task!$"

PalletTown_PlayersHouse_2F_Calendar_Text_2:
# 214 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "SUNDAY, MARCH 3, 1996 -\n"
	.string "First victory! BROCK'S BOULDER BADGE!$"

PalletTown_PlayersHouse_2F_Calendar_Text_3:
# 218 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "THURSDAY, MARCH 21, 1996 -\n"
	.string "Another victory! MISTY'S CASCADE\l"
	.string "BADGE!$"

PalletTown_PlayersHouse_2F_Calendar_Text_4:
# 224 "data/maps/PalletTown_PlayersHouse_2F/scripts.pory"
	.string "Seems like that's it...\n"
	.string "...Okay! It's time to go!$"
