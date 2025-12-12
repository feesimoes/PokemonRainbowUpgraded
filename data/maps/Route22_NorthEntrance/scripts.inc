Route22_NorthEntrance_MapScripts::
# 3 "data/maps/Route22_NorthEntrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route22_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route22_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route22_NorthEntrance/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 0
	goto_if_eq Route22_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

Route22_NorthEntrance_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route22_NorthEntrance/scripts.pory"
	setobjectxyperm LOCALID_BOULDERBADGE_GUARD, 7, 2
	return


Route22_NorthEntrance_EventScript_BoulderBadgeGuard::
# 14 "data/maps/Route22_NorthEntrance/scripts.pory"
	lock
# 15 "data/maps/Route22_NorthEntrance/scripts.pory"
	faceplayer
# 16 "data/maps/Route22_NorthEntrance/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 1
	goto_if_ge Route22_NorthEntrance_EventScript_BoulderBadgeGuard_2
# 22 "data/maps/Route22_NorthEntrance/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, Route22_NorthEntrance_EventScript_BoulderBadgeGuard_5
# 36 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_3
# 37 "data/maps/Route22_NorthEntrance/scripts.pory"
	playse SE_BOO
Route22_NorthEntrance_EventScript_BoulderBadgeGuard_1:
# 40 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitmessage
# 41 "data/maps/Route22_NorthEntrance/scripts.pory"
	closemessage
# 42 "data/maps/Route22_NorthEntrance/scripts.pory"
	release
	end

Route22_NorthEntrance_EventScript_BoulderBadgeGuard_2:
# 18 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_0
	goto Route22_NorthEntrance_EventScript_BoulderBadgeGuard_1

Route22_NorthEntrance_EventScript_BoulderBadgeGuard_5:
# 24 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_1
# 25 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_2
# 26 "data/maps/Route22_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 1
# 27 "data/maps/Route22_NorthEntrance/scripts.pory"
	applymovement LOCALID_BOULDERBADGE_GUARD, Route22_BoulderBadgeGuard_Walk_Right
# 28 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitmovement
# 29 "data/maps/Route22_NorthEntrance/scripts.pory"
	applymovement LOCALID_BOULDERBADGE_GUARD, Route22_BoulderBadgeGuard_Face_Down
# 30 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitmovement
# 31 "data/maps/Route22_NorthEntrance/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 32 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitfanfare
	goto Route22_NorthEntrance_EventScript_BoulderBadgeGuard_1


# 46 "data/maps/Route22_NorthEntrance/scripts.pory"
Route22_BoulderBadgeGuard_Face_Down:
# 48 "data/maps/Route22_NorthEntrance/scripts.pory"
	face_down
# 49 "data/maps/Route22_NorthEntrance/scripts.pory"
	step_end

# 52 "data/maps/Route22_NorthEntrance/scripts.pory"
Route22_BoulderBadgeGuard_Walk_Left:
# 54 "data/maps/Route22_NorthEntrance/scripts.pory"
	walk_left
# 55 "data/maps/Route22_NorthEntrance/scripts.pory"
	step_end

# 58 "data/maps/Route22_NorthEntrance/scripts.pory"
Route22_BoulderBadgeGuard_Walk_Right:
# 60 "data/maps/Route22_NorthEntrance/scripts.pory"
	walk_right
# 61 "data/maps/Route22_NorthEntrance/scripts.pory"
	step_end

Route22_NorthEntrance_Reset_Guard::
# 66 "data/maps/Route22_NorthEntrance/scripts.pory"
	lock
# 67 "data/maps/Route22_NorthEntrance/scripts.pory"
	faceplayer
# 68 "data/maps/Route22_NorthEntrance/scripts.pory"
	compare VAR_MAP_SCENE_ROUTE23, 0
	goto_if_ne Route22_NorthEntrance_Reset_Guard_2
# 89 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_Reset_Guard_Text_3
# 90 "data/maps/Route22_NorthEntrance/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, Route22_NorthEntrance_Reset_Guard_8
Route22_NorthEntrance_Reset_Guard_1:
# 95 "data/maps/Route22_NorthEntrance/scripts.pory"
	closemessage
# 96 "data/maps/Route22_NorthEntrance/scripts.pory"
	release
	end

Route22_NorthEntrance_Reset_Guard_2:
# 70 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_Reset_Guard_Text_0, MSGBOX_YESNO
# 71 "data/maps/Route22_NorthEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route22_NorthEntrance_Reset_Guard_5
# 84 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_Reset_Guard_Text_2
	goto Route22_NorthEntrance_Reset_Guard_1

Route22_NorthEntrance_Reset_Guard_5:
# 73 "data/maps/Route22_NorthEntrance/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE23, 0
# 74 "data/maps/Route22_NorthEntrance/scripts.pory"
	applymovement LOCALID_BOULDERBADGE_GUARD, Route22_BoulderBadgeGuard_Walk_Left
# 75 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitmovement
# 76 "data/maps/Route22_NorthEntrance/scripts.pory"
	applymovement LOCALID_BOULDERBADGE_GUARD, Route22_BoulderBadgeGuard_Face_Down
# 77 "data/maps/Route22_NorthEntrance/scripts.pory"
	waitmovement
# 78 "data/maps/Route22_NorthEntrance/scripts.pory"
	setobjectxyperm LOCALID_BOULDERBADGE_GUARD, 7, 2
# 79 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_Reset_Guard_Text_1
	goto Route22_NorthEntrance_Reset_Guard_1

Route22_NorthEntrance_Reset_Guard_8:
# 92 "data/maps/Route22_NorthEntrance/scripts.pory"
	msgbox Route22_NorthEntrance_Reset_Guard_Text_4
	goto Route22_NorthEntrance_Reset_Guard_1


Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_0:
# 18 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Good luck out there, {PLAYER}!\n"
	.string "BROCK'S friends are my friends.$"

Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_1:
# 24 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the BOULDER BADGE.$"

Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_2:
# 25 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Oh! Okay, then. That is the\n"
	.string "BOULDER BADGE. Go right ahead.$"

Route22_NorthEntrance_EventScript_BoulderBadgeGuard_Text_3:
# 36 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "You can pass here only if you have\n"
	.string "the BOULDER BADGE...\p"
	.string "Sorry, rules are rules!\n"
	.string "I can't let you through.$"

Route22_NorthEntrance_Reset_Guard_Text_0:
# 70 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Good day.\n"
	.string "I see you've made progress.\p"
	.string "Would you like me to reset\n"
	.string "progress through these gates?$"

Route22_NorthEntrance_Reset_Guard_Text_1:
# 79 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Very well, your progress has been\n"
	.string "reset. Have a good one!$"

Route22_NorthEntrance_Reset_Guard_Text_2:
# 84 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Ah, don't worry.\n"
	.string "I won't take any BADGES.\p"
	.string "See, some TRAINERS may enjoy\n"
	.string "reliving the experience of ROUTE 23.$"

Route22_NorthEntrance_Reset_Guard_Text_3:
# 89 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "Good day.\n"
	.string "How's it going?$"

Route22_NorthEntrance_Reset_Guard_Text_4:
# 92 "data/maps/Route22_NorthEntrance/scripts.pory"
	.string "You won't get anywhere ahead\n"
	.string "on ROUTE 23 with no badges...$"
