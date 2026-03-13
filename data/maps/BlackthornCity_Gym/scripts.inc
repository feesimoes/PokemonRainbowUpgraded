BlackthornCity_Gym_MapScripts::
	.byte 0


BlackthornCity_Gym_Trainer_Battle_1::
# 5 "data/maps/BlackthornCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAMER_MIKE, BlackthornCity_Gym_Trainer_Battle_1_Text_0, BlackthornCity_Gym_Trainer_Battle_1_Text_1
# 6 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Trainer_Battle_1_Text_2
# 7 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 8 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Trainer_Battle_2::
# 14 "data/maps/BlackthornCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_PAUL_JOHTO, BlackthornCity_Gym_Trainer_Battle_2_Text_0, BlackthornCity_Gym_Trainer_Battle_2_Text_1
# 15 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Trainer_Battle_2_Text_2
# 16 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 17 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Trainer_Battle_3::
# 23 "data/maps/BlackthornCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LASS_LOLA, BlackthornCity_Gym_Trainer_Battle_3_Text_0, BlackthornCity_Gym_Trainer_Battle_3_Text_1
# 24 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Trainer_Battle_3_Text_2
# 25 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 26 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Trainer_Battle_4::
# 32 "data/maps/BlackthornCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_HIKER_CODY, BlackthornCity_Gym_Trainer_Battle_4_Text_0, BlackthornCity_Gym_Trainer_Battle_4_Text_1
# 33 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Trainer_Battle_4_Text_2
# 34 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 35 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Leader_Clair_Post_Battle::
# 41 "data/maps/BlackthornCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 42 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_0
# 43 "data/maps/BlackthornCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE08_GET
# 44 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_1
# 45 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_2
# 46 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 47 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Leader_Clair_Battle::
# 53 "data/maps/BlackthornCity_Gym/scripts.pory"
	lock
# 54 "data/maps/BlackthornCity_Gym/scripts.pory"
	faceplayer
# 55 "data/maps/BlackthornCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 56 "data/maps/BlackthornCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_Leader_Clair_Battle_2
# 63 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_1
# 64 "data/maps/BlackthornCity_Gym/scripts.pory"
	checkitem ITEM_DRAGON_FANG_2, 1
# 65 "data/maps/BlackthornCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackthornCity_Gym_Leader_Clair_Battle_5
# 72 "data/maps/BlackthornCity_Gym/scripts.pory"
	checkitem ITEM_DRAGON_FANG, 1
# 73 "data/maps/BlackthornCity_Gym/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq BlackthornCity_Gym_Leader_Clair_Battle_8
# 84 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_7
BlackthornCity_Gym_Leader_Clair_Battle_4:
# 87 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 88 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end

BlackthornCity_Gym_Leader_Clair_Battle_2:
# 58 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_0
# 59 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 60 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end

BlackthornCity_Gym_Leader_Clair_Battle_5:
# 67 "data/maps/BlackthornCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_CLAIR, BlackthornCity_Gym_Leader_Clair_Battle_Text_2, BlackthornCity_Gym_Leader_Clair_Battle_Text_3, BlackthornCity_Gym_Leader_Clair_Post_Battle, NO_MUSIC
# 68 "data/maps/BlackthornCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE08_GET
	goto BlackthornCity_Gym_Leader_Clair_Battle_4

BlackthornCity_Gym_Leader_Clair_Battle_8:
# 75 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_4
# 76 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_5
# 77 "data/maps/BlackthornCity_Gym/scripts.pory"
	fadeoutbgm 0
# 78 "data/maps/BlackthornCity_Gym/scripts.pory"
	waitmessage
# 79 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Leader_Clair_Battle_Text_6
# 80 "data/maps/BlackthornCity_Gym/scripts.pory"
	playbgm MUS_GYM_JOHTO, TRUE
	goto BlackthornCity_Gym_Leader_Clair_Battle_4


BlackthornCity_Gym_Dude_Dialogue::
# 94 "data/maps/BlackthornCity_Gym/scripts.pory"
	lock
# 95 "data/maps/BlackthornCity_Gym/scripts.pory"
	faceplayer
# 96 "data/maps/BlackthornCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_Dude_Dialogue_1
# 105 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Dude_Dialogue_Text_1
# 106 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 107 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end

BlackthornCity_Gym_Dude_Dialogue_1:
# 98 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Dude_Dialogue_Text_0
# 99 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 100 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Statues::
# 114 "data/maps/BlackthornCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, BlackthornCity_Gym_Statues_1
# 123 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Statues_Text_1
# 124 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 125 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end

BlackthornCity_Gym_Statues_1:
# 116 "data/maps/BlackthornCity_Gym/scripts.pory"
	msgbox BlackthornCity_Gym_Statues_Text_0
# 117 "data/maps/BlackthornCity_Gym/scripts.pory"
	closemessage
# 118 "data/maps/BlackthornCity_Gym/scripts.pory"
	release
	end


BlackthornCity_Gym_Trainer_Battle_1_Text_0:
# 5 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Hey!\n"
	.string "Where are you going, kid?$"

BlackthornCity_Gym_Trainer_Battle_1_Text_1:
# 5 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Tch, beaten by a kid...$"

