Route30_MapScripts::
	.byte 0


Route30_EventScript_Youngster_Joey_Battle::
# 5 "data/maps/Route30/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_JOEY_ROUTE_30, Route30_EventScript_Youngster_Joey_Battle_Text_0, Route30_EventScript_Youngster_Joey_Battle_Text_1
# 6 "data/maps/Route30/scripts.pory"
	msgbox Route30_EventScript_Youngster_Joey_Battle_Text_2
# 7 "data/maps/Route30/scripts.pory"
	closemessage
# 8 "data/maps/Route30/scripts.pory"
	releaseall
	end


Route30_EventScript_Youngster_Joey_Battle_Text_0:
# 5 "data/maps/Route30/scripts.pory"
	.string "All right, a KANTO kid!\n"
	.string "Check out my top-percentage POKéMON!$"

Route30_EventScript_Youngster_Joey_Battle_Text_1:
# 5 "data/maps/Route30/scripts.pory"
	.string "My RATTATA is different from\n"
	.string "regular RATTATA, but I lost...$"

Route30_EventScript_Youngster_Joey_Battle_Text_2:
# 6 "data/maps/Route30/scripts.pory"
	.string "So what did you think of my RATTATA?\n"
	.string "Bet they don't raise 'em like that in\l"
	.string "KANTO!$"
