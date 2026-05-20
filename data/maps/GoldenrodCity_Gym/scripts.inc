GoldenrodCity_Gym_MapScripts::
	.byte 0


GoldenrodCity_Gym_Machoke_Busy::
# 7 "data/maps/GoldenrodCity_Gym/scripts.pory"
	lock
# 8 "data/maps/GoldenrodCity_Gym/scripts.pory"
	playmoncry SPECIES_MACHOKE, CRY_MODE_NORMAL
# 9 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Machoke_Busy_Text_0
# 10 "data/maps/GoldenrodCity_Gym/scripts.pory"
	closemessage
# 11 "data/maps/GoldenrodCity_Gym/scripts.pory"
	release
	end


GoldenrodCity_Gym_Guide::
# 17 "data/maps/GoldenrodCity_Gym/scripts.pory"
	lock
# 18 "data/maps/GoldenrodCity_Gym/scripts.pory"
	faceplayer
# 19 "data/maps/GoldenrodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_Guide_2
# 25 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Guide_Text_1
GoldenrodCity_Gym_Guide_1:
# 27 "data/maps/GoldenrodCity_Gym/scripts.pory"
	closemessage
# 28 "data/maps/GoldenrodCity_Gym/scripts.pory"
	release
	end

GoldenrodCity_Gym_Guide_2:
# 21 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Guide_Text_0
	goto GoldenrodCity_Gym_Guide_1


GoldenrodCity_Gym_Statue::
# 34 "data/maps/GoldenrodCity_Gym/scripts.pory"
	lock
# 35 "data/maps/GoldenrodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_Statue_2
# 41 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Statue_Text_1
GoldenrodCity_Gym_Statue_1:
# 43 "data/maps/GoldenrodCity_Gym/scripts.pory"
	closemessage
# 44 "data/maps/GoldenrodCity_Gym/scripts.pory"
	release
	end

GoldenrodCity_Gym_Statue_2:
# 37 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Statue_Text_0
	goto GoldenrodCity_Gym_Statue_1


GoldenrodCity_Gym_Norman_Intro_Battle::
# 50 "data/maps/GoldenrodCity_Gym/scripts.pory"
	lock
# 51 "data/maps/GoldenrodCity_Gym/scripts.pory"
	faceplayer
# 52 "data/maps/GoldenrodCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, GoldenrodCity_Gym_Norman_Intro_Battle_2
# 58 "data/maps/GoldenrodCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, GoldenrodCity_Gym_Norman_Intro_Battle_5
# 67 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_Intro_Battle_Text_4
GoldenrodCity_Gym_Norman_Intro_Battle_1:
# 70 "data/maps/GoldenrodCity_Gym/scripts.pory"
	closemessage
# 71 "data/maps/GoldenrodCity_Gym/scripts.pory"
	release
	end

GoldenrodCity_Gym_Norman_Intro_Battle_2:
# 54 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_Intro_Battle_Text_0
	goto GoldenrodCity_Gym_Norman_Intro_Battle_1

GoldenrodCity_Gym_Norman_Intro_Battle_5:
# 60 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_Intro_Battle_Text_1
# 61 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_Intro_Battle_Text_2
# 62 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_Intro_Battle_Text_3
# 63 "data/maps/GoldenrodCity_Gym/scripts.pory"
	call GoldenrodCity_Gym_Norman_Battle
	goto GoldenrodCity_Gym_Norman_Intro_Battle_1


GoldenrodCity_Gym_Norman_Battle::
# 77 "data/maps/GoldenrodCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_NORMAN, GoldenrodCity_Gym_Norman_Battle_Text_0, GoldenrodCity_Gym_Norman_Battle_Text_1, GoldenrodCity_Gym_Norman_PostBattle, NO_MUSIC
	return


GoldenrodCity_Gym_Norman_PostBattle::
# 82 "data/maps/GoldenrodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 83 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_PostBattle_Text_0
# 84 "data/maps/GoldenrodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 85 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_PostBattle_Text_1
# 86 "data/maps/GoldenrodCity_Gym/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 87 "data/maps/GoldenrodCity_Gym/scripts.pory"
	msgbox GoldenrodCity_Gym_Norman_PostBattle_Text_2
# 88 "data/maps/GoldenrodCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE03_GET
	return


GoldenrodCity_Gym_Machoke_Busy_Text_0:
# 9 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "The MACHOKE seems to be busy...\n"
	.string "Hard at work, or hardly working?$"

GoldenrodCity_Gym_Guide_Text_0:
# 21 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "See? Wasn't that easy?\n"
	.string "I knew you could do it!$"

GoldenrodCity_Gym_Guide_Text_1:
# 25 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Yo! WORLD CHAMP in the making!\n"
	.string "Today's your lucky day!\p"
	.string "The GYM TRAINERS are all on\n"
	.string "time off, so this'll be easy!\p"
	.string "Bonus tip! NORMAN uses NORMAL-\n"
	.string "TYPE POKéMON.\p"
	.string "Use your FIGHTING sprit!$"

GoldenrodCity_Gym_Statue_Text_0:
# 37 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "GOLDENROD CITY GYM\n"
	.string "LEADER: NORMAN\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

GoldenrodCity_Gym_Statue_Text_1:
# 41 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "GOLDENROD CITY GYM\n"
	.string "LEADER: NORMAN\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

GoldenrodCity_Gym_Norman_Intro_Battle_Text_0:
# 54 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Hm, {PLAYER}?\n"
	.string "How's the adventuring going?\p"
	.string "I do hope we meet again,\n"
	.string "I'd like a rematch very much...$"

GoldenrodCity_Gym_Norman_Intro_Battle_Text_1:
# 60 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Hm?\n"
	.string "Ah, aren't you {PLAYER}?\p"
	.string "I've heard about you.\n"
	.string "A TRAINER, travelling the WORLD...\p"
	.string "Sounds like you're a formidable\n"
	.string "opponent too, hm?$"

GoldenrodCity_Gym_Norman_Intro_Battle_Text_2:
# 61 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "I, too, am in pursuit of\n"
	.string "becoming a more powerful TRAINER.\p"
	.string "...I do apologize for this mess.\n"
	.string "Let me make it up to you...$"

GoldenrodCity_Gym_Norman_Intro_Battle_Text_3:
# 62 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Perhaps I can offer you this.\n"
	.string "A PLAIN BADGE... Ah, not so fast!$"

GoldenrodCity_Gym_Norman_Intro_Battle_Text_4:
# 67 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Hm?\n"
	.string "Hello, you are...?\p"
	.string "Can't say I know any {PLAYER}...\n"
	.string "Can you come later, actually?\p"
	.string "Now's not a really good time...$"

GoldenrodCity_Gym_Norman_Battle_Text_0:
# 77 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "I will do everything in my power\n"
	.string "as GYM LEADER to win!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

GoldenrodCity_Gym_Norman_Battle_Text_1:
# 77 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "I... I can't believe it!\n"
	.string "{PLAYER}, you are really strong.$"

GoldenrodCity_Gym_Norman_PostBattle_Text_0:
# 83 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "Impressive!\n"
	.string "Here, take this.$"

GoldenrodCity_Gym_Norman_PostBattle_Text_1:
# 85 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "{PLAYER} received the PLAIN\n"
	.string "BADGE from NORMAN!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

GoldenrodCity_Gym_Norman_PostBattle_Text_2:
# 87 "data/maps/GoldenrodCity_Gym/scripts.pory"
	.string "That BADGE... Isn't much of\n"
	.string "anything special, honestly.\p"
	.string "But rules are rules, you know.\n"
	.string "You have another BADGE, what's next?$"
