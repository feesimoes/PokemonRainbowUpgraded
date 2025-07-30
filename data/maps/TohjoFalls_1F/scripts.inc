TohjoFalls_1F_MapScripts::
# 3 "data/maps/TohjoFalls_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TohjoFalls_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

TohjoFalls_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 5 "data/maps/TohjoFalls_1F/scripts.pory"
	setvar VAR_EXPLORER_KIT, 0
	return


Rocket_Grunt_Fiddling_With_Radio_Text::
# 10 "data/maps/TohjoFalls_1F/scripts.pory"
	lock
# 11 "data/maps/TohjoFalls_1F/scripts.pory"
	applymovement 1, TohjohFallsMovementFacePlayer
# 12 "data/maps/TohjoFalls_1F/scripts.pory"
	msgbox Rocket_Grunt_Fiddling_With_Radio_Text_Text_0
# 13 "data/maps/TohjoFalls_1F/scripts.pory"
	release
	end


Rocket_Grunt_Guard::
# 18 "data/maps/TohjoFalls_1F/scripts.pory"
	lock
# 19 "data/maps/TohjoFalls_1F/scripts.pory"
	applymovement 2, TohjohFallsMovementFacePlayer
# 20 "data/maps/TohjoFalls_1F/scripts.pory"
	msgbox Rocket_Grunt_Guard_Text_0
# 21 "data/maps/TohjoFalls_1F/scripts.pory"
	release
	end


# 25 "data/maps/TohjoFalls_1F/scripts.pory"
TohjohFallsMovementFacePlayer:
# 26 "data/maps/TohjoFalls_1F/scripts.pory"
	face_player
# 27 "data/maps/TohjoFalls_1F/scripts.pory"
	step_end

Rocket_Grunt_Fiddling_With_Radio_Text_Text_0:
# 12 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "I'm setting something up here\n"
	.string "to boost radio signals.\p"
	.string "Get lost, kid!$"

Rocket_Grunt_Guard_Text_0:
# 20 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "What are you doing here?\n"
	.string "Get lost!$"
