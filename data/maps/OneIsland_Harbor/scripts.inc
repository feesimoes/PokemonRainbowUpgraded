OneIsland_Harbor_MapScripts::
	.byte 0


OneIsland_Harbor_EventScript_Sailor::
# 8 "data/maps/OneIsland_Harbor/scripts.pory"
	lock
# 9 "data/maps/OneIsland_Harbor/scripts.pory"
	faceplayer
# 10 "data/maps/OneIsland_Harbor/scripts.pory"
	goto_if_set FLAG_BADGE08_GET, OneIsland_Harbor_EventScript_Sailor_2
# 20 "data/maps/OneIsland_Harbor/scripts.pory"
	msgbox OneIsland_Harbor_EventScript_Sailor_Text_0
# 21 "data/maps/OneIsland_Harbor/scripts.pory"
	closemessage
OneIsland_Harbor_EventScript_Sailor_1:
# 23 "data/maps/OneIsland_Harbor/scripts.pory"
	release
	end

OneIsland_Harbor_EventScript_Sailor_2:
# 12 "data/maps/OneIsland_Harbor/scripts.pory"
	message Text_WhereDoYouWantToSail
# 13 "data/maps/OneIsland_Harbor/scripts.pory"
	waitmessage
# 14 "data/maps/OneIsland_Harbor/scripts.pory"
	closemessage
# 15 "data/maps/OneIsland_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_ONE_ISLAND
# 16 "data/maps/OneIsland_Harbor/scripts.pory"
	goto EventScript_ChooseDestFromOneIsland
	goto OneIsland_Harbor_EventScript_Sailor_1


OneIsland_Harbor_EventScript_Sailor_Text_0:
# 20 "data/maps/OneIsland_Harbor/scripts.pory"
	.string "Can I see your TRI-PASS?\n"
	.string "...You don't have one?\p"
	.string "Rules are rules, I can't let\n"
	.string "you ride the SEAGALLOP.$"
