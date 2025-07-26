CanalaveCity_Gym_1F_MapScripts::
	.byte 0


CanalaveCity_Gym_1F_Statue::
# 5 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROCK_CLIMB_KIT, CanalaveCity_Gym_1F_Statue_1
# 13 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Statue_Text_1
# 14 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end

CanalaveCity_Gym_1F_Statue_1:
# 7 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Statue_Text_0
# 8 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end


CanalaveCity_Gym_1F_Gym_Tip_Guy::
# 21 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	applymovement LOCALID_CANALAVE_GYM_GUY, Movement_CanalaveCity_Gym_1F_Gym_Tip_Guy_Face_Player
# 22 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROCK_CLIMB_KIT, CanalaveCity_Gym_1F_Gym_Tip_Guy_1
# 30 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_1
# 31 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end

CanalaveCity_Gym_1F_Gym_Tip_Guy_1:
# 24 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_0
# 25 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end


# 36 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
Movement_CanalaveCity_Gym_1F_Gym_Tip_Guy_Face_Player:
# 37 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	face_player
# 38 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	step_end

CanalaveCity_Gym_1F_Statue_Text_0:
# 7 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "CANALAVE CITY GYM\n"
	.string "LEADER: BYRON\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CanalaveCity_Gym_1F_Statue_Text_1:
# 13 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "CANALAVE CITY GYM\n"
	.string "LEADER: BYRON\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_0:
# 24 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Phew! That was an intense battle!\n"
	.string "I knew you could do it!$"

CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_1:
# 30 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "BYRON uses STEEL type POKéMON!\p"
	.string "Originally discovered in JOHTO, you'd\n"
	.string "better use FIRE, FIGHTING, or\l"
	.string "GROUND-types!$"
