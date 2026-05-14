BurnedTower_B1F_MapScripts::
	.byte 0


BurnedTower_B1F_Beasts_Event_Trigger::
# 5 "data/maps/BurnedTower_B1F/scripts.pory"
	lock
# 6 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_PLAYER, BurnedTower_B1F_Approach_Up_Slow
# 7 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 8 "data/maps/BurnedTower_B1F/scripts.pory"
	delay 30
# 9 "data/maps/BurnedTower_B1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 10 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_EXIT
# 11 "data/maps/BurnedTower_B1F/scripts.pory"
	waitse
# 12 "data/maps/BurnedTower_B1F/scripts.pory"
	playbgm MUS_ENCOUNTER_EUSINE, TRUE
# 13 "data/maps/BurnedTower_B1F/scripts.pory"
	clearflag FLAG_HIDE_BURND_T_EUSINE
# 14 "data/maps/BurnedTower_B1F/scripts.pory"
	addobject LOCALID_BURNED_TOWER_EUSINE
# 15 "data/maps/BurnedTower_B1F/scripts.pory"
	msgbox BurnedTower_B1F_Beasts_Event_Trigger_Text_0
# 16 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_B1F_Eusine_Enters
# 17 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 18 "data/maps/BurnedTower_B1F/scripts.pory"
	closemessage
# 19 "data/maps/BurnedTower_B1F/scripts.pory"
	delay 20
# 20 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Emote_Exlamation_Mark
# 21 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 22 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 23 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Jump_In_Place_Up
# 24 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 25 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 26 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_ENTEI, BurnedTower_B1F_Beast_Jump_2_Left
# 27 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 28 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 29 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Jump_2_Up
# 30 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 31 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 32 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_RAIKOU, BurnedTower_B1F_Beast_Jump_2_Right
# 33 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 34 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 35 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_ENTEI, BurnedTower_B1F_Beast_Jump_1_Left
# 36 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 37 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 38 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Jump_1_Up
# 39 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 40 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 41 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_RAIKOU, BurnedTower_B1F_Beast_Jump_1_Up
# 42 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 43 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 44 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_ENTEI, BurnedTower_B1F_Beast_Jump_1_Up
# 45 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 46 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 47 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Jump_2_Up
# 48 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 49 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 50 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_RAIKOU, BurnedTower_B1F_Beast_Jump_1_Right
# 51 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 52 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 53 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_ENTEI, BurnedTower_B1F_Beast_Jump_1_Left
# 54 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 55 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_SUICUNE, BurnedTower_B1F_Beast_Jump_2_Up
# 56 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 57 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 58 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_ENTEI, BurnedTower_B1F_Beast_Jump_2_Left
# 59 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 60 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 61 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_RAIKOU, BurnedTower_B1F_Beast_Jump_2_Right
# 62 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 63 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_LEDGE
# 64 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_RAIKOU, BurnedTower_B1F_Beast_Jump_1_Right
# 65 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 66 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_B1F_Eusine_Walks_Shocked_Face_Player
# 67 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 68 "data/maps/BurnedTower_B1F/scripts.pory"
	msgbox BurnedTower_B1F_Beasts_Event_Trigger_Text_1
# 69 "data/maps/BurnedTower_B1F/scripts.pory"
	msgbox BurnedTower_B1F_Beasts_Event_Trigger_Text_2
# 70 "data/maps/BurnedTower_B1F/scripts.pory"
	msgbox BurnedTower_B1F_Beasts_Event_Trigger_Text_3
# 71 "data/maps/BurnedTower_B1F/scripts.pory"
	msgbox BurnedTower_B1F_Beasts_Event_Trigger_Text_4
# 72 "data/maps/BurnedTower_B1F/scripts.pory"
	closemessage
# 73 "data/maps/BurnedTower_B1F/scripts.pory"
	applymovement LOCALID_BURNED_TOWER_EUSINE, BurnedTower_B1F_Eusine_Leaves
# 74 "data/maps/BurnedTower_B1F/scripts.pory"
	waitmovement
# 75 "data/maps/BurnedTower_B1F/scripts.pory"
	playse SE_EXIT
# 76 "data/maps/BurnedTower_B1F/scripts.pory"
	waitse
# 77 "data/maps/BurnedTower_B1F/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 2
# 78 "data/maps/BurnedTower_B1F/scripts.pory"
	setflag FLAG_HIDE_BURND_T_BEASTS
# 79 "data/maps/BurnedTower_B1F/scripts.pory"
	setflag FLAG_HIDE_BURND_T_EUSINE
