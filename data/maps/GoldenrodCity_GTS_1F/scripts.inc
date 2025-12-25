# 1 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"

# 2 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
GoldenrodCity_GTS_1F_MapScripts::
# 3 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CableClub_OnFrame
# 4 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CableClub_OnWarp
# 5 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CableClub_OnLoad
# 6 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CableClub_OnTransition
# 7 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.byte 0

GoldenrodCity_GTS_1F_WonderTrade::
# 13 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 14 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 15 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_WonderTrade_Text_0
# 16 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 17 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_GlobalTradeSystem::
# 23 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 24 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 25 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_GlobalTradeSystem_Text_0
# 26 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 27 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GTS_Receptionist::
# 33 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 34 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 35 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 37 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Receptionist_Text_0
# 39 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Main_Menu
	return


GTS_Main_Menu::
# 44 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	message GTS_Main_Menu_Text_0
# 45 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	waitmessage
# 46 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	multichoice 0, 5, MULTICHOICE_GTS_MENU, 0
# 48 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	switch VAR_RESULT
# 49 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	case 0, GTS_Main_Menu_2
# 51 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	case 1, GTS_Main_Menu_3
# 53 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	case 2, GTS_Main_Menu_4
# 55 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	case 3, GTS_Main_Menu_5
	return

GTS_Main_Menu_2:
# 50 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Event_Deposit
	return

GTS_Main_Menu_3:
# 52 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Event_CheckStatus
	return

GTS_Main_Menu_4:
# 54 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Exit
	return

GTS_Main_Menu_5:
# 56 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Exit
	return


GTS_Event_Deposit::
# 62 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_Deposit_Text_0
# 64 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	special ChoosePartyMon
# 65 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	waitstate
# 67 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	compare VAR_0x8004, 255
	goto_if_eq GTS_Event_Deposit_2
GTS_Event_Deposit_1:
# 71 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_Deposit_Text_1
# 73 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	special GTS_Deposit
# 75 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GTS_Event_Deposit_5
# 79 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	playse SE_BOO
# 80 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_Deposit_Text_3
GTS_Event_Deposit_4:
# 83 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Exit
	return

GTS_Event_Deposit_2:
# 68 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Main_Menu
	goto GTS_Event_Deposit_1

GTS_Event_Deposit_5:
# 76 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	playse SE_SAVE
# 77 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_Deposit_Text_2, MSGBOX_DEFAULT
	goto GTS_Event_Deposit_4


GTS_Event_CheckStatus::
# 88 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_CheckStatus_Text_0
# 90 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	special GTS_Check
# 92 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GTS_Event_CheckStatus_2
# 96 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	compare VAR_RESULT, 103
	goto_if_eq GTS_Event_CheckStatus_3
# 100 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_CheckStatus_Text_3
GTS_Event_CheckStatus_1:
# 103 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Exit
	return

GTS_Event_CheckStatus_2:
# 93 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	playse SE_EXP_MAX
# 94 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_CheckStatus_Text_1
	goto GTS_Event_CheckStatus_1

GTS_Event_CheckStatus_3:
# 97 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Event_CheckStatus_Text_2
	goto GTS_Event_CheckStatus_1


GTS_Withdraw::
# 108 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Withdraw_Text_0
# 110 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GTS_Withdraw_2
# 114 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Withdraw_Text_2
GTS_Withdraw_1:
# 116 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	goto GTS_Exit
	return

GTS_Withdraw_2:
# 111 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	playse SE_SAVE
# 112 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Withdraw_Text_1
	goto GTS_Withdraw_1


GTS_Exit::
# 121 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GTS_Exit_Text_0
# 122 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 123 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_GTS::
# 129 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 130 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 131 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_GTS_Text_0
# 132 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 133 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_Fat_Man::
# 139 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 140 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 141 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_Fat_Man_Text_0
# 142 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 143 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_Lass::
# 149 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 150 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 151 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_Lass_Text_0
# 152 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 153 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_Gentleman::
# 159 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 160 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 161 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_Gentleman_Text_0
# 162 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 163 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_Beauty::
# 169 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	lock
# 170 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	faceplayer
# 171 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	msgbox GoldenrodCity_GTS_1F_Beauty_Text_0
# 172 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	closemessage
# 173 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	release
	end


