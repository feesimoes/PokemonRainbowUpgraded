MtMora_MapScripts::
# 3 "data/maps/MtMora/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtMora_MapScripts_MAP_SCRIPT_ON_LOAD
# 14 "data/maps/MtMora/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtMora_MapScripts_MAP_SCRIPT_ON_RESUME
# 21 "data/maps/MtMora/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtMora_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MtMora_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MtMora/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 10
	goto_if_lt MtMora_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 9 "data/maps/MtMora/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 14
	goto_if_eq MtMora_MapScripts_MAP_SCRIPT_ON_LOAD_2
	return

MtMora_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/MtMora/scripts.pory"
	clearflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	return

MtMora_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 11 "data/maps/MtMora/scripts.pory"
	clearflag FLAG_HIDE_CERULEAN_CAVE_GUARD
	return

MtMora_MapScripts_MAP_SCRIPT_ON_RESUME:
# 16 "data/maps/MtMora/scripts.pory"
	goto_if_set FLAG_CAUGHT_MEW, MtMora_MapScripts_MAP_SCRIPT_ON_RESUME_1
	return

MtMora_MapScripts_MAP_SCRIPT_ON_RESUME_1:
# 18 "data/maps/MtMora/scripts.pory"
	removeobject LOCALID_MEW
	return

MtMora_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 23 "data/maps/MtMora/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MEW, MtMora_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MtMora_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 25 "data/maps/MtMora/scripts.pory"
	clearflag FLAG_HIDE_MEW
	return


MtMora_RoadBlock::
# 32 "data/maps/MtMora/scripts.pory"
	lock
# 33 "data/maps/MtMora/scripts.pory"
	faceplayer
# 34 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_RoadBlock_Text_0
# 35 "data/maps/MtMora/scripts.pory"
	closemessage
# 36 "data/maps/MtMora/scripts.pory"
	release
	end


MtMora_Sign::
# 42 "data/maps/MtMora/scripts.pory"
	lock
# 43 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Sign_Text_0
# 44 "data/maps/MtMora/scripts.pory"
	closemessage
# 45 "data/maps/MtMora/scripts.pory"
	release
	end


MtMora_Mew_Encounter::
# 51 "data/maps/MtMora/scripts.pory"
	lock
# 52 "data/maps/MtMora/scripts.pory"
	faceplayer
# 53 "data/maps/MtMora/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 54 "data/maps/MtMora/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MtMora_Mew_Encounter_2
# 65 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Mew_Encounter_Text_2
# 66 "data/maps/MtMora/scripts.pory"
	waitse
# 67 "data/maps/MtMora/scripts.pory"
	fadeoutbgm 0
# 68 "data/maps/MtMora/scripts.pory"
	playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
# 69 "data/maps/MtMora/scripts.pory"
	waitmessage
# 70 "data/maps/MtMora/scripts.pory"
	waitmoncry
# 71 "data/maps/MtMora/scripts.pory"
	delay 20
# 72 "data/maps/MtMora/scripts.pory"
	playbgm MUS_LEGEND_TRAINER, 0
# 73 "data/maps/MtMora/scripts.pory"
	setwildbattle SPECIES_MEW, 30, ITEM_NONE
# 74 "data/maps/MtMora/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 75 "data/maps/MtMora/scripts.pory"
	waitbuttonpress
# 76 "data/maps/MtMora/scripts.pory"
	closemessage
# 77 "data/maps/MtMora/scripts.pory"
	special StartLegendaryBattle
# 78 "data/maps/MtMora/scripts.pory"
	waitstate
# 79 "data/maps/MtMora/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 80 "data/maps/MtMora/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 81 "data/maps/MtMora/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq MtMora_Mew_Encounter_5
# 91 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Mew_Encounter_Text_3
# 92 "data/maps/MtMora/scripts.pory"
	closemessage
MtMora_Mew_Encounter_1:
# 95 "data/maps/MtMora/scripts.pory"
	release
	end

MtMora_Mew_Encounter_2:
# 56 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Mew_Encounter_Text_0
# 57 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Mew_Encounter_Text_1
# 58 "data/maps/MtMora/scripts.pory"
	closemessage
# 59 "data/maps/MtMora/scripts.pory"
	playse SE_PC_LOGIN
# 60 "data/maps/MtMora/scripts.pory"
	special ShowPokemonStorageSystemPC
# 61 "data/maps/MtMora/scripts.pory"
	waitstate
	goto MtMora_Mew_Encounter_1

MtMora_Mew_Encounter_5:
# 83 "data/maps/MtMora/scripts.pory"
	setflag FLAG_CAUGHT_MEW
# 84 "data/maps/MtMora/scripts.pory"
	fadescreen FADE_TO_BLACK
# 85 "data/maps/MtMora/scripts.pory"
	removeobject LOCALID_MEW
# 86 "data/maps/MtMora/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 87 "data/maps/MtMora/scripts.pory"
	special MakeMewLegalJPNEmeraldEvent
	goto MtMora_Mew_Encounter_1


MtMora_RoadBlock_Text_0:
# 34 "data/maps/MtMora/scripts.pory"
	.string "Excuse me...\n"
	.string "You have no business being here.\p"
	.string "Can I suggest something, kid?\n"
	.string "Get lost somewhere, but not here.$"

MtMora_Sign_Text_0:
# 43 "data/maps/MtMora/scripts.pory"
	.string "MT. MORA - KAIETEUR JUNGLE\n"
	.string "The mythical peak of GUYANA.$"

MtMora_Mew_Encounter_Text_0:
# 56 "data/maps/MtMora/scripts.pory"
	.string "Myuu...$"

MtMora_Mew_Encounter_Text_1:
# 57 "data/maps/MtMora/scripts.pory"
	.string "Hmm... MEW seems to be\n"
	.string "overwhelmed by a full PARTY...$"

MtMora_Mew_Encounter_Text_2:
# 65 "data/maps/MtMora/scripts.pory"
	.string "Myuu...!$"

MtMora_Mew_Encounter_Text_3:
# 91 "data/maps/MtMora/scripts.pory"
	.string "Myuu...?$"
