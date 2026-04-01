# 1 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 2 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_NUM,      VAR_TEMP_1
# 3 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ PLAYER_STARTER_SPECIES,  VAR_TEMP_2
# 4 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_SPECIES,   VAR_TEMP_3
# 5 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ RIVAL_STARTER_ID,        VAR_TEMP_4
# 6 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 7 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
.equ SHOWED_OAK_COMPLETE_DEX, FLAG_TEMP_2
# 8 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 9 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_MapScripts::
# 10 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_ProfessorOaksLab_OnTransition
# 11 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_ProfessorOaksLab_OnWarp
# 12 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_ProfessorOaksLab_OnFrame
# 13 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.byte 0
# 14 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 15 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnTransition::
# 16 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_VISITED_OAKS_LAB
# 17 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene
# 18 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    call_if_set FLAG_BADGE01_GET, PalletTown_ProfessorOaksLab_EventScript_HideRemainingStarters
# 19 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene
# 20 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished
# 21 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck
# 22 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 23 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 24 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetSkipPokeBallCheck::
# 25 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_OAK_SKIP_22_RIVAL_CHECK
# 26 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 27 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 28 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SetNationalDexSceneFinished::
# 29 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9
# 30 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 31 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 32 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForStarterScene::
# 33 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 34 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 35 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_OAK
# 36 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 37 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 38 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_HideRemainingStarters::
# 39 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    setflag FLAG_HIDE_BULBASAUR_BALL
# 40 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    setflag FLAG_HIDE_SQUIRTLE_BALL
# 41 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    setflag FLAG_HIDE_CHARMANDER_BALL
# 42 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    removeobject LOCALID_BULBASAUR_BALL
# 43 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    removeobject LOCALID_SQUIRTLE_BALL
# 44 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    removeobject LOCALID_CHARMANDER_BALL
# 45 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
    return
