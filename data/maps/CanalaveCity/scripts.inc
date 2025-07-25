CanalaveCity_MapScripts::
	.byte 0


CanalaveCity_GiveRockClimbKit::
# 5 "data/maps/CanalaveCity/scripts.pory"
	lock
# 6 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_GiveRockClimbKit_Text_0
# 7 "data/maps/CanalaveCity/scripts.pory"
	setflag FLAG_OBTAINED_ROCK_CLIMB_KIT
# 8 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Gym_Sign::
# 13 "data/maps/CanalaveCity/scripts.pory"
	lock
# 14 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Gym_Sign_Text_0
# 15 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_SailorEldritchHouse_Sign::
# 20 "data/maps/CanalaveCity/scripts.pory"
	lock
# 21 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_SailorEldritchHouse_Sign_Text_0
# 22 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Sign::
# 27 "data/maps/CanalaveCity/scripts.pory"
	lock
# 28 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Sign_Text_0
# 29 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_GiveRockClimbKit_Text_0:
# 6 "data/maps/CanalaveCity/scripts.pory"
	.string "That's BYRON'S badge!\n"
	.string "Not bad for a KANTONIAN!\p"
	.string "Here, take this!$"

CanalaveCity_Gym_Sign_Text_0:
# 14 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY GYM\n"
	.string "LEADER: BYRON\p"
	.string "The Man with the STEEL Body!$"

CanalaveCity_SailorEldritchHouse_Sign_Text_0:
# 21 "data/maps/CanalaveCity/scripts.pory"
	.string "SAILOR ELDRITCH'S HOUSE$"

CanalaveCity_Sign_Text_0:
# 28 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY\n"
	.string "Cargo Port$"
