# 1 "data/maps/PalletTown/scripts.pory"

# 2 "data/maps/PalletTown/scripts.pory"
.equ SIGN_LADY_READY, VAR_TEMP_2
# 3 "data/maps/PalletTown/scripts.pory"

# 4 "data/maps/PalletTown/scripts.pory"
PalletTown_MapScripts::
# 5 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PalletTown_OnTransition
# 6 "data/maps/PalletTown/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_OnFrame
# 7 "data/maps/PalletTown/scripts.pory"
	.byte 0
# 8 "data/maps/PalletTown/scripts.pory"

# 9 "data/maps/PalletTown/scripts.pory"
PalletTown_OnTransition::
# 10 "data/maps/PalletTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_PALLET_TOWN
# 11 "data/maps/PalletTown/scripts.pory"
	call_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_TryReadySignLady
# 12 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 0, PalletTown_EventScript_SetSignLadyPos
# 13 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SetSignLadyDone
# 14 "data/maps/PalletTown/scripts.pory"
	end
# 15 "data/maps/PalletTown/scripts.pory"

# 16 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TryReadySignLady::
# 17 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 18 "data/maps/PalletTown/scripts.pory"
	return
# 19 "data/maps/PalletTown/scripts.pory"

# 20 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyDone::
# 21 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2
# 22 "data/maps/PalletTown/scripts.pory"
	return
# 23 "data/maps/PalletTown/scripts.pory"

# 24 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SetSignLadyPos::
# 25 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_PALLET_LADY_NOT_BLOCKING_SIGN, PalletTown_EventScript_MoveSignLadyToRouteEntrance
# 26 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 5, 15
# 27 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_UP
# 28 "data/maps/PalletTown/scripts.pory"
	return
# 29 "data/maps/PalletTown/scripts.pory"

# 30 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_MoveSignLadyToRouteEntrance::
# 31 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_SIGN_LADY, 12, 2
# 32 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_SIGN_LADY, MOVEMENT_TYPE_FACE_DOWN
# 33 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, TRUE
# 34 "data/maps/PalletTown/scripts.pory"
	return
# 35 "data/maps/PalletTown/scripts.pory"

# 36 "data/maps/PalletTown/scripts.pory"
PalletTown_OnFrame::
# 37 "data/maps/PalletTown/scripts.pory"
	map_script_2 VAR_MAP_SCENE_PALLET_TOWN_OAK, 2, PalletTown_EventScript_OakRatingScene
# 38 "data/maps/PalletTown/scripts.pory"
	.2byte 0
# 39 "data/maps/PalletTown/scripts.pory"

# 40 "data/maps/PalletTown/scripts.pory"
@ Oak approaches player after exiting their house post Elite Four to check if they should receieve the National Dex
# 41 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakRatingScene::
# 42 "data/maps/PalletTown/scripts.pory"
	lockall
# 43 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 44 "data/maps/PalletTown/scripts.pory"
	setobjectxyperm LOCALID_PALLET_PROF_OAK, 14, 14
# 45 "data/maps/PalletTown/scripts.pory"
	setobjectmovementtype LOCALID_PALLET_PROF_OAK, MOVEMENT_TYPE_FACE_LEFT
# 46 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 47 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToPlayersDoor
# 48 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 49 "data/maps/PalletTown/scripts.pory"
	goto_if_unset FLAG_WORLD_MAP_ONE_ISLAND, PalletTown_EventScript_NotBeenToOneIslandYet
# 50 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakLetMeSeePokedex
# 51 "data/maps/PalletTown/scripts.pory"
	setvar VAR_0x8004, 0
# 52 "data/maps/PalletTown/scripts.pory"
	specialvar VAR_RESULT, GetPokedexCount
# 53 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8008, VAR_0x8005
# 54 "data/maps/PalletTown/scripts.pory"
	copyvar VAR_0x8009, VAR_0x8006
# 55 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_1, VAR_0x8008
# 56 "data/maps/PalletTown/scripts.pory"
	buffernumberstring STR_VAR_2, VAR_0x8009
