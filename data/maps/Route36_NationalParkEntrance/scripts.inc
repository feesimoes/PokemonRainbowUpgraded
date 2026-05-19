Route36_NationalParkEntrance_MapScripts::
	.byte 0


Route36_NationalParkEntrance_Guard_Dialogue::
# 8 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	lock
# 9 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	msgbox Route36_NationalParkEntrance_Guard_Dialogue_Text_0
# 10 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	closemessage
# 11 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	releaseall
	end


Route36_NationalParkEntrance_Boy_Dialogue::
# 17 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	lock
# 18 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	applymovement 2, Route36_NationalParkEntrance_NPC_Face_Player
# 19 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	msgbox Route36_NationalParkEntrance_Boy_Dialogue_Text_0
# 20 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	closemessage
# 21 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	releaseall
	end


# 25 "data/maps/Route36_NationalParkEntrance/scripts.pory"
Route36_NationalParkEntrance_NPC_Face_Player:
# 27 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	face_player
# 28 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	step_end

Route36_NationalParkEntrance_Guard_Dialogue_Text_0:
# 9 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	.string "To the west is NATIONAL PARK,\n"
	.string "ROUTE 36 is to the east.\p"
	.string "If you enjoy natural scenery,\n"
	.string "the park is surely for you.$"

Route36_NationalParkEntrance_Boy_Dialogue_Text_0:
# 19 "data/maps/Route36_NationalParkEntrance/scripts.pory"
	.string "Have you been to ROUTE 36?\n"
	.string "There's a weird tree there...\p"
	.string "Apparently it reacts if you\n"
	.string "sprinkle water on it...$"
