Route38_EcruteakCityEntrance_MapScripts::
	.byte 0


Route38_EcruteakCityEntrance_Guard::
# 5 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	lock
# 6 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	msgbox Route38_EcruteakCityEntrance_Guard_Text_0
# 8 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	release
	end


Route38_EcruteakCityEntrance_Guard_Text_0:
# 7 "data/maps/Route38_EcruteakCityEntrance/scripts.pory"
	.string "Hi, how's it going?\n"
	.string "Need directions? No worries!\p"
	.string "ROUTE 38 is out west.\n"
	.string "ECRUTEAK CITY is to the east.$"
