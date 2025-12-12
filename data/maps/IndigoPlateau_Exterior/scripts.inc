# 1 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 2 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_MapScripts::
# 3 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_Exterior_OnTransition
# 4 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_Exterior_OnFrame
# 5 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.byte 0
# 6 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 7 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnTransition::
# 8 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_INDIGO_PLATEAU_EXTERIOR
# 9 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	call_if_eq VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_PlayCreditsMusic
# 10 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 11 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 12 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_PlayCreditsMusic::
# 13 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	playbgm MUS_CREDITS, 0
# 14 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	return
# 15 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 16 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_OnFrame::
# 17 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	map_script_2 VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 1, IndigoPlateau_Exterior_EventScript_Credits
# 18 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.2byte 0
# 19 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 20 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Event_Message_Sign::
# 21 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	msgbox IndigoPlateau_Exterior_Text_Sign, MSGBOX_SIGN
# 22 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 23 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 24 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Text_Sign::
# 25 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "INDIGO PLATEAU\n"
# 26 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "The Ultimate Goal of TRAINERS!\p"
# 27 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	.string "POKéMON LEAGUE HQ$"
# 28 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 29 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ After beating the champion, you are warped to the main
# 30 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ entrance of Indigo Plateau. This script starts running
# 31 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ immediately after your walking animation.
# 32 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ The script is timed to the music.
# 33 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_EventScript_Credits::
# 34 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, IndigoPlateau_Exterior_EventScript_Credits2
# 35 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lockall
# 36 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 105
# 37 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 38 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival exits building. Spawn a dummy object to lock the camera.
# 39 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 23, 14
# 40 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 41 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special SpawnCameraObject
# 42 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_RIVAL
# 43 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalExitBuilding
# 44 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay
# 45 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 46 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 23, 14
# 47 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 48 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 49 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Rival runs off
# 50 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave
# 51 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_RIVAL, IndigoPlateau_Exterior_Movement_RivalLeave
# 52 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 53 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 54 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 55 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak exits building
# 56 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 23, 14
# 57 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 58 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK
# 59 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakExitBuilding
# 60 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 61 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 23, 14
# 62 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 63 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 160
# 64 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 65 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Oak looks at player, then walks off
# 66 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave
# 67 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK, IndigoPlateau_Exterior_Movement_OakLeave
# 68 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 69 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 70 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 71 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player begin to leave
# 72 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 73 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 74 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 155
# 75 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 76 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 77 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 90
# 78 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 79 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Player runs off
# 80 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 81 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 82 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 83 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement 0
# 84 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 85 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	@ Reset the map state and roll the credits
# 86 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special RemoveCameraObject
# 87 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 88 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_RIVAL
# 89 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK
# 90 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setflag FLAG_SYS_GAME_CLEAR
# 91 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special DoCredits
# 92 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 93 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	releaseall
# 94 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	end
# 95 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 96 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerLeave::
# 97 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 98 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 99 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 100 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 101 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 102 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	player_run_down
# 103 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 104 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 105 "data/maps/IndigoPlateau_Exterior/scripts.pory"
@ Unused
# 106 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerExitBuilding::
# 107 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 108 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 109 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 110 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 111 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchRivalLeave::
# 112 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 113 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_4
# 114 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 115 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 116 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 117 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchOakLeave::
# 118 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 119 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_right
# 120 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 121 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 122 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 123 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 124 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 125 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 126 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 127 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 128 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 129 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 130 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 131 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 132 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 133 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 134 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerBeginLeave::
# 135 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_right
# 136 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 137 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 138 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 139 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 140 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 141 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 142 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 143 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerTurnAround::
# 144 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 145 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 146 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 147 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PushPlayerOutOfWay::
# 148 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_right
# 149 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lock_facing_direction
# 150 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_left
# 151 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	unlock_facing_direction
# 152 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 153 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 154 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerFaceLeague::
# 155 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_up
# 156 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 157 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 158 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalLeave::
# 159 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 160 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 161 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 162 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 163 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 164 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 165 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 166 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 167 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 168 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_RivalExitBuilding::
# 169 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_fast_down
# 170 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 171 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 172 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave::
# 173 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_left
# 174 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 175 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 176 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 177 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 178 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 179 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 180 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 181 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 182 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 183 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 184 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 185 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 186 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 187 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 188 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 189 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 190 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 191 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 192 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 193 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
# 194 "data/maps/IndigoPlateau_Exterior/scripts.pory"

# 195 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakExitBuilding::
# 196 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 197 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

IndigoPlateau_Exterior_EventScript_Credits2::
# 203 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	lockall
# 204 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 105
# 205 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 23, 14
# 206 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 207 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special SpawnCameraObject
# 208 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_LANCE
# 209 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_MovePlayerOutOfWay
# 210 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 211 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_LANCE, IndigoPlateau_Exterior_Movement_Lance_ExitsBuilding
# 212 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 213 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 23, 14
# 214 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 216 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_FaceDown_Emote
# 217 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 218 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_LANCE, IndigoPlateau_Exterior_Movement_FaceDown_Emote
# 219 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 220 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 222 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	addobject LOCALID_CREDITS_PROF_OAK_2
# 223 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK_2, IndigoPlateau_Exterior_Movement_OakEnters
# 224 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 225 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitdooranim
# 226 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 160
# 228 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerWatchLanceAndOakLeave
# 229 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 230 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	opendoor 23, 14
# 231 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_LANCE, IndigoPlateau_Exterior_Movement_LanceLeave
# 232 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 233 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_CREDITS_PROF_OAK_2, IndigoPlateau_Exterior_Movement_OakLeave_FollowLance
# 234 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 235 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	closedoor 23, 14
# 236 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 100
# 238 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerBeginLeave
# 239 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 240 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 155
# 241 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerFaceLeague
# 242 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 243 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay 90
# 245 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerTurnAround
# 246 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 247 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, IndigoPlateau_Exterior_Movement_PlayerLeave
# 248 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitmovement
# 250 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special RemoveCameraObject
# 251 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	setvar VAR_MAP_SCENE_INDIGO_PLATEAU_EXTERIOR, 0
# 252 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_LANCE
# 253 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	removeobject LOCALID_CREDITS_PROF_OAK_2
# 254 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	special DoCredits
# 255 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	waitstate
# 256 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	releaseall
	end


# 260 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakEnters:
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 262 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 263 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 266 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_MovePlayerOutOfWay:
# 268 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_up
# 269 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_left
# 270 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_right
# 271 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 274 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_Lance_ExitsBuilding:
# 276 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_down
# 277 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 278 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_left
# 279 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 282 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_LanceLeave:
# 284 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 285 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_left_fast
# 286 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 287 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 288 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 289 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 290 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	set_invisible
# 291 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 294 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_OakLeave_FollowLance:
# 296 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 297 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 298 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 299 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 299 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_up
# 300 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	set_invisible
# 301 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 304 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_FaceDown_Emote:
# 306 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	face_down_fast
# 307 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	emote_exclamation_mark
# 308 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end

# 311 "data/maps/IndigoPlateau_Exterior/scripts.pory"
IndigoPlateau_Exterior_Movement_PlayerWatchLanceAndOakLeave:
# 313 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_8
# 314 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_right
# 315 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 316 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 317 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 318 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	delay_16
# 319 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	walk_in_place_faster_down
# 320 "data/maps/IndigoPlateau_Exterior/scripts.pory"
	step_end
