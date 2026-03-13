# 1 "data/maps/RocketHideout_B4F/scripts.pory"

# 2 "data/maps/RocketHideout_B4F/scripts.pory"
.equ NUM_DOOR_GRUNTS_DEFEATED, VAR_TEMP_1
# 3 "data/maps/RocketHideout_B4F/scripts.pory"

# 4 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_MapScripts::
# 5 "data/maps/RocketHideout_B4F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RocketHideout_B4F_OnLoad
# 6 "data/maps/RocketHideout_B4F/scripts.pory"
	.byte 0
# 7 "data/maps/RocketHideout_B4F/scripts.pory"

# 8 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_OnLoad::
# 9 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 10 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 11 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 12 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_ne NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_SetBarrier
# 13 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 14 "data/maps/RocketHideout_B4F/scripts.pory"

# 15 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_CountGruntDefeated::
# 16 "data/maps/RocketHideout_B4F/scripts.pory"
	addvar NUM_DOOR_GRUNTS_DEFEATED, 1
# 17 "data/maps/RocketHideout_B4F/scripts.pory"
	return
# 18 "data/maps/RocketHideout_B4F/scripts.pory"

# 19 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Giovanni::
# 20 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 21 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 22 "data/maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, 0
# 23 "data/maps/RocketHideout_B4F/scripts.pory"
	message RocketHideout_B4F_Text_GiovanniIntro
# 24 "data/maps/RocketHideout_B4F/scripts.pory"
	waitmessage
# 25 "data/maps/RocketHideout_B4F/scripts.pory"
	waitbuttonpress
# 26 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI, RocketHideout_B4F_Text_GiovanniDefeat
# 27 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_GiovanniPostBattle
# 28 "data/maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/RocketHideout_B4F/scripts.pory"
	closemessage
# 30 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_HIDEOUT_GIOVANNI
# 31 "data/maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_SILPH_SCOPE
# 32 "data/maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_SILPH_SCOPE
# 33 "data/maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_HIDE_CELADON_ROCKETS
# 34 "data/maps/RocketHideout_B4F/scripts.pory"
	famechecker FAMECHECKER_GIOVANNI, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 35 "data/maps/RocketHideout_B4F/scripts.pory"
    fadedefaultbgm
# 36 "data/maps/RocketHideout_B4F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 38 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 39 "data/maps/RocketHideout_B4F/scripts.pory"

# 40 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_SilphScope::
# 41 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 42 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 43 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_SILPH_SCOPE
# 44 "data/maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_SILPH_SCOPE
# 45 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 46 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 47 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 48 "data/maps/RocketHideout_B4F/scripts.pory"

# 49 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt1::
# 50 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_18, RocketHideout_B4F_Text_Grunt1Intro, RocketHideout_B4F_Text_Grunt1Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt1
# 51 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 52 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 53 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 54 "data/maps/RocketHideout_B4F/scripts.pory"

# 55 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt1::
# 56 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt1PostBattle
# 57 "data/maps/RocketHideout_B4F/scripts.pory"
	addobject LOCALID_LIFT_KEY
# 58 "data/maps/RocketHideout_B4F/scripts.pory"
	clearflag FLAG_HIDE_LIFT_KEY
# 59 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 60 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 61 "data/maps/RocketHideout_B4F/scripts.pory"

# 62 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_LiftKey::
# 63 "data/maps/RocketHideout_B4F/scripts.pory"
	lock
# 64 "data/maps/RocketHideout_B4F/scripts.pory"
	faceplayer
# 65 "data/maps/RocketHideout_B4F/scripts.pory"
	setflag FLAG_CAN_USE_ROCKET_HIDEOUT_LIFT
# 66 "data/maps/RocketHideout_B4F/scripts.pory"
	removeobject LOCALID_LIFT_KEY
# 67 "data/maps/RocketHideout_B4F/scripts.pory"
	giveitem ITEM_LIFT_KEY
# 68 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 69 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 70 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 71 "data/maps/RocketHideout_B4F/scripts.pory"

# 72 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt2::
# 73 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_Text_Grunt2Intro, RocketHideout_B4F_Text_Grunt2Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt2
# 74 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 75 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 76 "data/maps/RocketHideout_B4F/scripts.pory"

