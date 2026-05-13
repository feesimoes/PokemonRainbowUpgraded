Route29_NorthEntrance_MapScripts::
	.byte 0


Route29_NorthEntrance_Guard_Dialogue::
# 8 "data/maps/Route29_NorthEntrance/scripts.pory"
	lock
# 9 "data/maps/Route29_NorthEntrance/scripts.pory"
	msgbox Route29_NorthEntrance_Guard_Dialogue_Text_0
# 10 "data/maps/Route29_NorthEntrance/scripts.pory"
	closemessage
# 11 "data/maps/Route29_NorthEntrance/scripts.pory"
	releaseall
	end


Route29_NorthEntrance_Guard_Dialogue_Text_0:
# 9 "data/maps/Route29_NorthEntrance/scripts.pory"
	.string "Head north into ROUTE 46,\n"
	.string "although, it's pointless.\p"
	.string "You might as well just turn back\n"
	.string "into ROUTE 29 anyways.$"
