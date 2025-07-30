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
	lock
# 22 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	applymovement LOCALID_CANALAVE_GYM_GUY, Movement_CanalaveCity_Gym_1F_Gym_Tip_Guy_Face_Player
# 23 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	goto_if_set FLAG_OBTAINED_ROCK_CLIMB_KIT, CanalaveCity_Gym_1F_Gym_Tip_Guy_1
# 31 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_1
# 32 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end

CanalaveCity_Gym_1F_Gym_Tip_Guy_1:
# 25 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_0
# 26 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end


# 37 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
Movement_CanalaveCity_Gym_1F_Gym_Tip_Guy_Face_Player:
# 39 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	face_player
# 40 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	step_end

CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle::
# 45 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_BLACK_BELT_RICKY, CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_0, CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_1
# 46 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_2
# 47 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end


CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle::
# 53 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BREANNA, CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_0, CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_1
# 54 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	msgbox CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_2
# 55 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	release
	end


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
# 25 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Phew! That was an intense battle!\n"
	.string "I knew you could do it!$"

CanalaveCity_Gym_1F_Gym_Tip_Guy_Text_1:
# 31 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "BYRON uses STEEL type POKéMON!\p"
	.string "Originally discovered in JOHTO, you'd\n"
	.string "better use FIRE, FIGHTING, or\l"
	.string "GROUND-types!$"

CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_0:
# 45 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Huah! Welcome to SINNOH!\n"
	.string "But I have bad news...\p"
	.string "You entered my line of sight!\n"
	.string "I'll be sending you back!$"

CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_1:
# 45 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "I kept going and crashed!\n"
	.string "You're something, kid!$"

CanalaveCity_Gym_1F_BlackBelt_Ricky_Battle_Text_2:
# 46 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "Alright, I underestimated you...\n"
	.string "Welcome to SINNOH!$"

CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_0:
# 53 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "What's a KANTONIAN doing here,\n"
	.string "wandering around these halls?$"

CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_1:
# 53 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "I thought you were lost...$"

CanalaveCity_Gym_1F_CoolTrainer_Breanna_Battle_Text_2:
# 54 "data/maps/CanalaveCity_Gym_1F/scripts.pory"
	.string "BYRON won't go easy on you!$"