GoldenrodCity_GTS_1F_WonderTrade_Text_0:
# 15 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Welcome to the GLOBAL TERMINAL!\n"
	.string "I handle GLOBAL WONDER TRADES.\p"
	.string "...Sorry, but we're still making\n"
	.string "preparations. Please come again!$"

GoldenrodCity_GTS_1F_GlobalTradeSystem_Text_0:
# 25 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Welcome to the GLOBAL TERMINAL!\n"
	.string "I handle the GLOBAL TRADE SYSTEM.\p"
	.string "...Sorry, but we're still making\n"
	.string "preparations. Please come again!$"

GTS_Receptionist_Text_0:
# 37 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Welcome to the GLOBAL TRADE STATION!\p"
	.string "We can connect you with TRAINERS from\n"
	.string "all over the world!$"

GTS_Main_Menu_Text_0:
# 44 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "What would you like to do?$"

GTS_Event_Deposit_Text_0:
# 62 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Please select a POKéMON to deposit.$"

GTS_Event_Deposit_Text_1:
# 71 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Connecting to GTS Server...$"

GTS_Event_Deposit_Text_2:
# 77 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Deposit Successful!\n"
	.string "Your Trade Code is: {STR_VAR_1}$"

GTS_Event_Deposit_Text_3:
# 80 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Error: Could not reach the GTS Server.\p"
	.string "Please ensure the companion app is\n"
	.string "running.$"

GTS_Event_CheckStatus_Text_0:
# 88 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Checking trade status...$"

GTS_Event_CheckStatus_Text_1:
# 94 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Trade Complete!\n"
	.string "Received new POKéMON!$"

GTS_Event_CheckStatus_Text_2:
# 97 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Your POKéMON has not been traded yet.\p"
	.string "Please check back later!$"

GTS_Event_CheckStatus_Text_3:
# 100 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Error: Could not reach the GTS Server.$"

GTS_Withdraw_Text_0:
# 108 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Withdrawing POKéMON...$"

GTS_Withdraw_Text_1:
# 112 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "POKéMON withdrawn from GTS.$"

GTS_Withdraw_Text_2:
# 114 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Error or No Pokémon deposited.$"

GTS_Exit_Text_0:
# 121 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "We hope to see you again!$"

GoldenrodCity_GTS_1F_GTS_Text_0:
# 131 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Welcome to the GLOBAL TERMINAL!\n"
	.string "This is the GLOBAL TRADE SYSTEM.\p"
	.string "...Sorry, but we're still making\n"
	.string "preparations. Please come again!$"

GoldenrodCity_GTS_1F_Fat_Man_Text_0:
# 141 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "Technology is staggering!\n"
	.string "...No, really!\p"
	.string "I am literally immobilized from\n"
	.string "the shocking realization!$"

GoldenrodCity_GTS_1F_Lass_Text_0:
# 151 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "I really wanted to trade with\n"
	.string "my best friend from SINNOH!\p"
	.string "They'd give me a HAPPINY for\n"
	.string "my IGGLYBUFF, but...\p"
	.string "I don't have any BADGES!\n"
	.string "Aww...$"

GoldenrodCity_GTS_1F_Gentleman_Text_0:
# 161 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "...\n"
	.string "...\p"
	.string "...Yes?\n"
	.string "Can I help you?\p"
	.string "I was trying to solve the\n"
	.string "daily word puzzle.\p"
	.string "...\n"
	.string "...\p"
	.string "...Can you go somewhere else?\n"
	.string "You're quite in my space...$"

GoldenrodCity_GTS_1F_Beauty_Text_0:
# 171 "data/maps/GoldenrodCity_GTS_1F/scripts.pory"
	.string "You can have your POKéMON groomed\n"
	.string "in the GOLDENROD TUNNEL.\p"
	.string "It's a passage underneath the\n"
	.string "GOLDENROD DEPT. STORE.\p"
	.string "Did you know that?\n"
	.string "Grooming POKéMON strengthens bonds.$"
