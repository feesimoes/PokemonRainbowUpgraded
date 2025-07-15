TohjoFalls_1F_MapScripts::
	.byte 0


Rocket_Grunt_Fiddling_With_Radio_Text::
# 4 "data/maps/TohjoFalls_1F/scripts.pory"
	lock
# 5 "data/maps/TohjoFalls_1F/scripts.pory"
	applymovement 1, TohjohFallsMovementFacePlayer
# 6 "data/maps/TohjoFalls_1F/scripts.pory"
	msgbox Rocket_Grunt_Fiddling_With_Radio_Text_Text_0
# 7 "data/maps/TohjoFalls_1F/scripts.pory"
	release
	end


# 11 "data/maps/TohjoFalls_1F/scripts.pory"
TohjohFallsMovementFacePlayer:
# 12 "data/maps/TohjoFalls_1F/scripts.pory"
	face_player
# 13 "data/maps/TohjoFalls_1F/scripts.pory"
	step_end

Rocket_Grunt_Fiddling_With_Radio_Text_Text_0:
# 6 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "I'm setting something up here\n"
	.string "to boost radio signals.\p"
	.string "Get lost, kid!$"
