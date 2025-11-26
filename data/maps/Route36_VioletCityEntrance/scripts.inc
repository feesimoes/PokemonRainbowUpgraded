Route36_VioletCityEntrance_MapScripts::
	.byte 0


Route36_VioletCityEntrance_Guard_Dialogue::
# 8 "data/maps/Route36_VioletCityEntrance/scripts.pory"
	lock
# 9 "data/maps/Route36_VioletCityEntrance/scripts.pory"
	msgbox Route36_VioletCityEntrance_Guard_Dialogue_Text_0
# 10 "data/maps/Route36_VioletCityEntrance/scripts.pory"
	closemessage
# 11 "data/maps/Route36_VioletCityEntrance/scripts.pory"
	releaseall
	end


Route36_VioletCityEntrance_Guard_Dialogue_Text_0:
# 9 "data/maps/Route36_VioletCityEntrance/scripts.pory"
	.string "Head west for ROUTE 36,\n"
	.string "VIOLET CITY is to the east.\p"
	.string "I swear, a signpost could\n"
	.string "do my job for me.$"