# 57 "data/maps/PalletTown/scripts.pory"
	goto_if_lt VAR_0x8009, 60, PalletTown_EventScript_NotEnoughMonsForNationalDex
# 58 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXImpressiveFollowMe
# 59 "data/maps/PalletTown/scripts.pory"
	closemessage
# 60 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_FOLLOW_ME, 0
# 61 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabFromHouse
# 62 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabFromHouse
# 63 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 64 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 65 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 66 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 67 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 68 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 69 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 70 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 71 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 7
# 72 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 73 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 74 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 75 "data/maps/PalletTown/scripts.pory"
	waitstate
# 76 "data/maps/PalletTown/scripts.pory"
	releaseall
# 77 "data/maps/PalletTown/scripts.pory"
	end
# 78 "data/maps/PalletTown/scripts.pory"

# 79 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_EndOakRatingScene::
# 80 "data/maps/PalletTown/scripts.pory"
	closemessage
# 81 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakExit
# 82 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 83 "data/maps/PalletTown/scripts.pory"
	removeobject LOCALID_PALLET_PROF_OAK
# 84 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 3
# 85 "data/maps/PalletTown/scripts.pory"
	releaseall
# 86 "data/maps/PalletTown/scripts.pory"
	end
# 87 "data/maps/PalletTown/scripts.pory"

# 88 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotEnoughMonsForNationalDex::
# 89 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CaughtXPuttingInHonestEffort
# 90 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 91 "data/maps/PalletTown/scripts.pory"
	end
# 92 "data/maps/PalletTown/scripts.pory"

# 93 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_NotBeenToOneIslandYet::
# 94 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakYouEnjoyingTraveling
# 95 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_EndOakRatingScene
# 96 "data/maps/PalletTown/scripts.pory"
	end
# 97 "data/maps/PalletTown/scripts.pory"

# 98 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToPlayersDoor::
# 99 "data/maps/PalletTown/scripts.pory"
	walk_left
# 100 "data/maps/PalletTown/scripts.pory"
	walk_left
# 101 "data/maps/PalletTown/scripts.pory"
	walk_left
# 102 "data/maps/PalletTown/scripts.pory"
	walk_up
# 103 "data/maps/PalletTown/scripts.pory"
	walk_up
# 104 "data/maps/PalletTown/scripts.pory"
	walk_up
# 105 "data/maps/PalletTown/scripts.pory"
	walk_up
# 106 "data/maps/PalletTown/scripts.pory"
	walk_up
# 107 "data/maps/PalletTown/scripts.pory"
	walk_left
# 108 "data/maps/PalletTown/scripts.pory"
	walk_left
# 109 "data/maps/PalletTown/scripts.pory"
	walk_left
# 110 "data/maps/PalletTown/scripts.pory"
	walk_left
# 111 "data/maps/PalletTown/scripts.pory"
	walk_left
# 112 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 113 "data/maps/PalletTown/scripts.pory"
	step_end
# 114 "data/maps/PalletTown/scripts.pory"

# 115 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakExit::
# 116 "data/maps/PalletTown/scripts.pory"
	walk_right
# 117 "data/maps/PalletTown/scripts.pory"
	walk_right
# 118 "data/maps/PalletTown/scripts.pory"
	walk_right
# 119 "data/maps/PalletTown/scripts.pory"
	walk_right
# 120 "data/maps/PalletTown/scripts.pory"
	walk_right
# 121 "data/maps/PalletTown/scripts.pory"
	walk_down
# 122 "data/maps/PalletTown/scripts.pory"
	walk_down
# 123 "data/maps/PalletTown/scripts.pory"
	walk_down
# 124 "data/maps/PalletTown/scripts.pory"
	walk_down
# 125 "data/maps/PalletTown/scripts.pory"
	walk_down
# 126 "data/maps/PalletTown/scripts.pory"
	walk_right
# 127 "data/maps/PalletTown/scripts.pory"
	walk_right
