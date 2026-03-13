# 1 "data/maps/SaffronCity_Gym/scripts.pory"

# 2 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Sabrina::
# 3 "data/maps/SaffronCity_Gym/scripts.pory"
    goto_if_set FLAG_BADGE08_GET, SaffronCity_Gym_Sabrina_Rematch
# 4 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 5 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA, SaffronCity_Gym_Text_SabrinaIntro, SaffronCity_Gym_Text_SabrinaDefeat, SaffronCity_Gym_EventScript_DefeatedSabrina, NO_MUSIC
# 6 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM04_FROM_SABRINA, SaffronCity_Gym_EventScript_GiveTM04
# 7 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainTM04
# 8 "data/maps/SaffronCity_Gym/scripts.pory"
    call SaffronCity_Gym_ShowSabrinasNewWarpPanel
# 9 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 10 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 11 "data/maps/SaffronCity_Gym/scripts.pory"

# 12 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_DefeatedSabrina::
# 13 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 2
# 14 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 3
# 15 "data/maps/SaffronCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SAFFRON_CITY_POKECENTER_SABRINA_JOURNALS
# 16 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SABRINA
# 17 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_BADGE06_GET
# 18 "data/maps/SaffronCity_Gym/scripts.pory"
	set_gym_trainers 6
# 19 "data/maps/SaffronCity_Gym/scripts.pory"
	goto SaffronCity_Gym_EventScript_GiveTM04
# 20 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 21 "data/maps/SaffronCity_Gym/scripts.pory"

# 22 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GiveTM04::
# 23 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_ExplainMarshBadgeTakeThis
# 24 "data/maps/SaffronCity_Gym/scripts.pory"
	checkitemspace ITEM_TM04
# 25 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SaffronCity_Gym_EventScript_NoRoomForTM04
# 26 "data/maps/SaffronCity_Gym/scripts.pory"
	giveitem_msg SaffronCity_Gym_Text_ReceivedTM04FromSabrina, ITEM_TM04
# 27 "data/maps/SaffronCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM04_FROM_SABRINA
# 28 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_SabrinaPostBattle
# 29 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 30 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 31 "data/maps/SaffronCity_Gym/scripts.pory"

# 32 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_NoRoomForTM04::
# 33 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_BagFullOfOtherItems
# 34 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 35 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 36 "data/maps/SaffronCity_Gym/scripts.pory"

# 37 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Johan::
# 38 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_JOHAN, SaffronCity_Gym_Text_JohanIntro, SaffronCity_Gym_Text_JohanDefeat
# 39 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_JohanPostBattle, MSGBOX_AUTOCLOSE
# 40 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 41 "data/maps/SaffronCity_Gym/scripts.pory"

# 42 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tyron::
# 43 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_TYRON, SaffronCity_Gym_Text_TyronIntro, SaffronCity_Gym_Text_TyronDefeat
# 44 "data/maps/SaffronCity_Gym/scripts.pory"
	famechecker FAMECHECKER_SABRINA, 5
# 45 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 46 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 47 "data/maps/SaffronCity_Gym/scripts.pory"

# 48 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Cameron::
# 49 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_CAMERON, SaffronCity_Gym_Text_CameronIntro, SaffronCity_Gym_Text_CameronDefeat
# 50 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_CameronPostBattle, MSGBOX_AUTOCLOSE
# 51 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 52 "data/maps/SaffronCity_Gym/scripts.pory"

# 53 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Preston::
# 54 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_PRESTON, SaffronCity_Gym_Text_PrestonIntro, SaffronCity_Gym_Text_PrestonDefeat
# 55 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_PrestonPostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 57 "data/maps/SaffronCity_Gym/scripts.pory"

# 58 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Amanda::
# 59 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_AMANDA, SaffronCity_Gym_Text_AmandaIntro, SaffronCity_Gym_Text_AmandaDefeat
# 60 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_AmandaPostBattle, MSGBOX_AUTOCLOSE
# 61 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 62 "data/maps/SaffronCity_Gym/scripts.pory"

# 63 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Stacy::
# 64 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_STACY, SaffronCity_Gym_Text_StacyIntro, SaffronCity_Gym_Text_StacyDefeat
# 65 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_StacyPostBattle, MSGBOX_AUTOCLOSE
# 66 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 67 "data/maps/SaffronCity_Gym/scripts.pory"

