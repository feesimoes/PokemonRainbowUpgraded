Route26_MapScripts::
	.byte 0


Test_Script_1::
# 7 "data/maps/Route26/scripts.pory"
	lock
# 8 "data/maps/Route26/scripts.pory"
	msgbox Test_Script_1_Text_0
# 9 "data/maps/Route26/scripts.pory"
	closemessage
# 10 "data/maps/Route26/scripts.pory"
	release
	end


Test_Movement_Script_1::
# 16 "data/maps/Route26/scripts.pory"
	lock
# 17 "data/maps/Route26/scripts.pory"
	playse SE_PIN
# 18 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway1
# 19 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway1
# 20 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway1
# 21 "data/maps/Route26/scripts.pory"
	playbgm MUS_JESSIE_JAMES_THEME, FALSE
# 22 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_0
# 23 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 24 "data/maps/Route26/scripts.pory"
	msgbox Test_Movement_Script_1_Text_1
# 25 "data/maps/Route26/scripts.pory"
	closemessage
# 26 "data/maps/Route26/scripts.pory"
	playse SE_FLEE
# 27 "data/maps/Route26/scripts.pory"
	applymovement 1, movement_RocketRunAway2
# 28 "data/maps/Route26/scripts.pory"
	applymovement 2, movement_RocketRunAway2
# 29 "data/maps/Route26/scripts.pory"
	applymovement 3, movement_RocketRunAway2
# 30 "data/maps/Route26/scripts.pory"
	waitmovement 0
# 32 "data/maps/Route26/scripts.pory"
	setflag FLAG_TEMP_1
# 33 "data/maps/Route26/scripts.pory"
	removeobject 1
# 34 "data/maps/Route26/scripts.pory"
	removeobject 2
# 35 "data/maps/Route26/scripts.pory"
	removeobject 3
# 36 "data/maps/Route26/scripts.pory"
	release
	end


# 40 "data/maps/Route26/scripts.pory"
movement_RocketRunAway1:
# 41 "data/maps/Route26/scripts.pory"
	emote_exclamation_mark
# 42 "data/maps/Route26/scripts.pory"
	jump_in_place_down
# 43 "data/maps/Route26/scripts.pory"
	step_end

# 46 "data/maps/Route26/scripts.pory"
movement_RocketRunAway2:
# 47 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 47 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 47 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 47 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 47 "data/maps/Route26/scripts.pory"
	walk_fast_down
# 48 "data/maps/Route26/scripts.pory"
	step_end

Test_Script_1_Text_0:
# 8 "data/maps/Route26/scripts.pory"
	.string "PLACEHOLDER TEXT.$"

Test_Movement_Script_1_Text_0:
# 22 "data/maps/Route26/scripts.pory"
	.string "It's that twerp!$"

Test_Movement_Script_1_Text_1:
# 24 "data/maps/Route26/scripts.pory"
	.string "Run away!$"