# 128 "data/maps/PalletTown/scripts.pory"
	walk_right
# 129 "data/maps/PalletTown/scripts.pory"
	step_end
# 130 "data/maps/PalletTown/scripts.pory"

# 131 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabFromHouse::
# 132 "data/maps/PalletTown/scripts.pory"
	walk_right
# 133 "data/maps/PalletTown/scripts.pory"
	walk_right
# 134 "data/maps/PalletTown/scripts.pory"
	walk_right
# 135 "data/maps/PalletTown/scripts.pory"
	walk_right
# 136 "data/maps/PalletTown/scripts.pory"
	walk_right
# 137 "data/maps/PalletTown/scripts.pory"
	walk_down
# 138 "data/maps/PalletTown/scripts.pory"
	walk_down
# 139 "data/maps/PalletTown/scripts.pory"
	walk_down
# 140 "data/maps/PalletTown/scripts.pory"
	walk_down
# 141 "data/maps/PalletTown/scripts.pory"
	walk_down
# 142 "data/maps/PalletTown/scripts.pory"
	walk_right
# 143 "data/maps/PalletTown/scripts.pory"
	walk_right
# 144 "data/maps/PalletTown/scripts.pory"
	walk_right
# 145 "data/maps/PalletTown/scripts.pory"
	walk_right
# 146 "data/maps/PalletTown/scripts.pory"
	walk_right
# 147 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 148 "data/maps/PalletTown/scripts.pory"
	step_end
# 149 "data/maps/PalletTown/scripts.pory"

# 150 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabFromHouse::
# 151 "data/maps/PalletTown/scripts.pory"
	walk_down
# 152 "data/maps/PalletTown/scripts.pory"
	walk_right
# 153 "data/maps/PalletTown/scripts.pory"
	walk_right
# 154 "data/maps/PalletTown/scripts.pory"
	walk_right
# 155 "data/maps/PalletTown/scripts.pory"
	walk_right
# 156 "data/maps/PalletTown/scripts.pory"
	walk_right
# 157 "data/maps/PalletTown/scripts.pory"
	walk_down
# 158 "data/maps/PalletTown/scripts.pory"
	walk_down
# 159 "data/maps/PalletTown/scripts.pory"
	walk_down
# 160 "data/maps/PalletTown/scripts.pory"
	walk_down
# 161 "data/maps/PalletTown/scripts.pory"
	walk_down
# 162 "data/maps/PalletTown/scripts.pory"
	walk_right
# 163 "data/maps/PalletTown/scripts.pory"
	walk_right
# 164 "data/maps/PalletTown/scripts.pory"
	walk_right
# 165 "data/maps/PalletTown/scripts.pory"
	walk_right
# 166 "data/maps/PalletTown/scripts.pory"
	step_end
# 167 "data/maps/PalletTown/scripts.pory"

# 168 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerLeft::
# 169 "data/maps/PalletTown/scripts.pory"
	lockall
# 170 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 0
# 171 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 172 "data/maps/PalletTown/scripts.pory"
	end
# 173 "data/maps/PalletTown/scripts.pory"

# 174 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTriggerRight::
# 175 "data/maps/PalletTown/scripts.pory"
	lockall
# 176 "data/maps/PalletTown/scripts.pory"
	setvar VAR_TEMP_1, 1
# 177 "data/maps/PalletTown/scripts.pory"
	goto PalletTown_EventScript_OakTrigger
# 178 "data/maps/PalletTown/scripts.pory"
	end
# 179 "data/maps/PalletTown/scripts.pory"

# 180 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakTrigger::
# 181 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 182 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 183 "data/maps/PalletTown/scripts.pory"
	delay 30
# 184 "data/maps/PalletTown/scripts.pory"
	playbgm MUS_OAK, 0
# 185 "data/maps/PalletTown/scripts.pory"
	message PalletTown_Text_OakDontGoOut
# 186 "data/maps/PalletTown/scripts.pory"
	waitmessage
