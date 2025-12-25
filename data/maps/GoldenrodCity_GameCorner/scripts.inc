# 1 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 2 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_SlotMachine::
# 3 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, CeladonCity_GameCorner_EventScript_SlotMachineNoCoinCase
# 4 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_Text_SlotMachineWantToPlay, MSGBOX_YESNO
# 5 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeladonCity_GameCorner_EventScript_DontPlaySlotMachine
# 6 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setfieldeffectargument 0, LOCALID_PLAYER
# 7 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
.ifdef BUGFIX
# 8 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setfieldeffectargument 1, MAP_NUM(MAP_GOLDENROD_CITY_GAME_CORNER)
# 9 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setfieldeffectargument 2, MAP_GROUP(MAP_GOLDENROD_CITY_GAME_CORNER)
# 10 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
.else
# 11 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	@ Map num/group were provided in the wrong order
# 12 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setfieldeffectargument 1, MAP_GROUP(MAP_GOLDENROD_CITY_GAME_CORNER)
# 13 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setfieldeffectargument 2, MAP_NUM(MAP_GOLDENROD_CITY_GAME_CORNER)
# 14 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
.endif
# 15 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	dofieldeffect FLDEFF_SMILEY_FACE_ICON
# 16 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitfieldeffect FLDEFF_SMILEY_FACE_ICON
# 17 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	specialvar VAR_RESULT, GetRandomSlotMachineId
# 18 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	playslotmachine VAR_RESULT
# 19 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	releaseall
# 20 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 21 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 22 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_PrizeClerkMons::
# 23 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 24 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 25 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, GoldenrodCity_GameCorner_EventScript_NeedCoinCase
# 26 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 27 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	showcoinsbox 0, 0
# 28 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 29 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ChoosePrizeMon
# 30 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 31 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 32 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ChoosePrizeMon::
# 33 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 34 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitmessage
# 35 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	multichoice 11, 0, MULTICHOICE_GOLDENROD_GAME_CORNER_MON_PRIZES, FALSE
# 36 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 37 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 0, GoldenrodCity_GameCorner_EventScript_Larvitar
# 38 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 1, GoldenrodCity_GameCorner_EventScript_Houndour
# 39 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 2, GoldenrodCity_GameCorner_EventScript_Heracross
# 40 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 3, GoldenrodCity_GameCorner_EventScript_Sneasel
# 41 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 4, GoldenrodCity_GameCorner_EventScript_Misdreavus
# 42 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 5, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 43 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 127, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 44 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 45 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 46 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_EndPrizeExchange::
# 47 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 48 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
# 49 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 50 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 51 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_Larvitar::
# 52 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_LARVITAR
# 53 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 54 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon
# 55 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 56 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 57 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_Houndour::
# 58 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HOUNDOUR
# 59 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 2400
# 60 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon
# 61 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 62 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 63 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_Heracross::
# 64 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_HERACROSS
# 65 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 5000
# 66 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon
# 67 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 68 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 69 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_Sneasel::
# 70 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_SNEASEL
# 71 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 6400
# 72 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon
# 73 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 74 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 75 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_Misdreavus::
# 76 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MISDREAVUS
# 77 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 7600
# 78 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon
# 79 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 80 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 81 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ConfirmPrizeMon::
# 82 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 83 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 84 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 85 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	checkcoins VAR_RESULT
# 86 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodCity_GameCorner_EventScript_NotEnoughCoins
# 87 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 88 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	switch VAR_TEMP_1
# 89 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case SPECIES_LARVITAR,     GoldenrodCity_GameCorner_EventScript_GiveLarvitar
# 90 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case SPECIES_HOUNDOUR,     GoldenrodCity_GameCorner_EventScript_GiveHoundour
# 91 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case SPECIES_HERACROSS,    GoldenrodCity_GameCorner_EventScript_GiveHeracross
# 92 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case SPECIES_SNEASEL,      GoldenrodCity_GameCorner_EventScript_GiveSneasel
# 93 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case SPECIES_MISDREAVUS,   GoldenrodCity_GameCorner_EventScript_GiveMisdreavus
# 94 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 95 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 96 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_GiveLarvitar::
# 97 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 10
# 98 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_CheckReceivedMon
# 99 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 100 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 101 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_GiveHoundour::
# 102 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 16
# 103 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_CheckReceivedMon
# 104 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 105 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 106 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_GiveHeracross::
# 107 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 24
# 108 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_CheckReceivedMon
# 109 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 110 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 111 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_GiveSneasel::
# 112 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 26
# 113 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_CheckReceivedMon
# 114 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 115 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 116 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_GiveMisdreavus::
# 117 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	givemon VAR_TEMP_1, 32
# 118 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_CheckReceivedMon
# 119 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 120 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 121 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_CheckReceivedMon::
# 122 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 0, GoldenrodCity_GameCorner_EventScript_ReceivedMonParty
# 123 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 1, GoldenrodCity_GameCorner_EventScript_ReceivedMonPC
# 124 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, 2, GoldenrodCity_GameCorner_EventScript_PartyFull
# 125 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 126 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 127 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_PartyFull::
# 128 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 129 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox Text_NoMoreRoomForPokemon
# 130 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 131 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
# 132 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 133 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 134 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_NicknamePartyMon::
# 135 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	getpartysize
# 136 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	subvar VAR_RESULT, 1
# 137 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 138 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	call EventScript_ChangePokemonNickname
# 139 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 140 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 141 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 142 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_NeedCoinCase::
# 143 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 144 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_CoinCaseRequired
# 145 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
# 146 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 147 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 148 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_NotEnoughCoins::
# 149 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_NeedMoreCoins
# 150 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 151 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 152 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 153 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ReceivedMonParty::
# 154 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	removecoins VAR_TEMP_2
# 155 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	updatecoinsbox 0, 5
# 156 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 157 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 158 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	message Text_PlayerObtainedTheMon
# 159 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitmessage
# 160 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitfanfare
# 161 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 162 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, YES, GoldenrodCity_GameCorner_EventScript_NicknamePartyMon
# 163 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 164 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 165 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 166 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ReceivedMonPC::
# 167 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	removecoins VAR_TEMP_2
# 168 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	updatecoinsbox 0, 5
# 169 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	bufferspeciesname STR_VAR_1, VAR_TEMP_1
# 170 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 171 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	message Text_PlayerObtainedTheMon
# 172 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitmessage
# 173 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitfanfare
# 174 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox Text_GiveNicknameToThisMon, MSGBOX_YESNO
# 175 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_EventScript_TransferredToPC
# 176 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	call EventScript_NameReceivedBoxMon
# 177 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_TransferredToPC
# 178 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 179 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 180 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_TransferredToPC::
# 181 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	call EventScript_TransferredToPC
# 182 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 183 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 184 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 185 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem::
# 186 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 187 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_YouWantPrize, MSGBOX_YESNO
# 188 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, NO, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 189 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_TryGivePrize
# 190 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 191 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 192 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_TryGivePrize::
# 193 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	bufferitemname STR_VAR_1, VAR_TEMP_1
# 194 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	checkcoins VAR_RESULT
# 195 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_lt VAR_RESULT, VAR_TEMP_2, GoldenrodCity_GameCorner_EventScript_NotEnoughCoins
# 196 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	checkitemspace VAR_TEMP_1
# 197 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, GoldenrodCity_GameCorner_EventScript_BagFull
# 198 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	removecoins VAR_TEMP_2
# 199 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	updatecoinsbox 0, 5
# 200 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	giveitem VAR_TEMP_1
# 201 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 202 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 203 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 204 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_BagFull::
# 205 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 206 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox Text_TooBadBagFull
# 207 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	hidecoinsbox 0, 0
# 208 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
# 209 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 210 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 211 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_PrizeClerkItems::
# 212 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 213 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 214 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_unset FLAG_GOT_COIN_CASE, GoldenrodCity_GameCorner_EventScript_NeedCoinCase
# 215 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 216 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	showcoinsbox 0, 0
# 217 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox CeladonCity_GameCorner_PrizeRoom_Text_WeExchangeCoinsForPrizes
# 218 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ChoosePrizeItem
# 219 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 220 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 221 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ChoosePrizeItem::
# 222 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	message CeladonCity_GameCorner_PrizeRoom_Text_WhichPrize
# 223 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	waitmessage
# 224 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	multichoice 10, 0, MULTICHOICE_GOLDENROD_GAME_CORNER_ITEM_PRIZES, FALSE
# 225 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	switch VAR_RESULT
# 226 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 0, GoldenrodCity_GameCorner_EventScript_IceStone
# 227 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 1, GoldenrodCity_GameCorner_EventScript_DawnStone
# 228 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 2, GoldenrodCity_GameCorner_EventScript_ShinyStone
# 229 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 3, GoldenrodCity_GameCorner_EventScript_DubiousDisc
# 230 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 4, GoldenrodCity_GameCorner_EventScript_LeppaBerry
# 231 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 5, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 232 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	case 127, GoldenrodCity_GameCorner_EventScript_EndPrizeExchange
# 233 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 234 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 235 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_IceStone::
# 236 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, ITEM_ICE_STONE
# 237 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 1000
# 238 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem
# 239 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 240 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 241 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_DawnStone::
# 242 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DAWN_STONE
# 243 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 2000
# 244 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem
# 245 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 246 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 247 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_ShinyStone::
# 248 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, ITEM_SHINY_STONE
# 249 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 7200
# 250 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem
# 251 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 252 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 253 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_DubiousDisc::
# 254 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, ITEM_DUBIOUS_DISC
# 255 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 1600
# 256 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem
# 257 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end
# 258 "data/maps/GoldenrodCity_GameCorner/scripts.pory"

