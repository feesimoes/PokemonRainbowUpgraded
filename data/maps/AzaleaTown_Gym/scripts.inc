AzaleaTown_Gym_MapScripts::
	.byte 0


AzaleaTown_Gym_Guide::
# 5 "data/maps/AzaleaTown_Gym/scripts.pory"
	lock
# 6 "data/maps/AzaleaTown_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_Guide_2
# 13 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Guide_Text_1
AzaleaTown_Gym_Guide_1:
# 15 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 16 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end

AzaleaTown_Gym_Guide_2:
# 9 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Guide_Text_0
	goto AzaleaTown_Gym_Guide_1


AzaleaTown_Gym_Statue::
# 22 "data/maps/AzaleaTown_Gym/scripts.pory"
	lock
# 23 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_Statue_2
# 29 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Statue_Text_1
AzaleaTown_Gym_Statue_1:
# 31 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 32 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end

AzaleaTown_Gym_Statue_2:
# 25 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Statue_Text_0
	goto AzaleaTown_Gym_Statue_1


AzaleaTown_Gym_Trainer_1::
# 38 "data/maps/AzaleaTown_Gym/scripts.pory"
	lock
# 39 "data/maps/AzaleaTown_Gym/scripts.pory"
	faceplayer
# 40 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Trainer_1_Text_0
# 41 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 42 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end


AzaleaTown_Gym_Kurt_Intro_Battle::
# 48 "data/maps/AzaleaTown_Gym/scripts.pory"
	lock
# 49 "data/maps/AzaleaTown_Gym/scripts.pory"
	faceplayer
# 50 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_Kurt_Intro_Battle_2
# 56 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, AzaleaTown_Gym_Kurt_Intro_Battle_5
# 63 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_2
AzaleaTown_Gym_Kurt_Intro_Battle_1:
# 66 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 67 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end

AzaleaTown_Gym_Kurt_Intro_Battle_2:
# 52 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_0
	goto AzaleaTown_Gym_Kurt_Intro_Battle_1

AzaleaTown_Gym_Kurt_Intro_Battle_5:
# 58 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_1
# 59 "data/maps/AzaleaTown_Gym/scripts.pory"
	call AzaleaTown_Gym_Kurt_Battle
	goto AzaleaTown_Gym_Kurt_Intro_Battle_1


AzaleaTown_Gym_Kurt_Battle::
# 73 "data/maps/AzaleaTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KURT, AzaleaTown_Gym_Kurt_Battle_Text_0, AzaleaTown_Gym_Kurt_Battle_Text_1, AzaleaTown_Gym_Kurt_PostBattle, NO_MUSIC
	return


AzaleaTown_Gym_Kurt_PostBattle::
# 78 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_0
# 80 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 81 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_1
# 82 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 83 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_2
# 84 "data/maps/AzaleaTown_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE02_GET
	return


AzaleaTown_Gym_Guide_Text_0:
# 9 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Yeah! Keep going for the win!\n"
	.string "Nice job!$"

AzaleaTown_Gym_Guide_Text_1:
# 13 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "This GYM'S a sprawling grass maze!\p"
	.string "It's the perfect place to go\n"
	.string "wild on FIRE or FLYING moves!$"

AzaleaTown_Gym_Statue_Text_0:
# 25 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "AZALEA TOWN GYM\n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

AzaleaTown_Gym_Statue_Text_1:
# 29 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "AZALEA TOWN GYM\n"
	.string "LEADER: KURT\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

AzaleaTown_Gym_Trainer_1_Text_0:
# 40 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_0:
# 52 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "I'm getting too old for this.$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_1:
# 58 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Battle me.$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_2:
# 63 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Can't battle me yet.$"

AzaleaTown_Gym_Kurt_Battle_Text_0:
# 73 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "You're going to lose.{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

AzaleaTown_Gym_Kurt_Battle_Text_1:
# 73 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Wow.$"

AzaleaTown_Gym_Kurt_PostBattle_Text_0:
# 79 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Okay...\n"
	.string "Take this.$"

AzaleaTown_Gym_Kurt_PostBattle_Text_1:
# 81 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "{PLAYER} received the HIVE\n"
	.string "BADGE from KURT!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

AzaleaTown_Gym_Kurt_PostBattle_Text_2:
# 83 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Bye, kid.$"