# 68 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_Tasha::
# 69 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_TASHA, SaffronCity_Gym_Text_TashaIntro, SaffronCity_Gym_Text_TashaDefeat
# 70 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_TashaPostBattle, MSGBOX_AUTOCLOSE
# 71 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 72 "data/maps/SaffronCity_Gym/scripts.pory"

# 73 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuy::
# 74 "data/maps/SaffronCity_Gym/scripts.pory"
	lock
# 75 "data/maps/SaffronCity_Gym/scripts.pory"
	faceplayer
# 76 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_SABRINA, SaffronCity_Gym_EventScript_GymGuyPostVictory
# 77 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyAdvice
# 78 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 79 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 80 "data/maps/SaffronCity_Gym/scripts.pory"

# 81 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymGuyPostVictory::
# 82 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymGuyPostVictory
# 83 "data/maps/SaffronCity_Gym/scripts.pory"
	release
# 84 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 85 "data/maps/SaffronCity_Gym/scripts.pory"

# 86 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatue::
# 87 "data/maps/SaffronCity_Gym/scripts.pory"
	lockall
# 88 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE06_GET, SaffronCity_Gym_EventScript_GymStatuePostVictory
# 89 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatue
# 90 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 91 "data/maps/SaffronCity_Gym/scripts.pory"
	end
# 92 "data/maps/SaffronCity_Gym/scripts.pory"

# 93 "data/maps/SaffronCity_Gym/scripts.pory"
SaffronCity_Gym_EventScript_GymStatuePostVictory::
# 94 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Text_GymStatuePlayerWon
# 95 "data/maps/SaffronCity_Gym/scripts.pory"
	releaseall
# 96 "data/maps/SaffronCity_Gym/scripts.pory"
	end

SaffronCity_Gym_MapScripts::
# 102 "data/maps/SaffronCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SaffronCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SaffronCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD:
# 104 "data/maps/SaffronCity_Gym/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, SaffronCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SaffronCity_Gym_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 106 "data/maps/SaffronCity_Gym/scripts.pory"
	setmetatile 10, 20, METATILE_SaffronGym_CityFloorIndoorTile_HalfShadow_Left, 0
# 107 "data/maps/SaffronCity_Gym/scripts.pory"
	special DrawWholeMapView
	return


SaffronCity_Gym_ShowSabrinasNewWarpPanel::
# 114 "data/maps/SaffronCity_Gym/scripts.pory"
	setmetatile 10, 20, METATILE_SaffronGym_SabrinasWarpPanel, 0
# 115 "data/maps/SaffronCity_Gym/scripts.pory"
	special DrawWholeMapView
# 116 "data/maps/SaffronCity_Gym/scripts.pory"
	playse SE_UNLOCK
	return


SaffronCity_Gym_Sabrina_Rematch::
# 122 "data/maps/SaffronCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_SABRINA_2, SaffronCity_Gym_Sabrina_Rematch_Text_0, SaffronCity_Gym_Sabrina_Rematch_Text_1, SaffronCity_Gym_Sabrina_Rematch_Text_2, NO_MUSIC
# 123 "data/maps/SaffronCity_Gym/scripts.pory"
	msgbox SaffronCity_Gym_Sabrina_Rematch_Text_3
# 124 "data/maps/SaffronCity_Gym/scripts.pory"
	closemessage
# 125 "data/maps/SaffronCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_SABRINA_2
# 126 "data/maps/SaffronCity_Gym/scripts.pory"
	release
	end


SaffronCity_Gym_Sabrina_Rematch_Text_0:
# 122 "data/maps/SaffronCity_Gym/scripts.pory"
	.string "I won't be relying on just my\n"
	.string "psychic power this time.\p"
	.string "My true strength...\n"
	.string "My true self...\p"
	.string "Allow me to test them on you!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

SaffronCity_Gym_Sabrina_Rematch_Text_1:
# 122 "data/maps/SaffronCity_Gym/scripts.pory"
	.string "I will be seeing you more.\n"
	.string "Definitely way after 3 years...$"

SaffronCity_Gym_Sabrina_Rematch_Text_2:
# 122 "data/maps/SaffronCity_Gym/scripts.pory"
	.string "$"

SaffronCity_Gym_Sabrina_Rematch_Text_3:
# 123 "data/maps/SaffronCity_Gym/scripts.pory"
	.string "There was a time once before,\n"
	.string "when I lost to you...\p"
	.string "I was just... shocked.\n"
	.string "But that feeling is gone now.\p"
	.string "I now wish to grow stronger\n"
	.string "and live freely, as you.$"