# 187 "data/maps/PalletTown/scripts.pory"
	delay 85
# 188 "data/maps/PalletTown/scripts.pory"
	closemessage
# 189 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 190 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 191 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 192 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_ExclamationMark
# 193 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 194 "data/maps/PalletTown/scripts.pory"
	delay 30
# 195 "data/maps/PalletTown/scripts.pory"
	addobject LOCALID_PALLET_PROF_OAK
# 196 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakEnterLeft
# 197 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakEnterRight
# 198 "data/maps/PalletTown/scripts.pory"
	delay 30
# 199 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakGrassUnsafeNeedMon
# 200 "data/maps/PalletTown/scripts.pory"
	closemessage
# 201 "data/maps/PalletTown/scripts.pory"
	delay 30
# 202 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, PalletTown_EventScript_OakLeadPlayerToLabLeft
# 203 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, PalletTown_EventScript_OakLeadPlayerToLabRight
# 204 "data/maps/PalletTown/scripts.pory"
	opendoor 16, 13
# 205 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 206 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLab
# 207 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerEnterLab
# 208 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 209 "data/maps/PalletTown/scripts.pory"
	closedoor 16, 13
# 210 "data/maps/PalletTown/scripts.pory"
	waitdooranim
# 211 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_PROFESSOR_OAKS_LAB, 1
# 212 "data/maps/PalletTown/scripts.pory"
	clearflag FLAG_HIDE_OAK_IN_HIS_LAB
# 213 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_OAK, 1
# 214 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_HIDE_OAK_IN_PALLET_TOWN
# 215 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 216 "data/maps/PalletTown/scripts.pory"
	warp MAP_PALLET_TOWN_PROFESSOR_OAKS_LAB, 6, 12
# 217 "data/maps/PalletTown/scripts.pory"
	waitstate
# 218 "data/maps/PalletTown/scripts.pory"
	releaseall
# 219 "data/maps/PalletTown/scripts.pory"
	end
# 220 "data/maps/PalletTown/scripts.pory"

# 221 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterLeft::
# 222 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterLeft
# 223 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 224 "data/maps/PalletTown/scripts.pory"
	return
# 225 "data/maps/PalletTown/scripts.pory"

# 226 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakEnterRight::
# 227 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakEnterRight
# 228 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 229 "data/maps/PalletTown/scripts.pory"
	return
# 230 "data/maps/PalletTown/scripts.pory"

# 231 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabLeft::
# 232 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabLeft
# 233 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabLeft
# 234 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 235 "data/maps/PalletTown/scripts.pory"
	return
# 236 "data/maps/PalletTown/scripts.pory"

# 237 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OakLeadPlayerToLabRight::
# 238 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_PROF_OAK, PalletTown_Movement_OakWalkToLabRight
# 239 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, PalletTown_Movement_PlayerWalkToLabRight
# 240 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 241 "data/maps/PalletTown/scripts.pory"
	return
# 242 "data/maps/PalletTown/scripts.pory"

# 243 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLeft::
# 244 "data/maps/PalletTown/scripts.pory"
	walk_up
# 245 "data/maps/PalletTown/scripts.pory"
	walk_up
# 246 "data/maps/PalletTown/scripts.pory"
	walk_right
# 247 "data/maps/PalletTown/scripts.pory"
	walk_up
# 248 "data/maps/PalletTown/scripts.pory"
	walk_up
# 249 "data/maps/PalletTown/scripts.pory"
	walk_right
# 250 "data/maps/PalletTown/scripts.pory"
	walk_up
# 251 "data/maps/PalletTown/scripts.pory"
	walk_up
# 252 "data/maps/PalletTown/scripts.pory"
	step_end
# 253 "data/maps/PalletTown/scripts.pory"

# 254 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterRight::
# 255 "data/maps/PalletTown/scripts.pory"
	walk_right
# 256 "data/maps/PalletTown/scripts.pory"
	walk_up
# 257 "data/maps/PalletTown/scripts.pory"
	walk_up
