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
	clearflag FLAG_HIDE_CINNABAR_BILL
# 66 "data/maps/CinnabarIsland_Gym/scripts.pory"
	set_gym_trainers 7
# 67 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_GiveTM38
# 68 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 69 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 70 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GiveTM38::
# 71 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ExplainVolcanoBadge
# 72 "data/maps/CinnabarIsland_Gym/scripts.pory"
	checkitemspace ITEM_TM38
# 73 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CinnabarIsland_Gym_EventScript_NoRoomForTM38
# 74 "data/maps/CinnabarIsland_Gym/scripts.pory"
	giveitem_msg CinnabarIsland_Gym_Text_ReceivedTM38FromBlaine, ITEM_TM38
# 75 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_GOT_TM38_FROM_BLAINE
# 76 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_FireBlastIsUltimateFireMove
# 77 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 78 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 79 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 80 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_NoRoomForTM38::
# 81 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_MakeSpaceForThis
# 82 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 83 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 84 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 85 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Erik::
# 86 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ERIK, CinnabarIsland_Gym_Text_ErikIntro, CinnabarIsland_Gym_Text_ErikDefeat
# 87 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ErikPostBattle, MSGBOX_AUTOCLOSE
# 88 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 89 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 90 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Avery::
# 91 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryIntro, CinnabarIsland_Gym_Text_AveryDefeat, CinnabarIsland_Gym_EventScript_DefeatedAvery
# 92 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryPostBattle, MSGBOX_AUTOCLOSE
# 93 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 94 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 95 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedAvery::
# 96 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer
# 97 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 98 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 99 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 100 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2CompleteTrainer::
# 101 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 102 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 103 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 104 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Derek::
# 105 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekIntro, CinnabarIsland_Gym_Text_DerekDefeat, CinnabarIsland_Gym_EventScript_DefeatedDerek
# 106 "data/maps/CinnabarIsland_Gym/scripts.pory"
	famechecker FAMECHECKER_BLAINE, 2
