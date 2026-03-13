Route37_MapScripts::
	.byte 0


Route37_TrainerTips_Sign::
# 5 "data/maps/Route37/scripts.pory"
	lock
# 6 "data/maps/Route37/scripts.pory"
	msgbox Route37_TrainerTips_Sign_Text_0
# 7 "data/maps/Route37/scripts.pory"
	closemessage
# 8 "data/maps/Route37/scripts.pory"
	release
	end


Route37_Sign::
# 14 "data/maps/Route37/scripts.pory"
	lock
# 15 "data/maps/Route37/scripts.pory"
	msgbox Route37_Sign_Text_0
# 16 "data/maps/Route37/scripts.pory"
	closemessage
# 17 "data/maps/Route37/scripts.pory"
	release
	end


Route37_Little_Girl::
# 23 "data/maps/Route37/scripts.pory"
	lock
# 24 "data/maps/Route37/scripts.pory"
	faceplayer
# 25 "data/maps/Route37/scripts.pory"
	msgbox Route37_Little_Girl_Text_0
# 26 "data/maps/Route37/scripts.pory"
	closemessage
# 27 "data/maps/Route37/scripts.pory"
	release
	end


Route37_TrainerBattle_BeautyCallie::
# 33 "data/maps/Route37/scripts.pory"
	trainerbattle_single TRAINER_BEAUTY_CALLIE, Route37_TrainerBattle_BeautyCallie_Text_0, Route37_TrainerBattle_BeautyCallie_Text_1
# 34 "data/maps/Route37/scripts.pory"
	msgbox Route37_TrainerBattle_BeautyCallie_Text_2
# 35 "data/maps/Route37/scripts.pory"
	closemessage
# 36 "data/maps/Route37/scripts.pory"
	releaseall
	end


Route37_TrainerBattle_PsychicGreg::
# 42 "data/maps/Route37/scripts.pory"
	trainerbattle_single TRAINER_PSYCHIC_GREG, Route37_TrainerBattle_PsychicGreg_Text_0, Route37_TrainerBattle_PsychicGreg_Text_1
# 43 "data/maps/Route37/scripts.pory"
	msgbox Route37_TrainerBattle_PsychicGreg_Text_2
# 44 "data/maps/Route37/scripts.pory"
	closemessage
# 45 "data/maps/Route37/scripts.pory"
	releaseall
	end


Route37_TrainerTips_Sign_Text_0:
# 6 "data/maps/Route37/scripts.pory"
	.string "TRAINER TIPS!\n"
	.string "A POKéMON with DIG is useful.\p"
	.string "If you get lost in DARK CAVE...\n"
	.string "They can DIG you back out!$"

Route37_Sign_Text_0:
# 15 "data/maps/Route37/scripts.pory"
	.string "ROUTE 37 - ECRUTEAK CITY\n"
	.string "This is a popular route for TRAINERS!$"

Route37_Little_Girl_Text_0:
# 25 "data/maps/Route37/scripts.pory"
	.string "Have you seen my sis', ANNE?\n"
	.string "We're supposed to play today.\p"
	.string "Aww...\n"
	.string "She probably overslept!$"

Route37_TrainerBattle_BeautyCallie_Text_0:
# 33 "data/maps/Route37/scripts.pory"
	.string "A POKéMON battle?\n"
	.string "Oh, I thought you'd never ask!$"

Route37_TrainerBattle_BeautyCallie_Text_1:
# 33 "data/maps/Route37/scripts.pory"
	.string "See? Wasn't that fun?$"

Route37_TrainerBattle_BeautyCallie_Text_2:
# 34 "data/maps/Route37/scripts.pory"
	.string "You're lucky to have been such\n"
	.string "a strong TRAINER!\p"
	.string "Most people wouldn't be able to\n"
	.string "defeat my cute, yet strong, team!$"

Route37_TrainerBattle_PsychicGreg_Text_0:
# 42 "data/maps/Route37/scripts.pory"
	.string "I foresaw your arrival!$"

Route37_TrainerBattle_PsychicGreg_Text_1:
# 42 "data/maps/Route37/scripts.pory"
	.string "I didn't see that coming!$"

Route37_TrainerBattle_PsychicGreg_Text_2:
# 43 "data/maps/Route37/scripts.pory"
	.string "Hmm... I've got a feeling you will\n"
	.string "go around the ledge ahead...$"
