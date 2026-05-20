RuinsOfAlph_MapScripts::
# 3 "data/maps/RuinsOfAlph/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, RuinsOfAlph_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

RuinsOfAlph_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/RuinsOfAlph/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_RUINS_OF_ALPH
	return


RuinsOfAlph_ShinyTest::
# 11 "data/maps/RuinsOfAlph/scripts.pory"
	lock
# 12 "data/maps/RuinsOfAlph/scripts.pory"
	faceplayer
# 13 "data/maps/RuinsOfAlph/scripts.pory"
	setvar VAR_0x8000, SPECIES_BELDUM
# 14 "data/maps/RuinsOfAlph/scripts.pory"
	setvar VAR_0x8001, 5
# 15 "data/maps/RuinsOfAlph/scripts.pory"
	callnative Native_GeneratePreviewMon
# 16 "data/maps/RuinsOfAlph/scripts.pory"
	setvar VAR_0x8002, 10
# 17 "data/maps/RuinsOfAlph/scripts.pory"
	setvar VAR_0x8003, 3
# 18 "data/maps/RuinsOfAlph/scripts.pory"
	callnative Native_ShowPreviewMon
# 19 "data/maps/RuinsOfAlph/scripts.pory"
	msgbox RuinsOfAlph_ShinyTest_Text_0, MSGBOX_YESNO
# 20 "data/maps/RuinsOfAlph/scripts.pory"
	closemessage
# 21 "data/maps/RuinsOfAlph/scripts.pory"
	hidemonpic
# 22 "data/maps/RuinsOfAlph/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq RuinsOfAlph_ShinyTest_2
# 43 "data/maps/RuinsOfAlph/scripts.pory"
	msgbox RuinsOfAlph_ShinyTest_Text_4
# 44 "data/maps/RuinsOfAlph/scripts.pory"
	closemessage
RuinsOfAlph_ShinyTest_1:
# 47 "data/maps/RuinsOfAlph/scripts.pory"
	release
	end

RuinsOfAlph_ShinyTest_2:
# 24 "data/maps/RuinsOfAlph/scripts.pory"
	msgbox RuinsOfAlph_ShinyTest_Text_1
# 25 "data/maps/RuinsOfAlph/scripts.pory"
	closemessage
# 26 "data/maps/RuinsOfAlph/scripts.pory"
	callnative Native_GivePreviewMon
# 27 "data/maps/RuinsOfAlph/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 28 "data/maps/RuinsOfAlph/scripts.pory"
	waitfanfare
# 29 "data/maps/RuinsOfAlph/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 30 "data/maps/RuinsOfAlph/scripts.pory"
	goto_if_set FLAG_GOT_SHINY_POKEMON, RuinsOfAlph_ShinyTest_6
# 37 "data/maps/RuinsOfAlph/scripts.pory"
	msgbox RuinsOfAlph_ShinyTest_Text_3
RuinsOfAlph_ShinyTest_5:
# 39 "data/maps/RuinsOfAlph/scripts.pory"
	closemessage
	goto RuinsOfAlph_ShinyTest_1

RuinsOfAlph_ShinyTest_6:
# 32 "data/maps/RuinsOfAlph/scripts.pory"
	msgbox RuinsOfAlph_ShinyTest_Text_2
# 33 "data/maps/RuinsOfAlph/scripts.pory"
	clearflag FLAG_GOT_SHINY_POKEMON
	goto RuinsOfAlph_ShinyTest_5


RuinsOfAlph_ShinyTest_Text_0:
# 19 "data/maps/RuinsOfAlph/scripts.pory"
	.string "This is a random, weird POKéMON I\n"
	.string "found, among these rocks, here.\p"
	.string "You don't want it, or...\n"
	.string "Do you, {PLAYER}?$"

RuinsOfAlph_ShinyTest_Text_1:
# 24 "data/maps/RuinsOfAlph/scripts.pory"
	.string "Fine, you can have it.\n"
	.string "It doesn't exist, yet, anyways.$"

RuinsOfAlph_ShinyTest_Text_2:
# 32 "data/maps/RuinsOfAlph/scripts.pory"
	.string "you got a shiny god\n"
	.string "omg$"

RuinsOfAlph_ShinyTest_Text_3:
# 37 "data/maps/RuinsOfAlph/scripts.pory"
	.string "not shiny\n"
	.string "darn$"

RuinsOfAlph_ShinyTest_Text_4:
# 43 "data/maps/RuinsOfAlph/scripts.pory"
	.string "Fine, whatever.\n"
	.string "See you around.$"
