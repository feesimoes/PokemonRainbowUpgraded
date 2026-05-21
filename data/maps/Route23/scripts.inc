# 1 "data/maps/Route23/scripts.pory"

# 2 "data/maps/Route23/scripts.pory"
Route23_EventScript_VictoryRoadGateSign::
# 3 "data/maps/Route23/scripts.pory"
	msgbox Route23_Text_VictoryRoadGateSign, MSGBOX_SIGN
# 4 "data/maps/Route23/scripts.pory"
	end

Route23_EventScript_CascadeBadgeGuard::
# 9 "data/maps/Route23/scripts.pory"
	lock
# 10 "data/maps/Route23/scripts.pory"
	faceplayer
# 11 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 2
	goto_if_ge Route23_EventScript_CascadeBadgeGuard_2
# 17 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, Route23_EventScript_CascadeBadgeGuard_5
# 33 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_CascadeBadgeGuard_Text_3
# 34 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_CascadeBadgeGuard_1:
# 37 "data/maps/Route23/scripts.pory"
	waitmessage
# 38 "data/maps/Route23/scripts.pory"
	closemessage
# 39 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_CascadeBadgeGuard_2:
# 13 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_CascadeBadgeGuard_Text_0
	goto Route23_EventScript_CascadeBadgeGuard_1

Route23_EventScript_CascadeBadgeGuard_5:
# 19 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_CascadeBadgeGuard_Text_1
# 20 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_CascadeBadgeGuard_Text_2
# 21 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 2
# 22 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_CASCADE_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 23 "data/maps/Route23/scripts.pory"
	waitmovement
# 24 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 25 "data/maps/Route23/scripts.pory"
	waitfanfare
# 26 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_2, TRUE
# 27 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 28 "data/maps/Route23/scripts.pory"
	waitmessage
# 29 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_2
	goto Route23_EventScript_CascadeBadgeGuard_1


Route23_EventScript_ThunderBadgeGuard::
# 46 "data/maps/Route23/scripts.pory"
	lock
# 47 "data/maps/Route23/scripts.pory"
	faceplayer
# 48 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 3
	goto_if_ge Route23_EventScript_ThunderBadgeGuard_2
# 54 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE03_GET, Route23_EventScript_ThunderBadgeGuard_5
# 70 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_ThunderBadgeGuard_Text_3
# 71 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_ThunderBadgeGuard_1:
# 74 "data/maps/Route23/scripts.pory"
	waitmessage
# 75 "data/maps/Route23/scripts.pory"
	closemessage
# 76 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_ThunderBadgeGuard_2:
# 50 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_ThunderBadgeGuard_Text_0
	goto Route23_EventScript_ThunderBadgeGuard_1

Route23_EventScript_ThunderBadgeGuard_5:
# 56 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_ThunderBadgeGuard_Text_1
# 57 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_ThunderBadgeGuard_Text_2
# 58 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 3
# 59 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_THUNDER_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 60 "data/maps/Route23/scripts.pory"
	waitmovement
# 61 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 62 "data/maps/Route23/scripts.pory"
	waitfanfare
# 63 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_3, TRUE
# 64 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 65 "data/maps/Route23/scripts.pory"
	waitmessage
# 66 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_3
	goto Route23_EventScript_ThunderBadgeGuard_1


Route23_EventScript_RainbowBadgeGuard::
# 82 "data/maps/Route23/scripts.pory"
	lock
# 83 "data/maps/Route23/scripts.pory"
	faceplayer
# 84 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 4
	goto_if_ge Route23_EventScript_RainbowBadgeGuard_2
# 90 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, Route23_EventScript_RainbowBadgeGuard_5
# 106 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_RainbowBadgeGuard_Text_3
# 107 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_RainbowBadgeGuard_1:
# 110 "data/maps/Route23/scripts.pory"
	waitmessage
# 111 "data/maps/Route23/scripts.pory"
	closemessage
# 112 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_RainbowBadgeGuard_2:
# 86 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_RainbowBadgeGuard_Text_0
	goto Route23_EventScript_RainbowBadgeGuard_1

