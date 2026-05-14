SaffronCity_MagnetTrainStation_MapScripts::
# 3 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 6 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
	return


SaffronCity_MagnetTrainStation_EventScript_Lass::
# 15 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 16 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 17 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 18 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Lass_2
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1
SaffronCity_MagnetTrainStation_EventScript_Lass_1:
# 26 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 27 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 28 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Lass_2:
# 20 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Lass_1


SaffronCity_MagnetTrainStation_EventScript_Fat_Man::
# 34 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 35 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 36 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 37 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2
# 43 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1
SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1:
# 45 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 46 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 47 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2:
# 39 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1


SaffronCity_MagnetTrainStation_EventScript_Scientist::
# 53 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 54 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 55 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 56 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Scientist_2
# 62 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1
SaffronCity_MagnetTrainStation_EventScript_Scientist_1:
# 64 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 65 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 66 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Scientist_2:
# 58 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Scientist_1


SaffronCity_MagnetTrainStation_EventScript_Boy::
# 72 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 73 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 74 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 75 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Boy_2
# 81 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1
SaffronCity_MagnetTrainStation_EventScript_Boy_1:
# 83 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 84 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 85 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Boy_2:
# 77 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Boy_1


SaffronCity_MagnetTrainStation_EventScript_Attendant::
# 91 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 92 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 93 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Attendant_Text_0
# 94 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 95 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 96 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo::
# 101 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 102 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 103 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	call_if_defeated TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle
# 104 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_HIDE_SILPH_ROCKETS, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1
# 131 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6
# 132 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 133 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7
# 134 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 135 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 136 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1:
# 106 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0
# 107 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 108 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 109 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1
# 110 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 111 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 112 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2, MSGBOX_YESNO
# 113 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 114 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4
# 124 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	trainerbattle_single TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5
# 125 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4:
# 116 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3
# 117 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 118 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 119 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle::
# 143 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 144 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_2
# 155 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1
# 156 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 157 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 158 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 159 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	giveitem ITEM_MUSIC_PLAYER, 1
# 160 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitfanfare
# 161 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2
# 162 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 163 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 164 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_3
# 165 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 166 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 167 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
# 168 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	removeobject LOCALID_RODOLFO
# 170 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_FROM_BLACK
SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_1:
# 172 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_2:
# 146 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0
# 147 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 148 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
# 149 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_TO_BLACK
# 150 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	removeobject LOCALID_RODOLFO
# 151 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_1


SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0:
# 20 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Oh, thank goodness!\n"
	.string "That annoying guy is gone!\p"
	.string "I can use the MAGNET TRAIN!$"

SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1:
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's an annoying guy blocking\n"
	.string "that MAGNET TRAIN entrance...\p"
	.string "I do wish someone would do\n"
	.string "something about this!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0:
# 39 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Have you been to JOHTO?\n"
	.string "I heard this from a friend...\p"
	.string "But TEAM ROCKET is operating there\n"
	.string "as well, harming the SLOWPOKE.\p"
	.string "No crime is too wicked for\n"
	.string "them, those nasty goons!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1:
# 43 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "That guy there seems to be\n"
	.string "blocking the entrance...\p"
	.string "He keeps telling people to check\n"
	.string "out the HOENN REGION, because...\p"
	.string "Apparently, he came from there?\n"
	.string "He's weird.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0:
# 58 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm relieved the MAGNET TRAIN\n"
	.string "is back up and running.\p"
	.string "TEAM ROCKET seems to be gone, too.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1:
# 62 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm an expert in sciences\n"
	.string "and technologies. But, uh...\p"
	.string "My studies could have never\n"
	.string "prepared me for a yapping MANIAC.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0:
# 77 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm so glad that guy is gone.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1:
# 81 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's a guy blocking the\n"
	.string "MAGNET TRAIN entrance! Honestly...\p"
	.string "I just want him to shut up!\n"
	.string "He's the worst! TEAM ROCKET'S better!$"

SaffronCity_MagnetTrainStation_EventScript_Attendant_Text_0:
# 93 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hello. May I please see your\n"
	.string "MAGNET TRAIN PASS?\p"
	.string "...I'm terribly sorry, seems like\n"
	.string "you don't have one yet.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0:
# 106 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON\n"
	.string "and SILPH...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1:
# 109 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Anyways, I'm RODOLFO!\n"
	.string "So, uh, you're {PLAYER}? Yeah, I know.\p"
	.string "Hah! That look on your face!\n"
	.string "you should've seen it!\p"
	.string "I mean, you're obviously becoming\n"
	.string "pretty well-known in KANTO, duh.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2:
# 112 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I've got something for you, {PLAYER}!\n"
	.string "But you have to beat me in battle!\p"
	.string "Ready?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3:
# 116 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Well, you're a lucky TRAINER!\n"
	.string "Can you believe I even asked?\p"
	.string "You can go prepare, I'll just be...\n"
	.string "Uh, here... Yeah...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4:
# 124 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "No, wait!\n"
	.string "I don't have a catchy phrase yet!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5:
# 124 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Uh, I lost...\n"
	.string "But, how did you like my battle theme?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6:
# 131 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7:
# 133 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Yeah, but, anyways...\n"
	.string "you should come back later!\p"
	.string "Drive 'em out of SILPH,\n"
	.string "then, we'll talk!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0:
# 146 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Sorry, you caught me at a bad\n"
	.string "time, I was just heading back!\p"
	.string "I'm gonna be in GOLDENROD CITY.\n"
	.string "You're welcome to stop by.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1:
# 155 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Wow, you defeated me, huh?\n"
	.string "That's crazy... Anyways!\p"
	.string "That thing I had for you...\n"
	.string "It's called... The GB SOUNDS!\p"
	.string "Here you go!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2:
# 161 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "The GB SOUNDS is a device that\n"
	.string "lets you change the music.\p"
	.string "But wait, here's the catch!\n"
	.string "It gives you beeps 'n boops!\p"
	.string "Some sort of GEN 1-2 shenanigans...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_3:
# 164 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "So, yeah, that's the basics!\n"
	.string "I'm gonna be in GOLDENROD CITY.\p"
	.string "You're welcome to stop by.$"
