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
# 94 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 95 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_9
# 96 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1:
# 98 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_2:
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CHIKORITA
# 16 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8001, 5
# 17 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 18 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8002, 10
# 19 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8003, 3
# 20 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 21 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Chikorita_Ball_6
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_5:
# 26 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_0, MSGBOX_YESNO
# 27 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_8
# 86 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 87 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 88 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_8
# 89 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_6:
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playse SE_SHINY
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitse
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_5

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_8:
# 29 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1
# 30 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 31 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GivePreviewMon
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 33 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Chikorita_Ball_12
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_11:
# 38 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_15
# 53 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_16
# 73 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 74 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 75 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_6
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_14:
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Chikorita_Ball_21
NewBarkTown_ProfessorElmsLab_Chikorita_Ball_20:
# 81 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 82 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_1

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_12:
# 35 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2
# 36 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_11

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_15:
# 41 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 42 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 43 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CHIKORITA
# 44 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CHIKORITA_BALL
# 45 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 46 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3, MSGBOX_YESNO
# 48 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_23
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_14

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_16:
# 55 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 56 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CHIKORITA
# 58 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CHIKORITA_BALL
# 59 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 60 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3, MSGBOX_YESNO
# 61 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Chikorita_Ball_25
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_14

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_21:
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_7
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_20

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_23:
# 50 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_14

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_25:
# 63 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 64 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
	goto NewBarkTown_ProfessorElmsLab_Chikorita_Ball_14


NewBarkTown_ProfessorElmsLab_Totodile_Ball::
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 105 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_2
# 188 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 189 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_9
# 190 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Totodile_Ball_1:
# 192 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Totodile_Ball_2:
# 107 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 108 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_TOTODILE
# 109 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8001, 5
# 110 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 111 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8002, 10
# 112 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8003, 3
# 113 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 114 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Totodile_Ball_6
NewBarkTown_ProfessorElmsLab_Totodile_Ball_5:
# 119 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_0, MSGBOX_YESNO
# 120 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_8
# 180 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 181 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 182 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_8
# 183 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_1

NewBarkTown_ProfessorElmsLab_Totodile_Ball_6:
# 116 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playse SE_SHINY
# 117 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitse
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_5

NewBarkTown_ProfessorElmsLab_Totodile_Ball_8:
# 122 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1
# 123 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 124 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 125 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GivePreviewMon
# 126 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 127 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Totodile_Ball_12
NewBarkTown_ProfessorElmsLab_Totodile_Ball_11:
# 132 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 133 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_15
# 147 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_16
# 167 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 168 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 169 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_6
NewBarkTown_ProfessorElmsLab_Totodile_Ball_14:
# 171 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Totodile_Ball_21
NewBarkTown_ProfessorElmsLab_Totodile_Ball_20:
# 175 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 176 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_1

NewBarkTown_ProfessorElmsLab_Totodile_Ball_12:
# 129 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_1
# 130 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_11

NewBarkTown_ProfessorElmsLab_Totodile_Ball_15:
# 135 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 136 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 137 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_TOTODILE
# 138 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_TOTODILE_BALL
# 139 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 140 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 141 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_2, MSGBOX_YESNO
# 142 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_23
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_14

NewBarkTown_ProfessorElmsLab_Totodile_Ball_16:
# 149 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 150 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 151 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_TOTODILE
# 152 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_TOTODILE_BALL
# 153 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 154 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_2, MSGBOX_YESNO
# 155 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Totodile_Ball_25
# 162 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_3
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_14

NewBarkTown_ProfessorElmsLab_Totodile_Ball_21:
# 173 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_7
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_20

NewBarkTown_ProfessorElmsLab_Totodile_Ball_23:
# 144 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_14

NewBarkTown_ProfessorElmsLab_Totodile_Ball_25:
# 157 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 158 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
	goto NewBarkTown_ProfessorElmsLab_Totodile_Ball_14


NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball::
# 198 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 199 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_2
# 275 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 276 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_9
# 277 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1:
# 279 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_2:
# 201 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8000, SPECIES_CYNDAQUIL
# 203 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8001, 5
# 204 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GeneratePreviewMon
# 205 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8002, 10
# 206 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_0x8003, 3
# 207 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_ShowPreviewMon
# 208 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_6
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_5:
# 213 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_0, MSGBOX_YESNO
# 214 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_8
# 267 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 268 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 269 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_8
# 270 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_6:
# 210 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playse SE_SHINY
# 211 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitse
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_5

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_8:
# 216 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	callnative Native_GivePreviewMon
# 217 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 218 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_12
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_11:
# 223 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 224 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_15
# 238 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_16
# 258 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 259 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
# 260 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_6
NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_14:
# 262 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 12
# 263 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_1

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_12:
# 220 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_1
# 221 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_11

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_15:
# 226 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 227 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 228 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CYNDAQUIL
# 229 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CYNDAQUIL_BALL
# 230 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 231 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_GetGiftMonPartySlot
# 232 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_2, MSGBOX_YESNO
# 233 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_20
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_14

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_16:
# 240 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 241 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitfanfare
# 242 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_JOHTO_CHOSE_CYNDAQUIL
# 243 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	removeobject LOCALID_CYNDAQUIL_BALL
# 244 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	hidemonpic
# 245 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_2, MSGBOX_YESNO
# 246 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_22
# 253 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_3
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_14

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_20:
# 235 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_ChangePokemonNickname
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_14

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_22:
# 248 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 249 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4
	goto NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_14


NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue::
# 285 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 286 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 3, Movement_ProfessorElmsLabNPCFacesPlayer
# 287 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0
# 288 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 289 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue::
# 295 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 296 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 4, Movement_ProfessorElmsLabNPCFacesPlayer
# 297 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0
# 298 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 299 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Heal_Dialogue::
# 305 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 306 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 2, Movement_ProfessorElmsLabNPCFacesPlayer
# 307 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0, MSGBOX_YESNO
# 308 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2
# 319 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 320 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3
# 321 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1:
# 323 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2:
# 310 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 311 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1
# 312 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 313 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 314 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2
# 315 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1


NewBarkTown_ProfessorElmsLab_Elm_Dialogue::
# 329 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 330 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_MEW_QUEST_STARTED, NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1
# 356 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 357 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5
# 358 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 359 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_unset FLAG_SYS_NATIONAL_DEX, NewBarkTown_ProfessorElmsLab_Elm_Dialogue_11
# 381 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 382 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 383 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 384 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 385 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7
# 386 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_12
# 387 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_13
# 388 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_14
# 389 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Elm_Dialogue_10:
# 391 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_MEW_QUEST_STARTED
# 392 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 1
# 393 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1:
# 332 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 333 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 10
	goto_if_eq NewBarkTown_ProfessorElmsLab_Elm_Dialogue_5
# 341 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 11
	goto_if_eq NewBarkTown_ProfessorElmsLab_Elm_Dialogue_6
# 348 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4
# 349 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4:
# 351 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_5:
# 335 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0
# 336 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1
# 337 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2
# 338 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 339 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 11
	goto NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_6:
# 343 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3
# 344 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Elm_Dialogue_4

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_11:
# 361 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6
# 362 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 363 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 364 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 365 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 366 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 367 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7
# 368 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8
# 369 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_9
# 370 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_10
# 371 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 372 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 373 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_11
# 374 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_12
# 375 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_13
# 376 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_14
# 377 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Elm_Dialogue_10


# 398 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmNoticesPlayer:
# 400 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	emote_exclamation_mark
# 401 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

# 404 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmsLabNPCFacesPlayer:
# 406 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	face_player
# 407 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

NewBarkTown_ProfessorElmsLab_Computer::
# 412 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 413 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Computer_Text_0
# 414 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 415 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end


NewBarkTown_ProfessorElmsLab_BreedingEvolutionSign::
# 421 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 422 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_BreedingEvolutionSign_Text_0
# 423 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_BreedingEvolutionSign_Text_1
# 424 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 425 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end


NewBarkTown_ProfessorElmsLab_WorldChampionshipSign::
# 431 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 432 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_0
# 433 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_1
# 434 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_2
# 435 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 436 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	release
	end


NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_0:
# 26 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take CHIKORITA, right?\n"
	.string "It's a GRASS-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_1:
# 29 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I think that's a great POKéMON,\n"
	.string "too! Thanks, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_2:
# 35 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "CHIKORITA looks exceptionally rare...\n"
	.string "Woah, it's a SHINY POKéMON!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_3:
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Will you give that CHIKORITA\n"
	.string "a nickname?$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_4:
# 64 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Looks like it was sent to\n"
	.string "one of your PC boxes, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_5:
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Seems that CHIKORITA got sent to\n"
	.string "one of your PC boxes, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_6:
# 75 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "...What's this?\n"
	.string "Sorry, you've got no room!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_7:
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, right!\n"
	.string "I almost forgot...\p"
	.string "MR. POKéMON is still waiting\n"
	.string "for you on ROUTE 30.$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_8:
# 88 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Think it over, carefully.\n"
	.string "Your partner is important!$"

NewBarkTown_ProfessorElmsLab_Chikorita_Ball_Text_9:
# 95 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Better not get greedy...$"

NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_0:
# 119 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take TOTODILE, right?\n"
	.string "It's a WATER-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_1:
# 129 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "TOTODILE looks exceptionally rare...\n"
	.string "Woah, it's a SHINY POKéMON!$"

NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_2:
# 141 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Will you give that TOTODILE\n"
	.string "a nickname?$"

NewBarkTown_ProfessorElmsLab_Totodile_Ball_Text_3:
# 162 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Seems that TOTODILE got sent to\n"
	.string "one of your PC boxes, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_0:
