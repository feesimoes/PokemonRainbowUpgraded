LindenTown_Mansion_B1F_MapScripts::
# 3 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 6
	goto_if_eq LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 9 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 8
	goto_if_eq LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_3
LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	goto_if_set FLAG_LINDEN_MANSION_SWITCH, LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 7 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	clearflag FLAG_HIDE_LINDEN_BLAINE
	goto LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_3:
# 11 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
	goto LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_1

LindenTown_Mansion_B1F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 16 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	clearflag FLAG_LINDEN_MANSION_SWITCH
	return


# 21 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
LindenTown_Mansion_B1F_Face_Player:
# 23 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	face_player
# 24 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	step_end

# 27 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
LindenTown_Mansion_B1F_Face_Up:
# 29 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	face_up
# 30 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	step_end

# 33 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
LindenTown_Mansion_B1F_Face_Right:
# 35 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	face_right
# 36 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	step_end

# 39 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
LindenTown_Mansion_B1F_Face_Left:
# 41 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	face_left
# 42 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	step_end

# 45 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
LindenTown_Mansion_B1F_Emote:
# 47 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	emote_exclamation_mark
# 48 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	step_end

LindenTown_Mansion_B1F_EventScript_Blaine::
# 53 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	lock
# 54 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	applymovement LOCALID_BLAINE_LINDEN_MANSION_B1F, LindenTown_Mansion_B1F_Face_Player
# 55 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmovement
# 56 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 57 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_0
# 58 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_1
# 59 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_2
# 60 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_3
# 61 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_4
# 62 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_5
# 63 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_6
# 64 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_7
# 65 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_8
# 66 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_9
# 67 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_10
# 68 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_11
# 69 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_12
# 70 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_13
# 71 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_14
# 72 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	fadedefaultbgm
# 73 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_15
# 74 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_16
# 75 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmessage
# 76 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	applymovement LOCALID_BLAINE_LINDEN_MANSION_B1F, LindenTown_Mansion_B1F_Face_Left
# 77 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmovement
# 78 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	delay 60
# 79 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	applymovement LOCALID_BLAINE_LINDEN_MANSION_B1F, LindenTown_Mansion_B1F_Face_Right
# 80 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmovement
# 81 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	delay 60
# 82 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	applymovement LOCALID_BLAINE_LINDEN_MANSION_B1F, LindenTown_Mansion_B1F_Face_Up
# 83 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmovement
# 84 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	delay 20
# 85 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	applymovement LOCALID_BLAINE_LINDEN_MANSION_B1F, LindenTown_Mansion_B1F_Emote
# 86 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmovement
# 87 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	delay 20
# 88 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_17
# 89 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmessage
# 90 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	closemessage
# 91 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	playse SE_UNLOCK
# 92 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 10, METATILE_Building_Lab_Floor_ShadeFull, 0
# 93 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 9, METATILE_Building_Lab_Floor_ShadeFull, 0
# 94 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 8, METATILE_Building_Lab_Floor_ShadeFull, 0
# 95 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 7, METATILE_Building_Lab_Floor_ShadeFull, 0
# 96 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 6, METATILE_Building_Lab_Floor_ShadeFull, 0
# 97 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 5, METATILE_Building_Lab_Floor_ShadeFull, 0
# 98 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	special DrawWholeMapView
# 99 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setflag FLAG_LINDEN_MANSION_SWITCH
# 100 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_EventScript_Blaine_Text_18
# 101 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	waitmessage
# 102 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	closemessage
# 103 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 104 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setflag FLAG_HIDE_LINDEN_BLAINE
# 105 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	removeobject LOCALID_BLAINE_LINDEN_MANSION_B1F
# 106 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 8
# 108 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	release
	end


LindenTown_Mansion_B1F_SecretSwitch::
# 114 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	goto_if_unset FLAG_LINDEN_MANSION_SWITCH, LindenTown_Mansion_B1F_SecretSwitch_1
# 142 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	lock
# 143 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_SecretSwitch_Text_3
# 144 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	closemessage
# 145 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	release
	end

LindenTown_Mansion_B1F_SecretSwitch_1:
# 116 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	lock
# 117 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_SecretSwitch_Text_0, MSGBOX_YESNO
# 118 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Mansion_B1F_SecretSwitch_5
# 134 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_SecretSwitch_Text_2
# 135 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	closemessage
LindenTown_Mansion_B1F_SecretSwitch_4:
# 137 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	release
	end

