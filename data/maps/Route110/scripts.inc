Route110_MapScripts::
	.byte 0


Route110_CyclingRoad_North_Sign::
# 5 "data/maps/Route110/scripts.pory"
	lock
# 6 "data/maps/Route110/scripts.pory"
	msgbox Route110_CyclingRoad_North_Sign_Text_0
# 7 "data/maps/Route110/scripts.pory"
	waitmessage
# 8 "data/maps/Route110/scripts.pory"
	closemessage
# 9 "data/maps/Route110/scripts.pory"
	release
	end


Route110_CyclingRoad_South_Sign::
# 15 "data/maps/Route110/scripts.pory"
	lock
# 16 "data/maps/Route110/scripts.pory"
	msgbox Route110_CyclingRoad_South_Sign_Text_0
# 17 "data/maps/Route110/scripts.pory"
	waitmessage
# 18 "data/maps/Route110/scripts.pory"
	closemessage
# 19 "data/maps/Route110/scripts.pory"
	release
	end


Route110_Sign::
# 25 "data/maps/Route110/scripts.pory"
	lock
# 26 "data/maps/Route110/scripts.pory"
	msgbox Route110_Sign_Text_0
# 27 "data/maps/Route110/scripts.pory"
	waitmessage
# 28 "data/maps/Route110/scripts.pory"
	closemessage
# 29 "data/maps/Route110/scripts.pory"
	release
	end


Route110_Boy::
# 35 "data/maps/Route110/scripts.pory"
	lock
# 36 "data/maps/Route110/scripts.pory"
	faceplayer
# 37 "data/maps/Route110/scripts.pory"
	msgbox Route110_Boy_Text_0
# 38 "data/maps/Route110/scripts.pory"
	waitmessage
# 39 "data/maps/Route110/scripts.pory"
	closemessage
# 40 "data/maps/Route110/scripts.pory"
	release
	end


Route110_CyclingRoad_North_Sign_Text_0:
# 6 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110 - NORTH\n"
	.string "SEASIDE CYCLING ROAD$"

Route110_CyclingRoad_South_Sign_Text_0:
# 16 "data/maps/Route110/scripts.pory"
	.string "ROUTE 110 - SOUTH\n"
	.string "SEASIDE CYCLING ROAD$"

Route110_Sign_Text_0:
# 26 "data/maps/Route110/scripts.pory"
	.string "SEASIDE ROUTE 110 -\n"
	.string "SLATEPORT CITY - MAUVILLE CITY$"

Route110_Boy_Text_0:
# 37 "data/maps/Route110/scripts.pory"
	.string "Tch...\n"
	.string "You've got a BICYCLE, huh?\p"
	.string "I wouldn't be surprised...\n"
	.string "RYDEL puts that stuff everywhere...$"