# 258 "data/maps/PalletTown/scripts.pory"
	walk_right
# 259 "data/maps/PalletTown/scripts.pory"
	walk_up
# 260 "data/maps/PalletTown/scripts.pory"
	walk_up
# 261 "data/maps/PalletTown/scripts.pory"
	walk_right
# 262 "data/maps/PalletTown/scripts.pory"
	walk_up
# 263 "data/maps/PalletTown/scripts.pory"
	walk_up
# 264 "data/maps/PalletTown/scripts.pory"
	step_end
# 265 "data/maps/PalletTown/scripts.pory"

# 266 "data/maps/PalletTown/scripts.pory"
	.macro walk_to_lab
# 267 "data/maps/PalletTown/scripts.pory"
	walk_left
# 268 "data/maps/PalletTown/scripts.pory"
	walk_down
# 269 "data/maps/PalletTown/scripts.pory"
	walk_down
# 270 "data/maps/PalletTown/scripts.pory"
	walk_down
# 271 "data/maps/PalletTown/scripts.pory"
	walk_down
# 272 "data/maps/PalletTown/scripts.pory"
	walk_down
# 273 "data/maps/PalletTown/scripts.pory"
	walk_down
# 274 "data/maps/PalletTown/scripts.pory"
	walk_down
# 275 "data/maps/PalletTown/scripts.pory"
	walk_down
# 276 "data/maps/PalletTown/scripts.pory"
	walk_down
# 277 "data/maps/PalletTown/scripts.pory"
	walk_down
# 278 "data/maps/PalletTown/scripts.pory"
	walk_down
# 279 "data/maps/PalletTown/scripts.pory"
	walk_right
# 280 "data/maps/PalletTown/scripts.pory"
	walk_right
# 281 "data/maps/PalletTown/scripts.pory"
	walk_right
# 282 "data/maps/PalletTown/scripts.pory"
	walk_right
# 283 "data/maps/PalletTown/scripts.pory"
	.endm
# 284 "data/maps/PalletTown/scripts.pory"

# 285 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabLeft::
# 286 "data/maps/PalletTown/scripts.pory"
	walk_down
# 287 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 288 "data/maps/PalletTown/scripts.pory"
	walk_right
# 289 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 290 "data/maps/PalletTown/scripts.pory"
	step_end
# 291 "data/maps/PalletTown/scripts.pory"

# 292 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakWalkToLabRight::
# 293 "data/maps/PalletTown/scripts.pory"
	walk_down
# 294 "data/maps/PalletTown/scripts.pory"
	walk_left
# 295 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 296 "data/maps/PalletTown/scripts.pory"
	walk_right
# 297 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_up
# 298 "data/maps/PalletTown/scripts.pory"
	step_end
# 299 "data/maps/PalletTown/scripts.pory"

# 300 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_OakEnterLab::
# 301 "data/maps/PalletTown/scripts.pory"
	walk_up
# 302 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 303 "data/maps/PalletTown/scripts.pory"
	step_end
# 304 "data/maps/PalletTown/scripts.pory"

# 305 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabLeft::
# 306 "data/maps/PalletTown/scripts.pory"
	walk_down
# 307 "data/maps/PalletTown/scripts.pory"
	walk_down
# 308 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 309 "data/maps/PalletTown/scripts.pory"
	step_end
# 310 "data/maps/PalletTown/scripts.pory"

# 311 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerWalkToLabRight::
# 312 "data/maps/PalletTown/scripts.pory"
	walk_down
# 313 "data/maps/PalletTown/scripts.pory"
	walk_down
# 314 "data/maps/PalletTown/scripts.pory"
	walk_left
# 315 "data/maps/PalletTown/scripts.pory"
	walk_to_lab
# 316 "data/maps/PalletTown/scripts.pory"
	step_end
# 317 "data/maps/PalletTown/scripts.pory"

# 318 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_PlayerEnterLab::
# 319 "data/maps/PalletTown/scripts.pory"
	walk_right
