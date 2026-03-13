OneIsland_Harbor_MapScripts::
	.byte 0

OneIsland_Harbor_EventScript_Sailor::
	lock
	faceplayer
	message Text_WhereDoYouWantToSail
	waitmessage
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
	goto EventScript_ChooseDestFromOneIsland
	end
