NewBarkTown_ProfessorElmsLab_MapScripts::
# 3 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_NEW_BARK_TOWN
	return


NewBarkTown_ProfessorElmsLab_Chikorita_Ball::
# 11 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 12 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_2
# 46 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5
# 48 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1:
# 50 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_2:
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_CHIKORITA, 10, 3
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_0, MSGBOX_YESNO
# 17 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_5
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
# 41 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_5:
# 19 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1
# 20 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 21 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	givemon SPECIES_CHIKORITA, 5, ITEM_MIRACLE_SEED
# 22 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CHIKORITA
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CHIKORITA_BALL
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2, MSGBOX_YESNO
# 25 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_9
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_8:
# 30 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Chikorita_Ball_12
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_11:
# 34 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 35 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_9:
# 27 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 28 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_8

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_12:
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_11


NewBarkTown_ProfessorElmsLab_Totodile_Ball::
# 56 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_2
# 91 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 92 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5
# 93 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Totodile_Ball_1:
# 95 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Totodile_Ball_2:
# 59 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 60 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_TOTODILE, 10, 3
# 61 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_0, MSGBOX_YESNO
# 62 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_5
# 84 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 85 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
# 86 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_1

NewBarkTown_ProfessorElmsLab_Totodile_Ball_5:
# 64 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1
# 65 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 66 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	givemon SPECIES_TOTODILE, 5, ITEM_MYSTIC_WATER
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_TOTODILE
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_TOTODILE_BALL
# 69 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2, MSGBOX_YESNO
# 70 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_9
NewBarkTown_ProfessorElmsLab_Totodile_Ball_8:
# 75 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Totodile_Ball_12
NewBarkTown_ProfessorElmsLab_Totodile_Ball_11:
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 80 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_1

NewBarkTown_ProfessorElmsLab_Totodile_Ball_9:
# 72 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 73 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_8

NewBarkTown_ProfessorElmsLab_Totodile_Ball_12:
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_11


NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball::
# 101 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 102 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_2
# 136 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 137 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5
# 138 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1:
# 140 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_2:
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 105 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	showmonpic SPECIES_CYNDAQUIL, 10, 3
# 106 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_0, MSGBOX_YESNO
# 107 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_5
# 129 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 130 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
# 131 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_5:
# 109 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1
# 110 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 111 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	givemon SPECIES_CYNDAQUIL, 5, ITEM_CHARCOAL
# 112 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CYNDAQUIL
# 113 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CYNDAQUIL_BALL
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2, MSGBOX_YESNO
# 115 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_9
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_8:
# 120 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_12
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_11:
# 124 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 125 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_9:
# 117 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 118 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_8

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_12:
# 122 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_11


NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue::
# 146 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 147 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 3, Movement_ProfessorElmsLabNPCFacesPlayer
# 148 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0
# 149 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 150 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue::
# 156 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 157 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 4, Movement_ProfessorElmsLabNPCFacesPlayer
# 158 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0
# 159 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 160 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Heal_Dialogue::
# 166 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 167 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 2, Movement_ProfessorElmsLabNPCFacesPlayer
# 168 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0, MSGBOX_YESNO
# 169 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2
# 180 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 181 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3
# 182 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1:
# 184 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2:
# 171 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 172 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1
# 173 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 174 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 175 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2
# 176 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1


NewBarkTown_ProfessorElmsLab_Elm_Dialogue::
# 190 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 191 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 192 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_MEW_QUEST_STARTED, NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1
# 217 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 218 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5
# 219 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 220 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 221 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 222 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 223 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 224 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6
# 225 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 226 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7
# 227 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 228 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8
# 229 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 230 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_9
# 231 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 232 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 233 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 234 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_10
# 235 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 236 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_11
# 237 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 238 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_12
# 239 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 240 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_MEW_QUEST_STARTED
# 241 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 1
# 242 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1:
# 194 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 10
	goto_if_eq NewBarkTown_ProfessorElmsLab_Elm_Dialogue_5
