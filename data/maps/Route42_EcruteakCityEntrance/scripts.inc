Route42_EcruteakCityEntrance_MapScripts::
	.byte 0


Route42_EcruteakCityEntrance_Guard::
# 5 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	lock
# 6 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	msgbox Route42_EcruteakCityEntrance_Guard_Text_0
# 8 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	release
	end


Route42_EcruteakCityEntrance_Guard_Text_0:
# 7 "data/maps/Route42_EcruteakCityEntrance/scripts.pory"
	.string "Need directions?\n"
	.string "Yeah, yeah, don't worry...\p"
	.string "ECRUTEAK CITY is out west.\n"
	.string "ROUTE 42 is to the east.$"
