Route26_South_House_MapScripts::
	.byte 0


# 3 "data/maps/Route26_South_House/scripts.pory"
movement_route26_south_house_npc_face_player:
# 4 "data/maps/Route26_South_House/scripts.pory"
	face_player
# 5 "data/maps/Route26_South_House/scripts.pory"
	step_end

Route26_South_House_Twins_Mom_Dialogue::
# 9 "data/maps/Route26_South_House/scripts.pory"
	lock
# 10 "data/maps/Route26_South_House/scripts.pory"
	applymovement 1, movement_route26_south_house_npc_face_player
# 11 "data/maps/Route26_South_House/scripts.pory"
	msgbox Route26_South_House_Twins_Mom_Dialogue_Text_0
# 12 "data/maps/Route26_South_House/scripts.pory"
	closemessage
# 13 "data/maps/Route26_South_House/scripts.pory"
	releaseall
	end


Route26_South_House_Sunday_Twin_Dialogue::
# 18 "data/maps/Route26_South_House/scripts.pory"
	lock
# 19 "data/maps/Route26_South_House/scripts.pory"
	applymovement 2, movement_route26_south_house_npc_face_player
# 20 "data/maps/Route26_South_House/scripts.pory"
	msgbox Route26_South_House_Sunday_Twin_Dialogue_Text_0
# 21 "data/maps/Route26_South_House/scripts.pory"
	closemessage
# 22 "data/maps/Route26_South_House/scripts.pory"
	releaseall
	end


Route26_South_House_Wednesday_Twin_Dialogue::
# 27 "data/maps/Route26_South_House/scripts.pory"
	lock
# 28 "data/maps/Route26_South_House/scripts.pory"
	applymovement 3, movement_route26_south_house_npc_face_player
# 29 "data/maps/Route26_South_House/scripts.pory"
	msgbox Route26_South_House_Wednesday_Twin_Dialogue_Text_0
# 30 "data/maps/Route26_South_House/scripts.pory"
	closemessage
# 31 "data/maps/Route26_South_House/scripts.pory"
	releaseall
	end


Route26_South_House_Twins_Mom_Dialogue_Text_0:
# 11 "data/maps/Route26_South_House/scripts.pory"
	.string "Hello, hello!\n"
	.string "So good of you to stop by!\p"
	.string "My twin daughters love raising EEVEE.\n"
	.string "Please, have a word with them!$"

Route26_South_House_Sunday_Twin_Dialogue_Text_0:
# 20 "data/maps/Route26_South_House/scripts.pory"
	.string "EEVEE can evolve if treated\n"
	.string "with care and love!\p"
	.string "Make sure it's daytime when\n"
	.string "they level up, okay?$"

Route26_South_House_Wednesday_Twin_Dialogue_Text_0:
# 29 "data/maps/Route26_South_House/scripts.pory"
	.string "EEVEE will evolve at night,\n"
	.string "if you treat it well...$"
