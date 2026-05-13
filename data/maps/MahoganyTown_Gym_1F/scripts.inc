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


MahoganyCity_Gym_Leader_Pryce::
# 43 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	lock
# 44 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	faceplayer
# 45 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE07_GET, MahoganyCity_Gym_Leader_Pryce_2
# 52 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, MahoganyCity_Gym_Leader_Pryce_5
# 61 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_5
# 62 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_6
MahoganyCity_Gym_Leader_Pryce_1:
# 65 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	closemessage
# 66 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	release
	end

MahoganyCity_Gym_Leader_Pryce_2:
# 47 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_0
# 48 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_1
	goto MahoganyCity_Gym_Leader_Pryce_1

MahoganyCity_Gym_Leader_Pryce_5:
# 54 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_2
# 55 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_3
# 56 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_4
# 57 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	call MahoganyCity_Gym_Leader_Pryce_Battle
	goto MahoganyCity_Gym_Leader_Pryce_1


MahoganyCity_Gym_Leader_Pryce_Battle::
# 72 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	trainerbattle_single TRAINER_LEADER_PRYCE, MahoganyCity_Gym_Leader_Pryce_Battle_Text_0, MahoganyCity_Gym_Leader_Pryce_Battle_Text_1, MahoganyCity_Gym_Pryce_PostBattle, NO_MUSIC
# 73 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	call MahoganyCity_Gym_Pryce_PostBattle
	return


MahoganyCity_Gym_Pryce_PostBattle::
# 78 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 79 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Pryce_PostBattle_Text_0
# 80 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Pryce_PostBattle_Text_1
# 81 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 82 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Pryce_PostBattle_Text_2
# 83 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 84 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Leader_Pryce_Text_0
# 85 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	msgbox MahoganyCity_Gym_Pryce_PostBattle_Text_3
# 86 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	setflag FLAG_JOHTO_BADGE07_GET
	return


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

MahoganyCity_Gym_Leader_Pryce_Text_0:
# 47 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "You should be strong enough to\n"
	.string "go across the cave...\p"
	.string "When you go east and then head\n"
	.string "south, you'll reach BLACKTHORN CITY.$"

MahoganyCity_Gym_Leader_Pryce_Text_1:
# 48 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "Be careful, {PLAYER}...$"

MahoganyCity_Gym_Leader_Pryce_Text_2:
# 54 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "It's good of you to have come.\n"
	.string "I'm PRYCE, MAHOGANY'S GYM LEADER.\p"
	.string "POKéMON have long been revered\n"
	.string "here, in MAHOGANY...$"

MahoganyCity_Gym_Leader_Pryce_Text_3:
# 55 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "It's said a iceberg will break\n"
	.string "after this match.\p"
	.string "I've always believed that tale,\n"
	.string "so I've always trained for it.$"

MahoganyCity_Gym_Leader_Pryce_Text_4:
# 56 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "As a result, I can see what others\n"
	.string "cannot... I know it is you.\p"
	.string "You're that truly powerful TRAINER\n"
	.string "from my past visions, yes...$"

MahoganyCity_Gym_Leader_Pryce_Text_5:
# 61 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "It's good of you to visit.\n"
	.string "Enjoying MAHOGANY?\p"
	.string "Here, POKéMON have long been\n"
	.string "revered... I've trained in secrecy.$"

MahoganyCity_Gym_Leader_Pryce_Text_6:
# 62 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "You want my badge? Oh! I...\n"
	.string "I don't challenge tourists, sorry...$"

MahoganyCity_Gym_Leader_Pryce_Battle_Text_0:
# 72 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "...Or, you are going to help\n"
	.string "me reach that level, {PLAYER}!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

MahoganyCity_Gym_Leader_Pryce_Battle_Text_1:
# 72 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "I'm still not good enough...\n"
	.string "I see...$"

MahoganyCity_Gym_Pryce_PostBattle_Text_0:
# 79 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "I don't think our potentials are\n"
	.string "too different, but...\p"
	.string "You seem to have something more\n"
	.string "than that... So be it.$"

MahoganyCity_Gym_Pryce_PostBattle_Text_1:
# 80 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "The GLACIER BADGE is yours...\n"
	.string "You are certainly worthy.$"

MahoganyCity_Gym_Pryce_PostBattle_Text_2:
# 82 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "{PLAYER} received the GLACIER\n"
	.string "BADGE from PRYCE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

MahoganyCity_Gym_Pryce_PostBattle_Text_3:
# 85 "data/maps/MahoganyTown_Gym_1F/scripts.pory"
	.string "You've seen the ruins of BRASS\n"
	.string "TOWER, yes?\p"
	.string "I'm sure something quite frightening's\n"
	.string "brewing there... Be cautious,\l"
	.string "{PLAYER}.$"
