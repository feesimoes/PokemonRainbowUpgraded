EcruteakCity_Gym_MapScripts::
	.byte 0


EcruteakCity_Gym_Guide::
# 5 "data/maps/EcruteakCity_Gym/scripts.pory"
	lock
# 6 "data/maps/EcruteakCity_Gym/scripts.pory"
	faceplayer
# 7 "data/maps/EcruteakCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_Guide_2
# 13 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Guide_Text_1
# 14 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Guide_Text_2
EcruteakCity_Gym_Guide_1:
# 16 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 17 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end

EcruteakCity_Gym_Guide_2:
# 9 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Guide_Text_0
	goto EcruteakCity_Gym_Guide_1


EcruteakCity_Gym_Statue::
# 23 "data/maps/EcruteakCity_Gym/scripts.pory"
	lock
# 24 "data/maps/EcruteakCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_Statue_2
# 30 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Statue_Text_1
EcruteakCity_Gym_Statue_1:
# 32 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 33 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end

EcruteakCity_Gym_Statue_2:
# 26 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Statue_Text_0
	goto EcruteakCity_Gym_Statue_1


EcruteakCity_Gym_Channeler_Georgina::
# 39 "data/maps/EcruteakCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_GEORGINA, EcruteakCity_Gym_Channeler_Georgina_Text_0, EcruteakCity_Gym_Channeler_Georgina_Text_1
# 40 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Channeler_Georgina_Text_2
# 41 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 42 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end


EcruteakCity_Gym_Channeler_Grace::
# 48 "data/maps/EcruteakCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_GRACE, EcruteakCity_Gym_Channeler_Grace_Text_0, EcruteakCity_Gym_Channeler_Grace_Text_1
# 49 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Channeler_Grace_Text_2
# 50 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 51 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end


EcruteakCity_Gym_Channeler_Edith::
# 57 "data/maps/EcruteakCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_EDITH, EcruteakCity_Gym_Channeler_Edith_Text_0, EcruteakCity_Gym_Channeler_Edith_Text_1
# 58 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Channeler_Edith_Text_2
# 59 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 60 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end


EcruteakCity_Gym_Channeler_Martha::
# 66 "data/maps/EcruteakCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_CHANNELER_MARTHA, EcruteakCity_Gym_Channeler_Martha_Text_0, EcruteakCity_Gym_Channeler_Martha_Text_1
# 67 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Channeler_Martha_Text_2
# 68 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 69 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end


EcruteakCity_Gym_Leader_Morty::
# 75 "data/maps/EcruteakCity_Gym/scripts.pory"
	lock
# 76 "data/maps/EcruteakCity_Gym/scripts.pory"
	faceplayer
# 77 "data/maps/EcruteakCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE04_GET, EcruteakCity_Gym_Leader_Morty_2
# 84 "data/maps/EcruteakCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, EcruteakCity_Gym_Leader_Morty_5
# 93 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_5
# 94 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_6
EcruteakCity_Gym_Leader_Morty_1:
# 97 "data/maps/EcruteakCity_Gym/scripts.pory"
	closemessage
# 98 "data/maps/EcruteakCity_Gym/scripts.pory"
	release
	end

EcruteakCity_Gym_Leader_Morty_2:
# 79 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_0
# 80 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_1
	goto EcruteakCity_Gym_Leader_Morty_1

EcruteakCity_Gym_Leader_Morty_5:
# 86 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_2
# 87 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_3
# 88 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_4
# 89 "data/maps/EcruteakCity_Gym/scripts.pory"
	call EcruteakCity_Gym_Leader_Morty_Battle
	goto EcruteakCity_Gym_Leader_Morty_1


EcruteakCity_Gym_Leader_Morty_Battle::
# 104 "data/maps/EcruteakCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MORTY, EcruteakCity_Gym_Leader_Morty_Battle_Text_0, EcruteakCity_Gym_Leader_Morty_Battle_Text_1, EcruteakCity_Gym_Morty_PostBattle, NO_MUSIC
# 105 "data/maps/EcruteakCity_Gym/scripts.pory"
	call EcruteakCity_Gym_Morty_PostBattle
	return


EcruteakCity_Gym_Morty_PostBattle::
# 110 "data/maps/EcruteakCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 111 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Morty_PostBattle_Text_0
# 112 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Morty_PostBattle_Text_1
# 113 "data/maps/EcruteakCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 114 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Morty_PostBattle_Text_2
# 115 "data/maps/EcruteakCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 116 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Leader_Morty_Text_0
# 117 "data/maps/EcruteakCity_Gym/scripts.pory"
	msgbox EcruteakCity_Gym_Morty_PostBattle_Text_3
# 118 "data/maps/EcruteakCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE04_GET
	return


EcruteakCity_Gym_Guide_Text_0:
# 9 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Yeah! Keep going for the win!\n"
	.string "Nice job!$"

EcruteakCity_Gym_Guide_Text_1:
# 13 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "This GYM'S a spooky one!\p"
	.string "It's the perfect place to go\n"
	.string "back outside and touch grass!$"

