Route36_MapScripts::
# 3 "data/maps/Route36/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route36_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route36_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route36/scripts.pory"
	goto_if_set FLAG_CAUGHT_SUDOWOODO_ROUTE_36, Route36_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 12 "data/maps/Route36/scripts.pory"
	clearflag FLAG_TEMP_12
# 13 "data/maps/Route36/scripts.pory"
	addobject LOCALID_ROUTE36_WEIRD_TREE
	return

Route36_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route36/scripts.pory"
	setflag FLAG_TEMP_12
# 8 "data/maps/Route36/scripts.pory"
	removeobject LOCALID_ROUTE36_WEIRD_TREE
	return


Route36_Youngster_Jack_Battle::
# 20 "data/maps/Route36/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JACK, Route36_Youngster_Jack_Battle_Text_0, Route36_Youngster_Jack_Battle_Text_1
# 21 "data/maps/Route36/scripts.pory"
	msgbox Route36_Youngster_Jack_Battle_Text_2
# 22 "data/maps/Route36/scripts.pory"
	closemessage
# 23 "data/maps/Route36/scripts.pory"
	releaseall
	end


Route36_Picnicker_Kristie_Battle::
# 29 "data/maps/Route36/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_KRISTIE, Route36_Picnicker_Kristie_Battle_Text_0, Route36_Picnicker_Kristie_Battle_Text_1
# 30 "data/maps/Route36/scripts.pory"
	msgbox Route36_Picnicker_Kristie_Battle_Text_2
# 31 "data/maps/Route36/scripts.pory"
	closemessage
# 32 "data/maps/Route36/scripts.pory"
	releaseall
	end


Route36_Super_Nerd::
# 38 "data/maps/Route36/scripts.pory"
	lock
# 39 "data/maps/Route36/scripts.pory"
	faceplayer
# 40 "data/maps/Route36/scripts.pory"
	msgbox Route36_Super_Nerd_Text_0
# 41 "data/maps/Route36/scripts.pory"
	closemessage
# 42 "data/maps/Route36/scripts.pory"
	release
	end


Route36_BlackBelt::
# 48 "data/maps/Route36/scripts.pory"
	lock
# 49 "data/maps/Route36/scripts.pory"
	faceplayer
# 50 "data/maps/Route36/scripts.pory"
	msgbox Route36_BlackBelt_Text_0
# 51 "data/maps/Route36/scripts.pory"
	closemessage
# 52 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Fat_Man::
# 58 "data/maps/Route36/scripts.pory"
	lock
# 59 "data/maps/Route36/scripts.pory"
	faceplayer
# 60 "data/maps/Route36/scripts.pory"
	msgbox Route36_Fat_Man_Text_0
# 61 "data/maps/Route36/scripts.pory"
	closemessage
# 62 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Lass::
# 68 "data/maps/Route36/scripts.pory"
	lock
# 69 "data/maps/Route36/scripts.pory"
	faceplayer
# 70 "data/maps/Route36/scripts.pory"
	msgbox Route36_Lass_Text_0
# 71 "data/maps/Route36/scripts.pory"
	closemessage
# 72 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Sign::
# 78 "data/maps/Route36/scripts.pory"
	lock
# 79 "data/maps/Route36/scripts.pory"
	msgbox Route36_Sign_Text_0
# 80 "data/maps/Route36/scripts.pory"
	closemessage
# 81 "data/maps/Route36/scripts.pory"
	release
	end


Route36_NationalPark_Sign::
# 87 "data/maps/Route36/scripts.pory"
	lock
# 88 "data/maps/Route36/scripts.pory"
	msgbox Route36_NationalPark_Sign_Text_0
# 89 "data/maps/Route36/scripts.pory"
	closemessage
# 90 "data/maps/Route36/scripts.pory"
	release
	end


Route36_RuinsOfAlph_Sign::
# 96 "data/maps/Route36/scripts.pory"
	lock
# 97 "data/maps/Route36/scripts.pory"
	msgbox Route36_RuinsOfAlph_Sign_Text_0
# 98 "data/maps/Route36/scripts.pory"
	closemessage
# 99 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Route37_Ahead_Sign::
# 105 "data/maps/Route36/scripts.pory"
	lock
