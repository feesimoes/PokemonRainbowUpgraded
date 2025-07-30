TohjoFalls_B3F_MapScripts::
# 3 "data/maps/TohjoFalls_B3F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TohjoFalls_B3F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TohjoFalls_B3F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/TohjoFalls_B3F/scripts.pory"
	fadedefaultbgm
# 6 "data/maps/TohjoFalls_B3F/scripts.pory"
	setvar VAR_EXPLORER_KIT, -3
	return