# 320 "data/maps/PalletTown/scripts.pory"
	walk_up
# 321 "data/maps/PalletTown/scripts.pory"
	set_invisible
# 322 "data/maps/PalletTown/scripts.pory"
	step_end
# 323 "data/maps/PalletTown/scripts.pory"

# 324 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLady::
# 325 "data/maps/PalletTown/scripts.pory"
	lock
# 326 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 2, PalletTown_EventScript_SignLadyDone
# 327 "data/maps/PalletTown/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1, PalletTown_EventScript_SignLadyJustShowedSign
# 328 "data/maps/PalletTown/scripts.pory"
	goto_if_eq SIGN_LADY_READY, TRUE, PalletTown_EventScript_SignLadyStartShowSign
# 329 "data/maps/PalletTown/scripts.pory"
	goto_if_set FLAG_TEMP_2, PalletTown_EventScript_SignLadyGoReadSign
# 330 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_HmmIsThatRight
# 331 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 332 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 333 "data/maps/PalletTown/scripts.pory"
	playse SE_PIN
# 334 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_ExclamationMark
# 335 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 336 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_Delay48
# 337 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 338 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OhLookLook
# 339 "data/maps/PalletTown/scripts.pory"
	closemessage
# 340 "data/maps/PalletTown/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayRight
# 341 "data/maps/PalletTown/scripts.pory"
	call_if_ne VAR_FACING, DIR_EAST, PalletTown_EventScript_SignLadyMoveOutOfWayLeft
# 342 "data/maps/PalletTown/scripts.pory"
	copyobjectxytoperm LOCALID_PALLET_SIGN_LADY
# 343 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_TEMP_2
# 344 "data/maps/PalletTown/scripts.pory"
	release
# 345 "data/maps/PalletTown/scripts.pory"
	end
# 346 "data/maps/PalletTown/scripts.pory"

# 347 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayRight::
# 348 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayRight
# 349 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 350 "data/maps/PalletTown/scripts.pory"
	return
# 351 "data/maps/PalletTown/scripts.pory"

# 352 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyMoveOutOfWayLeft::
# 353 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, PalletTown_Movement_SignLadyMoveOutOfWayLeft
# 354 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 355 "data/maps/PalletTown/scripts.pory"
	return
# 356 "data/maps/PalletTown/scripts.pory"

# 357 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyDone::
# 358 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 359 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 360 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RaisingMonsToo
# 361 "data/maps/PalletTown/scripts.pory"
	release
# 362 "data/maps/PalletTown/scripts.pory"
	end
# 363 "data/maps/PalletTown/scripts.pory"

# 364 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyGoReadSign::
# 365 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 366 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 367 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_ReadItReadIt
# 368 "data/maps/PalletTown/scripts.pory"
	release
# 369 "data/maps/PalletTown/scripts.pory"
	end
# 370 "data/maps/PalletTown/scripts.pory"

# 371 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyJustShowedSign::
# 372 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 373 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 374 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_SignsAreUsefulArentThey
# 375 "data/maps/PalletTown/scripts.pory"
	release
# 376 "data/maps/PalletTown/scripts.pory"
	end
# 377 "data/maps/PalletTown/scripts.pory"

# 378 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayRight::
# 379 "data/maps/PalletTown/scripts.pory"
	walk_right
# 380 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_left
# 381 "data/maps/PalletTown/scripts.pory"
	step_end
# 382 "data/maps/PalletTown/scripts.pory"

# 383 "data/maps/PalletTown/scripts.pory"
PalletTown_Movement_SignLadyMoveOutOfWayLeft::
# 384 "data/maps/PalletTown/scripts.pory"
	walk_left
# 385 "data/maps/PalletTown/scripts.pory"
	walk_in_place_faster_right
# 386 "data/maps/PalletTown/scripts.pory"
	step_end
# 387 "data/maps/PalletTown/scripts.pory"

