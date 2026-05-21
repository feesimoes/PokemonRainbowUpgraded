# 1 "data/maps/MtEmber_Summit/scripts.pory"

# 2 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_MapScripts::
# 3 "data/maps/MtEmber_Summit/scripts.pory"
    map_script MAP_SCRIPT_ON_LOAD, MtEmber_Summit_EventScript_OnLoad
# 4 "data/maps/MtEmber_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtEmber_Summit_OnTransition
# 5 "data/maps/MtEmber_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, MtEmber_Summit_OnResume
# 6 "data/maps/MtEmber_Summit/scripts.pory"
	.byte 0
# 7 "data/maps/MtEmber_Summit/scripts.pory"

# 8 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_OnLoad::
# 9 "data/maps/MtEmber_Summit/scripts.pory"
    call MtEmber_Summit_EventScript_HandleEnteisAppearance
# 10 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 11 "data/maps/MtEmber_Summit/scripts.pory"

# 12 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_OnResume::
# 13 "data/maps/MtEmber_Summit/scripts.pory"
	call_if_set FLAG_SYS_SPECIAL_WILD_BATTLE, MtEmber_Summit_EventScript_TryRemoveMoltres
# 14 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 15 "data/maps/MtEmber_Summit/scripts.pory"

# 16 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_TryRemoveMoltres::
# 17 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 18 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, EventScript_Return
# 19 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject VAR_LAST_TALKED
# 20 "data/maps/MtEmber_Summit/scripts.pory"
	return
# 21 "data/maps/MtEmber_Summit/scripts.pory"

# 22 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_OnTransition::
# 23 "data/maps/MtEmber_Summit/scripts.pory"
	call_if_unset FLAG_FOUGHT_MOLTRES, MtEmber_Summit_EventScript_ShowMoltres
# 24 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 25 "data/maps/MtEmber_Summit/scripts.pory"

# 26 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_ShowMoltres::
# 27 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_HIDE_MOLTRES
# 28 "data/maps/MtEmber_Summit/scripts.pory"
	return
# 29 "data/maps/MtEmber_Summit/scripts.pory"

# 30 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_Moltres::
# 31 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 32 "data/maps/MtEmber_Summit/scripts.pory"
	special QuestLog_CutRecording
# 33 "data/maps/MtEmber_Summit/scripts.pory"
	lock
# 34 "data/maps/MtEmber_Summit/scripts.pory"
	faceplayer
# 35 "data/maps/MtEmber_Summit/scripts.pory"
	setwildbattle SPECIES_MOLTRES, 50
# 36 "data/maps/MtEmber_Summit/scripts.pory"
	waitse
# 37 "data/maps/MtEmber_Summit/scripts.pory"
	playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
# 38 "data/maps/MtEmber_Summit/scripts.pory"
	message Text_Gyaoo
# 39 "data/maps/MtEmber_Summit/scripts.pory"
	waitmessage
# 40 "data/maps/MtEmber_Summit/scripts.pory"
	waitmoncry
# 41 "data/maps/MtEmber_Summit/scripts.pory"
	delay 10
# 42 "data/maps/MtEmber_Summit/scripts.pory"
	playbgm MUS_ENCOUNTER_GYM_LEADER, 0
# 43 "data/maps/MtEmber_Summit/scripts.pory"
	waitbuttonpress
# 44 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 45 "data/maps/MtEmber_Summit/scripts.pory"
	special StartLegendaryBattle
# 46 "data/maps/MtEmber_Summit/scripts.pory"
	waitstate
# 47 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 48 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 49 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, MtEmber_Summit_EventScript_DefeatedMoltres
# 50 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, MtEmber_Summit_EventScript_RanFromMoltres
# 51 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, MtEmber_Summit_EventScript_RanFromMoltres
# 52 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 53 "data/maps/MtEmber_Summit/scripts.pory"
	release
# 54 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 55 "data/maps/MtEmber_Summit/scripts.pory"

# 56 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_DefeatedMoltres::
# 57 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_FOUGHT_MOLTRES
# 58 "data/maps/MtEmber_Summit/scripts.pory"
	goto EventScript_RemoveStaticMon
# 59 "data/maps/MtEmber_Summit/scripts.pory"
	end
# 60 "data/maps/MtEmber_Summit/scripts.pory"

# 61 "data/maps/MtEmber_Summit/scripts.pory"
MtEmber_Summit_EventScript_RanFromMoltres::
# 62 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_0x8004, SPECIES_MOLTRES
# 63 "data/maps/MtEmber_Summit/scripts.pory"
	goto EventScript_MonFlewAway
# 64 "data/maps/MtEmber_Summit/scripts.pory"
	end

MtEmber_Summit_EventScript_Entei::
# 70 "data/maps/MtEmber_Summit/scripts.pory"
	lock
# 71 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, CalculatePlayerPartyCount
# 72 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, 6
	goto_if_eq MtEmber_Summit_EventScript_Entei_2
# 83 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_0x8004, 1
# 84 "data/maps/MtEmber_Summit/scripts.pory"
	setvar VAR_0x8005, 1
# 85 "data/maps/MtEmber_Summit/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 86 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_2
# 87 "data/maps/MtEmber_Summit/scripts.pory"
	waitmessage
