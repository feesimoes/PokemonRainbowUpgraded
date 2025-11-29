# 1 "data/maps/SilphCo_11F/scripts.pory"

# 2 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_MapScripts::
# 3 "data/maps/SilphCo_11F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
# 4 "data/maps/SilphCo_11F/scripts.pory"
	.byte 0
# 5 "data/maps/SilphCo_11F/scripts.pory"

# 6 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_OnLoad::
# 7 "data/maps/SilphCo_11F/scripts.pory"
	call_if_unset FLAG_SILPH_11F_DOOR, EventScript_Close11FDoor
# 8 "data/maps/SilphCo_11F/scripts.pory"
	end
# 9 "data/maps/SilphCo_11F/scripts.pory"

# 10 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_President::
# 11 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 12 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 13 "data/maps/SilphCo_11F/scripts.pory"
    goto_if_set FLAG_MEW_QUEST_STARTED, SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji
# 14 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_set FLAG_GOT_MASTER_BALL_FROM_SILPH, SilphCo_11F_EventScript_AlreadyGotMasterBall
# 15 "data/maps/SilphCo_11F/scripts.pory"
	checkplayergender
# 16 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, MALE, SilphCo_11F_EventScript_PresidentThanksMale
# 17 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, SilphCo_11F_EventScript_PresidentThanksFemale
# 18 "data/maps/SilphCo_11F/scripts.pory"
	checkitemspace ITEM_MASTER_BALL
# 19 "data/maps/SilphCo_11F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SilphCo_11F_EventScript_NoRoomForMasterBall
# 20 "data/maps/SilphCo_11F/scripts.pory"
	giveitem_msg SilphCo_11F_Text_ObtainedMasterBallFromPresident, ITEM_MASTER_BALL, 1, MUS_OBTAIN_KEY_ITEM
# 21 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 22 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_GOT_MASTER_BALL_FROM_SILPH
# 23 "data/maps/SilphCo_11F/scripts.pory"
	release
# 24 "data/maps/SilphCo_11F/scripts.pory"
	end
# 25 "data/maps/SilphCo_11F/scripts.pory"

# 26 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksMale::
# 27 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearBoy
# 28 "data/maps/SilphCo_11F/scripts.pory"
	return
# 29 "data/maps/SilphCo_11F/scripts.pory"

# 30 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_PresidentThanksFemale::
# 31 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForSavingMeDearGirl
# 32 "data/maps/SilphCo_11F/scripts.pory"
	return
# 33 "data/maps/SilphCo_11F/scripts.pory"

# 34 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_NoRoomForMasterBall::
# 35 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_YouHaveNoRoomForThis
# 36 "data/maps/SilphCo_11F/scripts.pory"
	release
# 37 "data/maps/SilphCo_11F/scripts.pory"
	end
# 38 "data/maps/SilphCo_11F/scripts.pory"

# 39 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_AlreadyGotMasterBall::
# 40 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThatsOurSecretPrototype
# 41 "data/maps/SilphCo_11F/scripts.pory"
	release
# 42 "data/maps/SilphCo_11F/scripts.pory"
	end
# 43 "data/maps/SilphCo_11F/scripts.pory"

# 44 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Secretary::
# 45 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_ThanksForRescuingUs, MSGBOX_NPC
# 46 "data/maps/SilphCo_11F/scripts.pory"
	end
# 47 "data/maps/SilphCo_11F/scripts.pory"

# 48 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Rocket_F_Roadblock::
# 49 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 50 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_NegotiationsTakingTooLong, MSGBOX_NPC
# 51 "data/maps/SilphCo_11F/scripts.pory"
	release
# 52 "data/maps/SilphCo_11F/scripts.pory"
	end
# 53 "data/maps/SilphCo_11F/scripts.pory"

# 54 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerLeft::
# 55 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 56 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 0
# 57 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 58 "data/maps/SilphCo_11F/scripts.pory"
	end
# 59 "data/maps/SilphCo_11F/scripts.pory"

# 60 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniTriggerRight::
# 61 "data/maps/SilphCo_11F/scripts.pory"
	lockall
