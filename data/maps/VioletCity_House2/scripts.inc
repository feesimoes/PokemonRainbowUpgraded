VioletCity_House2_MapScripts::
	.byte 0


VioletCity_House2_Woman2::
# 5 "data/maps/VioletCity_House2/scripts.pory"
	lock
# 6 "data/maps/VioletCity_House2/scripts.pory"
	faceplayer
# 7 "data/maps/VioletCity_House2/scripts.pory"
	msgbox VioletCity_House2_Woman2_Text_0
# 8 "data/maps/VioletCity_House2/scripts.pory"
	closemessage
# 9 "data/maps/VioletCity_House2/scripts.pory"
	release
	end


VioletCity_House2_HikerRudyTrade::
# 15 "data/maps/VioletCity_House2/scripts.pory"
	lock
# 16 "data/maps/VioletCity_House2/scripts.pory"
	faceplayer
# 17 "data/maps/VioletCity_House2/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_ONIX
# 18 "data/maps/VioletCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpeciesInfo
# 19 "data/maps/VioletCity_House2/scripts.pory"
	goto_if_set FLAG_DID_ROCKY_TRADE, CeruleanCity_House3_EventScript_AlreadyTraded
# 20 "data/maps/VioletCity_House2/scripts.pory"
	msgbox Trade_Text_DoYouHaveMonWouldYouTradeForMon, MSGBOX_YESNO
# 21 "data/maps/VioletCity_House2/scripts.pory"
	goto_if_eq VAR_RESULT, NO, CeruleanCity_House3_EventScript_DeclineTrade
# 22 "data/maps/VioletCity_House2/scripts.pory"
	call EventScript_ChooseMonForInGameTrade
# 23 "data/maps/VioletCity_House2/scripts.pory"
	goto_if_ge VAR_0x8004, PARTY_SIZE, CeruleanCity_House3_EventScript_DeclineTrade
# 24 "data/maps/VioletCity_House2/scripts.pory"
	call EventScript_GetInGameTradeSpecies
# 25 "data/maps/VioletCity_House2/scripts.pory"
	goto_if_ne VAR_RESULT, VAR_0x8009, CeruleanCity_House3_EventScript_NotRequestedMon
# 26 "data/maps/VioletCity_House2/scripts.pory"
	call EventScript_DoInGameTrade
# 27 "data/maps/VioletCity_House2/scripts.pory"
	msgbox Trade_Text_Thanks
# 28 "data/maps/VioletCity_House2/scripts.pory"
	setflag FLAG_DID_ROCKY_TRADE
# 29 "data/maps/VioletCity_House2/scripts.pory"
	release
	end


VioletCity_House2_Woman2_Text_0:
# 7 "data/maps/VioletCity_House2/scripts.pory"
	.string "POKéMON are always evolving!\n"
	.string "In a way, we do, too.$"
