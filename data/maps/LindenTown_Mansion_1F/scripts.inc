LindenTown_Mansion_1F_MapScripts::
# 3 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LindenTown_Mansion_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LindenTown_Mansion_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 6
	goto_if_eq LindenTown_Mansion_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

LindenTown_Mansion_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
	return


LindenTown_Mansion_1F_BlaineIsOccupied::
# 14 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	lock
# 15 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 16 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_BlaineIsOccupied_Text_0
# 17 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 18 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end


LindenTown_Mansion_1F_George::
# 24 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	lock
# 25 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	faceplayer
# 26 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 12
	goto_if_eq LindenTown_Mansion_1F_George_2
# 47 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_0
# 48 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_1
# 49 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
LindenTown_Mansion_1F_George_1:
# 51 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end

LindenTown_Mansion_1F_George_2:
# 28 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 29 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq LindenTown_Mansion_1F_George_5
# 38 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_2
# 39 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	giveitem ITEM_OLD_SEA_MAP, 1
# 40 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_3
# 41 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 42 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
	goto LindenTown_Mansion_1F_George_1

LindenTown_Mansion_1F_George_5:
# 31 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_0
# 32 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_George_Text_1
# 33 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 34 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
	goto LindenTown_Mansion_1F_George_1


LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left::
# 57 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	lock
# 58 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 59 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Right
# 60 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 61 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_0
# 62 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_1
# 63 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_2
# 64 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_3
# 65 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Walk_Right
# 66 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 67 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 68 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 69 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_4, MSGBOX_YESNO
# 70 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 71 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 72 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_2
# 78 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_6
# 79 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_7
LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_1:
# 81 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_8
# 82 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_9
# 83 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_10
# 84 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_11, MSGBOX_YESNO
# 85 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 86 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 87 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_6
# 125 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 126 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 127 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 128 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_20
# 129 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_21
# 130 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_22
# 131 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 132 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 133 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 134 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	removeobject LOCALID_LINDEN_BLAINE
# 135 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 136 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadedefaultbgm
# 137 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 138 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 139 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_23
# 140 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	giveitem ITEM_OLD_SEA_MAP, 1
# 141 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_24
# 142 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_25
# 143 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 144 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 7
# 146 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_2:
# 74 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_5
	goto LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_1

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_6:
# 89 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_12
# 90 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_13
# 91 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_14
# 92 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 93 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 94 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_15
# 95 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 96 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 97 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_16
# 98 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 99 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 100 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_17, MSGBOX_YESNO
# 101 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 102 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 103 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_10
# 112 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_19
# 113 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 114 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 115 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 116 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	removeobject LOCALID_LINDEN_BLAINE
# 117 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 118 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 6
LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_9:
# 120 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_10:
# 105 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_18
# 106 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 107 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 6
# 108 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	warp MAP_LINDEN_TOWN_MANSION_B1F, 11, 12
	goto LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_9


LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right::
# 152 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	lock
# 153 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 154 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Left
# 155 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 156 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_0
# 157 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_1
# 158 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_2
# 159 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_3
# 160 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Walk_Left
# 161 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 162 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 163 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 164 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_4, MSGBOX_YESNO
# 165 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 166 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 167 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_2
# 173 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_6
# 174 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_7
LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_1:
# 176 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_8
# 177 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_9
# 178 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_10
# 179 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_11, MSGBOX_YESNO
# 180 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 181 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 182 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_6
# 220 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 221 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 222 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 223 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_20
# 224 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_21
# 225 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_22
# 226 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 227 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 228 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 229 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	removeobject LOCALID_LINDEN_BLAINE
# 230 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 231 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadedefaultbgm
# 232 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 233 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 234 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_23
# 235 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	giveitem ITEM_OLD_SEA_MAP, 1
# 236 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_24
# 237 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_25
# 238 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 239 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 7
# 241 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_2:
# 169 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_5
	goto LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_1

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_6:
# 184 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_12
# 185 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_13
# 186 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_14
# 187 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 188 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 189 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_15
# 190 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Up
# 191 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 192 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_16
# 193 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_1F_Face_Down
# 194 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmovement
# 195 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_17, MSGBOX_YESNO
# 196 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	waitmessage
# 197 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 198 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_10
# 207 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_19
# 208 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 209 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 210 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 211 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	removeobject LOCALID_LINDEN_BLAINE
# 212 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 213 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 6
LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_9:
# 215 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	release
	end

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_10:
# 200 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	msgbox LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_18
# 201 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	closemessage
# 202 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 6
# 203 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	warp MAP_LINDEN_TOWN_MANSION_B1F, 11, 12
	goto LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Right_9


# 245 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Face_Left:
# 247 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	face_left
# 248 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

# 250 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Walk_Left:
# 252 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	walk_left
# 253 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

# 256 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Face_Right:
# 258 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	face_right
# 259 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

# 262 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Walk_Right:
# 264 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	walk_right
# 265 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

# 268 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Face_Up:
# 270 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	face_up
# 271 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

# 274 "data/maps/LindenTown_Mansion_1F/scripts.pory"
LindenTown_Mansion_1F_Face_Down:
# 276 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	face_down
# 277 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	step_end

