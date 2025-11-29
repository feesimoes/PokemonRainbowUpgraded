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
# 97 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 98 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_3
# 99 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 100 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 101 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_SinnohFerry_1:
# 72 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 73 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_0, MSGBOX_YESNO
# 74 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 75 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq VermilionHarbor_EventScript_SinnohFerry_4
# 83 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_2
# 84 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 85 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_CANALAVE_CITY
# 86 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 87 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 20
# 88 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 89 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSeagallopFerryScene
# 90 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 91 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_SinnohFerry_4:
# 77 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_SinnohFerry_Text_1
# 78 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end


VermilionHarbor_EventScript_JohtoFerry::
# 108 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 109 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_JohtoFerry_Text_0
# 110 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 111 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 112 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end


VermilionHarbor_EventScript_GuyanaFerry::
# 118 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 119 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_GuyanaFerry_Text_0
# 120 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 121 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 3
	goto_if_gt VermilionHarbor_EventScript_GuyanaFerry_2
# 149 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
VermilionHarbor_EventScript_GuyanaFerry_1:
# 151 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_GuyanaFerry_2:
# 123 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_GUYANA_FERRYMAN, VermilionHarbor_EventScript_GuyanaFerry_NoticePlayer
# 124 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 125 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 126 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_GuyanaFerry_Text_1, MSGBOX_YESNO
# 127 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionHarbor_EventScript_GuyanaFerry_5
# 140 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_GuyanaFerry_Text_3
# 141 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 142 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_GUYANA_FERRYMAN, VermilionHarbor_EventScript_GuyanaFerry_FaceRight
# 143 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 144 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
	goto VermilionHarbor_EventScript_GuyanaFerry_1

VermilionHarbor_EventScript_GuyanaFerry_5:
# 129 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_GuyanaFerry_Text_2
# 130 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 131 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_LINDEN_TOWN
# 132 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 133 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 20
# 134 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 135 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSeagallopFerryScene
# 136 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
	goto VermilionHarbor_EventScript_GuyanaFerry_1


# 155 "data/maps/SSAnne_Exterior/scripts.pory"
VermilionHarbor_EventScript_GuyanaFerry_NoticePlayer:
# 157 "data/maps/SSAnne_Exterior/scripts.pory"
	emote_exclamation_mark
# 158 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

# 161 "data/maps/SSAnne_Exterior/scripts.pory"
VermilionHarbor_EventScript_GuyanaFerry_FaceRight:
# 163 "data/maps/SSAnne_Exterior/scripts.pory"
	face_right
# 164 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

VermilionHarbor_EventScript_MrFuji::
# 169 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 3
	goto_if_eq VermilionHarbor_EventScript_MrFuji_1
# 229 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 230 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 231 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_8
# 232 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 233 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_HIDE_VERMILION_MR_FUJI
# 234 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_HIDE_VERMILION_BLAINE
# 235 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_MrFuji_1:
# 171 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 172 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 173 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_0
# 174 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 175 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_VERMILION_MR_FUJI, VermilionHarbor_EventScript_GuyanaFerry_FaceRight
# 176 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 177 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_1
# 178 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_2
# 179 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 180 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 181 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_VERMILION_MR_FUJI
# 182 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_HIDE_VERMILION_MR_FUJI
# 183 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 184 "data/maps/SSAnne_Exterior/scripts.pory"
	getplayerxy VAR_TEMP_8, VAR_TEMP_9
# 185 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_TEMP_9, 5
	goto_if_eq VermilionHarbor_EventScript_MrFuji_5
# 192 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_VermilionHarbor_WalkRight
# 193 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
VermilionHarbor_EventScript_MrFuji_4:
# 195 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_3, MSGBOX_YESNO
# 196 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 197 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionHarbor_EventScript_MrFuji_9
# 220 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_6
# 221 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_7
# 222 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
VermilionHarbor_EventScript_MrFuji_8:
# 224 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_MrFuji_5:
# 187 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_VermilionHarbor_WalkUp_FaceRight
# 188 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
	goto VermilionHarbor_EventScript_MrFuji_4

