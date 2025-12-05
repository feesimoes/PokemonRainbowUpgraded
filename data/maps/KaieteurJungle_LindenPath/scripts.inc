KaieteurJungle_LindenPath_MapScripts::
# 3 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, KaieteurJungle_LindenPath_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

KaieteurJungle_LindenPath_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 8
	goto_if_eq KaieteurJungle_LindenPath_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

KaieteurJungle_LindenPath_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	clearflag FLAG_HIDE_LINDEN_BLAINE
	return


# 12 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_FaceUp:
# 14 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	face_up
# 15 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 18 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_WalkUp:
# 20 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 21 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 24 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_WalkUp_6:
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 26 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_up
# 27 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 30 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_FaceRight:
# 32 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	face_right
# 33 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 36 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_FaceDown:
# 38 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	face_down
# 39 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 42 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_FaceLeft:
# 44 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	face_left
# 45 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 48 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_Emote:
# 50 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	emote_exclamation_mark
# 51 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 54 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_WalkDown_2:
# 56 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 56 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 57 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

# 60 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
KaieteurJungle_LindenPath_WalkDown_6:
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 62 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	walk_down
# 63 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	step_end

KaieteurJungle_LindenPath_EventScript_Blaine::
# 68 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	lock
# 69 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 70 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceRight
# 71 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 72 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_0
# 73 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceDown
# 74 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 75 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_1
# 76 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	closemessage
# 77 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceLeft
# 78 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 79 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 30
# 80 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_WalkUp
# 81 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 82 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceRight
# 83 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 84 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_WalkUp_6
# 85 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 86 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 30
# 87 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_2
# 88 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_FaceRight
# 89 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 90 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 30
# 91 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_3, MSGBOX_YESNO
# 92 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KaieteurJungle_LindenPath_EventScript_Blaine_2
# 99 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_4
# 100 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_5
# 101 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceLeft
# 102 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
KaieteurJungle_LindenPath_EventScript_Blaine_1:
# 104 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	fadenewbgm MUS_ENCOUNTER_ROCKET_BOSS
# 105 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 30
# 106 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_Emote
# 107 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 108 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmessage
# 109 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	closemessage
# 110 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_6
# 111 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_7
# 112 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_Emote
# 113 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 114 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_8
# 115 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_9
# 116 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_10
# 117 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_11
# 118 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_12
# 119 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_13
# 120 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_14
# 121 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_15
# 122 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_16
# 123 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_17
# 124 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_18
# 125 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_19
# 126 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_20
# 127 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 128 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_21
# 129 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_22
# 130 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_23
# 131 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_24
# 132 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_25
# 133 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_WalkDown_2
# 134 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 135 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 24
# 136 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_FaceUp
# 137 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 138 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 24
# 139 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_26
# 140 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmessage
# 141 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	closemessage
# 142 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	fadedefaultbgm
# 143 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 24
# 144 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_GIOVANNI, KaieteurJungle_LindenPath_WalkDown_6
# 145 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 146 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 60
# 147 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceRight
# 148 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 149 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_27
# 150 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	fadeoutbgm 0
# 151 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 152 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 153 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_Emote
# 154 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 155 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 156 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 157 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_28
# 158 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 159 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 160 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_29
# 161 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 162 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 163 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_30
# 164 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 165 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 166 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_31
# 167 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_PHONE_RING_LONG
# 168 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 169 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceDown
# 170 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 171 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	delay 24
# 172 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_SELECT
# 173 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_32
# 174 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playse SE_BOO
# 175 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitse
# 176 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceRight
# 177 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
# 178 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	msgbox KaieteurJungle_LindenPath_EventScript_Blaine_Text_33
# 179 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	closemessage
# 180 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	playbgm MUS_KANTO_ROUTE_GATE, TRUE
# 181 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 182 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 183 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 9
# 184 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	warp MAP_SILPH_CO_11F, 9, 10
# 185 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	release
	end

KaieteurJungle_LindenPath_EventScript_Blaine_2:
# 94 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	applymovement LOCALID_LINDEN_PATH_BLAINE, KaieteurJungle_LindenPath_FaceLeft
# 95 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	waitmovement
	goto KaieteurJungle_LindenPath_EventScript_Blaine_1


KaieteurJungle_LindenPath_EventScript_Blaine_Text_0:
# 72 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "{PLAYER}!\n"
	.string "This was our old trade route.\p"
	.string "When I used to do work for\n"
	.string "GIOVANNI, we'd be safe here...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_1:
# 75 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "I don't see him hiding here\n"
	.string "anywhere, though...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_2:
# 87 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "Anyways, we should probably look\n"
	.string "ahead here for clues...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_3:
# 91 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "...\n"
	.string "...Hah?\p"
	.string "...He's standing right behind\n"
	.string "me, isn't he?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_4:
