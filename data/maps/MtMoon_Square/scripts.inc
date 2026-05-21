MtMoon_Square_MapScripts::
# 3 "data/maps/MtMoon_Square/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtMoon_Square_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MtMoon_Square_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MtMoon_Square/scripts.pory"
	fadedefaultbgm
# 6 "data/maps/MtMoon_Square/scripts.pory"
	setvar VAR_EXPLORER_KIT, 1
	return


MtMoon_Square_Sign::
# 12 "data/maps/MtMoon_Square/scripts.pory"
	lock
# 13 "data/maps/MtMoon_Square/scripts.pory"
	msgbox MtMoon_Square_Sign_Text_0
# 14 "data/maps/MtMoon_Square/scripts.pory"
	waitmessage
# 15 "data/maps/MtMoon_Square/scripts.pory"
	closemessage
# 16 "data/maps/MtMoon_Square/scripts.pory"
	releaseall
	end


MtMoon_Square_Shop_Sign::
# 22 "data/maps/MtMoon_Square/scripts.pory"
	lock
# 23 "data/maps/MtMoon_Square/scripts.pory"
	msgbox MtMoon_Square_Shop_Sign_Text_0
# 24 "data/maps/MtMoon_Square/scripts.pory"
	waitmessage
# 25 "data/maps/MtMoon_Square/scripts.pory"
	closemessage
# 26 "data/maps/MtMoon_Square/scripts.pory"
	releaseall
	end


MtMoon_Square_Sign_Text_0:
# 13 "data/maps/MtMoon_Square/scripts.pory"
	.string "This is MT. MOON SQUARE.\n"
	.string "Please don't litter.\p"
	.string "Put trash where it belongs!$"

MtMoon_Square_Shop_Sign_Text_0:
# 23 "data/maps/MtMoon_Square/scripts.pory"
	.string "MT. MOON SQUARE -\n"
	.string "SOUVENIR SHOP$"
