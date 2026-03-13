# 1 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 2 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_MapScripts::
# 3 "data/maps/CinnabarIsland_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CinnabarIsland_Gym_OnLoad
# 4 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 6 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoad::
# 7 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_OnLoadOpenAllDoors
# 8 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_OnLoadOpenDoor1
# 9 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_OnLoadOpenDoor2
# 10 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_OnLoadOpenDoor3
# 11 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_OnLoadOpenDoor4
# 12 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_OnLoadOpenDoor5
# 13 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_OnLoadOpenDoor6
# 14 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 15 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 16 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenAllDoors::
# 17 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 18 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 19 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 20 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 21 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 22 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 23 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 24 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 25 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor1::
# 26 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 27 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 28 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 29 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor2::
# 30 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 31 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 32 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 33 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor3::
# 34 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 35 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 36 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 37 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor4::
# 38 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 39 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 40 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 41 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor5::
# 42 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 43 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 44 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 45 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_OnLoadOpenDoor6::
# 46 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 47 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 48 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 49 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine::
# 50 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 51 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE, CinnabarIsland_Gym_Text_BlaineIntro, CinnabarIsland_Gym_Text_BlaineDefeat, CinnabarIsland_Gym_EventScript_DefeatedBlaine, NO_MUSIC
# 52 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM38_FROM_BLAINE, CinnabarIsland_Gym_EventScript_GiveTM38
# 53 "data/maps/CinnabarIsland_Gym/scripts.pory"
    goto_if_set FLAG_BADGE08_GET, CinnabarIsland_Gym_EventScript_Blaine_Rematch
# 54 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_BlainePostBattle
# 55 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 56 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 57 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 58 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedBlaine::
# 59 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 1
# 60 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_DEFEATED_BLAINE
# 61 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_BADGE07_GET
# 62 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_RIVAL
# 63 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
# 64 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MAP_SCENE_CINNABAR_ISLAND, 1
# 65 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 74 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 75 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 76 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 77 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 85 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 86 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 87 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 88 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 91 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 92 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 93 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 94 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 97 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return

CinnabarIsland_Gym_EventScript_Blaine_Rematch::
# 717 "data/maps/CinnabarIsland_Gym/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 9
	goto_if_eq CinnabarIsland_Gym_EventScript_Blaine_Rematch_2
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 2
	goto_if_eq CinnabarIsland_Gym_EventScript_Blaine_Rematch_4
# 754 "data/maps/CinnabarIsland_Gym/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 7
	goto_if_eq CinnabarIsland_Gym_EventScript_Blaine_Rematch_5
# 765 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE_2, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_14, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2, NO_MUSIC
# 766 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_3
# 767 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 768 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE_2
# 769 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_2:
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE_2, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_0, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2, NO_MUSIC
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_3
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE_2
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_4:
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_4
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement 8, CinnabarIsland_Gym_EventScript_Blaine_NoticesPlayer
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_5
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_6
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_7
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_8
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_9
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_10
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_11
# 742 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 743 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 3
# 744 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 745 "data/maps/CinnabarIsland_Gym/scripts.pory"
	removeobject 8
# 746 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 747 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_BLAINE
# 749 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_MR_FUJI
# 750 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadedefaultbgm
# 751 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_5:
# 756 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE_2, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_12, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2, NO_MUSIC
# 757 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_13
# 758 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 759 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE_2
# 760 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


# 774 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine_NoticesPlayer:
# 776 "data/maps/CinnabarIsland_Gym/scripts.pory"
	emote_exclamation_mark
# 777 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_0:
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "{PLAYER}, thanks for helping!\n"
	.string "Have you talked to MR. FUJI yet?\p"
	.string "...Hah?!\n"
	.string "You want a rematch?\p"
	.string "Well...\n"
	.string "You'd better have FULL HEAL!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1:
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "My fiery spirit has not\n"
	.string "been defeated!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2:
# 719 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_3:
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I did lose this time,\n"
	.string "but I'll win next time.\p"
	.string "My FIRE-TYPE POKéMON will\n"
	.string "be even stronger!\p"
	.string "Just you watch!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_4:
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "The CINNABAR VOLCANO seems to be\n"
	.string "quite active lately...\p"
	.string "Should it erupt, the land...\n"
	.string "No...$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_5:
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Hah!\n"
	.string "I got lost in my thoughts!\p"
	.string "MR. FUJI tells me you're quite the\n"
	.string "QUIZ WHIZ.\p"
	.string "You know, I am something of a\n"
	.string "'ROCKET' SCIENTIST, myself...$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_6:
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "That's right! You're the one who\n"
	.string "unlocked this GYM'S doors!\p"
	.string "Surely you must've read up on\n"
	.string "our research?$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_7:
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "No?\n"
	.string "Didn't see anything interesting?\p"
	.string "...Hmph! Well, it's not as if I'd\n"
	.string "know your whole story anyway.$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_8:
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "The prototype taken from SILPH CO.,\n"
	.string "the POKéGEAR, is high-tech!\p"
	.string "It'd allow for long-distance\n"
	.string "communications, and much more!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_9:
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I'd have no doubt that the same\n"
	.string "fool's behind it being stolen!\p"
	.string "Why, he'll pay the price for\n"
	.string "sabotaging research development!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_10:
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "{PLAYER}, actually, now that I think\n"
	.string "about this... Hm!\p"
	.string "I might have an idea on where he\n"
	.string "would have gone training...$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_11:
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I'll be waiting for you at the\n"
	.string "VERMILION HARBOR!\p"
	.string "You'd better bring BURN HEAL for\n"
	.string "a very long journey!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_12:
# 756 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Hmph! You've got a lot of\n"
	.string "nerve returning to my GYM!\p"
	.string "Still haven't found GIOVANNI?!\n"
	.string "Hah! I could've helped...\p"
	.string "Kid, BURN HEAL is useless!\n"
	.string "There's no HEAL for betrayal!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_13:
# 757 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Hah! You're really enjoying this?!\n"
	.string "Enough fooling around, though!\p"
	.string "You need to find GIOVANNI!\n"
	.string "Bring him down, for our sake!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_14:
# 765 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Well done, returning to my GYM!\n"
	.string "Let us have a fiery battle!\p"
	.string "Hah!\n"
	.string "BURN HEAL is useless now!\p"
	.string "You'd better have FULL HEAL!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"