# 202 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Elm_Dialogue_6
# 209 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4
# 210 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4:
# 212 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_5:
# 196 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0
# 197 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1
# 198 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2
# 199 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 200 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 11
	goto NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_6:
# 204 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3
# 205 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4


# 247 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmNoticesPlayer:
# 249 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	emote_exclamation_mark
# 250 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

# 253 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmsLabNPCFacesPlayer:
# 255 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	face_player
# 256 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_0:
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take CHIKORITA, right?\n"
	.string "It's a GRASS-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1:
# 19 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I think that's a great POKéMON,\n"
	.string "too! Thanks, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2:
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Did you want to give it\n"
	.string "a nickname?$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3:
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, right!\n"
	.string "I almost forgot...\p"
	.string "MR. POKéMON is still waiting\n"
	.string "for you on ROUTE 30.$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4:
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Think it over, carefully.\n"
	.string "Your partner is important!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5:
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Better not get greedy...$"

NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_0:
# 61 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take TOTODILE, right?\n"
	.string "It's a WATER-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_0:
# 106 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take CYNDAQUIL, right?\n"
	.string "It's a FIRE-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0:
# 148 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I help PROF. ELM with his research.\n"
	.string "He gets distracted easily.$"

NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0:
# 158 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You're compiling a POKéDEX, too?\n"
	.string "Interesting...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0:
# 168 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hello!\n"
	.string "I can heal your POKéMON.\p"
	.string "Would you like me to restore\n"
	.string "your POKéMON to full health?$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1:
# 172 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I'll take your POKéMON for one\n"
	.string "quick moment, then...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2:
# 175 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Your POKéMON have been fully\n"
	.string "healed. Good luck out there!$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3:
# 181 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Got it, no worries!\n"
	.string "I'll be here.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0:
# 196 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "{PLAYER}! There you are!\n"
	.string "I heard of your adventure!\p"
	.string "I'm just glad the POKéGEAR'S\n"
	.string "development may resume...$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1:
# 197 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, that reminds me!\n"
	.string "As a bit of a welcome gift...\p"
	.string "How about you pick a partner?\n"
	.string "These POKéMON are extremely rare!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2:
# 198 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Go on.\n"
	.string "Pick one from the table!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3:
# 204 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Think it over carefully...\n"
	.string "Your partner is important!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4:
# 209 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "How are you doing?\p"
	.string "If your POKéMON get hurt, you\n"
	.string "can heal them here, too!\p"
	.string "Please speak with my wife by\n"
	.string "the machine there.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5:
# 218 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hmm... What's this?\n"
	.string "Email from MR. POKéMON?\p"
	.string "Uh-huh... I see...\n"
	.string "Ah! PROF. OAK is there?\p"
	.string "This is fascinating!\n"
	.string "I'd better get-$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6:
# 224 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Uh, hi!\n"
	.string "Who are you?\p"
	.string "{PLAYER}? It's nice to meet you!\n"
	.string "Your timing is perfect, actually!\p"
	.string "I'm PROF. ELM, by the way!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7:
# 226 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "An associate of mine, MR. POKéMON,\n"
	.string "just sent me a lengthy email.\p"
	.string "If you'd be so kind to\n"
	.string "assist, I would appreciate it!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8:
# 228 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I see that you have POKéMON already,\n"
	.string "so this should be easy, right?\p"
	.string "Just head west to CHERRYGROVE CITY.\n"
	.string "His house is north from there!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_9:
# 230 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, right! On your way there,\n"
	.string "stop by the POKéMON CENTER.\p"
	.string "Make sure you have free\n"
	.string "space in your party.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_10:
# 234 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, wait!\n"
	.string "I almost forgot!\p"
	.string "SILPH CO. has resumed operations,\n"
	.string "and recently sent me an email.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_11:
# 236 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "They were looking for help testing\n"
	.string "their new prototype device.\p"
	.string "They need experienced TRAINERS,\n"
	.string "a specific criteria you fit!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_12:
# 238 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Ah... I apologize!\n"
	.string "We've only just met...\p"
	.string "I hope it's not too much to\n"
	.string "ask of you!$"
