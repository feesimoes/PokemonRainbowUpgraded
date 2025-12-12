TopsoilTown_MapScripts::
# 3 "data/maps/TopsoilTown/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TopsoilTown_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TopsoilTown_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/TopsoilTown/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_TOPSOIL_TOWN
	return


TopsoilTown_Sign::
# 11 "data/maps/TopsoilTown/scripts.pory"
	lock
# 12 "data/maps/TopsoilTown/scripts.pory"
	msgbox TopsoilTown_Sign_Text_0
# 13 "data/maps/TopsoilTown/scripts.pory"
	closemessage
# 14 "data/maps/TopsoilTown/scripts.pory"
	release
	end


TopsoilTown_Sign_Text_0:
# 12 "data/maps/TopsoilTown/scripts.pory"
	.string "TOPTOIL TOWN -\n"
	.string "GUYANA'S hidden agricultural haven.$"
