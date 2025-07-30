SaffronCity_MagnetTrainStation_MapScripts::
	.byte 0


SaffronCity_MagnetTrainStation_EventScript_Lass::
# 5 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 6 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 7 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_OBTAINED_MUSIC_PLAYER, SaffronCity_MagnetTrainStation_EventScript_Lass_2
# 13 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1
SaffronCity_MagnetTrainStation_EventScript_Lass_1:
# 15 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 16 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 17 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Lass_2:
# 9 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Lass_1


SaffronCity_MagnetTrainStation_EventScript_Fat_Man::
# 23 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 25 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_OBTAINED_MUSIC_PLAYER, SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2
# 31 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1
SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1:
# 33 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 34 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 35 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2:
# 27 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1


SaffronCity_MagnetTrainStation_EventScript_Scientist::
# 41 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 42 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 43 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_OBTAINED_MUSIC_PLAYER, SaffronCity_MagnetTrainStation_EventScript_Scientist_2
# 49 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1
SaffronCity_MagnetTrainStation_EventScript_Scientist_1:
# 51 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 52 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 53 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Scientist_2:
# 45 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Scientist_1


SaffronCity_MagnetTrainStation_EventScript_Boy::
# 59 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 60 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 61 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_OBTAINED_MUSIC_PLAYER, SaffronCity_MagnetTrainStation_EventScript_Boy_2
# 67 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1
SaffronCity_MagnetTrainStation_EventScript_Boy_1:
# 69 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 70 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 71 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Boy_2:
# 63 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Boy_1


SaffronCity_MagnetTrainStation_EventScript_Attendant::
# 77 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 78 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 79 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Attendant_Text_0
# 80 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 81 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 82 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo::
# 87 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 88 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 89 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	call_if_defeated TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle
# 90 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_HIDE_SILPH_ROCKETS, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1
# 117 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6
# 118 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 119 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7
# 120 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 121 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 122 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1:
# 92 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0
# 93 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 94 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 95 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1
# 96 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 97 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 98 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2, MSGBOX_YESNO
# 99 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 100 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4
# 110 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	trainerbattle_single TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5
# 111 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4:
# 102 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3
# 103 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 104 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 105 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle::
# 129 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0
# 130 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 131 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 132 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_OBTAINED_MUSIC_PLAYER
# 133 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 134 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	giveitem ITEM_MUSIC_PLAYER, 1
# 135 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitfanfare
# 136 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1
# 137 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 138 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 139 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2
# 140 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 141 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 142 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_TO_BLACK
# 143 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	removeobject LOCALID_RODOLFO
# 144 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 145 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0:
# 9 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Oh, thank goodness!\n"
	.string "That annoying guy is gone!\p"
	.string "I can use the MAGNET TRAIN!$"

SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1:
# 13 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's an annoying guy blocking\n"
	.string "that MAGNET TRAIN entrance...\p"
	.string "I do wish someone would do\n"
	.string "something about this!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0:
# 27 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Have you been to JOHTO?\n"
	.string "I heard this from a friend...\p"
	.string "But TEAM ROCKET is operating there\n"
	.string "as well, harming the SLOWPOKE.\p"
	.string "No crime is too wicked for\n"
	.string "them, those nasty goons!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1:
# 31 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "That guy there seems to be\n"
	.string "blocking the entrance...\p"
	.string "He keeps telling people to check\n"
	.string "out the HOENN REGION, because...\p"
	.string "Apparently, he came from there?\n"
	.string "He's weird.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0:
# 45 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm relieved the MAGNET TRAIN\n"
	.string "is back up and running.\p"
	.string "TEAM ROCKET seems to be gone, too.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1:
# 49 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm an expert in sciences\n"
	.string "and technologies. But, uh...\p"
	.string "My studies could have never\n"
	.string "prepared me for a yapping MANIAC.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0:
# 63 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm so glad that guy is gone.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1:
# 67 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's a guy blocking the\n"
	.string "MAGNET TRAIN entrance! Honestly...\p"
	.string "I just want him to shut up!\n"
	.string "He's the worst! TEAM ROCKET'S better!$"

SaffronCity_MagnetTrainStation_EventScript_Attendant_Text_0:
# 79 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hello. May I please see your\n"
	.string "MAGNET TRAIN PASS?\p"
	.string "...I'm terribly sorry, seems like\n"
	.string "you don't have one yet.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0:
# 92 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON\n"
	.string "and SILPH...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1:
# 95 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Anyways, I'm RODOLFO!\n"
	.string "So, uh, you're {PLAYER}? Yeah, I know.\p"
	.string "Hah! That look on your face!\n"
	.string "you should've seen it!\p"
	.string "I mean, you're obviously becoming\n"
	.string "pretty well-known in KANTO, duh.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2:
# 98 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I've got something for you, {PLAYER}!\n"
	.string "But you have to beat me in battle!\p"
	.string "Ready?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3:
# 102 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Well, you're a lucky TRAINER!\n"
	.string "Can you believe I even asked?\p"
	.string "You can go prepare, I'll just be...\n"
	.string "here... (Hmm, that kinda rhymes!)$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4:
# 110 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "No, wait!\n"
	.string "I don't have a catchy phrase yet!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5:
# 110 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Uh, I lost...\n"
	.string "But, how did you like my battle theme?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6:
# 117 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7:
# 119 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Yeah, but, anyways...\n"
	.string "you should come back later!\p"
	.string "Drive 'em out of SILPH,\n"
	.string "then, we'll talk!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0:
# 129 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Wow, you defeated me, huh?\n"
	.string "That's crazy. Anyways!\p"
	.string "That thing I had for you...\n"
	.string "It's called a MUSIC PLAYER!\p"
	.string "Here ya go!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1:
# 136 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "That MUSIC PLAYER is a device that\n"
	.string "lets you play music.\p"
	.string "But, here's the catch!\n"
	.string "It's like a POKéDEX, but for music.\p"
	.string "Which means, it'll only work if you\n"
	.string "previously heard it, or unlocked it.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2:
# 139 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "So, yeah, that's the basics!\n"
	.string "I'm gonna be in GOLDENROD CITY.\p"
	.string "Come see me if you somehow\n"
	.string "unlock every piece of music!$"
