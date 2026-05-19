Route22_WestEntrance_1F_MapScripts::
# 3 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 12
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 14 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 13
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 20 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 7 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 8 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 16 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 10 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
# 11 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return


Route22_WestEntrance_1F_TurnAroundQuarrelAhead::
# 27 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	lock
# 28 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0
# 29 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	closemessage
# 30 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_WestEntrance_1F_Player_WalkLeft
# 31 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	waitmovement
# 32 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	release
	end


# 36 "data/maps/Route22_WestEntrance_1F/scripts.pory"
Route22_WestEntrance_1F_Player_WalkLeft:
# 38 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	walk_left
# 39 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	step_end

Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0:
# 28 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	.string "Looks like something serious\n"
	.string "is happening ahead! Let's go around.$"
