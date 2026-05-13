GoldenrodCity_GTS_2F_DevClub_MapScripts::
	.byte 0


GoldenrodCity_GTS_2F_DevClub_SleepyGuy::
# 5 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 6 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	compare VAR_TIME_HOUR, 3
	goto_if_eq GoldenrodCity_GTS_2F_DevClub_SleepyGuy_4
GoldenrodCity_GTS_2F_DevClub_SleepyGuy_3:
# 15 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 16 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Text_1
GoldenrodCity_GTS_2F_DevClub_SleepyGuy_1:
# 18 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 19 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end

GoldenrodCity_GTS_2F_DevClub_SleepyGuy_2:
# 8 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 9 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Text_0
# 10 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	applymovement LOCALID_DEV_SOUP, GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Face_Left
# 11 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	waitmovement
	goto GoldenrodCity_GTS_2F_DevClub_SleepyGuy_1

GoldenrodCity_GTS_2F_DevClub_SleepyGuy_4:
# 6 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	compare VAR_TIME_MINUTE, 45
	goto_if_eq GoldenrodCity_GTS_2F_DevClub_SleepyGuy_2
	goto GoldenrodCity_GTS_2F_DevClub_SleepyGuy_3


GoldenrodCity_GTS_2F_DevClub_SetTime::
# 25 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 26 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	setvar VAR_TIME_HOUR, 3
# 27 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	setvar VAR_TIME_MINUTE, 44
# 28 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end


# 32 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Face_Left:
# 34 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	face_left
# 35 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	step_end

GoldenrodCity_GTS_2F_DevClub_Rodolfo::
# 40 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 41 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 42 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Rodolfo_Text_0
# 43 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 44 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end


GoldenrodCity_GTS_2F_DevClub_TruthSeeker::
# 50 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 51 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 52 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	playbgm MUS_ENCOUNTER_TRUTHSEEKER, FALSE
# 53 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_0
# 54 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_1
# 55 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_2
# 56 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_3
# 57 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_4, MSGBOX_YESNO
# 58 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GoldenrodCity_GTS_2F_DevClub_TruthSeeker_2
# 75 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_13
# 76 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	fadedefaultbgm
GoldenrodCity_GTS_2F_DevClub_TruthSeeker_1:
# 78 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 79 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_2:
# 60 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	trainerbattle_earlyrival TRAINER_MUSICIAN_TRUTHSEEKER, 0, GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_5, GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_6
# 61 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 62 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_7
# 63 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_8
# 64 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_9
# 65 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_10
# 66 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 67 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	waitfanfare
# 68 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	waitmessage
# 69 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_11
# 70 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_12
# 71 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	cleartrainerflag TRAINER_MUSICIAN_TRUTHSEEKER
	goto GoldenrodCity_GTS_2F_DevClub_TruthSeeker_1


GoldenrodCity_GTS_2F_DevClub_Calypso::
# 85 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 86 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 87 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	playbgm MUS_ENCOUNTER_CALYPSO, FALSE
# 88 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Calypso_Text_0
# 89 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Calypso_Text_1, MSGBOX_YESNO
# 90 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GoldenrodCity_GTS_2F_DevClub_Calypso_2
# 104 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Calypso_Text_6
# 105 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	fadedefaultbgm
GoldenrodCity_GTS_2F_DevClub_Calypso_1:
# 107 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 108 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	fadedefaultbgm
# 109 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end

GoldenrodCity_GTS_2F_DevClub_Calypso_2:
# 92 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	trainerbattle_earlyrival TRAINER_CONTRIBUTOR_CALYPSO, 0, GoldenrodCity_GTS_2F_DevClub_Calypso_Text_2, GoldenrodCity_GTS_2F_DevClub_Calypso_Text_3
# 93 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 94 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Calypso_Text_4
# 95 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	giveitem ITEM_MASTER_BALL, 1
# 96 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	waitfanfare
# 97 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	waitmessage
# 98 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_11
# 99 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_Calypso_Text_5
# 100 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	cleartrainerflag TRAINER_CONTRIBUTOR_CALYPSO
	goto GoldenrodCity_GTS_2F_DevClub_Calypso_1


GoldenrodCity_GTS_2F_DevClub_GamingX::
# 115 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 116 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 117 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GamingX_Text_0
# 118 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GamingX_Text_1
# 119 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GamingX_Text_2
# 120 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 121 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end


GoldenrodCity_GTS_2F_DevClub_GreenJoe::
# 127 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	lock
# 128 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	faceplayer
# 129 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_0
# 130 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_1
# 131 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	msgbox GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_2
# 132 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	closemessage
# 133 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	release
	end


GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Text_0:
# 9 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Yawn...\n"
	.string "We need more beeps and boops.\p"
	.string "...Oh well.$"

GoldenrodCity_GTS_2F_DevClub_SleepyGuy_Text_1:
# 16 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Looks like this guy's very 'eepy.\n"
	.string "Better not wake them!$"