BlackthornCity_Gym_Trainer_Battle_1_Text_2:
# 6 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "CLAIR won't let you battle\n"
	.string "her if you aren't worthy.$"

BlackthornCity_Gym_Trainer_Battle_2_Text_0:
# 14 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "I've never seen you around.\n"
	.string "But you already got 8 BADGES?$"

BlackthornCity_Gym_Trainer_Battle_2_Text_1:
# 14 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Wait a second!\n"
	.string "Those aren't JOHTO BADGES...$"

BlackthornCity_Gym_Trainer_Battle_2_Text_2:
# 15 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "You can't seriously be here\n"
	.string "from KANTO, right?\p"
	.string "You don't even need more\n"
	.string "than 8 BADGES for the LEAGUE...$"

BlackthornCity_Gym_Trainer_Battle_3_Text_0:
# 23 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Are you lost? Teehee...\n"
	.string "You're going the wrong way.$"

BlackthornCity_Gym_Trainer_Battle_3_Text_1:
# 23 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "I lost my way!\n"
	.string "I'm hopping off the ledge!$"

BlackthornCity_Gym_Trainer_Battle_3_Text_2:
# 24 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Well, the ledge is a neat\n"
	.string "shortcut if you reach CLAIR...\p"
	.string "If need be, run away, crying,\n"
	.string "possibly...$"

BlackthornCity_Gym_Trainer_Battle_4_Text_0:
# 32 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Impressive! I honestly didn't\n"
	.string "believe you're from KANTO!$"

BlackthornCity_Gym_Trainer_Battle_4_Text_1:
# 32 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "You're definitely not a kid!$"

BlackthornCity_Gym_Trainer_Battle_4_Text_2:
# 33 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "This GYM kind of reminds me\n"
	.string "of FIERY PATH, from HOENN.$"

BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_0:
# 42 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "I...\n"
	.string "I understand...\p"
	.string "Here, take the RISING BADGE.{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_1:
# 44 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "That BADGE, proof of your victory,\n"
	.string "is the final JOHTO BADGE.\p"
	.string "Normally, it allows a skilled TRAINER\n"
	.string "to attempt the POKéMON LEAGUE...$"

BlackthornCity_Gym_Leader_Clair_Post_Battle_Text_2:
# 45 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "However, in your case, it will\n"
	.string "allow you to visit MT. SILVER.\p"
	.string "Assuming you have 8 KANTO BADGES,\n"
	.string "and 8 JOHTO BADGES, good luck.$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_0:
# 58 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Whatever you have to face from\n"
	.string "now, don't you dare give up!$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_1:
# 63 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "I am CLAIR.\n"
	.string "The world's best DRAGON MASTER.\p"
	.string "I can hold my own against\n"
	.string "even the LEAGUE'S ELITE FOUR.\p"
	.string "...Do you still want to\n"
	.string "take me on?$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_2:
# 67 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "All right!\n"
	.string "I recognize your worthiness.\p"
	.string "As LEADER, I'll be using my\n"
	.string "full power against any opponent!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_3:
# 67 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Congratulations!\n"
	.string "You were really tough...\p"
	.string "Battling you made me realize\n"
	.string "what I was missing...$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_4:
# 75 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "All right...\n"
	.string "I recognize your worthiness.\p"
	.string "As a LEADER, I will use full\n"
	.string "power against any opponent!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_5:
# 76 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Let's do it!\n"
	.string "...Wait.$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_6:
# 79 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "You did not get that at\n"
	.string "DRAGONS' DEN.\p"
	.string "Trying to cheat like that...\n"
	.string "I'm disappointed in you.\p"
	.string "Go take the DRAGONS' DEN\n"
	.string "challenge. If you can do that...\p"
	.string "I will accept you as a\n"
	.string "worthy opponent.$"

BlackthornCity_Gym_Leader_Clair_Battle_Text_7:
# 84 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Go take the DRAGONS' DEN\n"
	.string "challenge. If you can do that...\p"
	.string "I will accept you as a\n"
	.string "worthy opponent.\p"
	.string "Until then, I'm afraid that\n"
	.string "I won't give you a BADGE.$"

BlackthornCity_Gym_Dude_Dialogue_Text_0:
# 98 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "No way! I don't believe it.\n"
	.string "You actually beat CLAIR?\p"
	.string "...Just kidding, I knew you\n"
	.string "could do it! Excellent work!$"

BlackthornCity_Gym_Dude_Dialogue_Text_1:
# 105 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "The air here is tense!\p"
	.string "CLAIR will go all-out in\n"
	.string "a battle, so watch your back!\p"
	.string "Like her cousin, LANCE, she\n"
	.string "uses DRAGON-TYPE POKéMON.\p"
	.string "Believe it or not, DRAGON POKéMON\n"
	.string "are weak against DRAGON-TYPE!\p"
	.string "You could also use ICE-TYPE\n"
	.string "POKéMON, ICE PATH is nearby.$"

BlackthornCity_Gym_Statues_Text_0:
# 116 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "BLACKTHORN CITY GYM\n"
	.string "LEADER: CLAIR\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

BlackthornCity_Gym_Statues_Text_1:
# 123 "data/maps/BlackthornCity_Gym/scripts.pory"
	.string "BLACKTHORN CITY GYM\n"
	.string "LEADER: CLAIR\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"
