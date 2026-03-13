# 1 "data/maps/CeladonCity_Gym/scripts.pory"

# 2 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_MapScripts::
# 3 "data/maps/CeladonCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/CeladonCity_Gym/scripts.pory"

# 5 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Erika::
# 6 "data/maps/CeladonCity_Gym/scripts.pory"
    goto_if_set FLAG_BADGE08_GET, CeladonCity_Gym_Erika_Rematch
# 7 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 8 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA, CeladonCity_Gym_Text_ErikaIntro, CeladonCity_Gym_Text_ErikaDefeat, CeladonCity_Gym_EventScript_DefeatedErika, NO_MUSIC
# 9 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM19_FROM_ERIKA, CeladonCity_Gym_EventScript_GiveTM19
# 10 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 4
# 11 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ErikaPostBattle
# 12 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 13 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 14 "data/maps/CeladonCity_Gym/scripts.pory"

# 15 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_DefeatedErika::
# 16 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 1
# 17 "data/maps/CeladonCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_ERIKA_JOURNALS
# 18 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_ERIKA
# 19 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_BADGE04_GET
# 20 "data/maps/CeladonCity_Gym/scripts.pory"
	set_gym_trainers 4
# 21 "data/maps/CeladonCity_Gym/scripts.pory"
	goto CeladonCity_Gym_EventScript_GiveTM19
# 22 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 23 "data/maps/CeladonCity_Gym/scripts.pory"

# 24 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GiveTM19::
# 25 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainRainbowBadgeTakeThis
# 26 "data/maps/CeladonCity_Gym/scripts.pory"
	checkitemspace ITEM_TM19
# 27 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeladonCity_Gym_EventScript_NoRoomForTM19
# 28 "data/maps/CeladonCity_Gym/scripts.pory"
	giveitem_msg CeladonCity_Gym_Text_ReceivedTM19FromErika, ITEM_TM19
# 29 "data/maps/CeladonCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM19_FROM_ERIKA
# 30 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ExplainTM19
# 31 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 32 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 33 "data/maps/CeladonCity_Gym/scripts.pory"

# 34 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_NoRoomForTM19::
# 35 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_ShouldMakeRoomForThis
# 36 "data/maps/CeladonCity_Gym/scripts.pory"
	release
# 37 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 38 "data/maps/CeladonCity_Gym/scripts.pory"

# 39 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Kay::
# 40 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_KAY, CeladonCity_Gym_Text_KayIntro, CeladonCity_Gym_Text_KayDefeat
# 41 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_KayPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 43 "data/maps/CeladonCity_Gym/scripts.pory"

# 44 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lisa::
# 45 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_LISA, CeladonCity_Gym_Text_LisaIntro, CeladonCity_Gym_Text_LisaDefeat
# 46 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 2
# 47 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LisaPostBattle, MSGBOX_AUTOCLOSE
# 48 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 49 "data/maps/CeladonCity_Gym/scripts.pory"

# 50 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tina::
# 51 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_TINA, CeladonCity_Gym_Text_TinaIntro, CeladonCity_Gym_Text_TinaDefeat
# 52 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TinaPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 54 "data/maps/CeladonCity_Gym/scripts.pory"

# 55 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Bridget::
# 56 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_BRIDGET, CeladonCity_Gym_Text_BridgetIntro, CeladonCity_Gym_Text_BridgetDefeat
# 57 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_BridgetPostBattle, MSGBOX_AUTOCLOSE
# 58 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 59 "data/maps/CeladonCity_Gym/scripts.pory"

# 60 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Tamia::
# 61 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_TAMIA, CeladonCity_Gym_Text_TamiaIntro, CeladonCity_Gym_Text_TamiaDefeat
# 62 "data/maps/CeladonCity_Gym/scripts.pory"
	famechecker FAMECHECKER_ERIKA, 3
# 63 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_TamiaPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 65 "data/maps/CeladonCity_Gym/scripts.pory"

# 66 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Lori::
# 67 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_LORI, CeladonCity_Gym_Text_LoriIntro, CeladonCity_Gym_Text_LoriDefeat
# 68 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_LoriPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 70 "data/maps/CeladonCity_Gym/scripts.pory"

# 71 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_Mary::
# 72 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_MARY, CeladonCity_Gym_Text_MaryIntro, CeladonCity_Gym_Text_MaryDefeat
# 73 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 75 "data/maps/CeladonCity_Gym/scripts.pory"

# 76 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatue::
# 77 "data/maps/CeladonCity_Gym/scripts.pory"
	lockall
# 78 "data/maps/CeladonCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, CeladonCity_Gym_EventScript_GymStatuePostVictory
# 79 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatue
# 80 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 81 "data/maps/CeladonCity_Gym/scripts.pory"
	end
# 82 "data/maps/CeladonCity_Gym/scripts.pory"

# 83 "data/maps/CeladonCity_Gym/scripts.pory"
CeladonCity_Gym_EventScript_GymStatuePostVictory::
# 84 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Text_GymStatuePlayerWon
# 85 "data/maps/CeladonCity_Gym/scripts.pory"
	releaseall
# 86 "data/maps/CeladonCity_Gym/scripts.pory"
	end

CeladonCity_Gym_Erika_Rematch::
# 92 "data/maps/CeladonCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_ERIKA_2, CeladonCity_Gym_Erika_Rematch_Text_0, CeladonCity_Gym_Erika_Rematch_Text_1, CeladonCity_Gym_Erika_Rematch_Text_2, NO_MUSIC
# 93 "data/maps/CeladonCity_Gym/scripts.pory"
	msgbox CeladonCity_Gym_Erika_Rematch_Text_3
# 94 "data/maps/CeladonCity_Gym/scripts.pory"
	closemessage
# 95 "data/maps/CeladonCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_ERIKA_2
# 96 "data/maps/CeladonCity_Gym/scripts.pory"
	release
	end


CeladonCity_Gym_Erika_Rematch_Text_0:
# 92 "data/maps/CeladonCity_Gym/scripts.pory"
	.string "Oh, if it isn't {PLAYER}!\n"
	.string "I do hope you've been well...\p"
	.string "...I see.\n"
	.string "You've certainly been busy.\p"
	.string "I'm not fond of publicity... But\n"
	.string "you came for a battle, yes?{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CeladonCity_Gym_Erika_Rematch_Text_1:
# 92 "data/maps/CeladonCity_Gym/scripts.pory"
	.string "Oh!\n"
	.string "It appears I have lost...$"

CeladonCity_Gym_Erika_Rematch_Text_2:
# 92 "data/maps/CeladonCity_Gym/scripts.pory"
	.string "$"

CeladonCity_Gym_Erika_Rematch_Text_3:
# 93 "data/maps/CeladonCity_Gym/scripts.pory"
	.string "Simply marvelous!\n"
	.string "That effort is worthy of...\p"
	.string "Hmm...\n"
	.string "At least... 10 RAINBOW BADGES!$"