# 213 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You'll take CYNDAQUIL, right?\n"
	.string "It's a FIRE-TYPE POKéMON.$"

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_1:
# 220 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "CYNDAQUIL looks exceptionally rare...\n"
	.string "Woah, it's a SHINY POKéMON!$"

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_2:
# 232 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Will you give that CYNDAQUIL\n"
	.string "a nickname?$"

NewBarkTown_ProfessorElmsLab_Cyndaquil_Ball_Text_3:
# 253 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Seems that CYNDAQUIL got sent to\n"
	.string "one of your PC boxes, {PLAYER}!$"

NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0:
# 287 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I help PROF. ELM with his research.\n"
	.string "He gets distracted easily.$"

NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0:
# 297 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You're compiling a POKéDEX, too?\n"
	.string "Interesting...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0:
# 307 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hello!\n"
	.string "I can heal your POKéMON.\p"
	.string "Would you like me to restore\n"
	.string "your POKéMON to full health?$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1:
# 311 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I'll take your POKéMON for one\n"
	.string "quick moment, then...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2:
# 314 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Your POKéMON have been fully\n"
	.string "healed. Good luck out there!$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3:
# 320 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Got it, no worries!\n"
	.string "I'll be here.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0:
# 335 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "{PLAYER}! There you are!\n"
	.string "I heard of your adventure!\p"
	.string "I'm just glad the POKéGEAR'S\n"
	.string "development may resume...$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1:
# 336 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, that reminds me!\n"
	.string "As a bit of a welcome gift...\p"
	.string "How about you pick a partner?\n"
	.string "These POKéMON are extremely rare!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2:
# 337 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Go on.\n"
	.string "Pick one from the table!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3:
# 343 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Think it over carefully...\n"
	.string "Your partner is important!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4:
# 348 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "How are you doing?\p"
	.string "If your POKéMON get hurt, you\n"
	.string "can heal them here, too!\p"
	.string "Please speak with my wife by\n"
	.string "the machine there.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5:
# 357 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hmm... What's this?\n"
	.string "Email from...\p"
	.string "Uh-huh... I see...$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6:
# 361 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Ah! PROF. OAK is there?\n"
	.string "This is fascinating!\p"
	.string "I'd better get-$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7:
# 367 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Uh, hi!\n"
	.string "Who are you?\p"
	.string "{PLAYER}? It's nice to meet you!\n"
	.string "Your timing is perfect, actually!\p"
	.string "I'm PROF. ELM, by the way!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8:
# 368 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "An associate of mine, MR. POKéMON,\n"
	.string "just sent me a lengthy email.\p"
	.string "If you'd be so kind to\n"
	.string "assist, I would appreciate it!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_9:
# 369 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I see that you have POKéMON already,\n"
	.string "so this should be easy, right?\p"
	.string "Just head west to CHERRYGROVE CITY.\n"
	.string "His house is north from there!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_10:
# 370 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, right! On your way there,\n"
	.string "stop by the POKéMON CENTER.\p"
	.string "Make sure you have free\n"
	.string "space in your party.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_11:
# 373 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, wait!\n"
	.string "I almost forgot!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_12:
# 374 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "SILPH CO. has resumed operations,\n"
	.string "and recently sent me an email.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_13:
# 375 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "They were looking for help testing\n"
	.string "their new prototype device.\p"
	.string "They need experienced TRAINERS,\n"
	.string "a specific criteria you fit!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_14:
# 376 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Ah... I apologize!\n"
	.string "We've only just met...\p"
	.string "I hope it's not too much to\n"
	.string "ask of you!$"

NewBarkTown_ProfessorElmsLab_Computer_Text_0:
# 413 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "It's a bunch of numbers and symbols\n"
	.string "that seem almost like a puzzle...$"

NewBarkTown_ProfessorElmsLab_BreedingEvolutionSign_Text_0:
# 422 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Some POKéMON cannot be caught or\n"
	.string "found in typical field research.\p"
	.string "MALE and FEMALE POKéMON may often\n"
	.string "bring EGGS to their trainer.$"

NewBarkTown_ProfessorElmsLab_BreedingEvolutionSign_Text_1:
# 423 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "From recent studies, these EGGS will\n"
	.string "almost always hatch with time.\p"
	.string "What hatches seems to depend on the\n"
	.string "first stages of a POKéMON'S species.$"

NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_0:
# 432 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Not every REGION has a POKéMON\n"
	.string "LEAGUE, while some do share them.\p"
	.string "Some far-off known REGIONS, such as\n"
	.string "ALOLA or GUYANA, lack a LEAGUE.$"

NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_1:
# 433 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Some technical exceptions lie in\n"
	.string "KANTO, JOHTO, and SEVII REGIONS.\p"
	.string "It's rare, but exceptional TRAINERS\n"
	.string "can earn more than 8 GYM BADGES.$"

NewBarkTown_ProfessorElmsLab_WorldChampionshipSign_Text_2:
# 434 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "LEGENDARY TRAINERS with a hefty\n"
	.string "stack of BADGES need expert skills.\p"
	.string "They earn the right to participate\n"
	.string "in the POKéMON WORLD TOURNAMENT!$"
