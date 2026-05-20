# 1 "data/maps/OneIsland/scripts.pory"

# 2 "data/maps/OneIsland/scripts.pory"
OneIsland_MapScripts::
# 3 "data/maps/OneIsland/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, OneIsland_OnTransition
# 4 "data/maps/OneIsland/scripts.pory"
	.byte 0
# 5 "data/maps/OneIsland/scripts.pory"

# 6 "data/maps/OneIsland/scripts.pory"
OneIsland_OnTransition::
# 7 "data/maps/OneIsland/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ONE_ISLAND
# 8 "data/maps/OneIsland/scripts.pory"
	end
# 9 "data/maps/OneIsland/scripts.pory"

# 10 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_CheckIfFirstTime::
# 11 "data/maps/OneIsland/scripts.pory"
	lockall
# 12 "data/maps/OneIsland/scripts.pory"
	goto_if_unset FLAG_HIDE_ONE_ISLAND_BILL, OneIsland_EventScript_EnterOneIslandFirstTime
# 13 "data/maps/OneIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 14 "data/maps/OneIsland/scripts.pory"
	releaseall
# 15 "data/maps/OneIsland/scripts.pory"
	end
# 16 "data/maps/OneIsland/scripts.pory"

# 17 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_EnterOneIslandFirstTime::
# 18 "data/maps/OneIsland/scripts.pory"
	lockall
# 19 "data/maps/OneIsland/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 20 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_BillLetsGoSeeCelio
# 21 "data/maps/OneIsland/scripts.pory"
	closemessage
# 22 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillWalkToPokeCenter
# 23 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerWalkToPokeCenter
# 24 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 25 "data/maps/OneIsland/scripts.pory"
	opendoor 14, 5
# 26 "data/maps/OneIsland/scripts.pory"
	waitdooranim
# 27 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_ONE_ISLAND_BILL, OneIsland_Movement_BillEnterPokeCenter
# 28 "data/maps/OneIsland/scripts.pory"
	applymovement LOCALID_PLAYER, OneIsland_Movement_PlayerEnterPokeCenter
# 29 "data/maps/OneIsland/scripts.pory"
	waitmovement 0
# 30 "data/maps/OneIsland/scripts.pory"
	closedoor 14, 5
# 31 "data/maps/OneIsland/scripts.pory"
	waitdooranim
# 32 "data/maps/OneIsland/scripts.pory"
	removeobject LOCALID_ONE_ISLAND_BILL
# 33 "data/maps/OneIsland/scripts.pory"
	setvar VAR_MAP_SCENE_ONE_ISLAND_HARBOR, 3
# 34 "data/maps/OneIsland/scripts.pory"
	warp MAP_ONE_ISLAND_POKEMON_CENTER_1F, 9, 9
# 35 "data/maps/OneIsland/scripts.pory"
	waitstate
# 36 "data/maps/OneIsland/scripts.pory"
	releaseall
# 37 "data/maps/OneIsland/scripts.pory"
	end
# 38 "data/maps/OneIsland/scripts.pory"

# 39 "data/maps/OneIsland/scripts.pory"
	.macro walk_to_pokecenter
# 40 "data/maps/OneIsland/scripts.pory"
	walk_up
# 41 "data/maps/OneIsland/scripts.pory"
	walk_up
# 42 "data/maps/OneIsland/scripts.pory"
	walk_up
# 43 "data/maps/OneIsland/scripts.pory"
	walk_up
# 44 "data/maps/OneIsland/scripts.pory"
	walk_right
# 45 "data/maps/OneIsland/scripts.pory"
	walk_right
# 46 "data/maps/OneIsland/scripts.pory"
	walk_up
# 47 "data/maps/OneIsland/scripts.pory"
	walk_up
# 48 "data/maps/OneIsland/scripts.pory"
	walk_up
# 49 "data/maps/OneIsland/scripts.pory"
	walk_up
# 50 "data/maps/OneIsland/scripts.pory"
	walk_up
# 51 "data/maps/OneIsland/scripts.pory"
	.endm