# 106 "data/maps/Route36/scripts.pory"
	msgbox Route36_Route37_Ahead_Sign_Text_0
# 107 "data/maps/Route36/scripts.pory"
	closemessage
# 108 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Weird_Pidgey::
# 114 "data/maps/Route36/scripts.pory"
	lock
# 115 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Pidgey_Text_0
# 116 "data/maps/Route36/scripts.pory"
	closemessage
# 117 "data/maps/Route36/scripts.pory"
	clearflag FLAG_CAUGHT_SUDOWOODO_ROUTE_36
# 118 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Weird_Tree::
# 124 "data/maps/Route36/scripts.pory"
	lock
# 125 "data/maps/Route36/scripts.pory"
	goto_if_set FLAG_TEMP_12, Route36_Weird_Tree_2
# 131 "data/maps/Route36/scripts.pory"
	checkitem ITEM_SQUIRT_BOTTLE, 1
# 132 "data/maps/Route36/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 133 "data/maps/Route36/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route36_Weird_Tree_6
# 173 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_5
Route36_Weird_Tree_5:
# 175 "data/maps/Route36/scripts.pory"
	closemessage
# 176 "data/maps/Route36/scripts.pory"
	release
Route36_Weird_Tree_1:
	end

Route36_Weird_Tree_2:
# 127 "data/maps/Route36/scripts.pory"
	release
	goto Route36_Weird_Tree_1

Route36_Weird_Tree_6:
# 135 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_0, MSGBOX_YESNO
# 136 "data/maps/Route36/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route36_Weird_Tree_9
# 168 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_4
	goto Route36_Weird_Tree_5

Route36_Weird_Tree_9:
# 138 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_1
# 139 "data/maps/Route36/scripts.pory"
	closemessage
# 140 "data/maps/Route36/scripts.pory"
	setwildbattle SPECIES_SUDOWOODO, 50, ITEM_NONE
# 141 "data/maps/Route36/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 142 "data/maps/Route36/scripts.pory"
	dowildbattle
# 143 "data/maps/Route36/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 144 "data/maps/Route36/scripts.pory"
	specialvar VAR_RESULT, GetBattleOutcome
# 145 "data/maps/Route36/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Route36_Weird_Tree_12
# 153 "data/maps/Route36/scripts.pory"
	compare VAR_RESULT, 7
	goto_if_eq Route36_Weird_Tree_13
# 163 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_3
	goto Route36_Weird_Tree_5

Route36_Weird_Tree_12:
# 147 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_2
# 148 "data/maps/Route36/scripts.pory"
	fadescreen FADE_TO_BLACK
# 149 "data/maps/Route36/scripts.pory"
	applymovement LOCALID_ROUTE36_WEIRD_TREE, Route36_Hide_Sudowoodo
# 150 "data/maps/Route36/scripts.pory"
	waitmovement
# 151 "data/maps/Route36/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Route36_Weird_Tree_5

Route36_Weird_Tree_13:
# 155 "data/maps/Route36/scripts.pory"
	setflag FLAG_CAUGHT_SUDOWOODO_ROUTE_36
# 156 "data/maps/Route36/scripts.pory"
	fadescreen FADE_TO_BLACK
# 157 "data/maps/Route36/scripts.pory"
	applymovement LOCALID_ROUTE36_WEIRD_TREE, Route36_Hide_Sudowoodo
# 158 "data/maps/Route36/scripts.pory"
	waitmovement
# 159 "data/maps/Route36/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto Route36_Weird_Tree_5


# 181 "data/maps/Route36/scripts.pory"
Route36_NPC_Face_Player:
# 183 "data/maps/Route36/scripts.pory"
	face_player
# 184 "data/maps/Route36/scripts.pory"
	step_end

# 187 "data/maps/Route36/scripts.pory"
Route36_Hide_Sudowoodo:
# 189 "data/maps/Route36/scripts.pory"
	set_invisible
# 190 "data/maps/Route36/scripts.pory"
	walk_right
# 191 "data/maps/Route36/scripts.pory"
	step_end

Route36_Youngster_Jack_Battle_Text_0:
# 20 "data/maps/Route36/scripts.pory"
	.string "All of my friends laughed at me,\n"
	.string "so now it's my turn!$"

