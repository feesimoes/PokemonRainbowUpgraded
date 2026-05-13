KaieteurJungle_Route6_MapScripts::
	.byte 0


KaieteurJungle_Route6_Sign::
# 6 "data/maps/KaieteurJungle_Route6/scripts.pory"
	lock
# 7 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_Sign_Text_0
# 8 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 9 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end


KaieteurJungle_Route6_DrFuji_Memo_Sign::
# 15 "data/maps/KaieteurJungle_Route6/scripts.pory"
	lock
# 16 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_DrFuji_Memo_Sign_Text_0
# 17 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 18 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end


KaieteurJungle_Route6_FerryToSlateport::
# 24 "data/maps/KaieteurJungle_Route6/scripts.pory"
	lock
# 25 "data/maps/KaieteurJungle_Route6/scripts.pory"
	faceplayer
# 26 "data/maps/KaieteurJungle_Route6/scripts.pory"
	checkitem ITEM_OLD_SEA_MAP, 1
# 27 "data/maps/KaieteurJungle_Route6/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq KaieteurJungle_Route6_FerryToSlateport_1
# 54 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_3
# 55 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 56 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end

KaieteurJungle_Route6_FerryToSlateport_1:
# 29 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_0, MSGBOX_YESNO
# 30 "data/maps/KaieteurJungle_Route6/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq KaieteurJungle_Route6_FerryToSlateport_4
# 46 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_2
# 47 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 48 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end

KaieteurJungle_Route6_FerryToSlateport_4:
# 32 "data/maps/KaieteurJungle_Route6/scripts.pory"
	msgbox KaieteurJungle_Route6_FerryToSlateport_Text_1
# 33 "data/maps/KaieteurJungle_Route6/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_KAIETEUR_JUNGLE
# 34 "data/maps/KaieteurJungle_Route6/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_SLATEPORT_CITY
# 35 "data/maps/KaieteurJungle_Route6/scripts.pory"
	waitmessage
# 36 "data/maps/KaieteurJungle_Route6/scripts.pory"
	closemessage
# 37 "data/maps/KaieteurJungle_Route6/scripts.pory"
	delay 20
# 38 "data/maps/KaieteurJungle_Route6/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/KaieteurJungle_Route6/scripts.pory"
	special DoSeagallopFerryScene
# 40 "data/maps/KaieteurJungle_Route6/scripts.pory"
	waitstate
# 41 "data/maps/KaieteurJungle_Route6/scripts.pory"
	release
	end


KaieteurJungle_Route6_Sign_Text_0:
# 7 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "KAIETEUR JUNGLE -\n"
	.string "ROUTE 6$"

KaieteurJungle_Route6_DrFuji_Memo_Sign_Text_0:
# 16 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "It's a notice from DR. FUJI,\n"
	.string "dated: SEPTEMBER 6, 1996.\p"
	.string "If any human sets foot\n"
	.string "here, again...\p"
	.string "Let it be a kind-hearted person.\p"
	.string "With that hope, I depart\n"
	.string "from GUYANA...$"

KaieteurJungle_Route6_FerryToSlateport_Text_0:
# 29 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Ah, what's this?\n"
	.string "You have a map, eh?\p"
	.string "Are you up for an adventure?$"

KaieteurJungle_Route6_FerryToSlateport_Text_1:
# 32 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Alright, let's head out!\n"
	.string "We'll be setting upstream to sea.$"

KaieteurJungle_Route6_FerryToSlateport_Text_2:
# 46 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "My boat works just fine!\n"
	.string "It's tough sailing without a map.$"

KaieteurJungle_Route6_FerryToSlateport_Text_3:
# 54 "data/maps/KaieteurJungle_Route6/scripts.pory"
	.string "Are you lost?\n"
	.string "My boat works just fine!\p"
	.string "Without a map to navigate,\n"
	.string "though, it's risky...$"
