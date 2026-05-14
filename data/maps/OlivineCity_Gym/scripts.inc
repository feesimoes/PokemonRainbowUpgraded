OlivineCity_Gym_MapScripts::
	.byte 0


OlivineCity_Gym_Guide::
# 5 "data/maps/OlivineCity_Gym/scripts.pory"
	lock
# 6 "data/maps/OlivineCity_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/OlivineCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_Guide_2
# 13 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Guide_Text_1
# 14 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Guide_Text_2
OlivineCity_Gym_Guide_1:
# 16 "data/maps/OlivineCity_Gym/scripts.pory"
	closemessage
# 17 "data/maps/OlivineCity_Gym/scripts.pory"
	release
	end

OlivineCity_Gym_Guide_2:
# 9 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Guide_Text_0
	goto OlivineCity_Gym_Guide_1


OlivineCity_Gym_Statue::
# 23 "data/maps/OlivineCity_Gym/scripts.pory"
	lock
# 24 "data/maps/OlivineCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_Statue_2
# 30 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Statue_Text_1
OlivineCity_Gym_Statue_1:
# 32 "data/maps/OlivineCity_Gym/scripts.pory"
	closemessage
# 33 "data/maps/OlivineCity_Gym/scripts.pory"
	release
	end

OlivineCity_Gym_Statue_2:
# 26 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Statue_Text_0
	goto OlivineCity_Gym_Statue_1


OlivineCity_Gym_Leader_Olivia::
# 43 "data/maps/OlivineCity_Gym/scripts.pory"
	lock
# 44 "data/maps/OlivineCity_Gym/scripts.pory"
	faceplayer
# 45 "data/maps/OlivineCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE06_GET, OlivineCity_Gym_Leader_Olivia_2
# 52 "data/maps/OlivineCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, OlivineCity_Gym_Leader_Olivia_5
# 61 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_5
# 62 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_6
OlivineCity_Gym_Leader_Olivia_1:
# 65 "data/maps/OlivineCity_Gym/scripts.pory"
	closemessage
# 66 "data/maps/OlivineCity_Gym/scripts.pory"
	release
	end

OlivineCity_Gym_Leader_Olivia_2:
# 47 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_0
# 48 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_1
	goto OlivineCity_Gym_Leader_Olivia_1

OlivineCity_Gym_Leader_Olivia_5:
# 54 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_2
# 55 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_3
# 56 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_4
# 57 "data/maps/OlivineCity_Gym/scripts.pory"
	call OlivineCity_Gym_Leader_Olivia_Battle
	goto OlivineCity_Gym_Leader_Olivia_1


OlivineCity_Gym_Leader_Olivia_Battle::
# 72 "data/maps/OlivineCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_OLIVIA, OlivineCity_Gym_Leader_Olivia_Battle_Text_0, OlivineCity_Gym_Leader_Olivia_Battle_Text_1, OlivineCity_Gym_Olivia_PostBattle, NO_MUSIC
# 73 "data/maps/OlivineCity_Gym/scripts.pory"
	call OlivineCity_Gym_Olivia_PostBattle
	return


OlivineCity_Gym_Olivia_PostBattle::
# 78 "data/maps/OlivineCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Olivia_PostBattle_Text_0
# 80 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Olivia_PostBattle_Text_1
# 81 "data/maps/OlivineCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 82 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Olivia_PostBattle_Text_2
# 83 "data/maps/OlivineCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 84 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Leader_Olivia_Text_0
# 85 "data/maps/OlivineCity_Gym/scripts.pory"
	msgbox OlivineCity_Gym_Olivia_PostBattle_Text_3
# 86 "data/maps/OlivineCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE06_GET
	return


OlivineCity_Gym_Guide_Text_0:
# 9 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "Yeah! Keep going for the win!\n"
	.string "Nice job!$"

OlivineCity_Gym_Guide_Text_1:
# 13 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "This GYM'S a spooky one!\p"
	.string "It's the perfect place to go\n"
	.string "back outside and touch grass!$"

OlivineCity_Gym_Guide_Text_2:
# 14 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "But, just in case, here's a tip!\n"
	.string "STEEL-types despise FIGHT, FIRE AND\l"
	.string "GROUND!$"

OlivineCity_Gym_Statue_Text_0:
# 26 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "OLIVINE CITY GYM\n"
	.string "LEADER: OLIVIA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

OlivineCity_Gym_Statue_Text_1:
# 30 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "OLIVINE CITY GYM\n"
	.string "LEADER: OLIVIA\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

OlivineCity_Gym_Leader_Olivia_Text_0:
# 47 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "You should be strong enough to\n"
	.string "go across the cave...\p"
	.string "When you go east and then head\n"
	.string "the sea, you'll reach MAHOGANY CITY.$"

OlivineCity_Gym_Leader_Olivia_Text_1:
# 48 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "Be careful, {PLAYER}...$"

OlivineCity_Gym_Leader_Olivia_Text_2:
# 54 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "It's good of you to have come.\n"
	.string "I'm OLIVIA, OLIVINE'S GYM LEADER.\p"
	.string "POKéMON have long been revered\n"
	.string "here, in OLIVINE...$"

OlivineCity_Gym_Leader_Olivia_Text_3:
# 55 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "It's said a gold bar will break\n"
	.string "after this match.\p"
	.string "I've always believed that tale,\n"
	.string "so I've always trained for it.$"

OlivineCity_Gym_Leader_Olivia_Text_4:
# 56 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "As a result, I can see what others\n"
	.string "cannot... I know it is you.\p"
	.string "You're that truly powerful TRAINER\n"
	.string "from my past visions, yes...$"

OlivineCity_Gym_Leader_Olivia_Text_5:
# 61 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "It's good of you to visit.\n"
	.string "Enjoying OLIVINE?\p"
	.string "Here, POKéMON have long been\n"
	.string "revered... I've trained in secrecy.$"

OlivineCity_Gym_Leader_Olivia_Text_6:
# 62 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "You want my badge? Oh! I...\n"
	.string "I don't challenge tourists, sorry...$"

OlivineCity_Gym_Leader_Olivia_Battle_Text_0:
# 72 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "...Or, you are going to help\n"
	.string "me reach that level, {PLAYER}!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

OlivineCity_Gym_Leader_Olivia_Battle_Text_1:
# 72 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "I'm still not good enough...\n"
	.string "I see...$"

OlivineCity_Gym_Olivia_PostBattle_Text_0:
# 79 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "I don't think our potentials are\n"
	.string "too different, but...\p"
	.string "You seem to have something more\n"
	.string "than that... So be it.$"

OlivineCity_Gym_Olivia_PostBattle_Text_1:
# 80 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "The MINERAL BADGE is yours...\n"
	.string "You are certainly worthy.$"

OlivineCity_Gym_Olivia_PostBattle_Text_2:
# 82 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "{PLAYER} received the MINEAL\n"
	.string "BADGE from PRYCE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

OlivineCity_Gym_Olivia_PostBattle_Text_3:
# 85 "data/maps/OlivineCity_Gym/scripts.pory"
	.string "You've seen the ruins of BRASS\n"
	.string "TOWER, yes?\p"
	.string "I'm sure something quite frightening's\n"
	.string "brewing there... Be cautious,\l"
	.string "{PLAYER}.$"
