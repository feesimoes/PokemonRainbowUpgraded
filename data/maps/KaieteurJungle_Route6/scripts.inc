KaieteurJungle_Route6_MapScripts::
	.byte 0


KaieteurJungle_Route6_Sign::
# 5 "data/maps/KaieteurJungle_Route6/scripts.pory"
	lock
# 6 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_Sign_Text_0
# 7 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 8 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end


KaieteurJungle_Route6_FerryToSlateport::
# 14 "data/maps/KaieteurJungle_Route6/scripts.pory"
	lock
# 15 "data/maps/KaieteurJungle_Route6/scripts.pory"
	faceplayer
# 16 "data/maps/KaieteurJungle_Route6/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 17 "data/maps/KaieteurJungle_Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaieteurJungle_Route6_FerryToSlateport_1
# 44 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_3
# 45 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 46 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end

KaieteurJungle_Route6_FerryToSlateport_1:
# 19 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_0, MSGBOX_YESNO
# 20 "data/maps/KaieteurJungle_Route6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KaieteurJungle_Route6_FerryToSlateport_4
# 36 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_2
# 37 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 38 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end

KaieteurJungle_Route6_FerryToSlateport_4:
# 22 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_1
# 23 "data/maps/KaieteurJungle_Route6/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_KAIETEUR_JUNGLE
# 24 "data/maps/KaieteurJungle_Route6/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_SLATEPORT_CITY
# 25 "data/maps/KaieteurJungle_Route6/scripts.pory"
	waitmessage
# 26 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 27 "data/maps/KaieteurJungle_Route6/scripts.pory"
	delay 20
# 28 "data/maps/KaieteurJungle_Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 29 "data/maps/KaieteurJungle_Route6/scripts.pory"
	special DoSeagallopFerryScene
# 30 "data/maps/KaieteurJungle_Route6/scripts.pory"
	waitstate
# 31 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end


KaieteurJungle_Route6_Sign_Text_0:
# 6 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "It's a notice from DR. FUJI,\n"
	.string "dated: September 6th, 1996.\p"
	.string "If any human sets foot\n"
	.string "here, again...\p"
	.string "Let it be a kind-hearted person.\p"
	.string "With that hope, I depart\n"
	.string "from GUYANA...$"

KaieteurJungle_Route6_FerryToSlateport_Text_0:
# 19 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Ah, what's this?\n"
	.string "You have a map, eh?\p"
	.string "Are you up for an adventure?$"

KaieteurJungle_Route6_FerryToSlateport_Text_1:
# 22 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Alright, let's head out!\n"
	.string "We'll be setting upstream to sea.$"

KaieteurJungle_Route6_FerryToSlateport_Text_2:
# 36 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "My boat works just fine!\n"
	.string "It's tough sailing without a map.$"

KaieteurJungle_Route6_FerryToSlateport_Text_3:
# 44 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Are you lost?\n"
	.string "My boat works just fine!\p"
	.string "Without a map to navigate,\n"
	.string "though, it's risky...$"
