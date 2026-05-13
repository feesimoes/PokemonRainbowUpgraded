Route22_WestEntrance_1F_EventScript_Guard::
# 3 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	checkflag FLAG_SYS_GAME_CLEAR
# 4 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route22_WestEntrance_1F_EventScript_Guard_1
# 16 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	lock
# 17 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_EventScript_Guard_Text_1
# 18 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	closemessage
# 19 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	release
	end

Route22_WestEntrance_1F_EventScript_Guard_1:
# 6 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	lock
# 7 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_EventScript_Guard_Text_0
# 8 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	closemessage
# 9 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_WestEntrance_1F_Player_WalkRightGuard
# 10 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	waitmovement
# 11 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	release
	end


# 25 "data/maps/Route22_WestEntrance_1F/scripts.pory"
Route22_WestEntrance_1F_Player_WalkRightGuard:
# 27 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	walk_right
# 28 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	step_end

Route22_WestEntrance_1F_MapScripts::
# 33 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 35 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 12
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1
# 44 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 13
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2
# 50 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 37 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 38 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_2:
# 46 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return

Route22_WestEntrance_1F_MapScripts_MAP_SCRIPT_ON_LOAD_6:
# 40 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 13
# 41 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_22_GIOVANNI_SILVER
	return


Route22_WestEntrance_1F_TurnAroundQuarrelAhead::
# 57 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	lock
# 58 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	msgbox Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0
# 59 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	closemessage
# 60 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Route22_WestEntrance_1F_Player_WalkLeft
# 61 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	waitmovement
# 62 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	release
	end


# 66 "data/maps/Route22_WestEntrance_1F/scripts.pory"
Route22_WestEntrance_1F_Player_WalkLeft:
# 68 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	walk_left
# 69 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	step_end

Route22_WestEntrance_1F_EventScript_Guard_Text_0:
# 7 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	.string "A estrada a frente leva a Johto.\p"
	.string "Apenas o Campeao da Liga\n"
	.string "de Kanto pode passar.$"

Route22_WestEntrance_1F_EventScript_Guard_Text_1:
# 17 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	.string "Voce eh o Campeao de Kanto!\p"
	.string "Pode passar.\n"
	.string "Boa sorte em Johto!$"

Route22_WestEntrance_1F_TurnAroundQuarrelAhead_Text_0:
# 58 "data/maps/Route22_WestEntrance_1F/scripts.pory"
	.string "Looks like something serious\n"
	.string "is happening ahead! Let's go around.$"
