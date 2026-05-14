NewBarkTown_LyrasHouse_MapScripts::
	.byte 0


NewBarkTown_LyrasHouse_Mom_Dialogue::
# 8 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	lock
# 9 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	applymovement 1, Movement_LyrasHouse_NPC_FacesPlayer
# 10 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	msgbox NewBarkTown_LyrasHouse_Mom_Dialogue_Text_0
# 11 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	closemessage
# 12 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	releaseall
	end


NewBarkTown_LyrasHouse_Lyra_Dialogue::
# 18 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	lock
# 19 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	applymovement 2, Movement_LyrasHouse_NPC_FacesPlayer
# 20 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	msgbox NewBarkTown_LyrasHouse_Lyra_Dialogue_Text_0
# 21 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	closemessage
# 22 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	releaseall
	end


# 26 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
Movement_LyrasHouse_NPC_FacesPlayer:
# 28 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	face_player
# 29 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	step_end

NewBarkTown_LyrasHouse_Mom_Dialogue_Text_0:
# 10 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	.string "I hear they hold contests\n"
	.string "in a region down south.$"

NewBarkTown_LyrasHouse_Lyra_Dialogue_Text_0:
# 20 "data/maps/NewBarkTown_LyrasHouse/scripts.pory"
	.string "MARILL is a cute POKéMON!\n"
	.string "I want one someday!$"