VermilionHarbor_EventScript_MrFuji_9:
# 199 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 4
# 200 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_HIDE_VERMILION_BLAINE
# 201 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_4
# 202 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 203 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_VERMILION_BLAINE, VermilionHarbor_EventScript_GuyanaFerry_FaceRight
# 204 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 205 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_5
# 206 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 207 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_GUYANA_FERRYMAN, VermilionHarbor_EventScript_GuyanaFerry_NoticePlayer
# 208 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 209 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 210 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_LINDEN_TOWN
# 211 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 212 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 20
# 213 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 214 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSeagallopFerryScene
# 215 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 216 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_VERMILION_BLAINE
	goto VermilionHarbor_EventScript_MrFuji_8


# 240 "data/maps/SSAnne_Exterior/scripts.pory"
Movement_VermilionHarbor_WalkRight:
# 242 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_right
# 243 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

# 246 "data/maps/SSAnne_Exterior/scripts.pory"
Movement_VermilionHarbor_WalkUp_FaceRight:
# 248 "data/maps/SSAnne_Exterior/scripts.pory"
	walk_up
# 249 "data/maps/SSAnne_Exterior/scripts.pory"
	face_right
# 250 "data/maps/SSAnne_Exterior/scripts.pory"
	step_end

VermilionHarbor_EventScript_Blaine::
# 255 "data/maps/SSAnne_Exterior/scripts.pory"
	lock
# 256 "data/maps/SSAnne_Exterior/scripts.pory"
	faceplayer
# 257 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_Blaine_Text_0, MSGBOX_YESNO
# 258 "data/maps/SSAnne_Exterior/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VermilionHarbor_EventScript_Blaine_2
# 280 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_Blaine_Text_1
# 281 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
VermilionHarbor_EventScript_Blaine_1:
# 283 "data/maps/SSAnne_Exterior/scripts.pory"
	release
	end

VermilionHarbor_EventScript_Blaine_2:
# 260 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 4
# 261 "data/maps/SSAnne_Exterior/scripts.pory"
	setflag FLAG_HIDE_VERMILION_BLAINE
# 262 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 263 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_VERMILION_BLAINE, VermilionHarbor_EventScript_GuyanaFerry_FaceRight
# 264 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 265 "data/maps/SSAnne_Exterior/scripts.pory"
	msgbox VermilionHarbor_EventScript_MrFuji_Text_5
# 266 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmessage
# 267 "data/maps/SSAnne_Exterior/scripts.pory"
	applymovement LOCALID_GUYANA_FERRYMAN, VermilionHarbor_EventScript_GuyanaFerry_NoticePlayer
# 268 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_VERMILION_CITY
# 269 "data/maps/SSAnne_Exterior/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_LINDEN_TOWN
# 270 "data/maps/SSAnne_Exterior/scripts.pory"
	waitmovement
# 271 "data/maps/SSAnne_Exterior/scripts.pory"
	closemessage
# 272 "data/maps/SSAnne_Exterior/scripts.pory"
	delay 20
# 273 "data/maps/SSAnne_Exterior/scripts.pory"
	fadescreen FADE_TO_BLACK
# 274 "data/maps/SSAnne_Exterior/scripts.pory"
	special DoSeagallopFerryScene
# 275 "data/maps/SSAnne_Exterior/scripts.pory"
	waitstate
# 276 "data/maps/SSAnne_Exterior/scripts.pory"
	removeobject LOCALID_VERMILION_BLAINE
	goto VermilionHarbor_EventScript_Blaine_1


VermilionHarbor_EventScript_SinnohFerry_Text_0:
# 73 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Welcome, {PLAYER}!\n"
	.string "Packed up and ready to go?\p"
	.string "C'mon! Let's set sail!\n"
	.string "$"

VermilionHarbor_EventScript_SinnohFerry_Text_1:
# 77 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Alright, I'll be here...\n"
	.string "Come back when you're ready!$"

VermilionHarbor_EventScript_SinnohFerry_Text_2:
# 83 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "SINNOH awaits!\n"
	.string "C'mon, let's go!$"

