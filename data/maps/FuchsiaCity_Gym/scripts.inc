# 1 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 2 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Koga::
# 3 "data/maps/FuchsiaCity_Gym/scripts.pory"
    goto_if_set FLAG_BADGE08_GET, FuchsiaCity_Gym_EventScript_Koga_Rematch
# 4 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA, FuchsiaCity_Gym_Text_KogaIntro, FuchsiaCity_Gym_Text_KogaDefeat, FuchsiaCity_Gym_EventScript_DefeatedKoga, NO_MUSIC
# 6 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM06_FROM_KOGA, FuchsiaCity_Gym_EventScript_GiveTM06
# 7 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaPostBattle
# 8 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 9 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 10 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 11 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_DefeatedKoga::
# 12 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 1
# 13 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FAME_CHECKER_KOGA_JOURNAL
# 14 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_KOGA
# 15 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 16 "data/maps/FuchsiaCity_Gym/scripts.pory"
	set_gym_trainers 5
# 17 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto FuchsiaCity_Gym_EventScript_GiveTM06
# 18 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 19 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 20 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GiveTM06::
# 21 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainSoulBadge
# 22 "data/maps/FuchsiaCity_Gym/scripts.pory"
	checkitemspace ITEM_TM06
# 23 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, FuchsiaCity_Gym_EventScript_NoRoomForTM06
# 24 "data/maps/FuchsiaCity_Gym/scripts.pory"
	giveitem_msg FuchsiaCity_Gym_Text_ReceivedTM06FromKoga, ITEM_TM06
# 25 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM06_FROM_KOGA
# 26 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KogaExplainTM06
# 27 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 28 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 29 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 30 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_NoRoomForTM06::
# 31 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_MakeSpaceForThis
# 32 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 33 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 34 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 35 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Phil::
# 36 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_PHIL, FuchsiaCity_Gym_Text_PhilIntro, FuchsiaCity_Gym_Text_PhilDefeat
# 37 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_PhilPostBattle, MSGBOX_AUTOCLOSE
# 38 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 39 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 40 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Edgar::
# 41 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_EDGAR, FuchsiaCity_Gym_Text_EdgarIntro, FuchsiaCity_Gym_Text_EdgarDefeat
# 42 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_EdgarPostBattle, MSGBOX_AUTOCLOSE
# 43 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 44 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 45 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kirk::
# 46 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KIRK, FuchsiaCity_Gym_Text_KirkIntro, FuchsiaCity_Gym_Text_KirkDefeat
# 47 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 2
# 48 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KirkPostBattle, MSGBOX_AUTOCLOSE
# 49 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 50 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 51 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Shawn::
# 52 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_SHAWN, FuchsiaCity_Gym_Text_ShawnIntro, FuchsiaCity_Gym_Text_ShawnDefeat
# 53 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_ShawnPostBattle, MSGBOX_AUTOCLOSE
# 54 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 55 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 56 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Kayden::
# 57 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_KAYDEN, FuchsiaCity_Gym_Text_KaydenIntro, FuchsiaCity_Gym_Text_KaydenDefeat
# 58 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_KaydenPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 60 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 61 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_Nate::
# 62 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JUGGLER_NATE, FuchsiaCity_Gym_Text_NateIntro, FuchsiaCity_Gym_Text_NateDefeat
# 63 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_NatePostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 65 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 66 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuy::
# 67 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lock
# 68 "data/maps/FuchsiaCity_Gym/scripts.pory"
	faceplayer
# 69 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_KOGA, FuchsiaCity_Gym_EventScript_GymGuyPostVictory
# 70 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyAdvice
# 71 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 72 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 73 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 74 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymGuyPostVictory::
# 75 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymGuyPostVictory
# 76 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
# 77 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 78 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 79 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatue::
# 80 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 81 "data/maps/FuchsiaCity_Gym/scripts.pory"
    goto_if_set FLAG_SYS_GAME_CLEAR, FuchsiaCity_Gym_EventScript_GymStatue_PostGame
# 82 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_EventScript_GymStatuePostVictory
# 83 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatue
# 84 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 85 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end
# 86 "data/maps/FuchsiaCity_Gym/scripts.pory"

