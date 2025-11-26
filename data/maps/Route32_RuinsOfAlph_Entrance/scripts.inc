Route32_RuinsOfAlph_Entrance_MapScripts::
	.byte 0


Route32_RuinsOfAlph_Entrance_Guard::
# 8 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	lock
# 9 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	msgbox Route32_RuinsOfAlph_Entrance_Guard_Text_0
# 10 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	waitmessage
# 11 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	closemessage
# 12 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	release
	end


Route32_RuinsOfAlph_Entrance_Guard_Text_0:
# 9 "data/maps/Route32_RuinsOfAlph_Entrance/scripts.pory"
	.string "Well, it isn't often I see kids!\n"
	.string "RUINS OF ALPH is ahead.\p"
	.string "ROUTE 32 is east of here,\n"
	.string "in case you get lost.$"