# 52 "data/maps/OneIsland/scripts.pory"

# 53 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerWalkToPokeCenter::
# 54 "data/maps/OneIsland/scripts.pory"
	walk_up
# 55 "data/maps/OneIsland/scripts.pory"
	walk_to_pokecenter
# 56 "data/maps/OneIsland/scripts.pory"
	step_end
# 57 "data/maps/OneIsland/scripts.pory"

# 58 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerEnterPokeCenter::
# 59 "data/maps/OneIsland/scripts.pory"
	walk_up
# 60 "data/maps/OneIsland/scripts.pory"
	walk_up
# 61 "data/maps/OneIsland/scripts.pory"
	set_invisible
# 62 "data/maps/OneIsland/scripts.pory"
	step_end
# 63 "data/maps/OneIsland/scripts.pory"

# 64 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_PlayerExitHarbor::
# 65 "data/maps/OneIsland/scripts.pory"
	walk_up
# 66 "data/maps/OneIsland/scripts.pory"
	step_end
# 67 "data/maps/OneIsland/scripts.pory"

# 68 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_BillWalkToPokeCenter::
# 69 "data/maps/OneIsland/scripts.pory"
	walk_to_pokecenter
# 70 "data/maps/OneIsland/scripts.pory"
	walk_up
# 71 "data/maps/OneIsland/scripts.pory"
	step_end
# 72 "data/maps/OneIsland/scripts.pory"

# 73 "data/maps/OneIsland/scripts.pory"
OneIsland_Movement_BillEnterPokeCenter::
# 74 "data/maps/OneIsland/scripts.pory"
	walk_up
# 75 "data/maps/OneIsland/scripts.pory"
	set_invisible
# 76 "data/maps/OneIsland/scripts.pory"
	step_end
# 77 "data/maps/OneIsland/scripts.pory"

# 78 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_OldMan::
# 79 "data/maps/OneIsland/scripts.pory"
	lock
# 80 "data/maps/OneIsland/scripts.pory"
	faceplayer
# 81 "data/maps/OneIsland/scripts.pory"
	goto_if_set FLAG_SYS_CAN_LINK_WITH_RS, OneIsland_EventScript_OldManLinkHoenn
# 82 "data/maps/OneIsland/scripts.pory"
	goto_if_set FLAG_SEVII_DETOUR_FINISHED, OneIsland_EventScript_OldManLinkKanto
# 83 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_LuckyToHaveCelioHere
# 84 "data/maps/OneIsland/scripts.pory"
	release
# 85 "data/maps/OneIsland/scripts.pory"
	end
# 86 "data/maps/OneIsland/scripts.pory"

# 87 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_OldManLinkKanto::
# 88 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithKanto
# 89 "data/maps/OneIsland/scripts.pory"
	release
# 90 "data/maps/OneIsland/scripts.pory"
	end
# 91 "data/maps/OneIsland/scripts.pory"

# 92 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_OldManLinkHoenn::
# 93 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_HavePCLinkageWithHoenn
# 94 "data/maps/OneIsland/scripts.pory"
	release
# 95 "data/maps/OneIsland/scripts.pory"
	end
# 96 "data/maps/OneIsland/scripts.pory"

# 97 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_BaldingMan::
# 98 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IsntWarmClimateHereGreat, MSGBOX_NPC
# 99 "data/maps/OneIsland/scripts.pory"
	end
# 100 "data/maps/OneIsland/scripts.pory"

# 101 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_IslandSign::
# 102 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_IslandSign, MSGBOX_SIGN
# 103 "data/maps/OneIsland/scripts.pory"
	end
# 104 "data/maps/OneIsland/scripts.pory"

# 105 "data/maps/OneIsland/scripts.pory"
OneIsland_EventScript_PokemonNetCenterSign::
# 106 "data/maps/OneIsland/scripts.pory"
	msgbox OneIsland_Text_PokemonNetCenterSign, MSGBOX_SIGN
# 107 "data/maps/OneIsland/scripts.pory"
	end