LindenTown_Mansion_1F_BlaineIsOccupied_Text_0:
# 16 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE seems to be locked in\n"
	.string "a conversation with the man...\p"
	.string "Maybe he will notice if you're\n"
	.string "in front of them?$"

LindenTown_Mansion_1F_George_Text_0:
# 31 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Bienvenu! Welcome to my mansion.\n"
	.string "I do hope you'll look around.\p"
	.string "Votre art préféré?\n"
	.string "My favorite was 'A MAN AND MEW'.$"

LindenTown_Mansion_1F_George_Text_1:
# 32 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Alas... I regrettably donated it,\n"
	.string "but it is in good hands.$"

LindenTown_Mansion_1F_George_Text_2:
# 38 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Bienvenu!\n"
	.string "Ah, I almost forgot, {PLAYER}...\p"
	.string "Perhaps this navigation chart will\n"
	.string "be of use in your adventures?$"

LindenTown_Mansion_1F_George_Text_3:
# 40 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Take care, now!\n"
	.string "Send MR. FUJI my regards.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_0:
# 61 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Hah!\n"
	.string "Don't be ridiculous, GEORGE!\p"
	.string "You can't hide GIOVANNI behind\n"
	.string "your rich stacks of wealth!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_1:
# 62 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: C'est de la merde...\n"
	.string "Weren't you that ROCKET scientist?\p"
	.string "You dare barge into my own\n"
	.string "private residence, demanding?$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_2:
# 63 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GIOVANNI is not our problem!\n"
	.string "Believe me, if he was hiding...\p"
	.string "No, I wouldn't allow it!\n"
	.string "He would be caught, arrested!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_3:
# 64 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "A crazy fool, as you are!\n"
	.string "You made a mistake coming back!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_4:
# 69 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "...Yes? Can I help you?\n"
	.string "We are discussing adult matters...$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_5:
# 74 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "What?\n"
	.string "You're looking for GIOVANNI too?\p"
	.string "This isn't good...\n"
	.string "What happened?!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_6:
# 78 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: {PLAYER}?\n"
	.string "Excellent timing!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_7:
# 79 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: Hmm... You know BLAINE?\n"
	.string "Wait, what happened...?!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_8:
# 81 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Hah, that's correct!\n"
	.string "I returned to GUYANA with {PLAYER}.\p"
	.string "They are a lot stronger than I,\n"
	.string "even having earned my BADGE!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_9:
# 82 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: I'm not sure what any\n"
	.string "of that means, honestly...\p"
	.string "Ah, wait! You're a GYM LEADER?\n"
	.string "An interesting turn of events...$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_10:
# 83 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Hah, quit judging my past,\n"
	.string "GEORGE, we all had our moments!\p"
	.string "{PLAYER}, go on, tell him!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_11:
# 84 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: Well, is BLAINE a better\n"
	.string "man now? I must know.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_12:
# 89 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: ...I see.\n"
	.string "BLAINE, {PLAYER}... I am sorry...\p"
	.string "But, honestly, I was not\n"
	.string "aware GIOVANNI'S hiding here.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_13:
# 90 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "I will allow you both the\n"
	.string "means to investigate GUYANA.\p"
	.string "If you do find GIOVANNI, he\n"
	.string "is extremely dangerous.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_14:
# 91 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Do not approach him, instead,\n"
	.string "come straight back... Alert me.\p"
	.string "There is a cave behind my\n"
	.string "mansion. Surely, BLAINE can explain.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_15:
# 94 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Hm! Right...\n"
	.string "I forgot about the old...\p"
	.string "Ahem, go on...$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_16:
# 97 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: I was done, actually...\n"
	.string "Best of luck to you both.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_17:
# 100 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Right! So, {PLAYER}...\n"
	.string "As mentioned, there's a cave ahead.\p"
	.string "Let's meet up there! ...Or,\n"
	.string "would you prefer going together?$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_18:
# 105 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Let's head out, then!\n"
	.string "Follow me!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_19:
# 112 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "Hah! I don't doubt your\n"
	.string "skill as a POKéMON TRAINER!\p"
	.string "I'll go on ahead and search,\n"
	.string "come find me when you can!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_20:
# 128 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Wah?! {PLAYER}...\n"
	.string "I... I... Don't...$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_21:
# 129 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "GEORGE: Well, BLAINE... {PLAYER}\n"
	.string "has spoken. You must go.\p"
	.string "Now! Leave!\n"
	.string "You are not welcome here!$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_22:
# 130 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "BLAINE: Hmph... {PLAYER}, I'll be\n"
	.string "in the CINNABAR GYM.\p"
	.string "You're on your own, now...$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_23:
# 139 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "...That was quite dramatic.\n"
	.string "However, since you are here...\p"
	.string "Perhaps you can find use to\n"
	.string "this old navigation chart?$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_24:
# 141 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "I apologize for bringing you\n"
	.string "into that heated argument...\p"
	.string "If you do find GIOVANNI in\n"
	.string "GUYANA, please let me know.$"

LindenTown_Mansion_1F_EventScript_Mew_Story_Trigger_Left_Text_25:
# 142 "data/maps/LindenTown_Mansion_1F/scripts.pory"
	.string "He is quite dangerous, so do not\n"
	.string "approach him... Good luck.$"
