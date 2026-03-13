GlitterLighthouse_1F_MapScripts::
# 3 "data/maps/GlitterLighthouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, GlitterLighthouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

GlitterLighthouse_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/GlitterLighthouse_1F/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_OLIVINE_LIGHTHOUSE
	return

