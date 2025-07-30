TohjoFalls_B8F_Lair_MapScripts::
# 3 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TohjoFalls_B8F_Lair_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TohjoFalls_B8F_Lair_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	setvar VAR_EXPLORER_KIT, 0
	return


TohjoFalls_B8F_Lair_Giovanni_Battle::
# 10 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	trainerbattle_single TRAINER_BOSS_GIOVANNI_3, TohjoFalls_B8F_Lair_Giovanni_Battle_Text_0, TohjoFalls_B8F_Lair_Giovanni_Battle_Text_1
# 11 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	msgbox TohjoFalls_B8F_Lair_Giovanni_Battle_Text_2
# 12 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	waitmessage
# 13 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	closemessage
	return


TohjoFalls_B8F_Lair_Giovanni_Battle_Text_0:
# 10 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	.string "Take a look around you... {PLAYER}.\n"
	.string "Being here, it is no easy feat.\p"
	.string "For that, I commend you.\n"
	.string "...But.\p"
	.string "I take it you're here due\n"
	.string "to the lies you saw past.\p"
	.string "Very well! You want the truth?\n"
	.string "So be it!$"

TohjoFalls_B8F_Lair_Giovanni_Battle_Text_1:
# 10 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	.string "Hah! Excellent...\n"
	.string "If you can defeat my MEWTWO, well...$"

TohjoFalls_B8F_Lair_Giovanni_Battle_Text_2:
# 11 "data/maps/TohjoFalls_B8F_Lair/scripts.pory"
	.string "Ha!\n"
	.string "That was truly an intense fight...\p"
	.string "You have won, again!\n"
	.string "...But we'll meet again!$"
