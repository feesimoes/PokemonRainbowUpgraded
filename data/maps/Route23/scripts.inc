# 1 "data/maps/Route23/scripts.pory"

# 2 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuard::
# 3 "data/maps/Route23/scripts.pory"
	lock
# 4 "data/maps/Route23/scripts.pory"
	faceplayer
# 5 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 6 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 7 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 8 "data/maps/Route23/scripts.pory"
	end
# 9 "data/maps/Route23/scripts.pory"

# 10 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuard::
# 11 "data/maps/Route23/scripts.pory"
	lock
# 12 "data/maps/Route23/scripts.pory"
	faceplayer
# 13 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 14 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 15 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 16 "data/maps/Route23/scripts.pory"
	end
# 17 "data/maps/Route23/scripts.pory"

# 18 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuard::
# 19 "data/maps/Route23/scripts.pory"
	lock
# 20 "data/maps/Route23/scripts.pory"
	faceplayer
# 21 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 22 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 23 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 24 "data/maps/Route23/scripts.pory"
	end
# 25 "data/maps/Route23/scripts.pory"

# 26 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuard::
# 27 "data/maps/Route23/scripts.pory"
	lock
# 28 "data/maps/Route23/scripts.pory"
	faceplayer
# 29 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 30 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 31 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 32 "data/maps/Route23/scripts.pory"
	end
# 33 "data/maps/Route23/scripts.pory"

# 34 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuard::
# 35 "data/maps/Route23/scripts.pory"
	lock
# 36 "data/maps/Route23/scripts.pory"
	faceplayer
# 37 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 38 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 39 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 40 "data/maps/Route23/scripts.pory"
	end
# 41 "data/maps/Route23/scripts.pory"

# 42 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuard::
# 43 "data/maps/Route23/scripts.pory"
	lock
# 44 "data/maps/Route23/scripts.pory"
	faceplayer
# 45 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 46 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 47 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 48 "data/maps/Route23/scripts.pory"
	end
# 49 "data/maps/Route23/scripts.pory"

# 50 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuard::
# 51 "data/maps/Route23/scripts.pory"
	lock
# 52 "data/maps/Route23/scripts.pory"
	faceplayer
# 53 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 54 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 55 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuard
# 56 "data/maps/Route23/scripts.pory"
	end
# 57 "data/maps/Route23/scripts.pory"

# 58 "data/maps/Route23/scripts.pory"
Route23_EventScript_CascadeBadgeGuardTrigger::
# 59 "data/maps/Route23/scripts.pory"
	lockall
# 60 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 2
# 61 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_CASCADE_BADGE_GUARD
# 62 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_CASCADE_BADGE
# 63 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 64 "data/maps/Route23/scripts.pory"
	end
# 65 "data/maps/Route23/scripts.pory"

# 66 "data/maps/Route23/scripts.pory"
Route23_EventScript_ThunderBadgeGuardTrigger::
# 67 "data/maps/Route23/scripts.pory"
	lockall
# 68 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 3
# 69 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_THUNDER_BADGE_GUARD
# 70 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_THUNDER_BADGE
# 71 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 72 "data/maps/Route23/scripts.pory"
	end
# 73 "data/maps/Route23/scripts.pory"

# 74 "data/maps/Route23/scripts.pory"
Route23_EventScript_RainbowBadgeGuardTrigger::
# 75 "data/maps/Route23/scripts.pory"
	lockall
# 76 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 4
# 77 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_RAINBOW_BADGE_GUARD
# 78 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_RAINBOW_BADGE
# 79 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 80 "data/maps/Route23/scripts.pory"
	end
# 81 "data/maps/Route23/scripts.pory"

# 82 "data/maps/Route23/scripts.pory"
Route23_EventScript_SoulBadgeGuardTrigger::
# 83 "data/maps/Route23/scripts.pory"
	lockall
# 84 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 5
# 85 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_SOUL_BADGE_GUARD
# 86 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_SOUL_BADGE
# 87 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 88 "data/maps/Route23/scripts.pory"
	end
# 89 "data/maps/Route23/scripts.pory"

# 90 "data/maps/Route23/scripts.pory"
Route23_EventScript_MarshBadgeGuardTrigger::
# 91 "data/maps/Route23/scripts.pory"
	lockall
# 92 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 6
# 93 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_MARSH_BADGE_GUARD
# 94 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_MARSH_BADGE
# 95 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 96 "data/maps/Route23/scripts.pory"
	end
# 97 "data/maps/Route23/scripts.pory"

# 98 "data/maps/Route23/scripts.pory"
Route23_EventScript_VolcanoBadgeGuardTrigger::
# 99 "data/maps/Route23/scripts.pory"
	lockall
# 100 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 7
# 101 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_VOLCANO_BADGE_GUARD
# 102 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_VOLCANO_BADGE
# 103 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 104 "data/maps/Route23/scripts.pory"
	end
# 105 "data/maps/Route23/scripts.pory"

# 106 "data/maps/Route23/scripts.pory"
Route23_EventScript_EarthBadgeGuardTrigger::
# 107 "data/maps/Route23/scripts.pory"
	lockall
# 108 "data/maps/Route23/scripts.pory"
	setvar VAR_TEMP_1, 8
# 109 "data/maps/Route23/scripts.pory"
	setvar VAR_0x8009, LOCALID_EARTH_BADGE_GUARD
# 110 "data/maps/Route23/scripts.pory"
	bufferstdstring STR_VAR_1, STDSTRING_EARTH_BADGE
# 111 "data/maps/Route23/scripts.pory"
	goto Route23_EventScript_BadgeGuardTrigger
# 112 "data/maps/Route23/scripts.pory"
	end
# 113 "data/maps/Route23/scripts.pory"

# 114 "data/maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 115 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 116 "data/maps/Route23/scripts.pory"
	end

Route23_MapScripts::
# 121 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 131 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route23_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 123 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 124 "data/maps/Route23/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 125 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 126 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 127 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 128 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
	end

Route23_MapScripts_MAP_SCRIPT_ON_LOAD:
# 133 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 137 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 141 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 145 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 149 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 153 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 157 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_7
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 135 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_2, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 139 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_3, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 143 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_4, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 147 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_5, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 151 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_6, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 155 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
	return

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 159 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
	return