# 107 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekPostBattle, MSGBOX_AUTOCLOSE
# 108 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 109 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 110 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDerek::
# 111 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer
# 112 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 113 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 114 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 115 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4CompleteTrainer::
# 116 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 117 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 118 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 119 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Zac::
# 120 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacIntro, CinnabarIsland_Gym_Text_ZacDefeat, CinnabarIsland_Gym_EventScript_DefeatedZac
# 121 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacPostBattle, MSGBOX_AUTOCLOSE
# 122 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 123 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 124 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedZac::
# 125 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer
# 126 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 127 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 128 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 129 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6CompleteTrainer::
# 130 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 131 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 132 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 133 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quinn::
# 134 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnIntro, CinnabarIsland_Gym_Text_QuinnDefeat, CinnabarIsland_Gym_EventScript_DefeatedQuinn
# 135 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnPostBattle, MSGBOX_AUTOCLOSE
# 136 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 137 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 138 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedQuinn::
# 139 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer
# 140 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 141 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 142 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 143 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1CompleteTrainer::
# 144 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 145 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 146 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 147 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Ramon::
# 148 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonIntro, CinnabarIsland_Gym_Text_RamonDefeat, CinnabarIsland_Gym_EventScript_DefeatedRamon
# 149 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonPostBattle, MSGBOX_AUTOCLOSE
# 150 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 151 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 152 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedRamon::
# 153 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer
# 154 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 155 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 156 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 157 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3CompleteTrainer::
# 158 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 159 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 160 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 161 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Dusty::
# 162 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyIntro, CinnabarIsland_Gym_Text_DustyDefeat, CinnabarIsland_Gym_EventScript_DefeatedDusty
# 163 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyPostBattle, MSGBOX_AUTOCLOSE
# 164 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 165 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 166 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DefeatedDusty::
# 167 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_unset FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer
# 168 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 169 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 170 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 171 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5CompleteTrainer::
# 172 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 173 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 174 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 175 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuy::
# 176 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 177 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 178 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_BLAINE, CinnabarIsland_Gym_EventScript_GymGuyPostVictory
# 179 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyAdvice
# 180 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 181 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 182 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 183 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymGuyPostVictory::
# 184 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymGuyPostVictory
# 185 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
# 186 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 187 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 188 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatue::
# 189 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 190 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, CinnabarIsland_Gym_EventScript_GymStatuePostVictory
# 191 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatue
# 192 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 193 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 194 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 195 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_GymStatuePostVictory::
# 196 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_GymStatuePlayerWon
# 197 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 198 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 199 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 200 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Left::
# 201 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 202 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 203 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 204 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 205 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 206 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quz1Right::
# 207 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 208 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 209 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz1
# 210 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 211 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 212 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1::
# 213 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 214 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion1, MSGBOX_YESNO
# 215 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz1Correct
# 216 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz1Incorrect
# 217 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 218 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 219 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_CorrectAnswer::
# 220 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 221 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitfanfare
# 222 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_CorrectGoOnThrough
# 223 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 224 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 225 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_IncorrectAnswer::
# 226 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 227 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_BOO
# 228 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 229 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_SorryBadCall
# 230 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 231 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 232 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 233 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Correct::
# 234 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 235 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 236 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 237 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 238 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 239 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 240 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Complete::
# 241 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 242 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 243 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor1
# 244 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 245 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_1
# 246 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 247 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 248 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DoorAlreadyOpen::
# 249 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 250 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 251 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 252 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz1Incorrect::
# 253 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 254 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_EventScript_BattleQuinn
# 255 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 256 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 257 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 258 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleQuinn::
# 259 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_QuinnApproachLeft
# 260 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_QuinnApproachRight
# 261 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 262 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuinnIntro
# 263 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_QUINN, CinnabarIsland_Gym_Text_QuinnDefeat
# 264 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_1, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 265 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz1Complete
# 266 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 267 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 268 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 269 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachLeft::
# 270 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 271 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachLeft
# 272 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 273 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 274 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 275 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_QuinnApproachRight::
# 276 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 277 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_QUINN, CinnabarIsland_Gym_Movement_QuinnApproachRight
# 278 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 279 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 280 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 281 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachLeft::
# 282 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 283 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 284 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 285 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 286 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_QuinnApproachRight::
# 287 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 288 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 289 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 290 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Left::
# 291 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 292 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 293 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 294 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 295 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 296 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Right::
# 297 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 298 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 299 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz2
# 300 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 301 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 302 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2::
# 303 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 304 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion2, MSGBOX_YESNO
# 305 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz2Incorrect
# 306 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz2Correct
# 307 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 308 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 309 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Correct::
# 310 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 311 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 312 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 313 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 314 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 315 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 316 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Complete::
# 317 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 318 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 319 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor2
# 320 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 321 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_2
# 322 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 323 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 324 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz2Incorrect::
# 325 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 326 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_EventScript_BattleAvery
# 327 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 328 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 329 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 330 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleAvery::
# 331 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_AveryApproachLeft
# 332 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_AveryApproachRight
# 333 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 334 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_AveryIntro
# 335 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_AVERY, CinnabarIsland_Gym_Text_AveryDefeat
# 336 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_2, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 337 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz2Complete
# 338 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 339 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 340 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 341 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachLeft::
# 342 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 343 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachLeft
# 344 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 345 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 346 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 347 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_AveryApproachRight::
# 348 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, CinnabarIsland_Gym_Movement_PlayerFaceAvery
# 349 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_AVERY, CinnabarIsland_Gym_Movement_AveryApproachRight
# 350 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 351 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 352 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 353 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachLeft::
# 354 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 355 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 356 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 357 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 358 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 359 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_AveryApproachRight::
# 360 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 361 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_up
# 362 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_left
# 363 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 364 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 365 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_PlayerFaceAvery::
# 366 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 367 "data/maps/CinnabarIsland_Gym/scripts.pory"
	delay_16