# 99 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "Hah! That's great!\n"
	.string "So that looming evil presence...\p"
	.string "I was just imagining it!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_5:
# 100 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "As I was saying, he isn't\n"
	.string "anywhere in this old cave...\p"
	.string "Onward!\n"
	.string "We shall search further!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_6:
# 110 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: DR. BLAINE?\n"
	.string "How goes the search?\p"
	.string "...And, who is your friend\n"
	.string "over there?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_7:
# 111 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Hah?! GIOVANNI!\n"
	.string "We've got you cornered, now!\p"
	.string "You'd better have BURN HEAL!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_8:
# 114 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: Oh?\n"
	.string "You're challenging me?\p"
	.string "Instead of thanking me for\n"
	.string "my generous funds, investments...\p"
	.string "You're coming right at me?\n"
	.string "I don't understand.$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_9:
# 115 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: What do you mean?!\n"
	.string "You haven't funded good in years!\p"
	.string "In fact, your stolen 'funds'...\n"
	.string "It makes you an outright villain!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_10:
# 116 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: I'm sorry?\n"
	.string "Is there a problem, DR. BLAINE?!\p"
	.string "You simply cannot accuse me of\n"
	.string "such things!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_11:
# 117 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Actually, it's more verifiable\n"
	.string "than your 'TEAM ROCKET' scam!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_12:
# 118 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: 'TEAM ROCKET'...\n"
	.string "Hmm... I like that concept.\p"
	.string "Protect the world from devastation,\n"
	.string "unify all people... POKéMON...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_13:
# 119 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Hah! The old motto...\n"
	.string "Almost...\p"
	.string "But, yet, not quite!\n"
	.string "How did you get it wrong?!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_14:
# 120 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: Hm? No, I was merely\n"
	.string "thinking aloud...\p"
	.string "Regardless, DR. BLAINE, what seems\n"
	.string "to be the problem?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_15:
# 121 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: You know what?\n"
	.string "I've had enough of your games.\p"
	.string "Just hand over that prototype\n"
	.string "you stole from SILPH CO.$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_16:
# 122 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "I'm sure GEORGE will personally\n"
	.string "deal with the likes of you.$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_17:
# 123 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: I'm sorry... What?\n"
	.string "Prototype? SILPH...?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_18:
# 124 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Have you lost your mind?!\n"
	.string "Wait...\p"
	.string "You haven't addressed me as\n"
	.string "DR. BLAINE ever since...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_19:
# 125 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: ...Since, what, exactly?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_20:
# 126 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Are you that clueless?!\n"
	.string "Imbecile! It's just BLAINE, now!\p"
	.string "'DR.' BLAINE contributed to your\n"
	.string "evil cloning schemes!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_21:
# 128 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: ...Cloning?\n"
	.string "If such a thing were possible...\p"
	.string "Perhaps, DR. FUJI'S grief...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_22:
# 129 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: It is possible!\n"
	.string "Forbidden technology! Banned!\p"
	.string "How can you simply forget your\n"
	.string "insane, evil ambitions?!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_23:
# 130 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "Because of you, MEW is gone!\n"
	.string "AMBER is long gone!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_24:
# 131 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: ...I have no idea what's\n"
	.string "gotten into you...\p"
	.string "Yes, AMBER recently died...\n"
	.string "But, DR. FUJI...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_25:
# 132 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "I... I need some time to...\n"
	.string "Process all this crazy talk.$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_26:
# 139 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "GIOVANNI: Oh, right... DR.-\n"
	.string "I mean... BLAINE.\p"
	.string "Stop it. Get some help...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_27:
# 149 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: What...\n"
	.string "What just happened?!\p"
	.string "He got away! But... Even so,\n"
	.string "He wasn't the thief...?$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_28:
# 157 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "BLAINE: Hmm, this sound is...$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_29:
# 160 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "I think it's coming from...\n"
	.string "within me?!\p"
	.string "...What has GIOVANNI done to\n"
	.string "me?! {PLAYER}? Did you see?!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_30:
# 163 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "Hah, wait!\n"
	.string "Let me check my pockets!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_31:
# 166 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "Hmm... Is this...\n"
	.string "The prototype?!$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_32:
# 173 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "MR. PRESIDENT!\n"
	.string "Hello!\p"
	.string "...Yes, understood.\n"
	.string "...Well, we ran into...\p"
	.string "No, we didn't, but...\n"
	.string "Right! We'll bring it over.$"

KaieteurJungle_LindenPath_EventScript_Blaine_Text_33:
# 178 "data/maps/KaieteurJungle_LindenPath/scripts.pory"
	.string "That was the PRESIDENT.\n"
	.string "We've got the prototype, so...\p"
	.string "Let's head back now, {PLAYER}!$"
