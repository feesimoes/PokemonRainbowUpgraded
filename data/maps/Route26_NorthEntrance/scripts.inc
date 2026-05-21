Route26_NorthEntrance_MapScripts::
	.byte 0


Route26_NorthEntrance_Guard_1::
# 5 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 6 "data/maps/Route26_NorthEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Guard_1_Text_0
# 8 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Guard_2::
# 15 "data/maps/Route26_NorthEntrance/scripts.pory"
	lock
# 16 "data/maps/Route26_NorthEntrance/scripts.pory"
	faceplayer
# 17 "data/maps/Route26_NorthEntrance/scripts.pory"
	msgbox Route26_NorthEntrance_Guard_2_Text_0
# 18 "data/maps/Route26_NorthEntrance/scripts.pory"
	closemessage
# 19 "data/maps/Route26_NorthEntrance/scripts.pory"
	releaseall
	end


Route26_NorthEntrance_Guard_1_Text_0:
# 7 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Oh, hello.\n"
	.string "It's rare that we get visitors...\p"
	.string "Please, go on ahead! You must\n"
	.string "be a very strong TRAINER.$"

Route26_NorthEntrance_Guard_2_Text_0:
# 17 "data/maps/Route26_NorthEntrance/scripts.pory"
	.string "Wow, a visitor!\n"
	.string "It's rare to see another TRAINER!\p"
	.string "ROUTE 28 is up ahead, it\n"
	.string "leads to JOHTO'S MT. SILVER.$"