Route23_EventScript_RainbowBadgeGuard_5:
# 92 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_RainbowBadgeGuard_Text_1
# 93 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_RainbowBadgeGuard_Text_2
# 94 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 4
# 95 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_RAINBOW_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 96 "data/maps/Route23/scripts.pory"
	waitmovement
# 97 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 98 "data/maps/Route23/scripts.pory"
	waitfanfare
# 99 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_4, TRUE
# 100 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 101 "data/maps/Route23/scripts.pory"
	waitmessage
# 102 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_4
	goto Route23_EventScript_RainbowBadgeGuard_1


Route23_EventScript_SoulBadgeGuard::
# 118 "data/maps/Route23/scripts.pory"
	lock
# 119 "data/maps/Route23/scripts.pory"
	faceplayer
# 120 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 5
	goto_if_ge Route23_EventScript_SoulBadgeGuard_2
# 126 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, Route23_EventScript_SoulBadgeGuard_5
# 142 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_SoulBadgeGuard_Text_3
# 143 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_SoulBadgeGuard_1:
# 146 "data/maps/Route23/scripts.pory"
	waitmessage
# 147 "data/maps/Route23/scripts.pory"
	closemessage
# 148 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_SoulBadgeGuard_2:
# 122 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_SoulBadgeGuard_Text_0
	goto Route23_EventScript_SoulBadgeGuard_1

Route23_EventScript_SoulBadgeGuard_5:
# 128 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_SoulBadgeGuard_Text_1
# 129 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_SoulBadgeGuard_Text_2
# 130 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 5
# 131 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_SOUL_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 132 "data/maps/Route23/scripts.pory"
	waitmovement
# 133 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 134 "data/maps/Route23/scripts.pory"
	waitfanfare
# 135 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_5, TRUE
# 136 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 137 "data/maps/Route23/scripts.pory"
	waitmessage
# 138 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_5
	goto Route23_EventScript_SoulBadgeGuard_1


Route23_EventScript_MarshBadgeGuard::
# 154 "data/maps/Route23/scripts.pory"
	lock
# 155 "data/maps/Route23/scripts.pory"
	faceplayer
# 156 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 6
	goto_if_ge Route23_EventScript_MarshBadgeGuard_2
# 162 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, Route23_EventScript_MarshBadgeGuard_5
# 178 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_MarshBadgeGuard_Text_3
# 179 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_MarshBadgeGuard_1:
# 182 "data/maps/Route23/scripts.pory"
	waitmessage
# 183 "data/maps/Route23/scripts.pory"
	closemessage
# 184 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_MarshBadgeGuard_2:
# 158 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_MarshBadgeGuard_Text_0
	goto Route23_EventScript_MarshBadgeGuard_1

Route23_EventScript_MarshBadgeGuard_5:
# 164 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_MarshBadgeGuard_Text_1
# 165 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_MarshBadgeGuard_Text_2
# 166 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 6
# 167 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_MARSH_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 168 "data/maps/Route23/scripts.pory"
	waitmovement
# 169 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 170 "data/maps/Route23/scripts.pory"
	waitfanfare
# 171 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_6, TRUE
# 172 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 173 "data/maps/Route23/scripts.pory"
	waitmessage
# 174 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_6
	goto Route23_EventScript_MarshBadgeGuard_1


Route23_EventScript_VolcanoBadgeGuard::
# 190 "data/maps/Route23/scripts.pory"
	lock
# 191 "data/maps/Route23/scripts.pory"
	faceplayer
# 192 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 7
	goto_if_ge Route23_EventScript_VolcanoBadgeGuard_2
# 198 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, Route23_EventScript_VolcanoBadgeGuard_5
# 214 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_VolcanoBadgeGuard_Text_3
# 215 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_VolcanoBadgeGuard_1:
# 218 "data/maps/Route23/scripts.pory"
	waitmessage
# 219 "data/maps/Route23/scripts.pory"
	closemessage
# 220 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_VolcanoBadgeGuard_2:
# 194 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_VolcanoBadgeGuard_Text_0
	goto Route23_EventScript_VolcanoBadgeGuard_1

Route23_EventScript_VolcanoBadgeGuard_5:
# 200 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_VolcanoBadgeGuard_Text_1
# 201 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_VolcanoBadgeGuard_Text_2
# 202 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 7
# 203 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_VOLCANO_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 204 "data/maps/Route23/scripts.pory"
	waitmovement
