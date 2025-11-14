VioletCity_Gym_MapScripts::
	.byte 0


VioletCity_Gym_Cooltrainer_Falkner_Battle::
# 5 "data/maps/VioletCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_FALKNER, VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_0, VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_1
# 6 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_2
# 7 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


VioletCity_Gym_Birdkeeper_Abe_Battle::
# 13 "data/maps/VioletCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BIRDKEEPER_ABE, VioletCity_Gym_Birdkeeper_Abe_Battle_Text_0, VioletCity_Gym_Birdkeeper_Abe_Battle_Text_1
# 14 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Birdkeeper_Abe_Battle_Text_2
# 15 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


VioletCity_Gym_EventScript_Walker_Battle::
# 21 "data/maps/VioletCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_NATIONAL_DEX, VioletCity_Gym_EventScript_Walker_Battle_1
# 46 "data/maps/VioletCity_Gym/scripts.pory"
	lock
# 47 "data/maps/VioletCity_Gym/scripts.pory"
	applymovement 3, Movement_VioletCity_Gym_FacePlayer
# 48 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_EventScript_Walker_Battle_Text_6
# 49 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 50 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end

VioletCity_Gym_EventScript_Walker_Battle_1:
# 23 "data/maps/VioletCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_WALKER, VioletCity_Gym_EventScript_Walker_Battle_Text_0, VioletCity_Gym_EventScript_Walker_Battle_Text_1, VioletCity_Gym_EventScript_Walker_Battle_Text_2, NO_MUSIC
# 24 "data/maps/VioletCity_Gym/scripts.pory"
	goto_if_unset FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_EventScript_Walker_Battle_4
# 36 "data/maps/VioletCity_Gym/scripts.pory"
	lock
# 37 "data/maps/VioletCity_Gym/scripts.pory"
	applymovement 3, Movement_VioletCity_Gym_FacePlayer
# 38 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_EventScript_Walker_Battle_Text_5
# 39 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 40 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end

VioletCity_Gym_EventScript_Walker_Battle_4:
# 26 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_EventScript_Walker_Battle_Text_3
# 27 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 28 "data/maps/VioletCity_Gym/scripts.pory"
	setflag FLAG_JOHTO_BADGE01_GET
# 29 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_EventScript_Walker_Battle_Text_4
# 30 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 31 "data/maps/VioletCity_Gym/scripts.pory"
	releaseall
	end


VioletCity_Gym_Dude_Dialogue::
# 57 "data/maps/VioletCity_Gym/scripts.pory"
	lock
# 58 "data/maps/VioletCity_Gym/scripts.pory"
	applymovement 4, Movement_VioletCity_Gym_FacePlayer
# 59 "data/maps/VioletCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_Dude_Dialogue_1
# 68 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Dude_Dialogue_Text_1
# 69 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 70 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end

VioletCity_Gym_Dude_Dialogue_1:
# 61 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Dude_Dialogue_Text_0
# 62 "data/maps/VioletCity_Gym/scripts.pory"
	closemessage
# 63 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


VioletCity_Gym_Statues::
# 77 "data/maps/VioletCity_Gym/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_Gym_Statues_1
# 85 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Statues_Text_1
# 86 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end

VioletCity_Gym_Statues_1:
# 79 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Statues_Text_0
# 80 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


VioletCity_Gym_Lugia_Scroll::
# 93 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_Lugia_Scroll_Text_0
# 94 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


VioletCity_Gym_HoOh_Scroll::
# 100 "data/maps/VioletCity_Gym/scripts.pory"
	msgbox VioletCity_Gym_HoOh_Scroll_Text_0
# 101 "data/maps/VioletCity_Gym/scripts.pory"
	release
	end


# 105 "data/maps/VioletCity_Gym/scripts.pory"
Movement_VioletCity_Gym_FacePlayer:
# 107 "data/maps/VioletCity_Gym/scripts.pory"
	face_player
# 108 "data/maps/VioletCity_Gym/scripts.pory"
	step_end

VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_0:
# 5 "data/maps/VioletCity_Gym/scripts.pory"
	.string "I'm next! I'll show you the real\n"
	.string "power of magnificent bird POKéMON!$"

VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_1:
# 5 "data/maps/VioletCity_Gym/scripts.pory"
	.string "...Darn!\n"
	.string "My Dad's cherished bird POKéMON...$"

VioletCity_Gym_Cooltrainer_Falkner_Battle_Text_2:
# 6 "data/maps/VioletCity_Gym/scripts.pory"
	.string "I'm going to train harder to become\n"
	.string "the greatest BIRD KEEPER of all!$"