VermilionHarbor_EventScript_SinnohFerry_Text_3:
# 98 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "You want a ride? Sorry, kiddo!\n"
	.string "You'll need V.I.P.'s approval!\p"
	.string "Who?\n"
	.string "...Well, she's busy!\p"
	.string "Heard she's interviewing {RIVAL}\n"
	.string "in SAFFRON'S SILPH CO.!\p"
	.string "Although, eh...\n"
	.string "She should've been back by now...$"

VermilionHarbor_EventScript_JohtoFerry_Text_0:
# 109 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "You want a ride?\n"
	.string "Oh... Sorry, but...\p"
	.string "Something serious is going on in\n"
	.string "our usual route, you see.\p"
	.string "Whirlpools and treacherous storms\n"
	.string "paused such travel, for now.$"

VermilionHarbor_EventScript_GuyanaFerry_Text_0:
# 119 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Don't just stand there, mate!\n"
	.string "Keep loading the truck!$"

VermilionHarbor_EventScript_GuyanaFerry_Text_1:
# 126 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Ah, {PLAYER}!\n"
	.string "You're back?\p"
	.string "Did you want to return\n"
	.string "to the GUYANA REGION?$"

VermilionHarbor_EventScript_GuyanaFerry_Text_2:
# 129 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hope you're prepared!\n"
	.string "I'll try to make it quick.$"

VermilionHarbor_EventScript_GuyanaFerry_Text_3:
# 140 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Understood, have a nice day.$"

VermilionHarbor_EventScript_MrFuji_Text_0:
# 173 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hm...\n"
	.string "{PLAYER}, welcome.\p"
	.string "I do apologize for the\n"
	.string "confusion, if any...\p"
	.string "Quizzes sure do have a\n"
	.string "way of keeping minds sharp!$"

VermilionHarbor_EventScript_MrFuji_Text_1:
# 177 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "BLAINE, my dear friend.\n"
	.string "It was good to see you.\p"
	.string "Take care in your journey,\n"
	.string "the GUYANA REGION can be...\p"
	.string "Very unforgiving, to say,\n"
	.string "at the least.$"

VermilionHarbor_EventScript_MrFuji_Text_2:
# 178 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "GIOVANNI will use the harsh,\n"
	.string "unfamiliar ecosystem to advantage.\p"
	.string "{PLAYER} is in good hands...\n"
	.string "Their heart is true.$"

VermilionHarbor_EventScript_MrFuji_Text_3:
# 195 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hah!\n"
	.string "Well, you heard the doctor!\p"
	.string "So, are you ready?\n"
	.string "BAG stocked up, and all?$"

VermilionHarbor_EventScript_MrFuji_Text_4:
# 201 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hah! I'll burn the way\n"
	.string "forward! Fear not!$"

VermilionHarbor_EventScript_MrFuji_Text_5:
# 205 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Ahem!\n"
	.string "We're ready...$"

VermilionHarbor_EventScript_MrFuji_Text_6:
# 220 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hah! Don't be afraid!\n"
	.string "I'm capable of helping you!\p"
	.string "See, my plan is simple...\n"
	.string "I'll burn the way forward!\p"
	.string "Trees cannot use BURN HEAL,\n"
	.string "so GIOVANNI will be exposed!$"

VermilionHarbor_EventScript_MrFuji_Text_7:
# 221 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Trust me, it's perfectly safe!\n"
	.string "I've done the sort before.\p"
	.string "Come back when you're ready!$"

VermilionHarbor_EventScript_MrFuji_Text_8:
# 231 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hmm... Wait a second!\n"
	.string "I'm not supposed to be here.$"

VermilionHarbor_EventScript_Blaine_Text_0:
# 257 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hah, {PLAYER}!\n"
	.string "Ready now?$"

VermilionHarbor_EventScript_Blaine_Text_1:
# 280 "data/maps/SSAnne_Exterior/scripts.pory"
	.string "Hah, don't be afraid!\n"
	.string "Come back if you're ready!\p"
	.string "I'll be here, thinking about\n"
	.string "how to expose GIOVANNI...$"