# 205 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 206 "data/maps/Route23/scripts.pory"
	waitfanfare
# 207 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
# 208 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 209 "data/maps/Route23/scripts.pory"
	waitmessage
# 210 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_7
	goto Route23_EventScript_VolcanoBadgeGuard_1


Route23_EventScript_EarthBadgeGuard::
# 226 "data/maps/Route23/scripts.pory"
	lock
# 227 "data/maps/Route23/scripts.pory"
	faceplayer
# 228 "data/maps/Route23/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 8
	goto_if_ge Route23_EventScript_EarthBadgeGuard_2
# 234 "data/maps/Route23/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, Route23_EventScript_EarthBadgeGuard_5
# 250 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_1
# 251 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_4
# 252 "data/maps/Route23/scripts.pory"
	playse SE_BOO
Route23_EventScript_EarthBadgeGuard_1:
# 255 "data/maps/Route23/scripts.pory"
	waitmessage
# 256 "data/maps/Route23/scripts.pory"
	closemessage
# 257 "data/maps/Route23/scripts.pory"
	release
	end

Route23_EventScript_EarthBadgeGuard_2:
# 230 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_0
	goto Route23_EventScript_EarthBadgeGuard_1

Route23_EventScript_EarthBadgeGuard_5:
# 236 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_1
# 237 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_2
# 238 "data/maps/Route23/scripts.pory"
	msgbox Route23_EventScript_EarthBadgeGuard_Text_3
# 239 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 8
# 240 "data/maps/Route23/scripts.pory"
	applymovement LOCALID_EARTH_BADGE_GUARD, Route23_BadgeGateGuard_Face_Down
# 241 "data/maps/Route23/scripts.pory"
	waitmovement
# 242 "data/maps/Route23/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 243 "data/maps/Route23/scripts.pory"
	waitfanfare
# 244 "data/maps/Route23/scripts.pory"
	playse SE_UNLOCK
# 245 "data/maps/Route23/scripts.pory"
	waitmessage
# 246 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_8
	goto Route23_EventScript_EarthBadgeGuard_1


# 261 "data/maps/Route23/scripts.pory"
Route23_BadgeGateGuard_Face_Down:
# 263 "data/maps/Route23/scripts.pory"
	face_down
# 264 "data/maps/Route23/scripts.pory"
	step_end

Route23_MapScripts::
# 269 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION
# 305 "data/maps/Route23/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route23_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 271 "data/maps/Route23/scripts.pory"
	clearflag FLAG_HIDE_VICTORY_ROAD_3F_BOULDER
# 272 "data/maps/Route23/scripts.pory"
	setflag FLAG_HIDE_VICTORY_ROAD_2F_BOULDER
# 273 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_1F, 0
# 274 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER1, 0
# 275 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_2F_BOULDER2, 0
# 276 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_VICTORY_ROAD_3F, 0
# 277 "data/maps/Route23/scripts.pory"
	switch VAR_MAP_SCENE_ROUTE23
# 279 "data/maps/Route23/scripts.pory"
	case 2, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_3
# 282 "data/maps/Route23/scripts.pory"
	case 3, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_4
# 285 "data/maps/Route23/scripts.pory"
	case 4, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_5
# 288 "data/maps/Route23/scripts.pory"
	case 5, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_6
# 291 "data/maps/Route23/scripts.pory"
	case 6, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_7
# 294 "data/maps/Route23/scripts.pory"
	case 7, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_8
# 297 "data/maps/Route23/scripts.pory"
	case 8, Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_9
# 301 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_1, TRUE
Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	end

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_3:
# 280 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_2, TRUE
# 281 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_2
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_4:
# 283 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_3, TRUE
# 284 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_3
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_5:
# 286 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_4, TRUE
# 287 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_4
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_6:
# 289 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_5, TRUE
# 290 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_5
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_7:
# 292 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_6, TRUE
# 293 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_6
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_8:
# 295 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
# 296 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_7
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_9:
# 298 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
# 299 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_8
	goto Route23_MapScripts_MAP_SCRIPT_ON_TRANSITION_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD:
# 307 "data/maps/Route23/scripts.pory"
	fadeoutbgm 0
