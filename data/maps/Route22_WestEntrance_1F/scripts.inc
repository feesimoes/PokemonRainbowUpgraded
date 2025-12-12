# 1 "data/maps/Route22_WestEntrance_1F/scripts.pory"

# 2 "data/maps/Route22_WestEntrance_1F/scripts.pory"
Route22_WestEntrance_1F_EventScript_Guard::
# 3 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_Text_LeavingOrEnteringKantoGuard, MSGBOX_NPC
# 4 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	end

Route22_WestEntrance_1F_MapScripts::
# 10 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 12 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 12
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 21 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 13
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 27 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 14 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 15 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 23 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 17 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
# 18 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return


Route22_WestEntrance_1F_TurnAroundQuarrelAhead::
# 34 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	lock
# 35 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0
# 36 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	closemessage
# 37 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_WestEntrance_1F_Player_WalkLeft
# 38 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	waitmovement
# 39 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	release
	end


# 43 "data/maps/Route22_WestEntrance_1F/scripts.pory"
Route22_WestEntrance_1F_Player_WalkLeft:
# 45 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	walk_left
# 46 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	step_end

Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0:
# 35 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	.string "Looks like something serious\n"
	.string "is happening ahead! Let's go around.$"
