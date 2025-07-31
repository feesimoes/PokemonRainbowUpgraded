NewBarkTown_ProfessorElmsLab_MapScripts::
# 3 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_NEW_BARK_TOWN
	return

