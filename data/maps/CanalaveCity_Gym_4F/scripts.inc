CanalaveCity_Gym_4F_MapScripts::
	.byte 0


CanalaveCity_Gym_4F_EventScript_Byron_Battle_1::
# 5 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	trainerbattle_single TRAINER_LEADER_BYRON, CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_0, CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_1, CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_2, NO_MUSIC
# 6 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	goto_if_unset FLAG_OBTAINED_ROCK_CLIMB_KIT, CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_1
# 21 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	msgbox CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_6
# 22 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	closemessage
# 23 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	releaseall
	end

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_1:
# 8 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	msgbox CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_3
# 9 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	closemessage
# 10 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	msgbox CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_4
# 11 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	closemessage
# 12 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	setflag FLAG_OBTAINED_ROCK_CLIMB_KIT
# 13 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	giveitem ITEM_ROCK_CLIMB_KIT, 1
# 14 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	msgbox CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_5
# 15 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	closemessage
# 16 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	releaseall
	end


CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_0:
# 5 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "Ah, it isn't often that we get\n"
	.string "a visitor from KANTO...\p"
	.string "Welcome to SINNOH, young TRAINER! I\n"
	.string "spent a long time on IRON ISLAND.\p"
	.string "My speciality is... you guessed it!\n"
	.string "the sturdy STEEL-TYPE POKéMON!\p"
	.string "{PLAY_BGM MUS_ENCOUNTER_GYM_LEADER}Gwahaha!\n"
	.string "I see, I see!\p"
	.string "You aren't just a tourist!\n"
	.string "You've gained CYNTHIA'S respect!\p"
	.string "I, BYRON, accept your challenge!$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_1:
# 5 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "Hm! My sturdy POKéMON, defeated!$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_2:
# 5 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_3:
# 8 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "You were strong enough to take\n"
	.string "down my prized team of POKéMON.\p"
	.string "Even though you are from KANTO,\n"
	.string "you have earned it: the MINE BADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_4:
# 10 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "Here! Take this, too!$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_5:
# 14 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "That EXPLORER KIT will allow you to\n"
	.string "scale rocky cliffs, and dig deep\l"
	.string "underground.\p"
	.string "Be sure to put it to good use!$"

CanalaveCity_Gym_4F_EventScript_Byron_Battle_1_Text_6:
# 21 "data/maps/CanalaveCity_Gym_4F/scripts.pory"
	.string "This SINNOH region is vast!\n"
	.string "Now, why don't you head east?\p"
	.string "Past JUBILIFE CITY is OREBURGH CITY.\n"
	.string "There, you will find my son, ROARK.\p"
	.string "He's a bit new to this GYM thing,\n"
	.string "but I'll let him know you're coming!$"
