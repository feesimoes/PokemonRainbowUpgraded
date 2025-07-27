SaffronCity_MagnetTrainStation_MapScripts::
	.byte 0


SaffronCity_MagnetTrainStation_EventScript_Rodolfo::
# 4 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 5 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 6 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_HIDE_SILPH_ROCKETS, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1
	return

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1:
# 8 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0
# 9 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 10 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1
# 11 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 12 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2, MSGBOX_YESNO
# 13 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 14 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_3
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	trainerbattle_single TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6
# 25 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 26 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 28 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_OBTAINED_MUSIC_PLAYER
# 29 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 30 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitfanfare
# 31 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 32 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 33 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7
# 34 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 35 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
	return

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_3:
# 16 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3
# 17 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 18 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 19 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0:
# 8 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON\n"
	.string "and SILPH...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1:
# 10 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Anyways, I'm RODOLFO!\n"
	.string "So, uh, you're {PLAYER}? Yeah, I know.\p"
	.string "Hah! That look on your face!\n"
	.string "you should've seen it!\p"
	.string "I mean, you're obviously becoming\n"
	.string "pretty well-known in KANTO, duh.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2:
# 12 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I've got something for you, {PLAYER}!\n"
	.string "But you have to beat me in battle!\p"
	.string "Ready?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3:
# 16 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Well, you're a lucky TRAINER!\n"
	.string "Can you believe I even asked?\p"
	.string "You can go prepare, I'll just be...\n"
	.string "here... (Hmm, that kinda rhymes!)$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4:
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "No, wait!\n"
	.string "I don't have a catchy phrase yet!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5:
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Uh, I lost...\n"
	.string "But, how did you like my battle theme?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6:
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Alright, you've earned this!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7:
# 33 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Pretty cool looking, huh?\n"
	.string "But yeah, the MUSIC PLAYER is neat!$"
