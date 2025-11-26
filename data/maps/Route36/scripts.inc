Route36_MapScripts::
	.byte 0


Route36_Youngster_Jack_Battle::
# 8 "data/maps/Route36/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JACK, Route36_Youngster_Jack_Battle_Text_0, Route36_Youngster_Jack_Battle_Text_1
# 9 "data/maps/Route36/scripts.pory"
	msgbox Route36_Youngster_Jack_Battle_Text_2
# 10 "data/maps/Route36/scripts.pory"
	closemessage
# 11 "data/maps/Route36/scripts.pory"
	releaseall
	end


Route36_Picnicker_Kristie_Battle::
# 17 "data/maps/Route36/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_KRISTIE, Route36_Picnicker_Kristie_Battle_Text_0, Route36_Picnicker_Kristie_Battle_Text_1
# 18 "data/maps/Route36/scripts.pory"
	msgbox Route36_Picnicker_Kristie_Battle_Text_2
# 19 "data/maps/Route36/scripts.pory"
	closemessage
# 20 "data/maps/Route36/scripts.pory"
	releaseall
	end


Route36_Super_Nerd::
# 26 "data/maps/Route36/scripts.pory"
	lock
# 27 "data/maps/Route36/scripts.pory"
	applymovement 5, Route36_NPC_Face_Player
# 28 "data/maps/Route36/scripts.pory"
	msgbox Route36_Super_Nerd_Text_0
# 29 "data/maps/Route36/scripts.pory"
	waitmessage
# 30 "data/maps/Route36/scripts.pory"
	closemessage
# 31 "data/maps/Route36/scripts.pory"
	release
	end


Route36_BlackBelt::
# 37 "data/maps/Route36/scripts.pory"
	lock
# 38 "data/maps/Route36/scripts.pory"
	applymovement 7, Route36_NPC_Face_Player
# 39 "data/maps/Route36/scripts.pory"
	msgbox Route36_BlackBelt_Text_0
# 40 "data/maps/Route36/scripts.pory"
	waitmessage
# 41 "data/maps/Route36/scripts.pory"
	closemessage
# 42 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Fat_Man::
# 48 "data/maps/Route36/scripts.pory"
	lock
# 49 "data/maps/Route36/scripts.pory"
	applymovement 3, Route36_NPC_Face_Player
# 50 "data/maps/Route36/scripts.pory"
	msgbox Route36_Fat_Man_Text_0
# 51 "data/maps/Route36/scripts.pory"
	waitmessage
# 52 "data/maps/Route36/scripts.pory"
	closemessage
# 53 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Lass::
# 59 "data/maps/Route36/scripts.pory"
	lock
# 60 "data/maps/Route36/scripts.pory"
	applymovement 2, Route36_NPC_Face_Player
# 61 "data/maps/Route36/scripts.pory"
	msgbox Route36_Lass_Text_0
# 62 "data/maps/Route36/scripts.pory"
	waitmessage
# 63 "data/maps/Route36/scripts.pory"
	closemessage
# 64 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Sign::
# 70 "data/maps/Route36/scripts.pory"
	lock
# 71 "data/maps/Route36/scripts.pory"
	msgbox Route36_Sign_Text_0
# 72 "data/maps/Route36/scripts.pory"
	waitmessage
# 73 "data/maps/Route36/scripts.pory"
	closemessage
# 74 "data/maps/Route36/scripts.pory"
	release
	end


Route36_NationalPark_Sign::
# 80 "data/maps/Route36/scripts.pory"
	lock
# 81 "data/maps/Route36/scripts.pory"
	msgbox Route36_NationalPark_Sign_Text_0
# 82 "data/maps/Route36/scripts.pory"
	waitmessage
# 83 "data/maps/Route36/scripts.pory"
	closemessage
# 84 "data/maps/Route36/scripts.pory"
	release
	end


Route36_RuinsOfAlph_Sign::
# 90 "data/maps/Route36/scripts.pory"
	lock
# 91 "data/maps/Route36/scripts.pory"
	msgbox Route36_RuinsOfAlph_Sign_Text_0
# 92 "data/maps/Route36/scripts.pory"
	waitmessage
# 93 "data/maps/Route36/scripts.pory"
	closemessage
# 94 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Route37_Ahead_Sign::
# 100 "data/maps/Route36/scripts.pory"
	lock
