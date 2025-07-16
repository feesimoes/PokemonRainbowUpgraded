Route27_Rest_House_MapScripts::
	map_script MAP_SCRIPT_ON_LOAD, Route27_UnlockFly
	.byte 0

Route27_UnlockFly::
	setworldmapflag FLAG_WORLD_MAP_ROUTE27_REST_HOUSE
	end

Route27_Rest_Lady_Heals_Party::
# 5 "data/maps/Route27_Rest_House/scripts.pory"
	lock
# 6 "data/maps/Route27_Rest_House/scripts.pory"
	applymovement 1, RestLadyFacesPlayer
# 7 "data/maps/Route27_Rest_House/scripts.pory"
	msgbox Route27_Rest_Lady_Heals_Party_Text_0
# 8 "data/maps/Route27_Rest_House/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 9 "data/maps/Route27_Rest_House/scripts.pory"
	msgbox Route27_Rest_Lady_Heals_Party_Text_1
# 10 "data/maps/Route27_Rest_House/scripts.pory"
	release
	end


# 14 "data/maps/Route27_Rest_House/scripts.pory"
RestLadyFacesPlayer:
# 15 "data/maps/Route27_Rest_House/scripts.pory"
	face_player
# 16 "data/maps/Route27_Rest_House/scripts.pory"
	step_end

Route27_Rest_Lady_Heals_Party_Text_0:
# 7 "data/maps/Route27_Rest_House/scripts.pory"
	.string "Oh my! A visitor?\n"
	.string "We don't have any nearby facilities.\p"
	.string "Oh, I know!\n"
	.string "Please rest here!$"

Route27_Rest_Lady_Heals_Party_Text_1:
# 9 "data/maps/Route27_Rest_House/scripts.pory"
	.string "I hope you feel fully rested!\n"
	.string "You're welcome to stop by again.$"