# 88 "data/maps/MtEmber_Summit/scripts.pory"
	playse SE_M_EARTHQUAKE
# 89 "data/maps/MtEmber_Summit/scripts.pory"
	closemessage
# 90 "data/maps/MtEmber_Summit/scripts.pory"
	special ShakeScreen
# 91 "data/maps/MtEmber_Summit/scripts.pory"
	waitse
# 92 "data/maps/MtEmber_Summit/scripts.pory"
	setwildbattle SPECIES_ENTEI, 40, ITEM_NONE
# 93 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 94 "data/maps/MtEmber_Summit/scripts.pory"
	waitbuttonpress
# 95 "data/maps/MtEmber_Summit/scripts.pory"
	closemessage
# 96 "data/maps/MtEmber_Summit/scripts.pory"
	special StartLegendaryBattle
# 97 "data/maps/MtEmber_Summit/scripts.pory"
	waitstate
# 98 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 99 "data/maps/MtEmber_Summit/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 100 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq MtEmber_Summit_EventScript_Entei_5
# 114 "data/maps/MtEmber_Summit/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 115 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_4
# 116 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_5
# 117 "data/maps/MtEmber_Summit/scripts.pory"
	closemessage
MtEmber_Summit_EventScript_Entei_1:
# 120 "data/maps/MtEmber_Summit/scripts.pory"
	release
	end

MtEmber_Summit_EventScript_Entei_2:
# 74 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_0
# 75 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_1
# 76 "data/maps/MtEmber_Summit/scripts.pory"
	closemessage
# 77 "data/maps/MtEmber_Summit/scripts.pory"
	playse SE_PC_LOGIN
# 78 "data/maps/MtEmber_Summit/scripts.pory"
	special ShowPokemonStorageSystemPC
# 79 "data/maps/MtEmber_Summit/scripts.pory"
	waitstate
	goto MtEmber_Summit_EventScript_Entei_1

MtEmber_Summit_EventScript_Entei_5:
# 102 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_EMBER_ENTEI
# 103 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_CAUGHT_MT_EMBER_ENTEI
# 104 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 105 "data/maps/MtEmber_Summit/scripts.pory"
	removeobject LOCALID_MT_EMBER_ENTEI
# 106 "data/maps/MtEmber_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 107 "data/maps/MtEmber_Summit/scripts.pory"
	special FixCaughtBeastsToLegalColosseumEvent
# 108 "data/maps/MtEmber_Summit/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 109 "data/maps/MtEmber_Summit/scripts.pory"
	msgbox MtEmber_Summit_EventScript_Entei_Text_3
# 110 "data/maps/MtEmber_Summit/scripts.pory"
	closemessage
	goto MtEmber_Summit_EventScript_Entei_1


MtEmber_Summit_EventScript_HandleEnteisAppearance::
# 126 "data/maps/MtEmber_Summit/scripts.pory"
	compare VAR_JOHTO_STORY_PROGRESS, 2
	goto_if_ge MtEmber_Summit_EventScript_HandleEnteisAppearance_3
MtEmber_Summit_EventScript_HandleEnteisAppearance_2:
# 132 "data/maps/MtEmber_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_EMBER_ENTEI
	return

MtEmber_Summit_EventScript_HandleEnteisAppearance_1:
# 128 "data/maps/MtEmber_Summit/scripts.pory"
	clearflag FLAG_HIDE_MT_EMBER_ENTEI
	return

MtEmber_Summit_EventScript_HandleEnteisAppearance_3:
# 126 "data/maps/MtEmber_Summit/scripts.pory"
	goto_if_unset FLAG_CAUGHT_MT_EMBER_ENTEI, MtEmber_Summit_EventScript_HandleEnteisAppearance_1
	goto MtEmber_Summit_EventScript_HandleEnteisAppearance_2


MtEmber_Summit_EventScript_Entei_Text_0:
# 74 "data/maps/MtEmber_Summit/scripts.pory"
	.string "ENTEI looms over intimidatingly...$"

MtEmber_Summit_EventScript_Entei_Text_1:
# 75 "data/maps/MtEmber_Summit/scripts.pory"
	.string "You'll need to catch it and\n"
	.string "add ENTEI to your PARTY.\p"
	.string "Let's free up at one spot!$"

MtEmber_Summit_EventScript_Entei_Text_2:
# 86 "data/maps/MtEmber_Summit/scripts.pory"
	.string "ENTEI looms over intimidatingly...\n"
	.string "Feels like MT. EMBER is erupting!$"

MtEmber_Summit_EventScript_Entei_Text_3:
# 109 "data/maps/MtEmber_Summit/scripts.pory"
	.string "The rumbling from beneath has\n"
	.string "calmed, as ENTEI joins you.$"

MtEmber_Summit_EventScript_Entei_Text_4:
# 115 "data/maps/MtEmber_Summit/scripts.pory"
	.string "Rwaooowrrr!$"

MtEmber_Summit_EventScript_Entei_Text_5:
# 116 "data/maps/MtEmber_Summit/scripts.pory"
	.string "The rumbling beneath you has\n"
	.string "calmed, but may not last...$"
