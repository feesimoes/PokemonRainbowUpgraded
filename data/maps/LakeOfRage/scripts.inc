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
	.string "You should leave, immediately.\n"
	.string "Horribly strong RED GYARADOS...$"

LakeOfRage_Old_Man_1_Text_1:
# 42 "data/maps/LakeOfRage/scripts.pory"
	.string "It's quite rare...\n"
	.string "But don't underestimate it, young one.$"
