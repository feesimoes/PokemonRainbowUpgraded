CanalaveCity_MapScripts::
	.byte 0


CanalaveCity_GiveRockClimbKit::
# 5 "data/maps/CanalaveCity/scripts.pory"
	lock
# 6 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_GiveRockClimbKit_Text_0
# 7 "data/maps/CanalaveCity/scripts.pory"
	clearflag FLAG_OBTAINED_ROCK_CLIMB_KIT
# 8 "data/maps/CanalaveCity/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BYRON
# 9 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Gym_Sign::
# 14 "data/maps/CanalaveCity/scripts.pory"
	lock
# 15 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Gym_Sign_Text_0
# 16 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_SailorEldritchHouse_Sign::
# 21 "data/maps/CanalaveCity/scripts.pory"
	lock
# 22 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_SailorEldritchHouse_Sign_Text_0
# 23 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Sign::
# 28 "data/maps/CanalaveCity/scripts.pory"
	lock
# 29 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Sign_Text_0
# 30 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_GiveRockClimbKit_Text_0:
# 6 "data/maps/CanalaveCity/scripts.pory"
	.string "That's BYRON'S badge!\n"
	.string "Sorry, but... it's MINE now!$"

CanalaveCity_Gym_Sign_Text_0:
# 15 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY GYM\n"
	.string "LEADER: BYRON\p"
	.string "The Man with the STEEL Body!$"

CanalaveCity_SailorEldritchHouse_Sign_Text_0:
# 22 "data/maps/CanalaveCity/scripts.pory"
	.string "SAILOR ELDRITCH'S HOUSE$"

CanalaveCity_Sign_Text_0:
# 29 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY\n"
	.string "Cargo Port$"