# 87 "data/maps/FuchsiaCity_Gym/scripts.pory"
FuchsiaCity_Gym_EventScript_GymStatuePostVictory::
# 88 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_Text_GymStatuePlayerWon
# 89 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
# 90 "data/maps/FuchsiaCity_Gym/scripts.pory"
	end

FuchsiaCity_Gym_MapScripts::
# 96 "data/maps/FuchsiaCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 98 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2
FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 110 "data/maps/FuchsiaCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4
# 116 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setflag FLAG_HIDE_FUCHSIA_CITY_GYM_JANINE
	return

FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 100 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 4, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 101 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 5, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 102 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 6, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 103 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 7, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 104 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 8, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 105 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 9, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 106 "data/maps/FuchsiaCity_Gym/scripts.pory"
	setmetatile 10, 16, METATILE_FuchsiaGym_FuchsiaGymFloorTile, 0
# 107 "data/maps/FuchsiaCity_Gym/scripts.pory"
	special DrawWholeMapView
	goto FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1

FuchsiaCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_4:
# 112 "data/maps/FuchsiaCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_FUCHSIA_CITY_GYM_JANINE
	return


FuchsiaCity_Gym_EventScript_GymStatue_PostGame::
# 123 "data/maps/FuchsiaCity_Gym/scripts.pory"
	lockall
# 124 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_EventScript_GymStatue_PostGame_Text_0
# 125 "data/maps/FuchsiaCity_Gym/scripts.pory"
	closemessage
# 126 "data/maps/FuchsiaCity_Gym/scripts.pory"
	releaseall
	end


FuchsiaCity_Gym_EventScript_Koga_Rematch::
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KOGA_2, FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_0, FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_1, FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_2, NO_MUSIC
# 133 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_3
# 134 "data/maps/FuchsiaCity_Gym/scripts.pory"
	closemessage
# 135 "data/maps/FuchsiaCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_KOGA_2
# 136 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_Janine_Rematch::
# 142 "data/maps/FuchsiaCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_JANINE, FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_0, FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_1, FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_2, NO_MUSIC
# 143 "data/maps/FuchsiaCity_Gym/scripts.pory"
	msgbox FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_2
# 144 "data/maps/FuchsiaCity_Gym/scripts.pory"
	closemessage
# 145 "data/maps/FuchsiaCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_JANINE
# 146 "data/maps/FuchsiaCity_Gym/scripts.pory"
	famechecker FAMECHECKER_KOGA, 3
# 147 "data/maps/FuchsiaCity_Gym/scripts.pory"
	release
	end


FuchsiaCity_Gym_EventScript_GymStatue_PostGame_Text_0:
# 124 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "FUCHSIA POKéMON GYM\n"
	.string "LEADER: JANINE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_0:
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "Fwahahaha!\n"
	.string "If it isn't the child...\p"
	.string "It seems we've fated to meet.\n"
	.string "I'll not only defeat you...\p"
	.string "But will also demonstrate my\n"
	.string "fatherly dignity to JANINE!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_1:
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "...If I am not strong enough,\n"
	.string "I must hone my skills.$"

FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_2:
# 132 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "$"

FuchsiaCity_Gym_EventScript_Koga_Rematch_Text_3:
# 133 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "The POKéMON LEAGUE is a place\n"
	.string "of formidable strength!\p"
	.string "Truly, it must be something to be\n"
	.string "proud of...\p"
	.string "I have been thinking of aiming\n"
	.string "to join the ELITE FOUR, myself.$"

FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_0:
# 142 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "Fufufufu...\n"
	.string "KOGA is no longer here...\p"
	.string "He moved onto the POKéMON LEAGUE.\n"
	.string "I'm so sorry...\p"
	.string "This GYM is closed, for now...\n"
	.string "...\p"
	.string "I'm joking! I'm the real deal!\n"
	.string "JANINE of FUCHSIA GYM, that's me!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_1:
# 142 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "You're a tough one! You\n"
	.string "definitely won!$"

FuchsiaCity_Gym_EventScript_Janine_Rematch_Text_2:
# 143 "data/maps/FuchsiaCity_Gym/scripts.pory"
	.string "You're so tough! I see how my\n"
	.string "father, KOGA, lost to you!\p"
	.string "I'm going to really apply myself\n"
	.string "and improve my skills.\p"
	.string "I want to become much better\n"
	.string "than my father and you!\p"
	.string "I'll win next time!$"