# 308 "data/maps/Route23/scripts.pory"
	switch VAR_MAP_SCENE_ROUTE23
# 310 "data/maps/Route23/scripts.pory"
	case 2, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_3
# 313 "data/maps/Route23/scripts.pory"
	case 3, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 316 "data/maps/Route23/scripts.pory"
	case 4, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_5
# 319 "data/maps/Route23/scripts.pory"
	case 5, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_6
# 322 "data/maps/Route23/scripts.pory"
	case 6, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_7
# 325 "data/maps/Route23/scripts.pory"
	case 7, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_8
# 328 "data/maps/Route23/scripts.pory"
	case 8, Route23_MapScripts_MAP_SCRIPT_ON_LOAD_9
# 332 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_1, TRUE
Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 334 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
	end

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 311 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_2, TRUE
# 312 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_2
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 314 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_3, TRUE
# 315 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_3
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_5:
# 317 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_4, TRUE
# 318 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_4
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 320 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_5, TRUE
# 321 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_5
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_7:
# 323 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_6, TRUE
# 324 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_6
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_8:
# 326 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
# 327 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_7
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1

Route23_MapScripts_MAP_SCRIPT_ON_LOAD_9:
# 329 "data/maps/Route23/scripts.pory"
	playbgm MUS_ROUTE_23_BADGE_7, TRUE
# 330 "data/maps/Route23/scripts.pory"
	call Route23_EventScript_Free_Gate_8
	goto Route23_MapScripts_MAP_SCRIPT_ON_LOAD_1


Route23_EventScript_Free_Gate_2::
# 341 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_2
# 342 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 343 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 344 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 345 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 2
# 346 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 347 "data/maps/Route23/scripts.pory"
	closemessage
# 348 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_3::
# 354 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_3
# 355 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 356 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 357 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 358 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 359 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 360 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 361 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 3
# 362 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 363 "data/maps/Route23/scripts.pory"
	closemessage
# 364 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_4::
# 370 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_4
# 371 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 372 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 373 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 374 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 375 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 376 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 377 "data/maps/Route23/scripts.pory"
	setmetatile 12, 100, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 378 "data/maps/Route23/scripts.pory"
	setmetatile 13, 100, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 379 "data/maps/Route23/scripts.pory"
	setmetatile 14, 100, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 380 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 4
# 381 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 382 "data/maps/Route23/scripts.pory"
	closemessage
# 383 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_5::
# 389 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_5
# 390 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 391 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 392 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 393 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 394 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 395 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 396 "data/maps/Route23/scripts.pory"
	setmetatile 12, 100, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 397 "data/maps/Route23/scripts.pory"
	setmetatile 13, 100, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 398 "data/maps/Route23/scripts.pory"
	setmetatile 14, 100, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 399 "data/maps/Route23/scripts.pory"
	setmetatile 13, 89, METATILE_General_Plain_Mowed, 0
# 400 "data/maps/Route23/scripts.pory"
	setmetatile 14, 89, METATILE_General_Plain_Mowed, 0
# 401 "data/maps/Route23/scripts.pory"
	setmetatile 15, 89, METATILE_General_Plain_Mowed, 0
# 402 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 5
# 403 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 404 "data/maps/Route23/scripts.pory"
	closemessage
# 405 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_6::
# 411 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_6
# 412 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 413 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 414 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 415 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 416 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 417 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 418 "data/maps/Route23/scripts.pory"
	setmetatile 12, 100, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 419 "data/maps/Route23/scripts.pory"
	setmetatile 13, 100, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 420 "data/maps/Route23/scripts.pory"
	setmetatile 14, 100, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 421 "data/maps/Route23/scripts.pory"
	setmetatile 13, 89, METATILE_General_Plain_Mowed, 0
# 422 "data/maps/Route23/scripts.pory"
	setmetatile 14, 89, METATILE_General_Plain_Mowed, 0
# 423 "data/maps/Route23/scripts.pory"
	setmetatile 15, 89, METATILE_General_Plain_Mowed, 0
# 424 "data/maps/Route23/scripts.pory"
	setmetatile 7, 71, METATILE_General_Plain_Mowed, 0
