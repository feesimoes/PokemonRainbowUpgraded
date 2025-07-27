# 1 "data/maps/SSAnne_Exterior/scripts.pory"

# 2 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_MapScripts::
# 3 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_Exterior_OnTransition
# 4 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SSAnne_Exterior_OnFrame
# 5 "data/maps/SSAnne_Exterior/scripts.pory"
	.byte 0
# 6 "data/maps/SSAnne_Exterior/scripts.pory"

# 7 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_OnTransition::
# 8 "data/maps/SSAnne_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_SSANNE_EXTERIOR
# 9 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 10 "data/maps/SSAnne_Exterior/scripts.pory"

# 11 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_OnFrame::
# 12 "data/maps/SSAnne_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_VERMILION_CITY, 1, SSAnne_Exterior_ExitSSAnne
# 13 "data/maps/SSAnne_Exterior/scripts.pory"
	.2byte 0
# 14 "data/maps/SSAnne_Exterior/scripts.pory"

# 15 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_ExitSSAnne::
# 16 "data/maps/SSAnne_Exterior/scripts.pory"
	lockall
# 17 "data/maps/SSAnne_Exterior/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 18 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_le VAR_0x8005, 6, SSAnne_Exterior_WalkDown
# 19 "data/maps/SSAnne_Exterior/scripts.pory"
	call_if_ge VAR_0x8005, 7, SSAnne_Exterior_WalkInPlaceDown
# 20 "data/maps/SSAnne_Exterior/scripts.pory"
	fadenewbgm MUS_SURF
# 21 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 50
# 22 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSSAnneDepartureCutscene
# 23 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 24 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_SS_ANNE
# 25 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_Exit
# 26 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 27 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_VERMILION_CITY, 2
# 28 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_VERMILION_CITY_TICKET_CHECK_TRIGGER, 0
# 29 "data/maps/SSAnne_Exterior/scripts.pory"
	warp MAP_VERMILION_CITY, 23, 34
# 30 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 31 "data/maps/SSAnne_Exterior/scripts.pory"
	releaseall
# 32 "data/maps/SSAnne_Exterior/scripts.pory"
	end
# 33 "data/maps/SSAnne_Exterior/scripts.pory"

# 34 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_WalkDown::
# 35 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, SSAnne_Exterior_Movement_WalkDown
# 36 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 37 "data/maps/SSAnne_Exterior/scripts.pory"
	return
# 38 "data/maps/SSAnne_Exterior/scripts.pory"

# 39 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_WalkInPlaceDown::
# 40 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 41 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement 0
# 42 "data/maps/SSAnne_Exterior/scripts.pory"
	return
# 43 "data/maps/SSAnne_Exterior/scripts.pory"

# 44 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_Exit::
# 45 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 46 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 47 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 48 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 49 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 50 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 51 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 52 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 53 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 54 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end
# 55 "data/maps/SSAnne_Exterior/scripts.pory"

# 56 "data/maps/SSAnne_Exterior/scripts.pory"
SSAnne_Exterior_Movement_WalkDown::
# 57 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 58 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 59 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 60 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 61 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 62 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 63 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 64 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 65 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_down
# 66 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

VermilionHarbor_EventScript_SinnohFerry::
# 70 "data/maps/SSAnne_Exterior/scripts.pory"
	goto_if_set FLAG_SINNOH_PASS_OBTAINED, VermilionHarbor_EventScript_SinnohFerry_1
# 98 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 99 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 100 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_3
# 101 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 102 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 103 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_SinnohFerry_1:
# 72 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 73 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 74 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_0, MSGBOX_YESNO
# 75 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 76 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VermilionHarbor_EventScript_SinnohFerry_4
# 84 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_2
# 85 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 86 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CANALAVE_CITY
# 87 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 88 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 20
# 89 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 90 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSeagallopFerryScene
# 91 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 92 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_SinnohFerry_4:
# 78 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_1
# 79 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end


VermilionHarbor_EventScript_SinnohFerry_Text_0:
# 74 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Welcome, {PLAYER}!\n"
	.string "Packed up and ready to go?\p"
	.string "C'mon! Let's set sail!\n"
	.string "$"

VermilionHarbor_EventScript_SinnohFerry_Text_1:
# 78 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Alright, I'll be here...\n"
	.string "Come back when you're ready!$"

VermilionHarbor_EventScript_SinnohFerry_Text_2:
# 84 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "SINNOH awaits!\n"
	.string "C'mon, let's go!$"

VermilionHarbor_EventScript_SinnohFerry_Text_3:
# 100 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Sorry, kiddo!\n"
	.string "You'll need approval from the V.I.P.!\p"
	.string "Who?\n"
	.string "...Well, she's busy!\p"
	.string "I heard she's interviewing {RIVAL}\n"
	.string "in SAFFRON CITY'S SILPH CO.!\p"
	.string "Although, um...\n"
	.string "She should have been back by now...$"