VioletCity_Gym_Birdkeeper_Abe_Battle_Text_0:
# 13 "data/maps/VioletCity_Gym/scripts.pory"
	.string "You're not afraid of falling off?$"

VioletCity_Gym_Birdkeeper_Abe_Battle_Text_1:
# 13 "data/maps/VioletCity_Gym/scripts.pory"
	.string "It was I who fell off!$"

VioletCity_Gym_Birdkeeper_Abe_Battle_Text_2:
# 14 "data/maps/VioletCity_Gym/scripts.pory"
	.string "You can't actually fall off\n"
	.string "this platform...\p"
	.string "...No, forget I said anything!$"

VioletCity_Gym_EventScript_Walker_Battle_Text_0:
# 23 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Yo, kid! The name's WALKER!\n"
	.string "You guessed it! I'm the LEADER!\p"
	.string "KANTO was easy, huh? Well, then!\n"
	.string "I don't play easy, I play hard!\p"
	.string "{PLAY_BGM MUS_ENCOUNTER_GYM_LEADER}WAHAHA! Bring it on, KANTO kid!\n"
	.string "Don't sweat it if you lose!$"

VioletCity_Gym_EventScript_Walker_Battle_Text_1:
# 23 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Dang, kid! You're good!\n"
	.string "You'll be soaring through JOHTO!$"

VioletCity_Gym_EventScript_Walker_Battle_Text_2:
# 23 "data/maps/VioletCity_Gym/scripts.pory"
	.string "$"

VioletCity_Gym_EventScript_Walker_Battle_Text_3:
# 26 "data/maps/VioletCity_Gym/scripts.pory"
	.string "You're something else, kid!\n"
	.string "Maybe, just maybe, I misjudged...\p"
	.string "Enough of my squawking around!\n"
	.string "You've earned a ZEPHYR BADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_OBTAIN_BADGE}{PAUSE 0xFE}{PAUSE 0x56}{RESUME_MUSIC}$"

VioletCity_Gym_EventScript_Walker_Battle_Text_4:
# 29 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Just like in KANTO, there's\n"
	.string "8 BADGES to collect here.\p"
	.string "Better get to it, huh?$"

VioletCity_Gym_EventScript_Walker_Battle_Text_5:
# 38 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Yo, kid!\n"
	.string "Enjoying it here in JOHTO?$"

VioletCity_Gym_EventScript_Walker_Battle_Text_6:
# 48 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Yo, kid!\n"
	.string "What's that? You want to battle?\p"
	.string "WAHAHAH! Quite the joke!\n"
	.string "Hah, but listen, kiddo!\p"
	.string "KANTO was the first test, which\n"
	.string "you graciously flew through!\p"
	.string "I'd love to see your skill,\n"
	.string "but the LEAGUE has rules!\p"
	.string "Come back once you get that sort\n"
	.string "of NATIONAL approval, kid!$"

VioletCity_Gym_Dude_Dialogue_Text_0:
# 61 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Yeah! I believe in you!\n"
	.string "Keep going for the win!$"

VioletCity_Gym_Dude_Dialogue_Text_1:
# 68 "data/maps/VioletCity_Gym/scripts.pory"
	.string "Yo, WORLD CHAMP in the making!\n"
	.string "Don't be fooled by WALKER!\p"
	.string "His name implies GROUND-type,\n"
	.string "but he uses FLYING-types!\p"
	.string "That's a crazy plot twist,\n"
	.string "but you got this!$"

VioletCity_Gym_Statues_Text_0:
# 79 "data/maps/VioletCity_Gym/scripts.pory"
	.string "VIOLET CITY GYM\n"
	.string "LEADER: WALKER\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}, {PLAYER}$"

VioletCity_Gym_Statues_Text_1:
# 85 "data/maps/VioletCity_Gym/scripts.pory"
	.string "VIOLET CITY GYM\n"
	.string "LEADER: WALKER\p"
	.string "WINNING TRAINERS:\n"
	.string "{RIVAL}$"

VioletCity_Gym_Lugia_Scroll_Text_0:
# 93 "data/maps/VioletCity_Gym/scripts.pory"
	.string "It's an ancient-looking scroll\n"
	.string "depicting a bird under the sea.\p"
	.string "It looks to be some sort of\n"
	.string "guardian...$"

VioletCity_Gym_HoOh_Scroll_Text_0:
# 100 "data/maps/VioletCity_Gym/scripts.pory"
	.string "It's an ancient-looking scroll\n"
	.string "depicting a graceful bird...\p"
	.string "Wait a minute...\n"
	.string "Haven't I seen it before?!$"