# 80 "data/maps/BurnedTower_B1F/scripts.pory"
	removeobject LOCALID_BURNED_TOWER_EUSINE
# 81 "data/maps/BurnedTower_B1F/scripts.pory"
	removeobject LOCALID_BURNED_TOWER_ENTEI
# 82 "data/maps/BurnedTower_B1F/scripts.pory"
	removeobject LOCALID_BURNED_TOWER_SUICUNE
# 83 "data/maps/BurnedTower_B1F/scripts.pory"
	removeobject LOCALID_BURNED_TOWER_RAIKOU
# 84 "data/maps/BurnedTower_B1F/scripts.pory"
	fadedefaultbgm
# 85 "data/maps/BurnedTower_B1F/scripts.pory"
	release
	end


# 89 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Emote_Exlamation_Mark:
# 91 "data/maps/BurnedTower_B1F/scripts.pory"
	emote_exclamation_mark
# 92 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 95 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_In_Place_Up:
# 97 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_in_place_up
# 98 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_in_place_up
# 99 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 102 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_2_Up:
# 104 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_2_up
# 105 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 108 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_1_Up:
# 110 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_up
# 111 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 114 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_2_Left:
# 116 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_2_left
# 117 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 120 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_2_Right:
# 122 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_2_right
# 123 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 126 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_1_Left:
# 128 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_left
# 129 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 132 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Beast_Jump_1_Right:
# 134 "data/maps/BurnedTower_B1F/scripts.pory"
	jump_right
# 135 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 138 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Approach_Up_Slow:
# 140 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_up
# 141 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 144 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Approach_Left_Face_Up_Slow:
# 146 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_left
# 147 "data/maps/BurnedTower_B1F/scripts.pory"
	delay_4
# 148 "data/maps/BurnedTower_B1F/scripts.pory"
	face_up
# 149 "data/maps/BurnedTower_B1F/scripts.pory"
	delay_4
# 150 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 153 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Eusine_Enters:
# 155 "data/maps/BurnedTower_B1F/scripts.pory"
	set_visible
# 156 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_down
# 156 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_down
# 157 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_right
# 158 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 161 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Eusine_Walks_Shocked_Face_Player:
# 163 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_right
# 163 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_right
# 163 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_right
# 164 "data/maps/BurnedTower_B1F/scripts.pory"
	delay_8
# 165 "data/maps/BurnedTower_B1F/scripts.pory"
	face_down
# 166 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

# 169 "data/maps/BurnedTower_B1F/scripts.pory"
BurnedTower_B1F_Eusine_Leaves:
# 171 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_left
# 171 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_left
# 171 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_left
# 171 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_left
# 172 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_up
# 172 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_up
# 172 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_up
# 172 "data/maps/BurnedTower_B1F/scripts.pory"
	walk_fast_up
# 173 "data/maps/BurnedTower_B1F/scripts.pory"
	step_end

BurnedTower_B1F_Beasts_Event_Trigger_Text_0:
# 15 "data/maps/BurnedTower_B1F/scripts.pory"
	.string "???: Hey, you there!\n"
	.string "This place isn't safe... Get out!$"

BurnedTower_B1F_Beasts_Event_Trigger_Text_1:
# 68 "data/maps/BurnedTower_B1F/scripts.pory"
	.string "???: That... Was... Did... You...\n"
	.string "...You did see that... Right?!$"

BurnedTower_B1F_Beasts_Event_Trigger_Text_2:
# 69 "data/maps/BurnedTower_B1F/scripts.pory"
	.string "EUSINE: My name's EUSINE...\n"
	.string "And you are...? {PLAYER}?\p"
	.string "Glad to meet you! I was shocked!\n"
	.string "SUICUNE raced by like a blur!$"

BurnedTower_B1F_Beasts_Event_Trigger_Text_3:
# 70 "data/maps/BurnedTower_B1F/scripts.pory"
	.string "Right in front of my eyes, no less!\n"
	.string "I've been searching for SUICUNE...\p"
	.string "It's been nearly eight years, and...\n"
	.string "I finally got to see it!$"

BurnedTower_B1F_Beasts_Event_Trigger_Text_4:
# 71 "data/maps/BurnedTower_B1F/scripts.pory"
	.string "I'm all choked up! {PLAYER}...\n"
	.string "I owe this all to you! Thank you!\p"
	.string "I'm going to track SUICUNE down...\n"
	.string "{PLAYER}, let's meet again! Farewell!$"