# 46 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 47 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyOakForNationalDexScene::
# 48 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 11
# 49 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_UP
# 50 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 51 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 52 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnWarp::
# 53 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene
# 54 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 55 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 56 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyPlayerForStarterScene::
# 57 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 58 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 59 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 60 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_OnFrame::
# 61 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1, PalletTown_ProfessorOaksLab_ChooseStarterScene
# 62 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7, PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene
# 63 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.2byte 0
# 64 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 65 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EnterForNationalDexScene:: @ 8169002 
# 66 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 67 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_FACING, DIR_NORTH
# 68 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 69 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 70 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 71 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 72 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 73 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 74 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 75 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 76 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 77 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 78 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 79 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 80 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexScene::
# 81 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakSightingsOfRareMons
# 82 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 83 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth
# 84 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth
# 85 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 86 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest
# 87 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalJustLetMeHandleEverything
# 88 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 89 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNeedYourHelpTooNeedToSeePokedexes
# 90 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth
# 91 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest
# 92 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 93 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTookBothPokedexUnits
# 94 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 95 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 96 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth
# 97 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth
# 98 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast
# 99 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest
# 100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_1
# 101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_POKEDEX_2
# 102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakNowTheseUnitsCanRecordMoreData
# 104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_PlayersPokedexWasUpgraded
# 115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special EnableNationalPokedex
# 119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMustReallyWorkToFillPokedex
# 120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllCompleteThePokedex
# 121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8
# 130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterNorth::
# 134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterEastWest::
# 143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_NationalDexSceneRivalEnterSouth::
# 153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakNorth::
# 162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerFaceOakWest::
# 167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskNorth::
# 172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskSouth::
# 177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth
# 178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskEast::
# 184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesToDeskWest::
# 190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk
# 191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDesk::
# 195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesToDeskSouth::
# 203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_ChooseStarterScene::
# 211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakEnter
# 214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_PROF_OAK
# 216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_PROF_OAK, 6, 3
# 217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectmovementtype LOCALID_OAKS_LAB_PROF_OAK, MOVEMENT_TYPE_FACE_DOWN
# 218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerEnter
# 220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	savebgm MUS_DUMMY
# 225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalFedUpWithWaiting
# 227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 60
# 229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThreeMonsChooseOne
# 230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalReact
# 233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalNoFairWhatAboutMe
# 235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBePatientRival
# 236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2
# 237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakEnter::
# 241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerEnter::
# 250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalReact::
# 261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeaveStarterSceneTrigger::
# 266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHeyDontGoAwayYet
# 271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp
# 273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWalkUp::
# 278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerLeft::
# 282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 1
# 284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerMid::
# 288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 2
# 290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleTriggerRight::
# 294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_2, 3
# 296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattle
# 297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattle::
# 300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLetsCheckOutMons
# 307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceDown
# 309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 0, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander
# 311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur
# 312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_STARTER_MON, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle
# 313 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 314 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 315 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ The scripts for the rival approaching the player for battle are a bit bloated because
# 316 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ both the player and rival can be in 3 different positions, so theres 9 different approaches
# 317 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ NOTE: Names below refer to the Rival's mon (e.g. for RivalBattleSquirtle, player has Charmander)
# 318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtle::
# 320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft
# 321 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid
# 322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight
# 323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleLeft::
# 326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft
# 327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 331 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleMid::
# 332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid
# 333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 334 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 336 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleSquirtleRight::
# 338 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight
# 339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle
# 341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleSquirtle::
# 344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_SQUIRTLE, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 348 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleLeft::
# 349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 351 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 353 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 355 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleMid::
# 358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 365 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleSquirtleRight::
# 366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 368 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 370 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 371 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 372 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmander::
# 373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft
# 374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid
# 375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight
# 376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderLeft::
# 379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft
# 380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 382 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderMid::
# 385 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid
# 386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 387 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 388 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 389 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 390 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleCharmanderRight::
# 391 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight
# 392 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander
# 394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 395 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleCharmander::
# 397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_CHARMANDER, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 399 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 400 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 401 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderLeft::
# 402 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 403 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 404 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderMid::
# 412 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 413 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 414 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 415 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 416 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 417 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 418 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 419 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 420 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_ApproachForBattleCharmanderRight::
# 421 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 422 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 423 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 424 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 425 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 426 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 427 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 428 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaur::
# 429 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft
# 430 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid
# 431 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight
# 432 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 433 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 434 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurLeft::
# 435 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft
# 436 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 437 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 438 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 439 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 440 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurMid::
# 441 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid
# 442 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 443 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 444 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 445 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 446 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalApproachForBattleBulbasaurRight::
# 447 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight
# 448 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 449 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur
# 450 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 451 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 452 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalBattleBulbasaur::
# 453 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	trainerbattle_earlyrival TRAINER_RIVAL_OAKS_LAB_BULBASAUR, RIVAL_BATTLE_TUTORIAL, PalletTown_ProfessorOaksLab_Text_RivalDefeat, Text_RivalVictory
# 454 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle
# 455 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 456 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 457 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurLeft::
# 458 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 459 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 460 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 461 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 462 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 463 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 464 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 465 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurMid::
# 466 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 467 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 468 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 469 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 470 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 471 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 472 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalApproachForBattleBulbasaurRight::
# 473 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 474 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 475 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 476 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 477 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 478 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_EndRivalBattle::
# 479 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special HealPlayerParty
# 480 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoToughenMyMon
# 481 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 482 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 483 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 1, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft
# 484 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 2, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid
# 485 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_TEMP_2, 3, PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight
# 486 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 487 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_EXIT
# 488 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 489 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4
# 490 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_BEAT_RIVAL_IN_OAKS_LAB
# 491 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 492 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 493 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 494 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleLeft::
# 495 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft
# 496 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 497 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 498 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 499 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 500 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleMid::
# 501 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid
# 502 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle
# 503 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 504 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 505 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 506 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitAfterBattleRight::
# 507 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight
# 508 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight
# 509 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_RIVAL
# 510 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 511 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 512 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleLeft::
# 513 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 514 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 515 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 516 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 517 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 518 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 519 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 520 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 521 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 522 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleRight::
# 523 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 524 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 525 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 526 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 527 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 528 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 529 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 530 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 531 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 532 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExitAfterBattleMid::
# 533 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 534 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 535 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 536 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 537 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 538 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 539 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 540 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 541 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 542 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 543 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattle::
# 544 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 545 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 546 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 547 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 548 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 549 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 550 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 551 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerWatchRivalExitAfterBattleRight::
# 552 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 553 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 554 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 555 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 556 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 557 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 558 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 559 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Rival::
# 560 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 561 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 562 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter
# 563 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter
# 564 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGrampsIsntAround
# 565 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 566 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 567 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 568 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWaitingForStarter::
# 569 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGoChoosePlayer
# 570 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 571 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 572 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 573 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalChoseStarter::
# 574 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalMyMonLooksTougher
# 575 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 576 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 577 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 578 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ProfOak::
# 579 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 580 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 581 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set SHOWED_OAK_COMPLETE_DEX, PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex
# 582 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 9, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 583 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 8, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 584 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene
# 585 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_CERULEAN_CITY_RIVAL, 1, PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 586 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls
# 587 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 1, PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene
# 588 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 4, PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow
# 589 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon
# 590 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakWhichOneWillYouChoose
# 591 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 592 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 593 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 594 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakJustShownCompleteDex::
# 595 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 596 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 597 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 598 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 599 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakCanReachNextTownWithMon::
# 600 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCanReachNextTownWithMon
# 601 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 602 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 603 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 604 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBattleMonForItToGrow::
# 605 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakBattleMonForItToGrow
# 606 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 607 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 608 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 609 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReceiveDexScene::
# 610 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveSomethingForMe
# 611 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 612 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_TMHM
# 613 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_DeliveredOaksParcel
# 614 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 615 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 616 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 617 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeitem ITEM_OAKS_PARCEL
# 618 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCustomBallIOrdered
# 619 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, 0
# 620 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalGramps
# 621 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 622 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth
# 623 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth
# 624 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 625 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest
# 626 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 627 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalWhatDidYouCallMeFor
# 628 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 629 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 630 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_PIN
# 631 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_ExclamationMark
# 632 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 633 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_Delay48
# 634 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 635 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth
# 636 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast
# 637 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest
# 638 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth
# 639 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHaveRequestForYouTwo
# 640 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 641 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth
# 642 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth
# 643 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast
# 644 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest
# 645 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakPokedexOnDesk
# 646 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 647 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 648 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakTakeTheseWithYou
# 649 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 650 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterUp
# 651 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 652 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_1
# 653 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 654 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_POKEDEX_2
# 655 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 25
# 656 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth
# 657 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth
# 658 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast
# 659 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest
# 660 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 10
# 661 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 662 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 663 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedPokedexFromOak
# 664 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 665 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 666 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 667 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 668 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 669 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_POKEMON_CENTER_TEALA, 1
# 670 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCatchMonsForDataTakeThese
# 671 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 672 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakExplainCatching
# 673 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 1
# 674 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakCompleteMonGuideWasMyDream
# 675 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalLeaveItToMeGramps
# 676 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth
# 677 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth
# 678 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 679 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest
# 680 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalTellSisNotToGiveYouMap
# 681 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 682 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playbgm MUS_RIVAL_EXIT, 0
# 683 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth
# 684 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 685 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 686 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_RivalExit
# 687 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject LOCALID_OAKS_LAB_RIVAL
# 688 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	fadedefaultbgm
# 689 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6
# 690 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_MART, 2
# 691 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1
# 692 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_RIVALS_HOUSE, 1
# 693 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_ROUTE22, 1
# 694 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 695 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 696 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 697 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverNorth::
# 698 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 699 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 700 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 701 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 702 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverSouth::
# 703 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth
# 704 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 705 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 706 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 707 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverEast::
# 708 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 709 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast
# 710 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 711 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 712 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 713 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakBringDexesOverWest::
# 714 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver
# 715 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 716 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 717 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 718 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_PlayerFaceOakForDexEast::
# 719 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 720 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 721 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 722 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 723 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 724 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOver::
# 725 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 726 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 727 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 728 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 729 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakBringDexesOverSouth::
# 730 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 731 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 732 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 733 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 734 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskNorth::
# 735 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 736 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 737 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 738 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 739 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskSouth::
# 740 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth
# 741 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 742 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk
# 743 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 744 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 745 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 746 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskEast::
# 747 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 748 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast
# 749 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement LOCALID_OAKS_LAB_PROF_OAK
# 750 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 751 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 752 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakWalkToDeskWest::
# 753 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk
# 754 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 755 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 756 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 757 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDeskEast::
# 758 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 759 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 760 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 761 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 762 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 763 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchOakWalkToDesk::
# 764 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 765 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 766 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 767 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 768 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 769 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDesk::
# 770 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 771 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 772 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 773 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 774 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 775 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 776 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakWalkToDeskSouth::
# 777 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 778 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 779 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 780 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 781 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 782 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 783 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 784 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedexOrTryGiveBalls::
# 785 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 786 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 787 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 788 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 789 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 790 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 791 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_0x8009, 1, PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls  @ Player only has starter
# 792 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RatePokedex
# 793 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 794 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 795 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RatePokedex::
# 796 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 797 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SAW_DEX_COMPLETION, PalletTown_ProfessorOaksLab_EventScript_DexCompleted
# 798 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 799 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 800 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 801 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexCompleted::
# 802 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 803 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 40
# 804 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PokedexRating_Text_Wroooaaarrr
# 805 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 806 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth
# 807 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth
# 808 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast
# 809 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest
# 810 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 811 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 812 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 813 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 70
# 814 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PokedexRating_Text_ThankYouMadeDreamReality
# 815 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag SHOWED_OAK_COMPLETE_DEX
# 816 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 817 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 818 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 819 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedNorth::
# 820 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth
# 821 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 822 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 823 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 824 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedSouth::
# 825 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth
# 826 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 827 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 828 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 829 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedEast::
# 830 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedEast
# 831 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 832 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 833 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 834 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_OakExcitedWest::
# 835 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, PalletTown_ProfessorOaksLab_Movement_OakExcitedWest
# 836 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 837 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 838 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 839 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedNorth::
# 840 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 841 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 842 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 843 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 844 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_down
# 845 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 846 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 847 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 848 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedSouth::
# 849 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 850 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 851 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 852 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 853 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_up
# 854 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_up
# 855 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 856 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 857 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedEast::
# 858 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 859 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 860 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 861 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 862 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_left
# 863 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_left
# 864 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 865 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 866 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_OakExcitedWest::
# 867 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 868 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 869 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 870 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 871 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_fast_right
# 872 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_right
# 873 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 874 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 875 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 876 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_Search:
# 877 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 878 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 879 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 880 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 881 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 882 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 883 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 884 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 885 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 886 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 887 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 888 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 889 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 890 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 891 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 892 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 893 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 894 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 895 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 896 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_right
# 897 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 898 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 899 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 900 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_left
# 901 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 902 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 903 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
@ Unused
# 904 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_VerticalPacing:
# 905 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 906 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 907 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 908 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_down
# 909 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 910 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 911 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 912 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 913 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 914 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 915 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_TryStartNationalDexScene::
# 916 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PokedexRating_EventScript_RateInPerson
# 917 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 918 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 919 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene
# 920 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 30
# 921 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakFavorToAskYouPlayer
# 922 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_NationalDexScene
# 923 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 924 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 925 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DontStartNationalDexScene::
# 926 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 927 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 928 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 929 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CheckIfPlayerNeedsBalls::
# 930 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 931 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	special QuestLog_CutRecording
# 932 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_OAK_SKIP_22_RIVAL_CHECK, PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 933 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL, PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls
# 934 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	checkitem ITEM_POKE_BALL
# 935 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls
# 936 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 937 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 938 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 939 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerOutOfBalls::
# 940 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_ROUTE22, 2, PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls
# 941 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait
# 942 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 943 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 944 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_GivePlayerMoreBalls::
# 945 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakAddedNothingToPokedex
# 946 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	giveitem_msg PalletTown_ProfessorOaksLab_Text_ReceivedFivePokeBalls, ITEM_POKE_BALL, 5
# 947 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_GOT_POKEBALLS_FROM_OAK_AFTER_22_RIVAL
# 948 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 949 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 950 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 951 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_MonsAroundWorldWait::
# 952 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakMonsAroundWorldWait
# 953 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 954 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 955 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 956 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_PlayerAlreadyGotBalls::
# 957 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakComeSeeMeSometime
# 958 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 959 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 960 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 961 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterNorth::
# 962 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 5, 10
# 963 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 964 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth
# 965 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 966 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 967 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 968 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 969 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterEastWest::
# 970 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 971 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 972 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 973 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 974 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 975 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 976 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 977 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 978 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalEnterSouth::
# 979 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setobjectxyperm LOCALID_OAKS_LAB_RIVAL, 6, 10
# 980 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	addobject LOCALID_OAKS_LAB_RIVAL
# 981 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 982 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalEnter
# 983 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 984 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 985 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 986 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalSouth::
# 987 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 988 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 989 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 990 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 991 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 992 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 993 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 994 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalWest::
# 995 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 996 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 997 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 998 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 999 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1000 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1001 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1002 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1003 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalEast::
# 1004 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FacePlayer
# 1005 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1006 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay 15
# 1007 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 1008 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_WalkInPlaceFasterDown
# 1009 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1010 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1011 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1012 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerNorth::
# 1013 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1014 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 1015 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1016 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1017 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1018 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerSouth::
# 1019 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_WalkInPlaceFasterUp
# 1020 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1021 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1022 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1023 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1024 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneRivalFacePlayerEastWest::
# 1025 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, Common_Movement_FacePlayer
# 1026 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 1027 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1028 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1029 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1030 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExitNorth::
# 1031 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest
# 1032 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1033 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1034 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1035 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1036 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalExit::
# 1037 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalExit
# 1038 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1039 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1040 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1041 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DexSceneOakFacePlayerAndRivalNorth::
# 1042 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 1043 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1044 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1045 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1046 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterEastWest::
# 1047 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_4
# 1048 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1049 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1050 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1051 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_WatchRivalEnterNorth::
# 1052 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_down
# 1053 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1054 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1055 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1056 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1057 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_16
# 1058 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	delay_8
# 1059 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_left
# 1060 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1061 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1062 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalEnter::
# 1063 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1064 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1065 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1066 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1067 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1068 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1069 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1070 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1071 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalExit::
# 1072 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1073 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1074 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1075 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1076 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1077 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1078 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1079 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1080 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_BulbasaurBall::
# 1081 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1082 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1083 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 0
# 1084 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 0
# 1085 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_BULBASAUR
# 1086 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_CHARMANDER
# 1087 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_CHARMANDER_BALL
# 1088 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1089 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1090 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1091 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1092 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1093 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1094 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur::
# 1095 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1096 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingBulbasaur, MSGBOX_YESNO
# 1097 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1098 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1099 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1100 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1101 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle::
# 1102 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1103 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingSquirtle, MSGBOX_YESNO
# 1104 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1105 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1106 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1107 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1108 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander::
# 1109 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1110 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakChoosingCharmander, MSGBOX_YESNO
# 1111 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PalletTown_ProfessorOaksLab_EventScript_ChoseStarter
# 1112 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter
# 1113 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1114 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1115 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_DeclinedStarter::
# 1116 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1117 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 1118 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1119 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1120 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1121 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ChoseStarter::
# 1122 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	hidemonpic
# 1123 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject VAR_LAST_TALKED
# 1124 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakThisMonIsEnergetic
# 1125 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_RestorePrevTextColor
# 1126 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 1127 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setflag FLAG_PALLET_LADY_NOT_BLOCKING_SIGN
# 1128 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_GivePreviewMon
# 1129 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1130 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny
# 1131 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1132 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	copyvar VAR_STARTER_MON, PLAYER_STARTER_NUM
# 1133 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, PLAYER_STARTER_SPECIES
# 1134 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_ReceivedMonFromOak
# 1135 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1136 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1137 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1138 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 1139 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, YES, EventScript_GiveNicknameToStarter
# 1140 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1141 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1142 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1143 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
EventScript_GiveNicknameToStarter::
# 1144 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8004, 0
# 1145 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call EventScript_ChangePokemonNickname
# 1146 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter
# 1147 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1148 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1149 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalPicksStarter::
# 1150 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1151 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 0, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander
# 1152 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 1, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur
# 1153 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq PLAYER_STARTER_NUM, 2, PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle
# 1154 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1155 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1156 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToCharmander::
# 1157 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander
# 1158 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1159 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1160 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1161 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1162 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToSquirtle::
# 1163 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle
# 1164 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1165 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1166 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1167 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1168 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalWalksToBulbasaur::
# 1169 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_RIVAL, PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur
# 1170 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement 0
# 1171 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter
# 1172 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1173 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1174 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RivalTakesStarter::
# 1175 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 1176 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_RivalIllTakeThisOneThen
# 1177 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	removeobject RIVAL_STARTER_ID
# 1178 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 1179 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	bufferspeciesname STR_VAR_1, RIVAL_STARTER_SPECIES
# 1180 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	message PalletTown_ProfessorOaksLab_Text_RivalReceivedMonFromOak
# 1181 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmessage
# 1182 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 1183 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitfanfare
# 1184 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3
# 1185 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call_if_set FLAG_OPENED_START_MENU, PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene
# 1186 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1187 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1188 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1189 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_ReadyEndSignLadyScene::
# 1190 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 1191 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	return
# 1192 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1193 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToCharmander::
# 1194 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1195 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1196 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1197 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1198 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1199 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1200 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1201 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_up
# 1202 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1203 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1204 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToSquirtle::
# 1205 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1206 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1207 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1208 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1209 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1210 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1211 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1212 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1213 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_Movement_RivalWalksToBulbasaur::
# 1214 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_down
# 1215 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1216 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1217 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_right
# 1218 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	walk_in_place_faster_up
# 1219 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	step_end
# 1220 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1221 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_SquirtleBall::
# 1222 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1223 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1224 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 1
# 1225 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 1
# 1226 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1227 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_BULBASAUR
# 1228 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_BULBASAUR_BALL
# 1229 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1230 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1231 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1232 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1233 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1234 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1235 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_CharmanderBall::
# 1236 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1237 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1238 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_TEMP_1, 2
# 1239 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_NUM, 2
# 1240 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar PLAYER_STARTER_SPECIES, SPECIES_CHARMANDER
# 1241 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_SPECIES, SPECIES_SQUIRTLE
# 1242 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar RIVAL_STARTER_ID, LOCALID_SQUIRTLE_BALL
# 1243 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 3, PalletTown_ProfessorOaksLab_EventScript_LastPokeBall
# 1244 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 2, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice
# 1245 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_ThoseArePokeBalls
# 1246 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1247 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1248 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1249 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LastPokeBall::
# 1250 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OaksLastMon
# 1251 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1252 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1253 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1254 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1::
# 1255 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1256 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1257 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear
# 1258 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsGoingToHaveRadioShow
# 1259 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1260 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1261 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1262 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide1GameClear::
# 1263 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 5
# 1264 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakHostsRadioShow
# 1265 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1266 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1267 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1268 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2::
# 1269 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1270 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1271 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear
# 1272 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_StudyAsOaksAide
# 1273 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1274 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1275 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1276 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide2GameClear::
# 1277 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_DAISY, 0
# 1278 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_DaisyWillGroomMons
# 1279 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1280 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1281 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1282 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Aide3::
# 1283 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1284 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1285 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	famechecker FAMECHECKER_OAK, 2
# 1286 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_OakIsAuthorityOnMons
# 1287 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
# 1288 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1289 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1290 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Pokedex::
# 1291 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_BlankEncyclopedia, MSGBOX_NPC
# 1292 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1293 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1294 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_Computer::
# 1295 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_EmailMessage, MSGBOX_SIGN
# 1296 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1297 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1298 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_LeftSign::
# 1299 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_PressStartToOpenMenu, MSGBOX_SIGN
# 1300 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1301 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1302 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSign::
# 1303 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lockall
# 1304 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, PalletTown_ProfessorOaksLab_EventScript_RightSignAlt
# 1305 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_SaveOptionInMenu
# 1306 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1307 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end
# 1308 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"