# 77 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt2::
# 78 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 79 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 80 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 81 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 82 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 83 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 84 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 85 "data/maps/RocketHideout_B4F/scripts.pory"

# 86 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_Grunt3::
# 87 "data/maps/RocketHideout_B4F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_Text_Grunt3Intro, RocketHideout_B4F_Text_Grunt3Defeat, RocketHideout_B4F_EventScript_DefeatedGrunt3
# 88 "data/maps/RocketHideout_B4F/scripts.pory"
	msgbox RocketHideout_B4F_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 89 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 90 "data/maps/RocketHideout_B4F/scripts.pory"

# 91 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DefeatedGrunt3::
# 92 "data/maps/RocketHideout_B4F/scripts.pory"
	setvar NUM_DOOR_GRUNTS_DEFEATED, 0
# 93 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_16, RocketHideout_B4F_EventScript_CountGruntDefeated
# 94 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_defeated TRAINER_TEAM_ROCKET_GRUNT_17, RocketHideout_B4F_EventScript_CountGruntDefeated
# 95 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_RemoveBarrier
# 96 "data/maps/RocketHideout_B4F/scripts.pory"
	call_if_eq NUM_DOOR_GRUNTS_DEFEATED, 2, RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval
# 97 "data/maps/RocketHideout_B4F/scripts.pory"
	release
# 98 "data/maps/RocketHideout_B4F/scripts.pory"
	end
# 99 "data/maps/RocketHideout_B4F/scripts.pory"

# 100 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_DrawMapForBarrierRemoval::
# 101 "data/maps/RocketHideout_B4F/scripts.pory"
	playse SE_UNLOCK
# 102 "data/maps/RocketHideout_B4F/scripts.pory"
	special DrawWholeMapView
# 103 "data/maps/RocketHideout_B4F/scripts.pory"
	waitse
# 104 "data/maps/RocketHideout_B4F/scripts.pory"
	return
# 105 "data/maps/RocketHideout_B4F/scripts.pory"

# 106 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_SetBarrier::
# 107 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutBarrier_TopLeft_Floor, 1
# 108 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutBarrier_TopRight_Floor, 1
# 109 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutBarrier_BottomLeft, 1
# 110 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutBarrier_BottomRight, 1
# 111 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 112 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 113 "data/maps/RocketHideout_B4F/scripts.pory"
	return
# 114 "data/maps/RocketHideout_B4F/scripts.pory"

# 115 "data/maps/RocketHideout_B4F/scripts.pory"
RocketHideout_B4F_EventScript_RemoveBarrier::
# 116 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 12, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 117 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 12, METATILE_SilphCo_HideoutFloor, 0
# 118 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 13, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 119 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 13, METATILE_SilphCo_HideoutFloor, 0
# 120 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 17, 14, METATILE_SilphCo_HideoutFloor_ShadeFull, 0
# 121 "data/maps/RocketHideout_B4F/scripts.pory"
	setmetatile 18, 14, METATILE_SilphCo_HideoutFloor, 0
# 122 "data/maps/RocketHideout_B4F/scripts.pory"
	return

RocketHideout_B4F_EnterGiovanniRoom::
# 128 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_unset FLAG_HIDE_HIDEOUT_GIOVANNI, RocketHideout_B4F_EnterGiovanniRoom_2
RocketHideout_B4F_EnterGiovanniRoom_1:
# 132 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end

RocketHideout_B4F_EnterGiovanniRoom_2:
# 130 "data/maps/RocketHideout_B4F/scripts.pory"
	fadenewbgm MUS_ENCOUNTER_ROCKET_BOSS
	goto RocketHideout_B4F_EnterGiovanniRoom_1


RocketHideout_B4F_ExitGiovanniRoom::
# 138 "data/maps/RocketHideout_B4F/scripts.pory"
	goto_if_unset FLAG_HIDE_HIDEOUT_GIOVANNI, RocketHideout_B4F_ExitGiovanniRoom_2
RocketHideout_B4F_ExitGiovanniRoom_1:
# 142 "data/maps/RocketHideout_B4F/scripts.pory"
	release
	end

RocketHideout_B4F_ExitGiovanniRoom_2:
# 140 "data/maps/RocketHideout_B4F/scripts.pory"
	fadedefaultbgm
	goto RocketHideout_B4F_ExitGiovanniRoom_1

