Route31_VioletCityEntrance_MapScripts::
	.byte 0


Route31_VioletCityEntrance_Guard_Dialogue::
# 5 "data/maps/Route31_VioletCityEntrance/scripts.pory"
	lock
# 6 "data/maps/Route31_VioletCityEntrance/scripts.pory"
	msgbox Route31_VioletCityEntrance_Guard_Dialogue_Text_0
# 7 "data/maps/Route31_VioletCityEntrance/scripts.pory"
	closemessage
# 8 "data/maps/Route31_VioletCityEntrance/scripts.pory"
	releaseall
	end


Route31_VioletCityEntrance_Guard_Dialogue_Text_0:
# 6 "data/maps/Route31_VioletCityEntrance/scripts.pory"
	.string "Head east for ROUTE 31,\n"
	.string "VIOLET CITY is to the west.\p"
	.string "I swear, a signpost could\n"
	.string "do my job for me.$"
