Route27_MapScripts::
	.byte 0


Route26_This_Way_Map_Sign::
# 5 "data/maps/Route27/scripts.pory"
	msgbox Route26_This_Way_Map_Sign_Text_0
# 6 "data/maps/Route27/scripts.pory"
	closemessage
# 7 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Map_Sign::
# 13 "data/maps/Route27/scripts.pory"
	msgbox Route27_Map_Sign_Text_0
# 14 "data/maps/Route27/scripts.pory"
	closemessage
# 15 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_TohjoFalls_Sign::
# 21 "data/maps/Route27/scripts.pory"
	msgbox Route27_TohjoFalls_Sign_Text_0
# 22 "data/maps/Route27/scripts.pory"
	closemessage
# 23 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Fat_Man::
# 29 "data/maps/Route27/scripts.pory"
	lock
# 30 "data/maps/Route27/scripts.pory"
	faceplayer
# 31 "data/maps/Route27/scripts.pory"
	msgbox Route27_Fat_Man_Text_0
# 32 "data/maps/Route27/scripts.pory"
	closemessage
# 33 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route26_This_Way_Map_Sign_Text_0:
# 5 "data/maps/Route27/scripts.pory"
	.string "KANTO ROUTE 26:\n"
	.string "Rough mountain road, tests TRAINERS.$"

Route27_Map_Sign_Text_0:
# 13 "data/maps/Route27/scripts.pory"
	.string "KANTO ROUTE 27:\n"
	.string "Connects KANTO to JOHTO.$"

Route27_TohjoFalls_Sign_Text_0:
# 21 "data/maps/Route27/scripts.pory"
	.string "TOHJO FALLS\n"
	.string "The waterfall linking KANTO to JOHTO.$"

Route27_Fat_Man_Text_0:
# 31 "data/maps/Route27/scripts.pory"
	.string "Hey!\n"
	.string "You know what you just did?\p"
	.string "You just took your first\n"
	.string "step in KANTO!\p"
	.string "Check your map!\n"
	.string "...\p"
	.string "...\n"
	.string "...\p"
	.string "...Oh, if you're from KANTO,\n"
	.string "this is pretty awkward...\p"
	.string "Sorry...$"
