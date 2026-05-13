Route29_MapScripts::
	.byte 0


Route29_Police_Dialogue::
# 8 "data/maps/Route29/scripts.pory"
	lock
# 9 "data/maps/Route29/scripts.pory"
	applymovement 3, Movement_Route29_NPC_Face_Player
# 10 "data/maps/Route29/scripts.pory"
	msgbox Route29_Police_Dialogue_Text_0
# 11 "data/maps/Route29/scripts.pory"
	closemessage
# 12 "data/maps/Route29/scripts.pory"
	releaseall
	end


Route29_Youngster_Dude_Dialogue::
# 18 "data/maps/Route29/scripts.pory"
	lock
# 19 "data/maps/Route29/scripts.pory"
	applymovement 2, Movement_Route29_NPC_Face_Player
# 20 "data/maps/Route29/scripts.pory"
	msgbox Route29_Youngster_Dude_Dialogue_Text_0
# 21 "data/maps/Route29/scripts.pory"
	closemessage
# 22 "data/maps/Route29/scripts.pory"
	releaseall
	end


Route29_Signpost::
# 28 "data/maps/Route29/scripts.pory"
	msgbox Route29_Signpost_Text_0
# 29 "data/maps/Route29/scripts.pory"
	closemessage
# 30 "data/maps/Route29/scripts.pory"
	releaseall
	end


Route29_Sign_To_Cherrygrove::
# 36 "data/maps/Route29/scripts.pory"
	msgbox Route29_Sign_To_Cherrygrove_Text_0
# 37 "data/maps/Route29/scripts.pory"
	closemessage
# 38 "data/maps/Route29/scripts.pory"
	releaseall
	end


# 42 "data/maps/Route29/scripts.pory"
Movement_Route29_NPC_Face_Player:
# 44 "data/maps/Route29/scripts.pory"
	face_player
# 45 "data/maps/Route29/scripts.pory"
	step_end

Route29_Police_Dialogue_Text_0:
# 10 "data/maps/Route29/scripts.pory"
	.string "If someone tries throwing a POKé BALL\n"
	.string "at your POKéMON in battle...\p"
	.string "Stay on guard! Block the BALL!\n"
	.string "Report them! They are thieves.$"

Route29_Youngster_Dude_Dialogue_Text_0:
# 20 "data/maps/Route29/scripts.pory"
	.string "POKéMON hide in the grass.\n"
	.string "Who knows when they'll pop out...?$"

Route29_Signpost_Text_0:
# 28 "data/maps/Route29/scripts.pory"
	.string "ROUTE 29 -\n"
	.string "Novice road, scented by freshly cut\l"
	.string "grass.$"

Route29_Sign_To_Cherrygrove_Text_0:
# 36 "data/maps/Route29/scripts.pory"
	.string "CHERRYGROVE CITY is up ahead -\n"
	.string "Leaving ROUTE 29 westward.$"
