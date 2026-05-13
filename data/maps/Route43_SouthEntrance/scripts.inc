Route43_SouthEntrance_MapScripts::
	.byte 0


Route43_SouthEntrance_Guard::
# 5 "data/maps/Route43_SouthEntrance/scripts.pory"
	lock
# 6 "data/maps/Route43_SouthEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route43_SouthEntrance/scripts.pory"
	msgbox Route43_SouthEntrance_Guard_Text_0
# 8 "data/maps/Route43_SouthEntrance/scripts.pory"
	release
	end


Route43_SouthEntrance_Guard_Text_0:
# 7 "data/maps/Route43_SouthEntrance/scripts.pory"
	.string "ROUTE 43 is up ahead, but there is\n"
	.string "a pretty bad storm right now...\p"
	.string "Also, beware the greedy gate!$"
