Route33_MapScripts::
	.byte 0


Route33_Lass::
# 5 "data/maps/Route33/scripts.pory"
	lock
# 6 "data/maps/Route33/scripts.pory"
	faceplayer
# 7 "data/maps/Route33/scripts.pory"
	msgbox Route33_Lass_Text_0
# 8 "data/maps/Route33/scripts.pory"
	closemessage
# 9 "data/maps/Route33/scripts.pory"
	release
	end


Route33_Youngster::
# 15 "data/maps/Route33/scripts.pory"
	lock
# 16 "data/maps/Route33/scripts.pory"
	faceplayer
# 17 "data/maps/Route33/scripts.pory"
	msgbox Route33_Youngster_Text_0
# 18 "data/maps/Route33/scripts.pory"
	closemessage
# 19 "data/maps/Route33/scripts.pory"
	release
	end


Route33_Rocket_F::
# 25 "data/maps/Route33/scripts.pory"
	lock
# 26 "data/maps/Route33/scripts.pory"
	faceplayer
# 27 "data/maps/Route33/scripts.pory"
	showmoneybox 0, 0
# 28 "data/maps/Route33/scripts.pory"
	msgbox Route33_Rocket_F_Text_0, MSGBOX_YESNO
# 29 "data/maps/Route33/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route33_Rocket_F_2
# 48 "data/maps/Route33/scripts.pory"
	msgbox Route33_Rocket_F_Text_3
Route33_Rocket_F_1:
# 50 "data/maps/Route33/scripts.pory"
	closemessage
# 51 "data/maps/Route33/scripts.pory"
	hidemoneybox
# 52 "data/maps/Route33/scripts.pory"
	release
	end

Route33_Rocket_F_2:
# 31 "data/maps/Route33/scripts.pory"
	checkmoney 10000
# 32 "data/maps/Route33/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route33_Rocket_F_5
# 43 "data/maps/Route33/scripts.pory"
	msgbox Route33_Rocket_F_Text_2
	goto Route33_Rocket_F_1

Route33_Rocket_F_5:
# 34 "data/maps/Route33/scripts.pory"
	playse SE_SHOP
# 35 "data/maps/Route33/scripts.pory"
	removemoney 10000
# 36 "data/maps/Route33/scripts.pory"
	addvar VAR_ROCKET_RELIEF_FUNDS, 1
# 37 "data/maps/Route33/scripts.pory"
	updatemoneybox
# 38 "data/maps/Route33/scripts.pory"
	waitse
# 39 "data/maps/Route33/scripts.pory"
	msgbox Route33_Rocket_F_Text_1
	goto Route33_Rocket_F_1


Route33_UnionCave_North_Sign::
# 58 "data/maps/Route33/scripts.pory"
	lock
# 59 "data/maps/Route33/scripts.pory"
	msgbox Route33_UnionCave_North_Sign_Text_0
# 60 "data/maps/Route33/scripts.pory"
	closemessage
# 61 "data/maps/Route33/scripts.pory"
	release
	end


Route33_UnionCave_South_Sign::
# 67 "data/maps/Route33/scripts.pory"
	lock
# 68 "data/maps/Route33/scripts.pory"
	msgbox Route33_UnionCave_South_Sign_Text_0
# 69 "data/maps/Route33/scripts.pory"
	closemessage
# 70 "data/maps/Route33/scripts.pory"
	release
	end


Route33_BugCatcher::
# 76 "data/maps/Route33/scripts.pory"
	lock
# 77 "data/maps/Route33/scripts.pory"
	faceplayer
# 78 "data/maps/Route33/scripts.pory"
	msgbox Route33_BugCatcher_Text_0
# 79 "data/maps/Route33/scripts.pory"
	closemessage
# 80 "data/maps/Route33/scripts.pory"
	release
	end


Route33_Hiker_Anthony_Battle::
# 86 "data/maps/Route33/scripts.pory"
	trainerbattle_single TRAINER_HIKER_ANTHONY, Route33_Hiker_Anthony_Battle_Text_0, Route33_Hiker_Anthony_Battle_Text_1
# 87 "data/maps/Route33/scripts.pory"
	msgbox Route33_Hiker_Anthony_Battle_Text_2
# 88 "data/maps/Route33/scripts.pory"
	closemessage
# 89 "data/maps/Route33/scripts.pory"
	releaseall
	end


Route33_Lass_Text_0:
# 7 "data/maps/Route33/scripts.pory"
	.string "There have been several sightings of\n"
	.string "rare LAPRAS in the cave ahead.\p"
	.string "Have you seen it?\n"
	.string "Most sightings seem to be on FRIDAY.$"

Route33_Youngster_Text_0:
# 17 "data/maps/Route33/scripts.pory"
	.string "You gotta be careful around here!\n"
	.string "I was promised a SLOWPOKE TAIL...\p"
	.string "Handed over some spare cash, and\n"
	.string "got scammed out of my savings!$"

Route33_Rocket_F_Text_0:
# 28 "data/maps/Route33/scripts.pory"
	.string "Hi, kid! Got any spare cash?\n"
	.string "I'll give you a SLOWPOKE TAIL!$"

Route33_Rocket_F_Text_1:
# 39 "data/maps/Route33/scripts.pory"
	.string "Aww, thanks, kid!$"

Route33_Rocket_F_Text_2:
# 43 "data/maps/Route33/scripts.pory"
	.string "Darn!\n"
	.string "You don't have enough... Shoo!$"

Route33_Rocket_F_Text_3:
# 48 "data/maps/Route33/scripts.pory"
	.string "Darn! I'd offer you a job, but\n"
	.string "you're way too young! Shoo!$"

Route33_UnionCave_North_Sign_Text_0:
# 59 "data/maps/Route33/scripts.pory"
	.string "ROUTE 33 - UNION CAVE\n"
	.string "AZALEA TOWN is beyond the tunnel!$"

Route33_UnionCave_South_Sign_Text_0:
# 68 "data/maps/Route33/scripts.pory"
	.string "ROUTE 33 - AZALEA TOWN\n"
	.string "UNION CAVE ahead!$"

Route33_BugCatcher_Text_0:
# 78 "data/maps/Route33/scripts.pory"
	.string "Some BUG POKéMON can get pretty\n"
	.string "big... Like HERACROSS, for example.$"

Route33_Hiker_Anthony_Battle_Text_0:
# 86 "data/maps/Route33/scripts.pory"
	.string "Hey, now!\n"
	.string "All that glitters is gold!$"

Route33_Hiker_Anthony_Battle_Text_1:
# 86 "data/maps/Route33/scripts.pory"
	.string "You're a rock star!$"

Route33_Hiker_Anthony_Battle_Text_2:
# 87 "data/maps/Route33/scripts.pory"
	.string "Do you think it'll ever rain around\n"
	.string "here anytime soon?$"
