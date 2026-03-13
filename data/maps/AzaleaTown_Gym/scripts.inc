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


AzaleaTown_Gym_Kurt_Intro_Battle::
# 38 "data/maps/AzaleaTown_Gym/scripts.pory"
	lock
# 39 "data/maps/AzaleaTown_Gym/scripts.pory"
	faceplayer
# 40 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE02_GET, AzaleaTown_Gym_Kurt_Intro_Battle_2
# 48 "data/maps/AzaleaTown_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, AzaleaTown_Gym_Kurt_Intro_Battle_5
# 56 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_5
AzaleaTown_Gym_Kurt_Intro_Battle_1:
# 59 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 60 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end

AzaleaTown_Gym_Kurt_Intro_Battle_2:
# 42 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_0
# 43 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_1
# 44 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_2
	goto AzaleaTown_Gym_Kurt_Intro_Battle_1

AzaleaTown_Gym_Kurt_Intro_Battle_5:
# 50 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_3
# 51 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_Intro_Battle_Text_4
# 52 "data/maps/AzaleaTown_Gym/scripts.pory"
	call AzaleaTown_Gym_Kurt_Battle
	goto AzaleaTown_Gym_Kurt_Intro_Battle_1


AzaleaTown_Gym_Kurt_Battle::
# 66 "data/maps/AzaleaTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_KURT, AzaleaTown_Gym_Kurt_Battle_Text_0, AzaleaTown_Gym_Kurt_Battle_Text_1, AzaleaTown_Gym_Kurt_PostBattle, NO_MUSIC
	return


AzaleaTown_Gym_Kurt_PostBattle::
# 71 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 72 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_0
# 73 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_1
# 74 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 75 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_2
# 76 "data/maps/AzaleaTown_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 77 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Kurt_PostBattle_Text_3
# 78 "data/maps/AzaleaTown_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE02_GET
	return


AzaleaTown_Gym_Trainer_Battle_1::
# 83 "data/maps/AzaleaTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BATTLE_GIRL_AMY, AzaleaTown_Gym_Trainer_Battle_1_Text_0, AzaleaTown_Gym_Trainer_Battle_1_Text_1
# 84 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Trainer_Battle_1_Text_2
# 85 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 86 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end


AzaleaTown_Gym_Trainer_Battle_2::
# 92 "data/maps/AzaleaTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_YOUNGSTER_AL, AzaleaTown_Gym_Trainer_Battle_2_Text_0, AzaleaTown_Gym_Trainer_Battle_2_Text_1
# 93 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Trainer_Battle_2_Text_2
# 94 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 95 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end


AzaleaTown_Gym_Trainer_Battle_3::
# 101 "data/maps/AzaleaTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_JOSH, AzaleaTown_Gym_Trainer_Battle_3_Text_0, AzaleaTown_Gym_Trainer_Battle_3_Text_1
# 102 "data/maps/AzaleaTown_Gym/scripts.pory"
	msgbox AzaleaTown_Gym_Trainer_Battle_3_Text_2
# 103 "data/maps/AzaleaTown_Gym/scripts.pory"
	closemessage
# 104 "data/maps/AzaleaTown_Gym/scripts.pory"
	release
	end


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

AzaleaTown_Gym_Kurt_Intro_Battle_Text_0:
# 42 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Hello, {PLAYER}... Ancient traditions,\n"
	.string "historical landmarks, yes...\p"
	.string "There is a lot to learn in\n"
	.string "JOHTO, you see...$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_1:
# 43 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "For example, did you know this?\n"
	.string "First, POKé BALLS were handmade!\p"
	.string "I'd like to give it a\n"
	.string "go at improving my craft...$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_2:
# 44 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Unfortunately, I'm just been so busy,\n"
	.string "caught up with duties...\p"
	.string "Please visit me again after seeing\n"
	.string "all JOHTO has to offer.$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_3:
# 50 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Hm! You there!\n"
	.string "You are no ordinary challenger.\p"
	.string "I'll tell you that much, kid!\n"
	.string "I've been GYM LEADER here, since...$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_4:
# 51 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Well, to be honest, way before\n"
	.string "you were even born!\p"
	.string "But there's something about you, yes!\n"
	.string "You've got commendable strength!$"

AzaleaTown_Gym_Kurt_Intro_Battle_Text_5:
# 56 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Hm...?\n"
	.string "You can't battle me yet.\p"
	.string "You'll need LEAGUE'S permission.\n"
	.string "Please, return another time.$"

AzaleaTown_Gym_Kurt_Battle_Text_0:
# 66 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "KANTO is just the 'KIDDIE LEAGUES'!\n"
	.string "You're going to lose, right here!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

AzaleaTown_Gym_Kurt_Battle_Text_1:
# 66 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "...Just as I thought!\n"
	.string "An impressive display, truly.$"

AzaleaTown_Gym_Kurt_PostBattle_Text_0:
# 72 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Ah, yes... KANTO shares its LEAGUE\n"
	.string "with us... I know.\p"
	.string "I do trust you will use\n"
	.string "good judgement, yes?$"

AzaleaTown_Gym_Kurt_PostBattle_Text_1:
# 73 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Basically, do not go sharing that I\n"
	.string "said they run 'KIDDIE' LEAGUES.\p"
	.string "Ah yes, I'm getting old... Here!\n"
	.string "You deserve this...$"

AzaleaTown_Gym_Kurt_PostBattle_Text_2:
# 75 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "{PLAYER} received the HIVE\n"
	.string "BADGE from KURT!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

AzaleaTown_Gym_Kurt_PostBattle_Text_3:
# 77 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Take care now, yes, {PLAYER}?\n"
	.string "You will go far, very far...$"

AzaleaTown_Gym_Trainer_Battle_1_Text_0:
# 83 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Hey, you there!\n"
	.string "Stop right there! Hey!\p"
	.string "Sorry, we need to battle! The rules\n"
	.string "apply here too, kid! Taste dirt!$"

AzaleaTown_Gym_Trainer_Battle_1_Text_1:
# 83 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Oh, for Pete's sake...\n"
	.string "I'll go touch grass!$"

AzaleaTown_Gym_Trainer_Battle_1_Text_2:
# 84 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "This GYM is really my only\n"
	.string "experience of our natural WORLD...$"

AzaleaTown_Gym_Trainer_Battle_2_Text_0:
# 92 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Excuse me!\n"
	.string "Where are your shorts?\p"
	.string "You can't just wander around,\n"
	.string "dressed like that!$"

AzaleaTown_Gym_Trainer_Battle_2_Text_1:
# 92 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "You really have no sense\n"
	.string "of a comforting style!$"

AzaleaTown_Gym_Trainer_Battle_2_Text_2:
# 93 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "KURT inspired me to wear shorts\n"
	.string "all year round.\p"
	.string "All the YOUNGSTERS look up\n"
	.string "to him, really...$"

AzaleaTown_Gym_Trainer_Battle_3_Text_0:
# 101 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Oh? Hi!\n"
	.string "You could have gone around...\p"
	.string "But, uh, the fact you came\n"
	.string "directly at me says a lot...\p"
	.string "Hmm, uh...\n"
	.string "Why are you obsessed with me?$"

AzaleaTown_Gym_Trainer_Battle_3_Text_1:
# 101 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "Weird! I know I have an\n"
	.string "obsession with bugs, but...$"

AzaleaTown_Gym_Trainer_Battle_3_Text_2:
# 102 "data/maps/AzaleaTown_Gym/scripts.pory"
	.string "What's your deal?\n"
	.string "Are you in love with me?\p"
	.string "Just grab your BADGE already!\n"
	.string "You're creeping me out, kid!$"