# 368 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_in_place_faster_right
# 369 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 370 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 371 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Left::
# 372 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 373 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 374 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 375 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 376 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 377 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Right::
# 378 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 379 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 380 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz3
# 381 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 382 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 383 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3::
# 384 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 385 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion3, MSGBOX_YESNO
# 386 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz3Incorrect
# 387 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz3Correct
# 388 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 389 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 390 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Correct::
# 391 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 392 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 393 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 394 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 395 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 396 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 397 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Complete::
# 398 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 399 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 400 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor3
# 401 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 402 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_3
# 403 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 404 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 405 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz3Incorrect::
# 406 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 407 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_EventScript_BattleRamon
# 408 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 409 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 410 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 411 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleRamon::
# 412 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_RamonApproachLeft
# 413 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_RamonApproachRight
# 414 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 415 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_RamonIntro
# 416 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_RAMON, CinnabarIsland_Gym_Text_RamonDefeat
# 417 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_3, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 418 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz3Complete
# 419 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 420 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 421 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 422 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachLeft::
# 423 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 424 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachLeft
# 425 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 426 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 427 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 428 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_RamonApproachRight::
# 429 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 430 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_RAMON, CinnabarIsland_Gym_Movement_RamonApproachRight
# 431 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 432 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 433 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 434 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachLeft::
# 435 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 436 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 437 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 438 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 439 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_RamonApproachRight::
# 440 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 441 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 442 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 443 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Left::
# 444 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 445 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 446 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 447 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 448 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 449 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Right::
# 450 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 451 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 452 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz4
# 453 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 454 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 455 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4::
# 456 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 457 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion4, MSGBOX_YESNO
# 458 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz4Incorrect
# 459 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz4Correct
# 460 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 461 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 462 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Correct::
# 463 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 464 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 465 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 466 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 467 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 468 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 469 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Complete::
# 470 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 471 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 472 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor4
# 473 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 474 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_4
# 475 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 476 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 477 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz4Incorrect::
# 478 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 479 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_EventScript_BattleDerek
# 480 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 481 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 482 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 483 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDerek::
# 484 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DerekApproachLeft
# 485 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DerekApproachRight
# 486 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 487 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DerekIntro
# 488 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_DEREK, CinnabarIsland_Gym_Text_DerekDefeat
# 489 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_4, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 490 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz4Complete
# 491 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 492 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 493 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 494 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachLeft::
# 495 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 496 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachLeft
# 497 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 498 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 499 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 500 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DerekApproachRight::
# 501 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 502 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DEREK, CinnabarIsland_Gym_Movement_DerekApproachRight
# 503 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 504 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 505 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 506 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachLeft::
# 507 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 508 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 509 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 510 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 511 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DerekApproachRight::
# 512 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 513 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 514 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 515 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Left::
# 516 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 517 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 518 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 519 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 520 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 521 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Right::
# 522 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 523 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 524 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz5
# 525 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 526 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 527 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5::
# 528 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 529 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion5, MSGBOX_YESNO
# 530 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz5Correct
# 531 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz5Incorrect
# 532 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 533 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 534 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Correct::
# 535 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 536 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 537 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 538 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 539 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 540 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 541 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Complete::
# 542 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 543 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 544 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor5
# 545 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 546 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_5
# 547 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 548 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 549 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz5Incorrect::
# 550 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 551 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_EventScript_BattleDusty
# 552 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 553 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 554 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 555 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleDusty::
# 556 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_DustyApproachLeft
# 557 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_DustyApproachRight
# 558 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 559 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_DustyIntro
# 560 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_BURGLAR_DUSTY, CinnabarIsland_Gym_Text_DustyDefeat
# 561 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_5, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 562 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz5Complete
# 563 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 564 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 565 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 566 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachLeft::
# 567 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 568 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachLeft
# 569 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 570 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 571 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 572 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_DustyApproachRight::
# 573 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 574 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_DUSTY, CinnabarIsland_Gym_Movement_DustyApproachRight
# 575 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 576 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 577 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 578 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachLeft::
# 579 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 580 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 581 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 582 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 583 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_DustyApproachRight::
# 584 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 585 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 586 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 587 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Left::
# 588 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 589 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 0
# 590 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 591 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 592 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 593 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Right::
# 594 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lockall
# 595 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_TEMP_1, 1
# 596 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto CinnabarIsland_Gym_EventScript_Quiz6
# 597 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 598 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 599 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6::
# 600 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_PokemonQuizRules
# 601 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_QuizQuestion6, MSGBOX_YESNO
# 602 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CinnabarIsland_Gym_EventScript_Quiz6Incorrect
# 603 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CinnabarIsland_Gym_EventScript_Quiz6Correct
# 604 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 605 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 606 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Correct::
# 607 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_CorrectAnswer
# 608 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 609 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 610 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 611 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 612 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 613 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Complete::
# 614 "data/maps/CinnabarIsland_Gym/scripts.pory"
	playse SE_UNLOCK
