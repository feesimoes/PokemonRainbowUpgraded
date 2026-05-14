Route32_MapScripts::
	.byte 0


Route32_Sign::
# 5 "data/maps/Route32/scripts.pory"
	lock
# 6 "data/maps/Route32/scripts.pory"
	msgbox Route32_Sign_Text_0
# 7 "data/maps/Route32/scripts.pory"
	closemessage
# 8 "data/maps/Route32/scripts.pory"
	release
	end


Route32_RuinsOfAlph_Sign::
# 14 "data/maps/Route32/scripts.pory"
	lock
# 15 "data/maps/Route32/scripts.pory"
	msgbox Route32_RuinsOfAlph_Sign_Text_0
# 16 "data/maps/Route32/scripts.pory"
	closemessage
# 17 "data/maps/Route32/scripts.pory"
	release
	end


Route32_ToCherrygrove_Sign::
# 23 "data/maps/Route32/scripts.pory"
	lock
# 24 "data/maps/Route32/scripts.pory"
	msgbox Route32_ToCherrygrove_Sign_Text_0
# 25 "data/maps/Route32/scripts.pory"
	closemessage
# 26 "data/maps/Route32/scripts.pory"
	release
	end


Route32_Hiker::
# 32 "data/maps/Route32/scripts.pory"
	lock
# 33 "data/maps/Route32/scripts.pory"
	faceplayer
# 34 "data/maps/Route32/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, Route32_Hiker_2
# 61 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_5
# 62 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_6
Route32_Hiker_1:
# 64 "data/maps/Route32/scripts.pory"
	closemessage
# 65 "data/maps/Route32/scripts.pory"
	release
	end

Route32_Hiker_2:
# 36 "data/maps/Route32/scripts.pory"
	goto_if_set FLAG_GOT_SHELL_BELL_ROUTE32, Route32_Hiker_5
# 55 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_1
# 56 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_2
	goto Route32_Hiker_1

Route32_Hiker_5:
# 38 "data/maps/Route32/scripts.pory"
	checkitemspace ITEM_SHELL_BELL, 1
# 39 "data/maps/Route32/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route32_Hiker_8
# 49 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_3
# 50 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_4
	goto Route32_Hiker_1

Route32_Hiker_8:
# 41 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_0
# 42 "data/maps/Route32/scripts.pory"
	giveitem ITEM_SHELL_BELL, 1
# 43 "data/maps/Route32/scripts.pory"
	waitfanfare
# 44 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_1
# 45 "data/maps/Route32/scripts.pory"
	msgbox Route32_Hiker_Text_2
	goto Route32_Hiker_1


Route32_EventScript_CooltrainerMatheus::
# 73 "data/maps/Route32/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_MATHEUS, 0, Route32_Text_CooltrainerMatheusIntro, Route32_Text_CooltrainerMatheusDefeated
# 76 "data/maps/Route32/scripts.pory"
	msgbox Route32_EventScript_CooltrainerMatheus_Text_0
# 77 "data/maps/Route32/scripts.pory"
	closemessage
# 78 "data/maps/Route32/scripts.pory"
	releaseall
	end


Route32_Sign_Text_0:
# 6 "data/maps/Route32/scripts.pory"
	.string "ROUTE 32 - CHERRYGROVE BAY\n"
	.string "ROUTE 33 - UNION CAVE\p"
	.string "A path crossed by MAGNET TRAIN\n"
	.string "BRIDGE. Nature meets technology!$"

Route32_RuinsOfAlph_Sign_Text_0:
# 15 "data/maps/Route32/scripts.pory"
	.string "ROUTE 32 - RUINS OF ALPH\n"
	.string "VIOLET CITY is also up ahead!$"

Route32_ToCherrygrove_Sign_Text_0:
# 24 "data/maps/Route32/scripts.pory"
	.string "ROUTE 32 - CHERRYGROVE BAY\n"
	.string "Path to CHERRYGROVE CITY ahead!$"

Route32_Hiker_Text_0:
# 41 "data/maps/Route32/scripts.pory"
	.string "Oh, that's...\n"
	.string "The ZEPHYR BADGE, isn't it?\p"
	.string "Very nice, well done!\n"
	.string "I think I could part with this.$"

Route32_Hiker_Text_1:
# 44 "data/maps/Route32/scripts.pory"
	.string "That's a SHELL BELL.\n"
	.string "I got it from HOENN'S SHOAL CAVE.\p"
	.string "I just had to give the old-\n"
	.string "timer four SHOAL SALTS and SHELLS.$"

Route32_Hiker_Text_2:
# 45 "data/maps/Route32/scripts.pory"
	.string "If you have a POKéMON in your\n"
	.string "PARTY hold it...\p"
	.string "They should regain some lost HP,\n"
	.string "if they deal damage, that is!$"

Route32_Hiker_Text_3:
# 49 "data/maps/Route32/scripts.pory"
	.string "Oh, that's...\n"
	.string "The ZEPHYR BADGE, isn't it?\p"
	.string "Very nice, well done!\n"
	.string "I'd give you something, but...$"

Route32_Hiker_Text_4:
# 50 "data/maps/Route32/scripts.pory"
	.string "Do you think you could clear up\n"
	.string "some space in your BAG, first?$"

Route32_Hiker_Text_5:
# 61 "data/maps/Route32/scripts.pory"
	.string "Oh, is that right?\n"
	.string "You came all the way from KANTO?\p"
	.string "That's impressive. Are you thinking\n"
	.string "of earning JOHTO BADGES, too?$"

Route32_Hiker_Text_6:
# 62 "data/maps/Route32/scripts.pory"
	.string "Let me know when you get\n"
	.string "WALKER'S ZEPHYR BADGE, alright?$"

Route32_EventScript_CooltrainerMatheus_Text_0:
# 76 "data/maps/Route32/scripts.pory"
	.string "Poxa, eu perdi...$"

Route32_Text_CooltrainerMatheusIntro::
# 82 "data/maps/Route32/scripts.pory"
	.string "Aqui nao tem moleza!\n"
	.string "Vamos nessa batalhar.$"

Route32_Text_CooltrainerMatheusDefeated::
# 87 "data/maps/Route32/scripts.pory"
	.string "Sensacional...\p"
	.string "Voce eh diferenciado.$"
