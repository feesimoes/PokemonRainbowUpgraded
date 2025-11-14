Route22_WestEntrance_2F_MapScripts::
	.byte 0


Route22_WestEntrance_2F_Police_Dialogue::
# 5 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 6 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 3, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 7 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Police_Dialogue_Text_0
# 8 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 9 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


Route22_WestEntrance_2F_Fat_Man_Dialogue::
# 14 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 15 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 1, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 16 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Fat_Man_Dialogue_Text_0
# 17 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 18 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


Route22_WestEntrance_2F_Old_Man_Dialogue::
# 23 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	lock
# 24 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	applymovement 2, Movement_Route22_WestEntrance_2F_NPC_Face_Player
# 25 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	msgbox Route22_WestEntrance_2F_Old_Man_Dialogue_Text_0
# 26 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	closemessage
# 27 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	releaseall
	end


# 31 "data/maps/Route22_WestEntrance_2F/scripts.pory"
Movement_Route22_WestEntrance_2F_NPC_Face_Player:
# 32 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	face_player
# 33 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	step_end

Route22_WestEntrance_2F_Police_Dialogue_Text_0:
# 7 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "Look out for yourself\n"
	.string "as well as for others.\p"
	.string "The line between good and evil\n"
	.string "is not always easy to tell.$"

Route22_WestEntrance_2F_Fat_Man_Dialogue_Text_0:
# 16 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "I've heard from some folks\n"
	.string "of a region further south.\p"
	.string "Somewhat neighboring us in JOHTO,\n"
	.string "apparently.$"

Route22_WestEntrance_2F_Old_Man_Dialogue_Text_0:
# 25 "data/maps/Route22_WestEntrance_2F/scripts.pory"
	.string "Recent developments are astounding!\n"
	.string "Back in my day, you see...\p"
	.string "Nobody would have thought of\n"
	.string "a realm above the sky!$"