# 615 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitse
# 616 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_OpenDoor6
# 617 "data/maps/CinnabarIsland_Gym/scripts.pory"
	special DrawWholeMapView
# 618 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_CINNABAR_GYM_QUIZ_6
# 619 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 620 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 621 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Quiz6Incorrect::
# 622 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_IncorrectAnswer
# 623 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_EventScript_BattleZac
# 624 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 625 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 626 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 627 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_BattleZac::
# 628 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 0, CinnabarIsland_Gym_EventScript_ZacApproachLeft
# 629 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, CinnabarIsland_Gym_EventScript_ZacApproachRight
# 630 "data/maps/CinnabarIsland_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 631 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_Text_ZacIntro
# 632 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_SUPER_NERD_ZAC, CinnabarIsland_Gym_Text_ZacDefeat
# 633 "data/maps/CinnabarIsland_Gym/scripts.pory"
	goto_if_set FLAG_CINNABAR_GYM_QUIZ_6, CinnabarIsland_Gym_EventScript_DoorAlreadyOpen
# 634 "data/maps/CinnabarIsland_Gym/scripts.pory"
	call CinnabarIsland_Gym_EventScript_Quiz6Complete
# 635 "data/maps/CinnabarIsland_Gym/scripts.pory"
	releaseall
# 636 "data/maps/CinnabarIsland_Gym/scripts.pory"
	end
# 637 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 638 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachLeft::
# 639 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 640 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachLeft
# 641 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 642 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 643 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 644 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_ZacApproachRight::
# 645 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 646 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement LOCALID_ZAC, CinnabarIsland_Gym_Movement_ZacApproachRight
# 647 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement 0
# 648 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 649 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 650 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachLeft::
# 651 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 652 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 653 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 654 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 655 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_Movement_ZacApproachRight::
# 656 "data/maps/CinnabarIsland_Gym/scripts.pory"
	walk_left
# 657 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end
# 658 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 659 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor1::
# 660 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 661 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 662 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 663 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 664 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 26, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 665 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 27, 10, METATILE_CinnabarGym_Floor, 0
# 666 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 28, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 667 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 668 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 669 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor2::
# 670 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 671 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 672 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 673 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 674 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 675 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 10, METATILE_CinnabarGym_Floor, 0
# 676 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 677 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 678 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 679 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor3::
# 680 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 15, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 681 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 15, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 682 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 16, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 683 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 16, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 684 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 17, 17, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 685 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 18, 17, METATILE_CinnabarGym_Floor, 0
# 686 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 19, 17, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 687 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 688 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 689 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor4::
# 690 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 21, METATILE_CinnabarGym_Wall_RetractedBarrier, 1
# 691 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 22, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 692 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile 11, 23, METATILE_CinnabarGym_Floor, 0
# 693 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 694 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 695 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor5::
# 696 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 16, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 697 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 16, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 698 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 17, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 699 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 17, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 700 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 18, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 701 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 18, METATILE_CinnabarGym_Floor, 0
# 702 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 18, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 703 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return
# 704 "data/maps/CinnabarIsland_Gym/scripts.pory"

# 705 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_OpenDoor6::
# 706 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  8, METATILE_CinnabarGym_Floor_WallLeftCorner, 0
# 707 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  8, METATILE_CinnabarGym_Floor_WallRightCorner, 0
# 708 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5,  9, METATILE_CinnabarGym_Floor_WallLeftEdge, 0
# 709 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6,  9, METATILE_CinnabarGym_Floor_WallRightEdge, 0
# 710 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  5, 10, METATILE_CinnabarGym_Floor_ShadeFull, 0
# 711 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  6, 10, METATILE_CinnabarGym_Floor, 0
# 712 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setmetatile  7, 10, METATILE_CinnabarGym_Floor_ShadeDiagonal, 0
# 713 "data/maps/CinnabarIsland_Gym/scripts.pory"
	return

