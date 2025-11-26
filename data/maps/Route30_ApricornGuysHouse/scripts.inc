Route30_ApricornGuysHouse_MapScripts::
	.byte 0


Route30_ApricornGuysHouse_EventScript_ApricornGuy::
# 8 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	lock
# 9 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	applymovement 1, Route30_ApricornGuysHouse_Face_Player
# 10 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	msgbox Route30_ApricornGuysHouse_EventScript_ApricornGuy_Text_0
# 11 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	waitmessage
# 12 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	closemessage
# 13 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	release
	end


# 17 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
Route30_ApricornGuysHouse_Face_Player:
# 19 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	face_player
# 20 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	step_end

Route30_ApricornGuysHouse_EventScript_ApricornGuy_Text_0:
# 10 "data/maps/Route30_ApricornGuysHouse/scripts.pory"
	.string "Hello there!\n"
	.string "Lovely weather, isn't it?$"