# 388 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_FatMan::
# 389 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_CanStoreItemsAndMonsInPC, MSGBOX_NPC
# 390 "data/maps/PalletTown/scripts.pory"
	end
# 391 "data/maps/PalletTown/scripts.pory"

# 392 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_OaksLabSign::
# 393 "data/maps/PalletTown/scripts.pory"
	lockall
# 394 "data/maps/PalletTown/scripts.pory"
	famechecker FAMECHECKER_OAK, 0
# 395 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_OakPokemonResearchLab
# 396 "data/maps/PalletTown/scripts.pory"
	releaseall
# 397 "data/maps/PalletTown/scripts.pory"
	end
# 398 "data/maps/PalletTown/scripts.pory"

# 399 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_PlayersHouseSign::
# 400 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PlayersHouse, MSGBOX_SIGN
# 401 "data/maps/PalletTown/scripts.pory"
	end
# 402 "data/maps/PalletTown/scripts.pory"

# 403 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_RivalsHouseSign::
# 404 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_RivalsHouse, MSGBOX_SIGN
# 405 "data/maps/PalletTown/scripts.pory"
	end
# 406 "data/maps/PalletTown/scripts.pory"

# 407 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TownSign::
# 408 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_TownSign, MSGBOX_SIGN
# 409 "data/maps/PalletTown/scripts.pory"
	end
# 410 "data/maps/PalletTown/scripts.pory"

# 411 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_TrainerTips::
# 412 "data/maps/PalletTown/scripts.pory"
	lockall
# 413 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenu
# 414 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 415 "data/maps/PalletTown/scripts.pory"
	releaseall
# 416 "data/maps/PalletTown/scripts.pory"
	end
# 417 "data/maps/PalletTown/scripts.pory"

# 418 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyTrigger::
# 419 "data/maps/PalletTown/scripts.pory"
	lockall
# 420 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_WalkInPlaceFasterRight
# 421 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 422 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 423 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 424 "data/maps/PalletTown/scripts.pory"
	releaseall
# 425 "data/maps/PalletTown/scripts.pory"
	end
# 426 "data/maps/PalletTown/scripts.pory"

# 427 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyShowSign::
# 428 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 429 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_LookCopiedTrainerTipsSign
# 430 "data/maps/PalletTown/scripts.pory"
	closemessage
# 431 "data/maps/PalletTown/scripts.pory"
	delay 20
# 432 "data/maps/PalletTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 433 "data/maps/PalletTown/scripts.pory"
	setflag FLAG_OPENED_START_MENU
# 434 "data/maps/PalletTown/scripts.pory"
	setvar VAR_MAP_SCENE_PALLET_TOWN_SIGN_LADY, 1
# 435 "data/maps/PalletTown/scripts.pory"
	setvar SIGN_LADY_READY, FALSE
# 436 "data/maps/PalletTown/scripts.pory"
	special SetWalkingIntoSignVars
# 437 "data/maps/PalletTown/scripts.pory"
	special DisableMsgBoxWalkaway
# 438 "data/maps/PalletTown/scripts.pory"
	signmsg
# 439 "data/maps/PalletTown/scripts.pory"
	msgbox PalletTown_Text_PressStartToOpenMenuCopy
# 440 "data/maps/PalletTown/scripts.pory"
	normalmsg
# 441 "data/maps/PalletTown/scripts.pory"
	return
# 442 "data/maps/PalletTown/scripts.pory"

# 443 "data/maps/PalletTown/scripts.pory"
PalletTown_EventScript_SignLadyStartShowSign::
# 444 "data/maps/PalletTown/scripts.pory"
	applymovement LOCALID_PALLET_SIGN_LADY, Common_Movement_FacePlayer
# 445 "data/maps/PalletTown/scripts.pory"
	waitmovement 0
# 446 "data/maps/PalletTown/scripts.pory"
	call PalletTown_EventScript_SignLadyShowSign
# 447 "data/maps/PalletTown/scripts.pory"
	release
# 448 "data/maps/PalletTown/scripts.pory"
	end