EcruteakCity_Gym_Guide_Text_2:
# 14 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "But, just in case, here's a tip!\n"
	.string "GHOST-types ironically despise DARK!$"

EcruteakCity_Gym_Statue_Text_0:
# 26 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "ECRUTEAK CITY GYM\n"
	.string "LEADER: MORTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

EcruteakCity_Gym_Statue_Text_1:
# 30 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "ECRUTEAK CITY GYM\n"
	.string "LEADER: MORTY\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

EcruteakCity_Gym_Channeler_Georgina_Text_0:
# 39 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I saw your past!\n"
	.string "It's time to ward you off!$"

EcruteakCity_Gym_Channeler_Georgina_Text_1:
# 39 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Tch... I was unsuccessful!$"

EcruteakCity_Gym_Channeler_Georgina_Text_2:
# 40 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "There's definitely a challenger's\n"
	.string "spirit in you... You'll go far.$"

EcruteakCity_Gym_Channeler_Grace_Text_0:
# 48 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Waah!\n"
	.string "Don't scare me like that...\p"
	.string "Wait... No, that's not right.\n"
	.string "I'm supposed to scare you!$"

EcruteakCity_Gym_Channeler_Grace_Text_1:
# 48 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "MORTY sees all, and knows all.$"

EcruteakCity_Gym_Channeler_Grace_Text_2:
# 49 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Doesn't this place look familiar?\n"
	.string "Kekeke... {PLAYER}...$"

EcruteakCity_Gym_Channeler_Edith_Text_0:
# 57 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I need to channel my inner\n"
	.string "CHANNELER spirits...$"

EcruteakCity_Gym_Channeler_Edith_Text_1:
# 57 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I'm not good at this!$"

EcruteakCity_Gym_Channeler_Edith_Text_2:
# 58 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "My morale is at an all-time\n"
	.string "low... But, you are strong.$"

EcruteakCity_Gym_Channeler_Martha_Text_0:
# 66 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Although it may not look like\n"
	.string "it, I'm a STEWARDESS, back in UNOVA.$"

EcruteakCity_Gym_Channeler_Martha_Text_1:
# 66 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Oh no... Am I cooked?!$"

EcruteakCity_Gym_Channeler_Martha_Text_2:
# 67 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I come from a long line of\n"
	.string "STEWARDS... It runs in the family.$"

EcruteakCity_Gym_Leader_Morty_Text_0:
# 79 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "You should be strong enough to\n"
	.string "go across the sea...\p"
	.string "When you go west and then head\n"
	.string "south, you'll reach OLIVINE CITY.$"

EcruteakCity_Gym_Leader_Morty_Text_1:
# 80 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "Be careful, {PLAYER}...$"

EcruteakCity_Gym_Leader_Morty_Text_2:
# 86 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "It's good of you to have come.\n"
	.string "I'm MORTY, ECRUTEAK'S GYM LEADER.\p"
	.string "POKéMON have long been revered\n"
	.string "here, in ECRUTEAK...$"

EcruteakCity_Gym_Leader_Morty_Text_3:
# 87 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "It's said a rainbow POKéMON will\n"
	.string "appear before a powerful TRAINER.\p"
	.string "I've always believed that tale,\n"
	.string "so I've always trained here.$"

EcruteakCity_Gym_Leader_Morty_Text_4:
# 88 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "As a result, I can see what others\n"
	.string "cannot... I know it is you.\p"
	.string "You're that truly powerful TRAINER\n"
	.string "from my past visions, yes...$"

EcruteakCity_Gym_Leader_Morty_Text_5:
# 93 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "It's good of you to visit.\n"
	.string "Enjoying ECRUTEAK?\p"
	.string "Here, POKéMON have long been\n"
	.string "revered... I've trained in secrecy.$"

EcruteakCity_Gym_Leader_Morty_Text_6:
# 94 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "You want my badge? Oh! I...\n"
	.string "I don't challenge tourists, sorry...$"

EcruteakCity_Gym_Leader_Morty_Battle_Text_0:
# 104 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "...Or, you are going to help\n"
	.string "me reach that level, {PLAYER}!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

EcruteakCity_Gym_Leader_Morty_Battle_Text_1:
# 104 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I'm still not good enough...\n"
	.string "I see...$"

EcruteakCity_Gym_Morty_PostBattle_Text_0:
# 111 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "I don't think our potentials are\n"
	.string "too different, but...\p"
	.string "You seem to have something more\n"
	.string "than that... So be it.$"

EcruteakCity_Gym_Morty_PostBattle_Text_1:
# 112 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "The FOG BADGE is yours...\n"
	.string "You are certainly worthy.$"

EcruteakCity_Gym_Morty_PostBattle_Text_2:
# 114 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "{PLAYER} received the FOG\n"
	.string "BADGE from MORTY!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

EcruteakCity_Gym_Morty_PostBattle_Text_3:
# 117 "data/maps/EcruteakCity_Gym/scripts.pory"
	.string "You've seen the ruins of BRASS\n"
	.string "TOWER, yes?\p"
	.string "I'm sure something quite frightening's\n"
	.string "brewing there... Be cautious,\l"
	.string "{PLAYER}.$"