# 62 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_TEMP_1, 1
# 63 "data/maps/SilphCo_11F/scripts.pory"
	goto SilphCo_11F_EventScript_BattleGiovanni
# 64 "data/maps/SilphCo_11F/scripts.pory"
	end
# 65 "data/maps/SilphCo_11F/scripts.pory"

# 66 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_BattleGiovanni::
# 67 "data/maps/SilphCo_11F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 68 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, Common_Movement_WalkInPlaceFasterDown
# 69 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 70 "data/maps/SilphCo_11F/scripts.pory"
	delay 25
# 71 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniIntro
# 72 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 73 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, SilphCo_11F_EventScript_GiovanniApproachLeft
# 74 "data/maps/SilphCo_11F/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, SilphCo_11F_EventScript_GiovanniApproachRight
# 75 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_LAST_TALKED, LOCALID_SILPH_CO_GIOVANNI
# 76 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_no_intro TRAINER_BOSS_GIOVANNI_2, SilphCo_11F_Text_GiovanniDefeat
# 77 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_GiovanniPostBattle
# 78 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 79 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 80 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_GIOVANNI
# 81 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT1
# 82 "data/maps/SilphCo_11F/scripts.pory"
	removeobject LOCALID_SILPH_CO_11F_GRUNT2
# 83 "data/maps/SilphCo_11F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 84 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MAP_SCENE_SILPH_CO_11F, 1
# 85 "data/maps/SilphCo_11F/scripts.pory"
	setflag FLAG_HIDE_SAFFRON_ROCKETS
# 86 "data/maps/SilphCo_11F/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CIVILIANS
# 87 "data/maps/SilphCo_11F/scripts.pory"
	releaseall
# 88 "data/maps/SilphCo_11F/scripts.pory"
	end
# 89 "data/maps/SilphCo_11F/scripts.pory"

# 90 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachLeft::
# 91 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachLeft
# 92 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_PLAYER, SilphCo_11F_Movement_PlayerFaceGiovanni
# 93 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 94 "data/maps/SilphCo_11F/scripts.pory"
	return
# 95 "data/maps/SilphCo_11F/scripts.pory"

# 96 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_GiovanniApproachRight::
# 97 "data/maps/SilphCo_11F/scripts.pory"
	applymovement LOCALID_SILPH_CO_GIOVANNI, SilphCo_11F_Movement_GiovanniApproachRight
# 98 "data/maps/SilphCo_11F/scripts.pory"
	waitmovement 0
# 99 "data/maps/SilphCo_11F/scripts.pory"
	return
# 100 "data/maps/SilphCo_11F/scripts.pory"

# 101 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachLeft::
# 102 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 103 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 104 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 105 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 106 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_left
# 107 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 108 "data/maps/SilphCo_11F/scripts.pory"

# 109 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_GiovanniApproachRight::
# 110 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 111 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 112 "data/maps/SilphCo_11F/scripts.pory"
	walk_down
# 113 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 114 "data/maps/SilphCo_11F/scripts.pory"

# 115 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_Movement_PlayerFaceGiovanni::
# 116 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 117 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 118 "data/maps/SilphCo_11F/scripts.pory"
	delay_16
# 119 "data/maps/SilphCo_11F/scripts.pory"
	delay_8
# 120 "data/maps/SilphCo_11F/scripts.pory"
	delay_4
# 121 "data/maps/SilphCo_11F/scripts.pory"
	walk_in_place_faster_right
# 122 "data/maps/SilphCo_11F/scripts.pory"
	step_end
# 123 "data/maps/SilphCo_11F/scripts.pory"

# 124 "data/maps/SilphCo_11F/scripts.pory"
@ Unused
# 125 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Monitor::
# 126 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_MonitorHasMonsOnIt, MSGBOX_SIGN
# 127 "data/maps/SilphCo_11F/scripts.pory"
	end
# 128 "data/maps/SilphCo_11F/scripts.pory"

# 129 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_FloorSign::
# 130 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_FloorSign, MSGBOX_SIGN
# 131 "data/maps/SilphCo_11F/scripts.pory"
	end
# 132 "data/maps/SilphCo_11F/scripts.pory"