LindenTown_Mansion_B1F_SecretSwitch_5:
# 120 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	msgbox LindenTown_Mansion_B1F_SecretSwitch_Text_1
# 121 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	closemessage
# 122 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	playse SE_UNLOCK
# 123 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 10, METATILE_Building_Lab_Floor_ShadeFull, 0
# 124 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 9, METATILE_Building_Lab_Floor_ShadeFull, 0
# 125 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 8, METATILE_Building_Lab_Floor_ShadeFull, 0
# 126 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 7, METATILE_Building_Lab_Floor_ShadeFull, 0
# 127 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 6, METATILE_Building_Lab_Floor_ShadeFull, 0
# 128 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setmetatile 11, 5, METATILE_Building_Lab_Floor_ShadeFull, 0
# 129 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	special DrawWholeMapView
# 130 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	setflag FLAG_LINDEN_MANSION_SWITCH
	goto LindenTown_Mansion_B1F_SecretSwitch_4


LindenTown_Mansion_B1F_EventScript_Blaine_Text_0:
# 57 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Hah! We made it, {PLAYER}!\n"
	.string "GEORGE was right, you know...\p"
	.string "I used to do some pretty\n"
	.string "bad expirements, back then...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_1:
# 58 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "...I wasn't thinking clearly.\n"
	.string "GIOVANNI helped fund our research.\p"
	.string "DR. FUJI, at the time, could\n"
	.string "sense a sort of evil scheme.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_2:
# 59 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "When we first found MEW here,\n"
	.string "GIOVANNI felt like it was weak...\p"
	.string "He started throwing DR. FUJI and\n"
	.string "I unbelievable sorts of funds.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_3:
# 60 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "DR. FUJI, wasn't thinking with\n"
	.string "a clear mind, either...\p"
	.string "He saw hope in the massive\n"
	.string "funds... a forbidden cloning project.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_4:
# 61 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "GIOVANNI, presented with the idea,\n"
	.string "was in favor of it.\p"
	.string "DR. FUJI went on to fail many\n"
	.string "attempts at cloning his daughter...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_5:
# 62 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Eventually, we realized that true,\n"
	.string "deep love...\p"
	.string "...It simply cannot be cloned.\n"
	.string "Far too late, we realized this...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_6:
# 63 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "So, yes...\n"
	.string "I...\p"
	.string "We were persuaded by GIOVANNI...\n"
	.string "To make the ultimate POKéMON.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_7:
# 64 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "I was partly to blame for\n"
	.string "MEWTWO'S vicious tendencies...\p"
	.string "MEW'S DNA was insufficient, you\n"
	.string "see... I contributed my own.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_8:
# 65 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Thus, the cloning of MEW was\n"
	.string "a success. I was thrilled.\p"
	.string "DR. FUJI saw MEW and MEWTWO,\n"
	.string "happily together, a family...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_9:
# 66 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "His daughter, AMBER FUJI...\n"
	.string "He... Had overcome his grief.\p"
	.string "We were content with our work,\n"
	.string "but GIOVANNI was not...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_10:
# 67 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "GIOVANNI, not getting his desired\n"
	.string "results for a powerful POKéMON...\p"
	.string "He was manipulating MEWTWO\n"
	.string "into doing his bidding.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_11:
# 68 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "MEWTWO wasn't outsmarted, however,\n"
	.string "gaining a distrust for humans...\p"
	.string "Our work in POKéMON MANSION,\n"
	.string "years of research... Destroyed...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_12:
# 69 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "I take it that GIOVANNI was\n"
	.string "after the prototype MASTER BALL?\p"
	.string "Hah! He still seeks to\n"
	.string "control MEWTWO, to this day...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_13:
# 70 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "However, the POKéGEAR that's been\n"
	.string "stolen isn't a laughing matter.\p"
	.string "According to the PRESIDENT, the\n"
	.string "device can transmit frequencies.$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_14:
# 71 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "In its current state, we don't\n"
	.string "know how well it works.\p"
	.string "Or, what the implications of\n"
	.string "that could be...$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_15:
# 73 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Anyways, enough of my story!\n"
	.string "We need to push on...\p"
	.string "GIOVANNI must be stopped, at\n"
	.string "all costs!$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_16:
# 74 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Let's see...\n"
	.string "Where did I put that switch...?$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_17:
# 88 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Ah-hah!\n"
	.string "There it is!\p"
	.string "I'll press it...\n"
	.string "Uh-huh, who wouldn't?$"

LindenTown_Mansion_B1F_EventScript_Blaine_Text_18:
# 100 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Hah!\n"
	.string "BLAINE, SCIENCE GUY, strikes again!\p"
	.string "Science rules!\n"
	.string "...Hah? Right... Let's go!$"

LindenTown_Mansion_B1F_SecretSwitch_Text_0:
# 117 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "There's a secret switch!\n"
	.string "Press it?$"

LindenTown_Mansion_B1F_SecretSwitch_Text_1:
# 120 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Who wouldn't?$"

LindenTown_Mansion_B1F_SecretSwitch_Text_2:
# 134 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "Not quite yet!$"

LindenTown_Mansion_B1F_SecretSwitch_Text_3:
# 143 "data/maps/LindenTown_Mansion_B1F/scripts.pory"
	.string "The secret switch revealed a\n"
	.string "hidden passage?!$"
