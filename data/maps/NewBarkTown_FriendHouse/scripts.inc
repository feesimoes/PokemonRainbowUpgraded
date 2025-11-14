NewBarkTown_FriendHouse_MapScripts::
	.byte 0


NewBarkTown_FriendHouse_Man_Dialogue::
# 8 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	lock
# 9 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	applymovement 1, Movement_FriendHouse_Man_FacesPlayer
# 10 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	msgbox NewBarkTown_FriendHouse_Man_Dialogue_Text_0
# 11 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	closemessage
# 12 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	releaseall
	end


# 16 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
Movement_FriendHouse_Man_FacesPlayer:
# 18 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	face_player
# 19 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	step_end

NewBarkTown_FriendHouse_Man_Dialogue_Text_0:
# 10 "data/maps/NewBarkTown_FriendHouse/scripts.pory"
	.string "I enjoy the little moments of\n"
	.string "quiet, here and there.\p"
	.string "The neighbors' kids can be very\n"
	.string "loud, sometimes.$"