CinnabarIsland_Gym_EventScript_Blaine_Rematch::
# 718 "data/maps/CinnabarIsland_Gym/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 2
	goto_if_eq CinnabarIsland_Gym_EventScript_Blaine_Rematch_1
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BLAINE_2, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_8, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_9, CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_10, NO_MUSIC
# 749 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_11
# 750 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 751 "data/maps/CinnabarIsland_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BLAINE_2
# 752 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_1:
# 720 "data/maps/CinnabarIsland_Gym/scripts.pory"
	lock
# 721 "data/maps/CinnabarIsland_Gym/scripts.pory"
	faceplayer
# 722 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_0
# 724 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 725 "data/maps/CinnabarIsland_Gym/scripts.pory"
	applymovement 8, CinnabarIsland_Gym_EventScript_Blaine_NoticesPlayer
# 726 "data/maps/CinnabarIsland_Gym/scripts.pory"
	waitmovement
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_3
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_4
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_5
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_6
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	msgbox CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_7
# 734 "data/maps/CinnabarIsland_Gym/scripts.pory"
	closemessage
# 735 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 3
# 736 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadescreen FADE_TO_BLACK
# 737 "data/maps/CinnabarIsland_Gym/scripts.pory"
	removeobject 8
# 738 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 739 "data/maps/CinnabarIsland_Gym/scripts.pory"
	setflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 740 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_BLAINE
# 741 "data/maps/CinnabarIsland_Gym/scripts.pory"
	clearflag FLAG_HIDE_VERMILION_MR_FUJI
# 742 "data/maps/CinnabarIsland_Gym/scripts.pory"
	fadedefaultbgm
# 743 "data/maps/CinnabarIsland_Gym/scripts.pory"
	release
	end


# 757 "data/maps/CinnabarIsland_Gym/scripts.pory"
CinnabarIsland_Gym_EventScript_Blaine_NoticesPlayer:
# 759 "data/maps/CinnabarIsland_Gym/scripts.pory"
	emote_exclamation_mark
# 760 "data/maps/CinnabarIsland_Gym/scripts.pory"
	step_end

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_0:
# 723 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "The CINNABAR VOLCANO seems\n"
	.string "to be quite active lately...\p"
	.string "Should it erupt, the land...\n"
	.string "No...$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_1:
# 727 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Hah!\n"
	.string "I got lost in my thoughts!\p"
	.string "MR. FUJI tells me you're\n"
	.string "quite the quiz whiz.\p"
	.string "You know, I am something\n"
	.string "of a scientist, myself...$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_2:
# 728 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "That's right! You're the one\n"
	.string "who unlocked the GYM.\p"
	.string "Surely you must've read\n"
	.string "up on our research?$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_3:
# 729 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "No?\n"
	.string "Didn't see anything interesting?\p"
	.string "...Hmph! Well, it's not as if I\n"
	.string "know the whole story anyway.$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_4:
# 730 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "The prototype taken from SILPH\n"
	.string "CO., POKéGEAR, is high-tech!\p"
	.string "It allows for long-distance\n"
	.string "communications and more!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_5:
# 731 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I'd have no doubt that the\n"
	.string "same fool's behind it! GIOVANNI!\p"
	.string "He'll pay the price for\n"
	.string "sabotaging research development!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_6:
# 732 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I'm all fired up!\n"
	.string "That settles it, {PLAYER}!\p"
	.string "It's time to head back into\n"
	.string "the GUYANA REGION!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_7:
# 733 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I'll be waiting for you at the\n"
	.string "VERMILION HARBOR!\p"
	.string "You better bring items for\n"
	.string "a long journey!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_8:
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "Well done, returning to my GYM!\n"
	.string "Let us have a fiery battle!\p"
	.string "Hah!\n"
	.string "BURN HEAL is useless now!\p"
	.string "You'd better have FULL HEAL!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_9:
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "My fiery spirit has not\n"
	.string "been defeated!$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_10:
# 748 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "$"

CinnabarIsland_Gym_EventScript_Blaine_Rematch_Text_11:
# 749 "data/maps/CinnabarIsland_Gym/scripts.pory"
	.string "I did lose this time,\n"
	.string "but I'll win next time.\p"
	.string "My FIRE-TYPE POKéMON will\n"
	.string "be even stronger!\p"
	.string "Just you watch!$"