# 425 "data/maps/Route23/scripts.pory"
	setmetatile 8, 71, METATILE_General_Plain_Mowed, 0
# 426 "data/maps/Route23/scripts.pory"
	setmetatile 9, 71, METATILE_General_Plain_Mowed, 0
# 427 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 6
# 428 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 429 "data/maps/Route23/scripts.pory"
	closemessage
# 430 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_7::
# 436 "data/maps/Route23/scripts.pory"
	fadenewbgm MUS_ROUTE_23_BADGE_7
# 437 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 438 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 439 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 440 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 441 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 442 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 443 "data/maps/Route23/scripts.pory"
	setmetatile 12, 100, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 444 "data/maps/Route23/scripts.pory"
	setmetatile 13, 100, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 445 "data/maps/Route23/scripts.pory"
	setmetatile 14, 100, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 446 "data/maps/Route23/scripts.pory"
	setmetatile 13, 89, METATILE_General_Plain_Mowed, 0
# 447 "data/maps/Route23/scripts.pory"
	setmetatile 14, 89, METATILE_General_Plain_Mowed, 0
# 448 "data/maps/Route23/scripts.pory"
	setmetatile 15, 89, METATILE_General_Plain_Mowed, 0
# 449 "data/maps/Route23/scripts.pory"
	setmetatile 7, 71, METATILE_General_Plain_Mowed, 0
# 450 "data/maps/Route23/scripts.pory"
	setmetatile 8, 71, METATILE_General_Plain_Mowed, 0
# 451 "data/maps/Route23/scripts.pory"
	setmetatile 9, 71, METATILE_General_Plain_Mowed, 0
# 452 "data/maps/Route23/scripts.pory"
	setmetatile 12, 38, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 453 "data/maps/Route23/scripts.pory"
	setmetatile 13, 38, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 454 "data/maps/Route23/scripts.pory"
	setmetatile 14, 38, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 455 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 7
# 456 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 457 "data/maps/Route23/scripts.pory"
	closemessage
# 458 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_Free_Gate_8::
# 464 "data/maps/Route23/scripts.pory"
	setmetatile 13, 126, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 465 "data/maps/Route23/scripts.pory"
	setmetatile 14, 126, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 466 "data/maps/Route23/scripts.pory"
	setmetatile 15, 126, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 467 "data/maps/Route23/scripts.pory"
	setmetatile 6, 117, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 468 "data/maps/Route23/scripts.pory"
	setmetatile 7, 117, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 469 "data/maps/Route23/scripts.pory"
	setmetatile 8, 117, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 470 "data/maps/Route23/scripts.pory"
	setmetatile 12, 100, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 471 "data/maps/Route23/scripts.pory"
	setmetatile 13, 100, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 472 "data/maps/Route23/scripts.pory"
	setmetatile 14, 100, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 473 "data/maps/Route23/scripts.pory"
	setmetatile 13, 89, METATILE_General_Plain_Mowed, 0
# 474 "data/maps/Route23/scripts.pory"
	setmetatile 14, 89, METATILE_General_Plain_Mowed, 0
# 475 "data/maps/Route23/scripts.pory"
	setmetatile 15, 89, METATILE_General_Plain_Mowed, 0
# 476 "data/maps/Route23/scripts.pory"
	setmetatile 7, 71, METATILE_General_Plain_Mowed, 0
# 477 "data/maps/Route23/scripts.pory"
	setmetatile 8, 71, METATILE_General_Plain_Mowed, 0
# 478 "data/maps/Route23/scripts.pory"
	setmetatile 9, 71, METATILE_General_Plain_Mowed, 0
# 479 "data/maps/Route23/scripts.pory"
	setmetatile 12, 38, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 480 "data/maps/Route23/scripts.pory"
	setmetatile 13, 38, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 481 "data/maps/Route23/scripts.pory"
	setmetatile 14, 38, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 482 "data/maps/Route23/scripts.pory"
	setmetatile 4, 12, METATILE_IndigoPlateau_TiledCityFloor_Left, 0
# 483 "data/maps/Route23/scripts.pory"
	setmetatile 5, 12, METATILE_IndigoPlateau_TiledCityFloor_Center, 0
# 484 "data/maps/Route23/scripts.pory"
	setmetatile 6, 12, METATILE_IndigoPlateau_TiledCityFloor_Right, 0
