Route22_WestEntrance_2F_MapScripts::
	.byte 0


Route22_WestEntrance_2F_RightBinoculars::
# 6 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 7 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_RightBinoculars_Text_0
# 8 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_RightBinoculars_Text_1
# 9 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 10 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	release
	end


Route22_WestEntrance_2F_LeftBinoculars::
# 16 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 17 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_RightBinoculars_Text_0
# 18 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_LeftBinoculars_Text_0
# 19 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 20 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	release
	end


Route22_WestEntrance_2F_Police_Dialogue::
# 25 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 26 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 3, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 27 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Police_Dialogue_Text_0
# 28 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 29 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


Route22_WestEntrance_2F_Fat_Man_Dialogue::
# 34 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 35 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 1, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 36 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Fat_Man_Dialogue_Text_0
# 37 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 38 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


Route22_WestEntrance_2F_Old_Man_Dialogue::
# 43 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 44 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 2, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 45 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Old_Man_Dialogue_Text_0
# 46 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 47 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


# 51 "data/maps/Route22_WestEntrance_2F/scripts.pory"
Movement_Route22_WestEntrance_2F_NPC_Face_Player:
# 52 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	face_player
# 53 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	step_end

Route22_WestEntrance_2F_RightBinoculars_Text_0:
# 7 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "Let's see what the binoculars have\n"
	.string "to show…$"

Route22_WestEntrance_2F_RightBinoculars_Text_1:
# 8 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "There's a really long path ahead.\n"
	.string "It leads up to the POKéMON LEAGUE!$"

Route22_WestEntrance_2F_LeftBinoculars_Text_0:
# 18 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "There's a really long path ahead.\n"
	.string "MT. SILVER looms intimidatingly!$"

Route22_WestEntrance_2F_Police_Dialogue_Text_0:
# 27 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "Look out for yourself\n"
	.string "as well as for others.\p"
	.string "The line between good and evil\n"
	.string "is not always easy to tell.$"

Route22_WestEntrance_2F_Fat_Man_Dialogue_Text_0:
# 36 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "I've heard from some folks\n"
	.string "of a region further south.\p"
	.string "Somewhat neighboring us in JOHTO,\n"
	.string "apparently.$"

Route22_WestEntrance_2F_Old_Man_Dialogue_Text_0:
# 45 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "Recent developments are astounding!\n"
	.string "Back in my day, you see...\p"
	.string "Nobody would have thought of\n"
	.string "a realm above the sky!$"