# 101 "data/maps/Route36/scripts.pory"
	msgbox Route36_Route37_Ahead_Sign_Text_0
# 102 "data/maps/Route36/scripts.pory"
	waitmessage
# 103 "data/maps/Route36/scripts.pory"
	closemessage
# 104 "data/maps/Route36/scripts.pory"
	release
	end


Route36_Weird_Tree::
# 110 "data/maps/Route36/scripts.pory"
	lock
# 111 "data/maps/Route36/scripts.pory"
	msgbox Route36_Weird_Tree_Text_0
# 112 "data/maps/Route36/scripts.pory"
	waitmessage
# 113 "data/maps/Route36/scripts.pory"
	closemessage
	return


# 116 "data/maps/Route36/scripts.pory"
Route36_NPC_Face_Player:
# 118 "data/maps/Route36/scripts.pory"
	face_player
# 119 "data/maps/Route36/scripts.pory"
	step_end

Route36_Youngster_Jack_Battle_Text_0:
# 8 "data/maps/Route36/scripts.pory"
	.string "All of my friends laughed at me,\n"
	.string "so now it's my turn!$"

Route36_Youngster_Jack_Battle_Text_1:
# 8 "data/maps/Route36/scripts.pory"
	.string "Hahaha! Oh, wait,\n"
	.string "I see why I was laughed at...$"

Route36_Youngster_Jack_Battle_Text_2:
# 9 "data/maps/Route36/scripts.pory"
	.string "My battling skills are such a\n"
	.string "big joke, it's hilarious!$"

Route36_Picnicker_Kristie_Battle_Text_0:
# 17 "data/maps/Route36/scripts.pory"
	.string "Oh no...\n"
	.string "I lost my SQUIRT BOTTLE!$"

Route36_Picnicker_Kristie_Battle_Text_1:
# 17 "data/maps/Route36/scripts.pory"
	.string "Um...\n"
	.string "So, could I borrow yours?$"

Route36_Picnicker_Kristie_Battle_Text_2:
# 18 "data/maps/Route36/scripts.pory"
	.string "There's a flower shop back in\n"
	.string "GOLDENROD CITY.\p"
	.string "Without a way to water this\n"
	.string "weird tree, it won't budge...$"

Route36_Super_Nerd_Text_0:
# 28 "data/maps/Route36/scripts.pory"
	.string "Oh, you're filling a POKéDEX for\n"
	.string "PROF. OAK?\p"
	.string "You must be important if he\n"
	.string "entrusted you with that task.$"

Route36_BlackBelt_Text_0:
# 39 "data/maps/Route36/scripts.pory"
	.string "This is where the road splits.\n"
	.string "Headed for NATIONAL PARK?\p"
	.string "I think you'll have to find\n"
	.string "a way around, for now...$"

Route36_Fat_Man_Text_0:
# 50 "data/maps/Route36/scripts.pory"
	.string "Hey, have you checked out\n"
	.string "RUINS OF ALPH yet?\p"
	.string "That place gives me the creeps.$"

Route36_Lass_Text_0:
# 61 "data/maps/Route36/scripts.pory"
	.string "If I were to participate in a\n"
	.string "CONTEST HALL over in HOENN...\p"
	.string "I would blow everyone away\n"
	.string "with my super cute PIDGEY!\p"
	.string "That's why I opt out...\n"
	.string "I don't want to ruin it!$"

Route36_Sign_Text_0:
# 71 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36\n"
	.string "Densely overgrown road, forking two\l"
	.string "paths.$"

Route36_NationalPark_Sign_Text_0:
# 81 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - NATIONAL PARK\n"
	.string "Enter a spacious, beautiful park!$"

Route36_RuinsOfAlph_Sign_Text_0:
# 91 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - RUINS OF ALPH\n"
	.string "Also connects to ROUTE 32.$"

Route36_Route37_Ahead_Sign_Text_0:
# 101 "data/maps/Route36/scripts.pory"
	.string "ROUTE 36 - ROUTE 37\n"
	.string "ECRUTEAK CITY is further ahead!$"

Route36_Weird_Tree_Text_0:
# 111 "data/maps/Route36/scripts.pory"
	.string "It's a weird tree...\n"
	.string "It looks impossible to CUT...$"
