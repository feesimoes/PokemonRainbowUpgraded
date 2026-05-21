LakeOfRage_MapScripts::
# 3 "data/maps/LakeOfRage/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, LakeOfRage_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

LakeOfRage_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/LakeOfRage/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_LAKE_OF_RAGE
	return


LakeOfRage_Sign::
# 11 "data/maps/LakeOfRage/scripts.pory"
	lock
# 12 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_Sign_Text_0
# 13 "data/maps/LakeOfRage/scripts.pory"
	closemessage
# 14 "data/maps/LakeOfRage/scripts.pory"
	release
	end


LakeOfRage_FishingGurus_House_Sign::
# 20 "data/maps/LakeOfRage/scripts.pory"
	lock
# 21 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_FishingGurus_House_Sign_Text_0
# 22 "data/maps/LakeOfRage/scripts.pory"
	closemessage
# 23 "data/maps/LakeOfRage/scripts.pory"
	release
	end


LakeOfRage_Beauty::
# 29 "data/maps/LakeOfRage/scripts.pory"
	lock
# 30 "data/maps/LakeOfRage/scripts.pory"
	faceplayer
# 31 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_Beauty_Text_0
# 32 "data/maps/LakeOfRage/scripts.pory"
	closemessage
# 33 "data/maps/LakeOfRage/scripts.pory"
	release
	end


LakeOfRage_Old_Man_1::
# 39 "data/maps/LakeOfRage/scripts.pory"
	lock
# 40 "data/maps/LakeOfRage/scripts.pory"
	faceplayer
# 41 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_Old_Man_1_Text_0
# 42 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_Old_Man_1_Text_1
# 43 "data/maps/LakeOfRage/scripts.pory"
	closemessage
# 44 "data/maps/LakeOfRage/scripts.pory"
	release
	end


LakeOfRage_RedGyarados::
# 50 "data/maps/LakeOfRage/scripts.pory"
	lock
# 51 "data/maps/LakeOfRage/scripts.pory"
	faceplayer
# 52 "data/maps/LakeOfRage/scripts.pory"
	msgbox LakeOfRage_RedGyarados_Text_0
# 53 "data/maps/LakeOfRage/scripts.pory"
	closemessage
# 54 "data/maps/LakeOfRage/scripts.pory"
	waitse
# 55 "data/maps/LakeOfRage/scripts.pory"
	setwildbattle SPECIES_GYARADOS, 60, ITEM_NONE
# 56 "data/maps/LakeOfRage/scripts.pory"
	special MakeEnemyPartyMonShinyWithMoves
# 57 "data/maps/LakeOfRage/scripts.pory"
	setflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 58 "data/maps/LakeOfRage/scripts.pory"
	special StartLegendaryBattle
# 59 "data/maps/LakeOfRage/scripts.pory"
	waitstate
# 60 "data/maps/LakeOfRage/scripts.pory"
	clearflag FLAG_SYS_SPECIAL_WILD_BATTLE
# 61 "data/maps/LakeOfRage/scripts.pory"
	setflag FLAG_HIDE_LAKE_OF_RAGE_RED_GYARADOS
# 62 "data/maps/LakeOfRage/scripts.pory"
	removeobject LOCALID_LAKE_OF_RAGE_GYARADOS
# 63 "data/maps/LakeOfRage/scripts.pory"
	release
	end


LakeOfRage_Sign_Text_0:
# 12 "data/maps/LakeOfRage/scripts.pory"
	.string "LAKE OF RAGE -\n"
	.string "Also known as GYARADOS LAKE!\p"
	.string "Beware of wild GYARADOS gathering,\n"
	.string "a nasty storm may be brewing!$"

LakeOfRage_FishingGurus_House_Sign_Text_0:
# 21 "data/maps/LakeOfRage/scripts.pory"
	.string "LAKE OF RAGE -\n"
	.string "FISHING GURU'S HOUSE$"

LakeOfRage_Beauty_Text_0:
# 31 "data/maps/LakeOfRage/scripts.pory"
	.string "This lake is so pretty...\n"
	.string "Everything I could ever want...\p"
	.string "It's here!\n"
	.string "It's really... All here!$"

LakeOfRage_Old_Man_1_Text_0:
# 41 "data/maps/LakeOfRage/scripts.pory"
	.string "If you see a group of GYARADOS\n"
	.string "gathering on the lakefront...\p"
	.string "You should leave, immediately.$"

LakeOfRage_Old_Man_1_Text_1:
# 42 "data/maps/LakeOfRage/scripts.pory"
	.string "But on stormy days\n"
	.string "when the rain won't stop...\p"
	.string "A crimson shadow moves beneath the\n"
	.string "surface.\n"
	.string "Only comes when the storm does.$"

LakeOfRage_RedGyarados_Text_0:
# 52 "data/maps/LakeOfRage/scripts.pory"
	.string "A strange crimson GYARADOS...\n"
	.string "It stares at you with fury.\p"
	.string "This is no ordinary creature.$"
