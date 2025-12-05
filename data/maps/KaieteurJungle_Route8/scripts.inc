KaieteurJungle_Route8_MapScripts::
	.byte 0


KaieteurJungle_Route8_LindenPath_Sign::
# 5 "data/maps/KaieteurJungle_Route8/scripts.pory"
	lock
# 6 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_LindenPath_Sign_Text_0
# 7 "data/maps/KaieteurJungle_Route8/scripts.pory"
	closemessage
# 8 "data/maps/KaieteurJungle_Route8/scripts.pory"
	release
	end


KaieteurJungle_Route8_Shortcut_Sign::
# 14 "data/maps/KaieteurJungle_Route8/scripts.pory"
	lock
# 15 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Shortcut_Sign_Text_0
# 16 "data/maps/KaieteurJungle_Route8/scripts.pory"
	closemessage
# 17 "data/maps/KaieteurJungle_Route8/scripts.pory"
	release
	end


KaieteurJungle_Route8_Hiker::
# 23 "data/maps/KaieteurJungle_Route8/scripts.pory"
	lock
# 24 "data/maps/KaieteurJungle_Route8/scripts.pory"
	faceplayer
# 25 "data/maps/KaieteurJungle_Route8/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 7
	goto_if_eq KaieteurJungle_Route8_Hiker_2
# 62 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_9
# 63 "data/maps/KaieteurJungle_Route8/scripts.pory"
	closemessage
KaieteurJungle_Route8_Hiker_1:
# 65 "data/maps/KaieteurJungle_Route8/scripts.pory"
	release
	end

KaieteurJungle_Route8_Hiker_2:
# 27 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_0
# 28 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_1
# 29 "data/maps/KaieteurJungle_Route8/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 30 "data/maps/KaieteurJungle_Route8/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 31 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_2
# 32 "data/maps/KaieteurJungle_Route8/scripts.pory"
	waitfanfare
# 33 "data/maps/KaieteurJungle_Route8/scripts.pory"
	waitmessage
# 34 "data/maps/KaieteurJungle_Route8/scripts.pory"
	closemessage
# 35 "data/maps/KaieteurJungle_Route8/scripts.pory"
	playse SE_PHONE_RING_LONG
# 36 "data/maps/KaieteurJungle_Route8/scripts.pory"
	waitse
# 37 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_3
# 38 "data/maps/KaieteurJungle_Route8/scripts.pory"
	playse SE_SELECT
# 39 "data/maps/KaieteurJungle_Route8/scripts.pory"
	waitse
# 40 "data/maps/KaieteurJungle_Route8/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 41 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_4
# 42 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_5
# 43 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_6, MSGBOX_YESNO
# 44 "data/maps/KaieteurJungle_Route8/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KaieteurJungle_Route8_Hiker_5
# 53 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_8
# 54 "data/maps/KaieteurJungle_Route8/scripts.pory"
	playse SE_BOO
# 55 "data/maps/KaieteurJungle_Route8/scripts.pory"
	waitse
# 56 "data/maps/KaieteurJungle_Route8/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 14
# 57 "data/maps/KaieteurJungle_Route8/scripts.pory"
	closemessage
	goto KaieteurJungle_Route8_Hiker_1

KaieteurJungle_Route8_Hiker_5:
# 46 "data/maps/KaieteurJungle_Route8/scripts.pory"
	msgbox KaieteurJungle_Route8_Hiker_Text_7
# 47 "data/maps/KaieteurJungle_Route8/scripts.pory"
	playbgm MUS_KANTO_ROUTE_GATE, TRUE
# 48 "data/maps/KaieteurJungle_Route8/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 9
# 49 "data/maps/KaieteurJungle_Route8/scripts.pory"
	warp MAP_SILPH_CO_11F, 9, 10
	goto KaieteurJungle_Route8_Hiker_1


KaieteurJungle_Route8_LindenPath_Sign_Text_0:
# 6 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "KAIETEUR JUNGLE -\n"
	.string "ROUTE 8 - LINDEN PATH$"

KaieteurJungle_Route8_Shortcut_Sign_Text_0:
# 15 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "It's a warning sign...\n"
	.string "This cave is off-limits!\p"
	.string "Only GEORGE'S friends may visit.$"

KaieteurJungle_Route8_Hiker_Text_0:
# 27 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "Yo, how's it going?\n"
	.string "While looking for cool POKéMON...\p"
	.string "I found this weird alien\n"
	.string "technology-device-thingy...$"

KaieteurJungle_Route8_Hiker_Text_1:
# 28 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "You can have it, honestly...\n"
	.string "I'm more of an outdoors-type guy.$"

KaieteurJungle_Route8_Hiker_Text_2:
# 31 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "{PLAYER} got the weird device\n"
	.string "from the explorer.$"

KaieteurJungle_Route8_Hiker_Text_3:
# 37 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "The weird device is calling!\n"
	.string "It's... The PRESIDENT?!$"

KaieteurJungle_Route8_Hiker_Text_4:
# 41 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "PRESIDENT: Hello...?\n"
	.string "...{PLAYER}?! You found it!$"

KaieteurJungle_Route8_Hiker_Text_5:
# 42 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "I am reaching you through\n"
	.string "the prototype, the POKéGEAR!\p"
	.string "Where are you?\n"
	.string "...GUYANA?! Oh, my!$"

KaieteurJungle_Route8_Hiker_Text_6:
# 43 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "This is quite promising, so\n"
	.string "thank you for picking up!\p"
	.string "You aren't stranded, are you?\n"
	.string "Do you need a flight back?$"

KaieteurJungle_Route8_Hiker_Text_7:
# 46 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "Hang tight, {PLAYER}! I'll\n"
	.string "have my SECRETARY save you.$"

KaieteurJungle_Route8_Hiker_Text_8:
# 53 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "Ah, fair enough.\n"
	.string "Please hurry back to SILPH!\p"
	.string "...\n"
	.string "...$"

KaieteurJungle_Route8_Hiker_Text_9:
# 62 "data/maps/KaieteurJungle_Route8/scripts.pory"
	.string "How's it going?\n"
	.string "Found any cool POKéMON yet?$"
