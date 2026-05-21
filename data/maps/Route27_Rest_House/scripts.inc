Route27_Rest_House_MapScripts::
	.byte 0


Route27_Rest_Lady_Heals_Party::
# 7 "data/maps/Route27_Rest_House/scripts.pory"
	lock
# 8 "data/maps/Route27_Rest_House/scripts.pory"
	applymovement 1, RestLadyFacesPlayer
# 9 "data/maps/Route27_Rest_House/scripts.pory"
	msgbox Route27_Rest_Lady_Heals_Party_Text_0
# 10 "data/maps/Route27_Rest_House/scripts.pory"
	closemessage
# 11 "data/maps/Route27_Rest_House/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 12 "data/maps/Route27_Rest_House/scripts.pory"
	msgbox Route27_Rest_Lady_Heals_Party_Text_1
# 13 "data/maps/Route27_Rest_House/scripts.pory"
	closemessage
# 14 "data/maps/Route27_Rest_House/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_ROUTE27_REST_HOUSE
# 15 "data/maps/Route27_Rest_House/scripts.pory"
	release
	end


# 19 "data/maps/Route27_Rest_House/scripts.pory"
RestLadyFacesPlayer:
# 20 "data/maps/Route27_Rest_House/scripts.pory"
	face_player
# 21 "data/maps/Route27_Rest_House/scripts.pory"
	step_end

Route27_Rest_Lady_Heals_Party_Text_0:
# 9 "data/maps/Route27_Rest_House/scripts.pory"
	.string "Oh my! A visitor?\n"
	.string "We don't have any nearby facilities.\p"
	.string "Oh, I know!\n"
	.string "Please rest here!$"

Route27_Rest_Lady_Heals_Party_Text_1:
# 12 "data/maps/Route27_Rest_House/scripts.pory"
	.string "I hope you feel fully rested!\n"
	.string "You're welcome to stop by again.$"
