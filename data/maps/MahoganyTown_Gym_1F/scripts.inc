MahoganyTown_Gym_1F_MapScripts::
	.byte 0


MahoganyCity_Gym_Guide::
# 5 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	lock
# 6 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	faceplayer
# 7 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyCity_Gym_Guide_2
# 13 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Guide_Text_1
# 14 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Guide_Text_2
MahoganyCity_Gym_Guide_1:
# 16 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	closemessage
# 17 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	release
	end

MahoganyCity_Gym_Guide_2:
# 9 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Guide_Text_0
	goto MahoganyCity_Gym_Guide_1


MahoganyCity_Gym_Statue::
# 23 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	lock
# 24 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyCity_Gym_Statue_2
# 30 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Statue_Text_1
MahoganyCity_Gym_Statue_1:
# 32 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	closemessage
# 33 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	release
	end

MahoganyCity_Gym_Statue_2:
# 26 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Statue_Text_0
	goto MahoganyCity_Gym_Statue_1


MahoganyCity_Gym_Guide_Text_0:
# 9 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "Yeah! Keep going for the win!\n"
	.string "Nice job!$"

MahoganyCity_Gym_Guide_Text_1:
# 13 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "This GYM'S a spooky one!\p"
	.string "It's the perfect place to go\n"
	.string "back outside and touch grass!$"

MahoganyCity_Gym_Guide_Text_2:
# 14 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "But, just in case, here's a tip!\n"
	.string "ICE-types despise ROCK, FIRE, STEEL\l"
	.string "AND FIGHT!$"

MahoganyCity_Gym_Statue_Text_0:
# 26 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "MAHOGANY CITY GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

MahoganyCity_Gym_Statue_Text_1:
# 30 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "MAHOGANY CITY GYM\n"
	.string "LEADER: PRYCE\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"
