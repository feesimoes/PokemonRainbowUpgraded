CianwoodCity_Gym_MapScripts::
	.byte 0


CianwoodCity_Gym_Guide::
# 5 "data/maps/CianwoodCity_Gym/scripts.pory"
	lock
# 6 "data/maps/CianwoodCity_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/CianwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_Guide_2
# 13 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Guide_Text_1
# 14 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Guide_Text_2
CianwoodCity_Gym_Guide_1:
# 16 "data/maps/CianwoodCity_Gym/scripts.pory"
	closemessage
# 17 "data/maps/CianwoodCity_Gym/scripts.pory"
	release
	end

CianwoodCity_Gym_Guide_2:
# 9 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Guide_Text_0
	goto CianwoodCity_Gym_Guide_1


CianwoodCity_Gym_Statue::
# 23 "data/maps/CianwoodCity_Gym/scripts.pory"
	lock
# 24 "data/maps/CianwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_Statue_2
# 30 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Statue_Text_1
CianwoodCity_Gym_Statue_1:
# 32 "data/maps/CianwoodCity_Gym/scripts.pory"
	closemessage
# 33 "data/maps/CianwoodCity_Gym/scripts.pory"
	release
	end

CianwoodCity_Gym_Statue_2:
# 26 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Statue_Text_0
	goto CianwoodCity_Gym_Statue_1


CianwoodCity_Gym_Leader_Chuck::
# 43 "data/maps/CianwoodCity_Gym/scripts.pory"
	lock
# 44 "data/maps/CianwoodCity_Gym/scripts.pory"
	faceplayer
# 45 "data/maps/CianwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE05_GET, CianwoodCity_Gym_Leader_Chuck_2
# 52 "data/maps/CianwoodCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, CianwoodCity_Gym_Leader_Chuck_5
# 61 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_5
# 62 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_6
CianwoodCity_Gym_Leader_Chuck_1:
# 65 "data/maps/CianwoodCity_Gym/scripts.pory"
	closemessage
# 66 "data/maps/CianwoodCity_Gym/scripts.pory"
	release
	end

CianwoodCity_Gym_Leader_Chuck_2:
# 47 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_0
# 48 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_1
	goto CianwoodCity_Gym_Leader_Chuck_1

CianwoodCity_Gym_Leader_Chuck_5:
# 54 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_2
# 55 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_3
# 56 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_4
# 57 "data/maps/CianwoodCity_Gym/scripts.pory"
	call CianwoodCity_Gym_Leader_Chuck_Battle
	goto CianwoodCity_Gym_Leader_Chuck_1


CianwoodCity_Gym_Leader_Chuck_Battle::
# 72 "data/maps/CianwoodCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_CHUCK, CianwoodCity_Gym_Leader_Chuck_Battle_Text_0, CianwoodCity_Gym_Leader_Chuck_Battle_Text_1, CianwoodCity_Gym_Chuck_PostBattle, NO_MUSIC
# 73 "data/maps/CianwoodCity_Gym/scripts.pory"
	call CianwoodCity_Gym_Chuck_PostBattle
	return


CianwoodCity_Gym_Chuck_PostBattle::
# 78 "data/maps/CianwoodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Chuck_PostBattle_Text_0
# 80 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Chuck_PostBattle_Text_1
# 81 "data/maps/CianwoodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 82 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Chuck_PostBattle_Text_2
# 83 "data/maps/CianwoodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 84 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Leader_Chuck_Text_0
# 85 "data/maps/CianwoodCity_Gym/scripts.pory"
	msgbox CianwoodCity_Gym_Chuck_PostBattle_Text_3
# 86 "data/maps/CianwoodCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE05_GET
	return


CianwoodCity_Gym_Guide_Text_0:
# 9 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "Yeah! Keep going for the win!\n"
	.string "Nice job!$"

CianwoodCity_Gym_Guide_Text_1:
# 13 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "This GYM'S a spooky one!\p"
	.string "It's the perfect place to go\n"
	.string "back outside and touch grass!$"

CianwoodCity_Gym_Guide_Text_2:
# 14 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "But, just in case, here's a tip!\n"
	.string "FIGHT-types despise FLYING AND\l"
	.string "PSYCHIC!$"

CianwoodCity_Gym_Statue_Text_0:
# 26 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "CIANWOOD CITY GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

CianwoodCity_Gym_Statue_Text_1:
# 30 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "CIANWOOD CITY GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

CianwoodCity_Gym_Leader_Chuck_Text_0:
# 47 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "You should be strong enough to\n"
	.string "go across the ocean...\p"
	.string "When you returne east and then head\n"
	.string "to north, you'll reach OLIVINE CITY.$"

CianwoodCity_Gym_Leader_Chuck_Text_1:
# 48 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "Be careful, {PLAYER}...$"

CianwoodCity_Gym_Leader_Chuck_Text_2:
# 54 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "It's good of you to have come.\n"
	.string "I'm CHUCK, CIANWOOD'S GYM LEADER.\p"
	.string "POKéMON have long been revered\n"
	.string "here, in CIANWOOD...$"

CianwoodCity_Gym_Leader_Chuck_Text_3:
# 55 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "It's said a fight will start\n"
	.string "after this match.\p"
	.string "I've always believed that tale,\n"
	.string "so I've always trained for it.$"

CianwoodCity_Gym_Leader_Chuck_Text_4:
# 56 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "As a result, I can see what others\n"
	.string "cannot... I know it is you.\p"
	.string "You're that truly powerful TRAINER\n"
	.string "from my past visions, yes...$"

CianwoodCity_Gym_Leader_Chuck_Text_5:
# 61 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "It's good of you to visit.\n"
	.string "Enjoying CIANWOOD?\p"
	.string "Here, POKéMON have long been\n"
	.string "revered... I've trained in secrecy.$"

CianwoodCity_Gym_Leader_Chuck_Text_6:
# 62 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "You want my badge? Oh! I...\n"
	.string "I don't challenge tourists, sorry...$"

CianwoodCity_Gym_Leader_Chuck_Battle_Text_0:
# 72 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "...Or, you are going to help\n"
	.string "me reach that level, {PLAYER}!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CianwoodCity_Gym_Leader_Chuck_Battle_Text_1:
# 72 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "I'm still not good enough...\n"
	.string "I see...$"

CianwoodCity_Gym_Chuck_PostBattle_Text_0:
# 79 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "I don't think our potentials are\n"
	.string "too different, but...\p"
	.string "You seem to have something more\n"
	.string "than that... So be it.$"

CianwoodCity_Gym_Chuck_PostBattle_Text_1:
# 80 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "The STORM BADGE is yours...\n"
	.string "You are certainly worthy.$"

CianwoodCity_Gym_Chuck_PostBattle_Text_2:
# 82 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "{PLAYER} received the STORM\n"
	.string "BADGE from PRYCE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

CianwoodCity_Gym_Chuck_PostBattle_Text_3:
# 85 "data/maps/CianwoodCity_Gym/scripts.pory"
	.string "You've seen the ruins of BRASS\n"
	.string "TOWER, yes?\p"
	.string "I'm sure something quite frightening's\n"
	.string "brewing there... Be cautious,\l"
	.string "{PLAYER}.$"
