.global EventScript_RemotePlayerInteraction
EventScript_RemotePlayerInteraction::
    lock
    faceplayer
    msgbox Text_RemoteGreeting, MSGBOX_DEFAULT
    release
    end

Text_RemoteGreeting::
    .string "Hello! I'm {STR_VAR_1}.\n"
    .string "Let's explore Kanto together!$"

	OverworldMultiplayerReceptionist::
	goto_if_questlog EventScript_ReleaseEnd
	lock
	faceplayer
	
	msgbox OverworldMultiplayer_Text_Welcome, MSGBOX_DEFAULT
	waitmessage
	
	multichoice 18, 6, MULTICHOICE_YES_NO, FALSE
	switch VAR_RESULT
	case 0, OverworldMultiplayer_EventScript_TryConnect
	case 1, OverworldMultiplayer_EventScript_Decline
	case SCR_MENU_CANCEL, OverworldMultiplayer_EventScript_Decline
	end

OverworldMultiplayer_EventScript_Decline::
	msgbox OverworldMultiplayer_Text_AnotherTime, MSGBOX_DEFAULT
	waitmessage
	release
	end

OverworldMultiplayer_EventScript_TryConnect::
	message OverworldMultiplayer_Text_Searching
	waitmessage
	
	special HelpSystem_Disable
	textcolor NPC_TEXT_COLOR_NEUTRAL
	
	// Task will automatically call ScriptContext_Enable() upon success/failure
	special TryOverworldMultiplayerLinkup
	waitstate
	
	call EventScript_RestorePrevTextColor
	
	compare VAR_RESULT, 1
	goto_if_eq OverworldMultiplayer_EventScript_ConnectionSuccess
	
	special HelpSystem_Enable
	msgbox OverworldMultiplayer_Text_NoPlayerFound, MSGBOX_DEFAULT
	waitmessage
	release
	end

OverworldMultiplayer_EventScript_ConnectionSuccess::
	msgbox OverworldMultiplayer_Text_PlayerFound, MSGBOX_DEFAULT
	waitmessage
	
	// start listener on both sides so the manager task runs
	special Script_StartOverworldMultiplayerListener
	
	fadescreen FADE_TO_BLACK
	delay 15
	fadescreen FADE_FROM_BLACK
	delay 30
	
	msgbox OverworldMultiplayer_Text_Enjoy, MSGBOX_DEFAULT
	waitmessage
	
	special HelpSystem_Enable
	release
	end

OverworldMultiplayer_Text_Welcome::
	.string "Welcome to the Overworld Link Center!\n"
	.string "Would you like to connect with\l"
	.string "other trainers nearby?$"

OverworldMultiplayer_Text_Searching::
	.string "Searching for nearby trainers...\n"
	.string "Please wait. Press B to cancel.$"

OverworldMultiplayer_Text_NoPlayerFound::
	.string "Link was cancelled or no trainers\n"
	.string "could be found in the area.\p"
	.string "Please try again later.$"

OverworldMultiplayer_Text_PlayerFound::
	.string "Connection established!$"

OverworldMultiplayer_Text_AnotherTime::
	.string "Feel free to visit us anytime!$"

OverworldMultiplayer_Text_Enjoy::
	.string "Have fun meeting with other trainers!$"
