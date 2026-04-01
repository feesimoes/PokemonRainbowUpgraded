Route35_SouthEntrance_MapScripts::
	.byte 0


Route35_SouthEntrance_Guard::
# 5 "data/maps/Route35_SouthEntrance/scripts.pory"
	lock
# 6 "data/maps/Route35_SouthEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route35_SouthEntrance/scripts.pory"
	msgbox Route35_SouthEntrance_Guard_Text_0
# 8 "data/maps/Route35_SouthEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route35_SouthEntrance/scripts.pory"
	release
	end


Route35_SouthEntrance_Guard_Text_0:
# 7 "data/maps/Route35_SouthEntrance/scripts.pory"
	.string "Up ahead is NATIONAL PARK. The\n"
	.string "BUG-CATCHING CONTEST is fun!\p"
	.string "Will you try it out? Oh, right. Also\n"
	.string "watch out for odd trees!$"
