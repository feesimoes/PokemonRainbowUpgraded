NewBarkTown_EthansHouse_MapScripts::
	.byte 0


NewBarkTown_EthansHouse_Mom_Dialogue::
# 5 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	lock
# 6 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	applymovement 1, Movement_EthansHouse_NPC_FacesPlayer
# 7 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	msgbox NewBarkTown_EthansHouse_Mom_Dialogue_Text_0
# 8 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	closemessage
# 9 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	releaseall
	end


NewBarkTown_EthansHouse_Ethan_Dialogue::
# 15 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	lock
# 16 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	applymovement 2, Movement_EthansHouse_NPC_FacesPlayer
# 17 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	msgbox NewBarkTown_EthansHouse_Ethan_Dialogue_Text_0
# 18 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	closemessage
# 19 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	releaseall
	end


# 23 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
Movement_EthansHouse_NPC_FacesPlayer:
# 25 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	face_player
# 26 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	step_end

NewBarkTown_EthansHouse_Mom_Dialogue_Text_0:
# 7 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	.string "Kids eventually grow up and\n"
	.string "leave home someday, toughening up.$"

NewBarkTown_EthansHouse_Ethan_Dialogue_Text_0:
# 17 "data/maps/NewBarkTown_EthansHouse/scripts.pory"
	.string "You must be a strong trainer!\n"
	.string "I wanna be a trainer too!$"