# 259 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
GoldenrodCity_GameCorner_EventScript_LeppaBerry::
# 260 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_1, ITEM_LEPPA_BERRY
# 261 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	setvar VAR_TEMP_2, 800
# 262 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	goto GoldenrodCity_GameCorner_EventScript_ConfirmPrizeItem
# 263 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	end

GoldenrodCity_GameCorner_MapScripts::
	.byte 0


GoldenrodCity_GameCorner_LittleBoy::
# 270 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 271 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 272 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_LittleBoy_Text_0
# 273 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 274 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_LittleGirl::
# 280 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 281 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 282 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_LittleGirl_Text_0
# 283 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 284 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Old_Man_2::
# 290 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 291 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 292 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Old_Man_2_Text_0
# 293 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 294 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Fat_Man::
# 300 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 301 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 302 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Fat_Man_Text_0
# 303 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 304 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Cooltrainer_F::
# 310 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 311 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 312 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Cooltrainer_F_Text_0
# 313 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 314 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Rocker::
# 320 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 321 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 322 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Rocker_Text_0
# 323 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 324 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Gentleman::
# 330 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 331 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 332 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Gentleman_Text_0
# 333 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 334 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Woman_3::
# 340 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 341 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 342 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Woman_3_Text_0
# 343 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 344 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Balding_Man::
# 350 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 351 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 352 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Balding_Man_Text_0
# 353 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 354 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_Gym_Guide::
# 360 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	lock
# 361 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	faceplayer
# 362 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	msgbox GoldenrodCity_GameCorner_Gym_Guide_Text_0
# 363 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	closemessage
# 364 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	release
	end


