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

GiovanniBattleEvent::
# 17 "data/maps/TohjoFalls_1F/scripts.pory"
	trainerbattle_single TRAINER_BOSS_GIOVANNI_3, GiovanniBattleEvent_Text_0, GiovanniBattleEvent_Text_1
# 18 "data/maps/TohjoFalls_1F/scripts.pory"
	msgbox GiovanniBattleEvent_Text_2
# 19 "data/maps/TohjoFalls_1F/scripts.pory"
	releaseall
	end


Rocket_Grunt_Fiddling_With_Radio_Text_Text_0:
# 6 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "I'm setting something up here\n"
	.string "to boost radio signals.\p"
	.string "Get lost, kid!$"

GiovanniBattleEvent_Text_0:
# 17 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "GIOVANNI: Fwahahaha!\n"
	.string "Welcome to my hideout!\p"
	.string "You have found me again.\n"
	.string "This time, I'm not holding back!\p"
	.string "For your insolence,\n"
	.string "you shall feel a world of pain!$"

GiovanniBattleEvent_Text_1:
# 17 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "Argh! I lost... again?!$"

GiovanniBattleEvent_Text_2:
# 18 "data/maps/TohjoFalls_1F/scripts.pory"
	.string "GIOVANNI: Haha!\n"
	.string "This isn't over, {PLAYER}!\p"
	.string "I have pressing matters\n"
	.string "to attend to in GOLDENROD CITY.\p"
	.string "Farewell.$"