Route36_Youngster_Jack_Battle_Text_1:
# 20 "data/maps/Route36/scripts.pory"
	.string "Hahaha! Oh, wait,\n"
	.string "I see why I was laughed at...$"

Route36_Youngster_Jack_Battle_Text_2:
# 21 "data/maps/Route36/scripts.pory"
	.string "My battling skills are such a\n"
	.string "big joke, it's hilarious!$"

Route36_Picnicker_Kristie_Battle_Text_0:
# 29 "data/maps/Route36/scripts.pory"
	.string "Oh no...\n"
	.string "I lost my SQUIRT BOTTLE!$"

Route36_Picnicker_Kristie_Battle_Text_1:
# 29 "data/maps/Route36/scripts.pory"
	.string "Um...\n"
	.string "So, could I borrow yours?$"

Route36_Picnicker_Kristie_Battle_Text_2:
# 30 "data/maps/Route36/scripts.pory"
	.string "There's a flower shop back in\n"
	.string "GOLDENROD CITY.\p"
	.string "Without a way to water this\n"
	.string "weird tree, it won't budge...$"

Route36_Super_Nerd_Text_0:
# 40 "data/maps/Route36/scripts.pory"
	.string "Oh, you're filling a POKéDEX for\n"
	.string "PROF. OAK?\p"
	.string "You must be important if he\n"
	.string "entrusted you with that task.$"

Route36_BlackBelt_Text_0:
# 50 "data/maps/Route36/scripts.pory"
	.string "This is where the road splits.\n"
	.string "Headed for NATIONAL PARK?\p"
	.string "I think you'll have to find\n"
	.string "a way around, for now...$"

Route36_Fat_Man_Text_0:
# 60 "data/maps/Route36/scripts.pory"
	.string "Hey, have you checked out\n"
	.string "RUINS OF ALPH yet?\p"
	.string "That place gives me the creeps.$"

Route36_Lass_Text_0:
# 70 "data/maps/Route36/scripts.pory"
	.string "If I were to participate in a\n"
	.string "CONTEST HALL over in HOENN...\p"
	.string "I would blow everyone away\n"
	.string "with my super cute PIDGEY!\p"
	.string "That's why I opt out...\n"
	.string "I don't want to ruin it!$"

Route36_Sign_Text_0:
# 79 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36\n"
	.string "Densely overgrown road, forking two\l"
	.string "paths.$"

Route36_NationalPark_Sign_Text_0:
# 88 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - NATIONAL PARK\n"
	.string "Enter a spacious, beautiful park!$"

Route36_RuinsOfAlph_Sign_Text_0:
# 97 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - RUINS OF ALPH\n"
	.string "Also connects to ROUTE 32.$"

Route36_Route37_Ahead_Sign_Text_0:
# 106 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - ROUTE 37\n"
	.string "ECRUTEAK CITY is further ahead!$"

Route36_Weird_Pidgey_Text_0:
# 115 "data/maps/Route36/scripts.pory"
	.string "Bark bark!\n"
	.string "I'm a bird.$"

Route36_Weird_Tree_Text_0:
# 135 "data/maps/Route36/scripts.pory"
	.string "A strange, wiggly tree blocks the\n"
	.string "path ahead...\p"
	.string "Would you like to water it with\n"
	.string "the SQUIRT BOTTLE?$"

Route36_Weird_Tree_Text_1:
# 138 "data/maps/Route36/scripts.pory"
	.string "The weird tree didn't like that!\n"
	.string "It attacks you... It's a POKéMON!$"

Route36_Weird_Tree_Text_2:
# 147 "data/maps/Route36/scripts.pory"
	.string "The POKéMON fled!\n"
	.string "It'll come back later...$"

Route36_Weird_Tree_Text_3:
# 163 "data/maps/Route36/scripts.pory"
	.string "Darn...\n"
	.string "The POKéMON is staying put!$"

Route36_Weird_Tree_Text_4:
# 168 "data/maps/Route36/scripts.pory"
	.string "Not just yet!$"

Route36_Weird_Tree_Text_5:
# 173 "data/maps/Route36/scripts.pory"
	.string "It's a weird, wiggly tree...\n"
	.string "It looks impossible to CUT...$"
