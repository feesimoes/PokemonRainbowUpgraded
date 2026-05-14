TohjoFalls_B2F_MapScripts::
# 3 "data/maps/TohjoFalls_B2F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TohjoFalls_B2F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TohjoFalls_B2F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/TohjoFalls_B2F/scripts.pory"
	fadedefaultbgm
# 6 "data/maps/TohjoFalls_B2F/scripts.pory"
	setvar VAR_EXPLORER_KIT, -2
	return


TohjoFalls_B2F_RocketGruntBattle::
# 12 "data/maps/TohjoFalls_B2F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_53, TohjoFalls_B2F_RocketGruntBattle_Text_0, TohjoFalls_B2F_RocketGruntBattle_Text_1
# 13 "data/maps/TohjoFalls_B2F/scripts.pory"
	msgbox TohjoFalls_B2F_RocketGruntBattle_Text_2
# 14 "data/maps/TohjoFalls_B2F/scripts.pory"
	closemessage
# 15 "data/maps/TohjoFalls_B2F/scripts.pory"
	releaseall
	end


TohjoFalls_B2F_RocketGruntBattle_Text_0:
# 12 "data/maps/TohjoFalls_B2F/scripts.pory"
	.string "Please, stop digging holes into\n"
	.string "our incredibly evil operation!$"

TohjoFalls_B2F_RocketGruntBattle_Text_1:
# 12 "data/maps/TohjoFalls_B2F/scripts.pory"
	.string "Oh no...\n"
	.string "Please, don't tell me... I lost...$"

TohjoFalls_B2F_RocketGruntBattle_Text_2:
# 13 "data/maps/TohjoFalls_B2F/scripts.pory"
	.string "Please, go back home.\n"
	.string "I beg of you, it's much safer.\p"
	.string "I wish I could go home, myself...\n"
	.string "I'm scared, too...$"