GoldenrodCity_GameCorner_LittleBoy_Text_0:
# 272 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "My sister is so cheesy!$"

GoldenrodCity_GameCorner_LittleGirl_Text_0:
# 282 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "My brother, CHUCKY, is a weirdo!$"

GoldenrodCity_GameCorner_Old_Man_2_Text_0:
# 292 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "Kids sure are something...\n"
	.string "Ah, I've got a headache again.$"

GoldenrodCity_GameCorner_Fat_Man_Text_0:
# 302 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "TEAM ROCKET?\n"
	.string "I can't say I've seen them...$"

GoldenrodCity_GameCorner_Cooltrainer_F_Text_0:
# 312 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "These slots are tough to win\n"
	.string "at... Battle strategies are useless!$"

GoldenrodCity_GameCorner_Rocker_Text_0:
# 322 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "I'm racking up my wins here\n"
	.string "for some neat item prizes.$"

GoldenrodCity_GameCorner_Gentleman_Text_0:
# 332 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "I'm only here on behalf of\n"
	.string "my grandson, ah... uh,\p"
	.string "What was his name again...?$"

GoldenrodCity_GameCorner_Woman_3_Text_0:
# 342 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "You're from KANTO?\n"
	.string "Oh?! You must be joking... No?!\p"
	.string "TEAM ROCKET runs CELADON's GAME\n"
	.string "CORNER? Buttons behind posters?!$"

GoldenrodCity_GameCorner_Balding_Man_Text_0:
# 352 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "What do you want?\n"
	.string "Eh?\p"
	.string "Well, I can assure you that\n"
	.string "there's no hidden buttons here.$"

GoldenrodCity_GameCorner_Gym_Guide_Text_0:
# 362 "data/maps/GoldenrodCity_GameCorner/scripts.pory"
	.string "Yo!\n"
	.string "WORLD CHAMP in the making!\p"
	.string "These slots may be tough, but\n"
	.string "use the same KANTO strategy!\p"
	.string "Oh, and TEAM ROCKET doesn't run\n"
	.string "this GAME CORNER!$"
