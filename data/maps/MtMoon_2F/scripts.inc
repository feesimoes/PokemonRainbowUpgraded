MtMoon_2F_MapScripts::
# 3 "data/maps/MtMoon_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, MtMoon_2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

MtMoon_2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/MtMoon_2F/scripts.pory"
	fadedefaultbgm
# 6 "data/maps/MtMoon_2F/scripts.pory"
	setvar VAR_EXPLORER_KIT, 1
	return