# 485 "data/maps/Route23/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 8
# 486 "data/maps/Route23/scripts.pory"
	special DrawWholeMapView
# 487 "data/maps/Route23/scripts.pory"
	closemessage
# 488 "data/maps/Route23/scripts.pory"
	releaseall
	end


Route23_EventScript_CascadeBadgeGuard_Text_0:
# 13 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "MISTY and BROCK, huh?\p"
	.string "Opposites attract, so they say!$"

Route23_EventScript_CascadeBadgeGuard_Text_1:
# 19 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the CASCADE BADGE.$"

Route23_EventScript_CascadeBadgeGuard_Text_2:
# 20 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "CASCADE BADGE. Go right ahead!$"

Route23_EventScript_CascadeBadgeGuard_Text_3:
# 33 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the CASCADE BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_ThunderBadgeGuard_Text_0:
# 50 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "LT. SURGE mentioned war, huh?\p"
	.string "I wonder what it was...$"

Route23_EventScript_ThunderBadgeGuard_Text_1:
# 56 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the THUNDER BADGE.$"

Route23_EventScript_ThunderBadgeGuard_Text_2:
# 57 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "THUNDER BADGE. Go right ahead!$"

Route23_EventScript_ThunderBadgeGuard_Text_3:
# 70 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the THUNDER BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_RainbowBadgeGuard_Text_0:
# 86 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "ERIKA sure likes dozing off!$"

Route23_EventScript_RainbowBadgeGuard_Text_1:
# 92 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the RAINBOW BADGE.$"

Route23_EventScript_RainbowBadgeGuard_Text_2:
# 93 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "RAINBOW BADGE. Go right ahead!$"

Route23_EventScript_RainbowBadgeGuard_Text_3:
# 106 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the RAINBOW BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_SoulBadgeGuard_Text_0:
# 122 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "KOGA'S stealth is impressive, hm?\p"
	.string "I have no doubts on his\n"
	.string "daughter, JANINE, either!$"

Route23_EventScript_SoulBadgeGuard_Text_1:
# 128 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the SOUL BADGE.$"

Route23_EventScript_SoulBadgeGuard_Text_2:
# 129 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "SOUL BADGE. Go right ahead!$"

Route23_EventScript_SoulBadgeGuard_Text_3:
# 142 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the SOUL BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_MarshBadgeGuard_Text_0:
# 158 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "SABRINA is quite the psychic, eh?$"

Route23_EventScript_MarshBadgeGuard_Text_1:
# 164 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the MARSH BADGE.$"

Route23_EventScript_MarshBadgeGuard_Text_2:
# 165 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "MARSH BADGE. Go right ahead!$"

Route23_EventScript_MarshBadgeGuard_Text_3:
# 178 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the MARSH BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_VolcanoBadgeGuard_Text_0:
# 194 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "BLAINE is quite a silly man...\p"
	.string "Eh, but I've no doubt his\n"
	.string "fiery spirit will go far!$"

Route23_EventScript_VolcanoBadgeGuard_Text_1:
# 200 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the VOLCANO BADGE.$"

Route23_EventScript_VolcanoBadgeGuard_Text_2:
# 201 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "VOLCANO BADGE. Go right ahead!$"

Route23_EventScript_VolcanoBadgeGuard_Text_3:
# 214 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the VOLCANO BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route23_EventScript_EarthBadgeGuard_Text_0:
# 230 "data/maps/Route23/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "Trust in yourself...\p"
	.string "Allow POKéMON to help you\n"
	.string "reach your exceptional goals!$"

Route23_EventScript_EarthBadgeGuard_Text_1:
# 236 "data/maps/Route23/scripts.pory"
	.string "This is it. The final checkpoint...\n"
	.string "You've come far...$"

Route23_EventScript_EarthBadgeGuard_Text_2:
# 237 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the EARTH BADGE.$"

Route23_EventScript_EarthBadgeGuard_Text_3:
# 238 "data/maps/Route23/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "EARTH BADGE. Go right ahead!$"

Route23_EventScript_EarthBadgeGuard_Text_4:
# 251 "data/maps/Route23/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the EARTH BADGE.\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"