# 1309 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
PalletTown_ProfessorOaksLab_EventScript_RightSignAlt::
# 1310 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_Text_AllMonTypesHaveStrongAndWeakPoints
# 1311 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	releaseall
# 1312 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	end

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice::
# 1318 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	applymovement LOCALID_OAKS_LAB_PROF_OAK, Common_Movement_FaceRight
# 1319 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmovement
# 1320 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 0
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_2
# 1337 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 1
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_3
# 1354 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4
# 1373 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARMANDER
# 1374 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8001, 5
# 1375 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 1376 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8002, 10
# 1377 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8003, 3
# 1378 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 1379 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 1380 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmoncry
# 1381 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_19
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_18:
# 1386 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1:
	return

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_2:
# 1322 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_BULBASAUR
# 1323 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8001, 5
# 1324 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 1325 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8002, 10
# 1326 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8003, 3
# 1327 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 1328 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playmoncry SPECIES_BULBASAUR, CRY_MODE_NORMAL
# 1329 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmoncry
# 1330 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_10
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_9:
# 1335 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ConfirmBulbasaur
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_3:
# 1339 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_SQUIRTLE
# 1340 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8001, 5
# 1341 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 1342 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8002, 10
# 1343 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8003, 3
# 1344 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 1345 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playmoncry SPECIES_SQUIRTLE, CRY_MODE_NORMAL
# 1346 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmoncry
# 1347 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_13
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_12:
# 1352 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ConfirmSquirtle
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_4:
# 1356 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHARMANDER
# 1357 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8001, 5
# 1358 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 1359 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8002, 10
# 1360 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_0x8003, 3
# 1361 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 1362 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playmoncry SPECIES_CHARMANDER, CRY_MODE_NORMAL
# 1363 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitmoncry
# 1364 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_16
PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_15:
# 1369 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	call PalletTown_ProfessorOaksLab_EventScript_ConfirmCharmander
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_1

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_10:
# 1332 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_SHINY
# 1333 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitse
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_9

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_13:
# 1349 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_SHINY
# 1350 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitse
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_12

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_16:
# 1366 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_SHINY
# 1367 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitse
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_15

PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_19:
# 1383 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	playse SE_SHINY
# 1384 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	waitse
	goto PalletTown_ProfessorOaksLab_EventScript_ConfirmStarterChoice_18


PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny::
# 1393 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1394 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_2
PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_1:
	return

PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_2:
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_Text_0
# 1397 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1398 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
	goto PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_1


PalletTown_ProfessorOaksLab_EventScript_ShinyTest::
# 1405 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	lock
# 1406 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	faceplayer
# 1407 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_SHINY_ODDS_MULTIPLIER, 1023
# 1408 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	setvar VAR_SHINY_ODDS_MULTIPLIER_REGION, 4
# 1409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	msgbox PalletTown_ProfessorOaksLab_EventScript_ShinyTest_Text_0
# 1410 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	closemessage
# 1411 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	release
	end


PalletTown_ProfessorOaksLab_EventScript_GiftMonIsShiny_Text_0:
# 1396 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Hmm... This looks exceptionally rare.\n"
	.string "Woah, it's a SHINY POKéMON!$"

PalletTown_ProfessorOaksLab_EventScript_ShinyTest_Text_0:
# 1409 "data/maps/PalletTown_ProfessorOaksLab/scripts.pory"
	.string "Shinies have 25% chance to\n"
	.string "show in the KANTO REGION.$"