GoldenrodCity_GTS_2F_DevClub_Rodolfo_Text_0:
# 42 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "RODOLFO: Hey, you made it!\n"
	.string "I'm working on stuff here.$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_0:
# 53 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "TRUTHSEEKER: Oh, heya!\n"
	.string "Welcome to the DEV CLUB.\p"
	.string "My name's VIOLET, but I usually\n"
	.string "go by TruthSeeker online...$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_1:
# 54 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "I'm the guy who helped RODOLFO\n"
	.string "out with some sick beats!\p"
	.string "I heard there's some ZORUA in\n"
	.string "UNOVA, so I'm probably gonna go!$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_2:
# 55 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Just need to grab my stuff soon,\n"
	.string "head over and catch me one.\p"
	.string "...You're not really here for\n"
	.string "talking, though, right?$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_3:
# 56 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "I'll warn you, I'm pretty strong!\n"
	.string "Like, really strong!\p"
	.string "...$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_4:
# 57 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Do you still want to battle\n"
	.string "with me right now?$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_5:
# 60 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Woooh!\n"
	.string "That definitely got me pumped!\p"
	.string "My blood's pumping! That was\n"
	.string "a sweet battle.$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_6:
# 60 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Whew!\n"
	.string "A smokin' good battle!\p"
	.string "Best you'd rest up 'n'\n"
	.string "get a new strategy!$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_7:
# 62 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "TRUTHSEEKER: That was great.\n"
	.string "Honestly, I haven't battled much.\p"
	.string "Not in a while, anyways. So,\n"
	.string "that was nice...$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_8:
# 63 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "What?!\n"
	.string "You were annoyed by SPIKES?\p"
	.string "...And status moves? Nah, they're\n"
	.string "too good not to use.$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_9:
# 64 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "I could've used TOXIC, but that\n"
	.string "would've been too toxic of me.\p"
	.string "Anyhow, if you defeated me, you\n"
	.string "can definitely beat others.$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_10:
# 65 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Here...\n"
	.string "'Ya like this?$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_11:
# 69 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "One of the perks to being\n"
	.string "part of the DEV CLUB!\p"
	.string "Easy MASTER BALLS, or any item!$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_12:
# 70 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Anyways, thanks again, {PLAYER}.\n"
	.string "Come again if you wanna rematch.\p"
	.string "I'm gonna listen to some music\n"
	.string "remixes in the meantime.$"

GoldenrodCity_GTS_2F_DevClub_TruthSeeker_Text_13:
# 75 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "That's fine. Come back later,\n"
	.string "when you want to battle.\p"
	.string "I'm gonna listen to some music\n"
	.string "remixes in the meantime.$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_0:
# 88 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "CALYPSO: Hey! I used to be\n"
	.string "part of TEAM ROCKET, so...\p"
	.string "I've heard of you, {PLAYER}, but\n"
	.string "I work with RODOLFO now.\p"
	.string "He's a pretty chill guy.$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_1:
# 89 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Do you want to battle?$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_2:
# 92 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "WHAT?\n"
	.string "Oh, man... Wow!$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_3:
# 92 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Nice try.$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_4:
# 94 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "CALYPSO: Wow...\n"
	.string "That was awesome... Here!$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_5:
# 99 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Come back if you want to\n"
	.string "rematch me, alright?$"

GoldenrodCity_GTS_2F_DevClub_Calypso_Text_6:
# 104 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "That's fine.\n"
	.string "Come back if you want to!$"

GoldenrodCity_GTS_2F_DevClub_GamingX_Text_0:
# 117 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "GAMINGX: There's a special place in\n"
	.string "'HELL' for CLEFAIRY!\p"
	.string "I could say more, but...\n"
	.string "Eh, I wouldn't be allowed to.$"

GoldenrodCity_GTS_2F_DevClub_GamingX_Text_1:
# 118 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "If I could store my opponents in my\n"
	.string "PC BOXES, like POKéMON...\p"
	.string "MISTY, KOGA... Yep, they're going\n"
	.string "straight to my 'HELL' storage!$"

GoldenrodCity_GTS_2F_DevClub_GamingX_Text_2:
# 119 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "I also... Just...\n"
	.string "Really, really... appreciate LAMPENT.\p"
	.string "I'm not biased, or anything.\n"
	.string "No way...$"

GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_0:
# 129 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "GREENJOE12345: I'm playing POKéMON\n"
	.string "RAINBOW, and giving feedback on it.$"

GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_1:
# 130 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Did you know, BINOCULARS in ROUTE\n"
	.string "26'S GATEHOUSE had nothing?\p"
	.string "After I pointed it out, they started\n"
	.string "showing MT. SILVER on one.\p"
	.string "The other showed INDIGO PLATEAU.$"

GoldenrodCity_GTS_2F_DevClub_GreenJoe_Text_2:
# 131 "data/maps/GoldenrodCity_GTS_2F_DevClub/scripts.pory"
	.string "Several typos and bugs I showed...\n"
	.string "Those got fixed too.$"
