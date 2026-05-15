BlackthornCity_MapScripts::
# 3 "data/maps/BlackthornCity/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, BlackthornCity_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

BlackthornCity_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/BlackthornCity/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

BlackthornCity_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/BlackthornCity/scripts.pory"
	setmetatile 29, 4, METATILE_General_Plain_Mowed, 0
# 8 "data/maps/BlackthornCity/scripts.pory"
	setmetatile 30, 4, METATILE_General_Plain_Mowed, 0
# 9 "data/maps/BlackthornCity/scripts.pory"
	setmetatile 31, 4, METATILE_General_Plain_Mowed, 0
# 10 "data/maps/BlackthornCity/scripts.pory"
	special DrawWholeMapView
	return


BlackthornCity_DragonsJanitor_OldMan1::
# 17 "data/maps/BlackthornCity/scripts.pory"
	lock
# 18 "data/maps/BlackthornCity/scripts.pory"
	faceplayer
# 19 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_DragonsJanitor_OldMan1_Text_0
# 20 "data/maps/BlackthornCity/scripts.pory"
	checkitem ITEM_DRAGON_FANG_2, 1
# 21 "data/maps/BlackthornCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq BlackthornCity_DragonsJanitor_OldMan1_2
# 28 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_DragonsJanitor_OldMan1_Text_2
BlackthornCity_DragonsJanitor_OldMan1_1:
# 30 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 31 "data/maps/BlackthornCity/scripts.pory"
	release
	end

BlackthornCity_DragonsJanitor_OldMan1_2:
# 23 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_DragonsJanitor_OldMan1_Text_1
# 24 "data/maps/BlackthornCity/scripts.pory"
	giveitem ITEM_DRAGON_FANG_2, 1
	goto BlackthornCity_DragonsJanitor_OldMan1_1


BlackthornCity_Sign::
# 37 "data/maps/BlackthornCity/scripts.pory"
	lock
# 38 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Sign_Text_0
# 39 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 40 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Gym_Sign::
# 46 "data/maps/BlackthornCity/scripts.pory"
	lock
# 47 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Gym_Sign_Text_0
# 48 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 49 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Ice_Path_Ahead_Sign::
# 55 "data/maps/BlackthornCity/scripts.pory"
	lock
# 56 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Ice_Path_Ahead_Sign_Text_0
# 57 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 58 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Move_Specialists_House_Sign::
# 64 "data/maps/BlackthornCity/scripts.pory"
	lock
# 65 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Move_Specialists_House_Sign_Text_0
# 66 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 67 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_TrainerTips_Sign::
# 73 "data/maps/BlackthornCity/scripts.pory"
	lock
# 74 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_TrainerTips_Sign_Text_0
# 75 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 76 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Battle_Girl::
# 82 "data/maps/BlackthornCity/scripts.pory"
	lock
# 83 "data/maps/BlackthornCity/scripts.pory"
	faceplayer
# 84 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Battle_Girl_Text_0
# 85 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 86 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Old_Man::
# 92 "data/maps/BlackthornCity/scripts.pory"
	lock
# 93 "data/maps/BlackthornCity/scripts.pory"
	faceplayer
# 94 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Old_Man_Text_0
# 95 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 96 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Old_Woman::
# 102 "data/maps/BlackthornCity/scripts.pory"
	lock
# 103 "data/maps/BlackthornCity/scripts.pory"
	faceplayer
# 104 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Old_Woman_Text_0
# 105 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 106 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_Man::
# 112 "data/maps/BlackthornCity/scripts.pory"
	lock
# 113 "data/maps/BlackthornCity/scripts.pory"
	faceplayer
# 114 "data/maps/BlackthornCity/scripts.pory"
	msgbox BlackthornCity_Man_Text_0
# 115 "data/maps/BlackthornCity/scripts.pory"
	closemessage
# 116 "data/maps/BlackthornCity/scripts.pory"
	release
	end


BlackthornCity_DragonsJanitor_OldMan1_Text_0:
# 19 "data/maps/BlackthornCity/scripts.pory"
	.string "Hello there...\n"
	.string "You find me.$"

BlackthornCity_DragonsJanitor_OldMan1_Text_1:
# 23 "data/maps/BlackthornCity/scripts.pory"
	.string "So, you are the Champion...\n"
	.string "You deserve this dragon fang bless.\p"
	.string "Now, you can battle Clair in Blackthorn\n"
	.string "City.$"

BlackthornCity_DragonsJanitor_OldMan1_Text_2:
# 28 "data/maps/BlackthornCity/scripts.pory"
	.string "You already have my dragon fang.\n"
	.string "Then, go battle Clair in Blackthorn.$"

BlackthornCity_Sign_Text_0:
# 38 "data/maps/BlackthornCity/scripts.pory"
	.string "BLACKTHORN CITY -\n"
	.string "A quiet mountain retreat.$"

BlackthornCity_Gym_Sign_Text_0:
# 47 "data/maps/BlackthornCity/scripts.pory"
	.string "BLACKTHORN CITY POKéMON GYM\n"
	.string "LEADER: CLAIR\p"
	.string "The blessed user of DRAGON-\n"
	.string "TYPE POKéMON!$"

BlackthornCity_Ice_Path_Ahead_Sign_Text_0:
# 56 "data/maps/BlackthornCity/scripts.pory"
	.string "ICE PATH is up ahead!\n"
	.string "Beware of slippery, icy ground.$"

BlackthornCity_Move_Specialists_House_Sign_Text_0:
# 65 "data/maps/BlackthornCity/scripts.pory"
	.string "BLACKTHORN CITY -\n"
	.string "POKéMON MOVE SPECIALISTS' HOUSE$"

BlackthornCity_TrainerTips_Sign_Text_0:
# 74 "data/maps/BlackthornCity/scripts.pory"
	.string "TRAINER TIPS!\n"
	.string "SHINY POKéMON are extremely rare.\p"
	.string "These POKéMON can differ from\n"
	.string "standard encounters.$"

BlackthornCity_Battle_Girl_Text_0:
# 84 "data/maps/BlackthornCity/scripts.pory"
	.string "Keep following this path uphill\n"
	.string "and you'll see the GYM.\p"
	.string "It's pretty intimidating!$"

BlackthornCity_Old_Man_Text_0:
# 94 "data/maps/BlackthornCity/scripts.pory"
	.string "This used to be a quiet,\n"
	.string "yet mysterious, small village...$"

BlackthornCity_Old_Woman_Text_0:
# 104 "data/maps/BlackthornCity/scripts.pory"
	.string "An old folk story tells\n"
	.string "of a POKéMON in JOHTO...\p"
	.string "They say it helped pave\n"
	.string "way for this city.$"

BlackthornCity_Man_Text_0:
# 114 "data/maps/BlackthornCity/scripts.pory"
	.string "LORELEI visits us sometimes,\n"
	.string "although, strictly business.\p"
	.string "She's from the ELITE FOUR,\n"
	.string "just like CLAIR'S cousin.$"