# 133 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt1::
# 134 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_40, SilphCo_11F_Text_Grunt1Intro, SilphCo_11F_Text_Grunt1Defeat
# 135 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/SilphCo_11F/scripts.pory"
	end
# 137 "data/maps/SilphCo_11F/scripts.pory"

# 138 "data/maps/SilphCo_11F/scripts.pory"
SilphCo_11F_EventScript_Grunt2::
# 139 "data/maps/SilphCo_11F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_41, SilphCo_11F_Text_Grunt2Intro, SilphCo_11F_Text_Grunt2Defeat
# 140 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 141 "data/maps/SilphCo_11F/scripts.pory"
	end

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji::
# 146 "data/maps/SilphCo_11F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 0
	goto_if_eq SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_1
# 168 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 169 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 170 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_8
# 171 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 172 "data/maps/SilphCo_11F/scripts.pory"
	release
	end

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_1:
# 148 "data/maps/SilphCo_11F/scripts.pory"
	lock
# 149 "data/maps/SilphCo_11F/scripts.pory"
	faceplayer
# 150 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_0
# 151 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 152 "data/maps/SilphCo_11F/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 153 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_1
# 154 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_2
# 155 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_3
# 156 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_4
# 157 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_5
# 158 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_6
# 159 "data/maps/SilphCo_11F/scripts.pory"
	msgbox SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_7
# 160 "data/maps/SilphCo_11F/scripts.pory"
	closemessage
# 161 "data/maps/SilphCo_11F/scripts.pory"
	fadedefaultbgm
# 162 "data/maps/SilphCo_11F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 1
# 163 "data/maps/SilphCo_11F/scripts.pory"
	release
	end


SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_0:
# 150 "data/maps/SilphCo_11F/scripts.pory"
	.string "PRESIDENT: {PLAYER}, thank you\n"
	.string "again!\p"
	.string "Thanks to you, TEAM ROCKET is no\n"
	.string "more! SILPH CO., no...\p"
	.string "KANTO is in your debt, truly!$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_1:
# 153 "data/maps/SilphCo_11F/scripts.pory"
	.string "...I see.\n"
	.string "So, you know of our prototype?\p"
	.string "As much as I'd be happy to\n"
	.string "give you the device...\p"
	.string "It was recently stolen from us.$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_2:
# 154 "data/maps/SilphCo_11F/scripts.pory"
	.string "SAFFRON POLICE received reports,\n"
	.string "but it's far too late...\p"
	.string "Tell me, {PLAYER}. What do\n"
	.string "you know of GIOVANNI?$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_3:
# 155 "data/maps/SilphCo_11F/scripts.pory"
	.string "That same man put me in\n"
	.string "a dangerous situation, you see.\p"
	.string "If it weren't for you, our\n"
	.string "world would never be the same...$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_4:
# 156 "data/maps/SilphCo_11F/scripts.pory"
	.string "He was after our prototype,\n"
	.string "which I entrusted you with.\p"
	.string "He sees POKéMON as powerful tools,\n"
	.string "but he's lost his way.$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_5:
# 157 "data/maps/SilphCo_11F/scripts.pory"
	.string "GIOVANNI has a son.\n"
	.string "Undoubtedly, he's behind this...\p"
	.string "His son's done nothing wrong,\n"
	.string "it places me in a tough spot.$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_6:
# 158 "data/maps/SilphCo_11F/scripts.pory"
	.string "As a business man, I am\n"
	.string "practical in decisions, yes.\p"
	.string "Sometimes, corporations do not\n"
	.string "factor in morals with this.$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_7:
# 159 "data/maps/SilphCo_11F/scripts.pory"
	.string "So, you see, my hands are\n"
	.string "tied - yet again...\p"
	.string "Here is an idea...\n"
	.string "Please, speak with MR. FUJI.\p"
	.string "...Good luck, {PLAYER}.$"

SilphCo_11F_EventScript_President_Mew_Quest_PleaseSpeakWithMrFuji_Text_8:
# 170 "data/maps/SilphCo_11F/scripts.pory"
	.string "PRESIDENT: {PLAYER}? Welcome back!\n"
	.string "MR. FUJI resides in LAVENDER TOWN.\p"
	.string "It's a peaceful town due\n"
	.string "east of here.$"
