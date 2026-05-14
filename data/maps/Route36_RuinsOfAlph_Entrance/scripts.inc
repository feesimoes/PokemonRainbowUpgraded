Route36_RuinsOfAlph_Entrance_MapScripts::
	.byte 0


Route36_RuinsOfAlph_Entrance_Guard::
# 8 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	lock
# 9 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	msgbox Route36_RuinsOfAlph_Entrance_Guard_Text_0
# 10 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	waitmessage
# 11 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	closemessage
# 12 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	release
	end


Route36_RuinsOfAlph_Entrance_Guard_Text_0:
# 9 "data/maps/Route36_RuinsOfAlph_Entrance/scripts.pory"
	.string "Hi, ROUTE 36 is up ahead.\n"
	.string "The RUINS OF ALPH are south.$"
