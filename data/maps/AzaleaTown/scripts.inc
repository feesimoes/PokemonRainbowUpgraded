AzaleaTown_MapScripts::
	.byte 0


AzaleaTown_Test_Gold_Kris_VS_Music::
# 5 "data/maps/AzaleaTown/scripts.pory"
	lock
# 6 "data/maps/AzaleaTown/scripts.pory"
	fadeoutbgm 0
# 7 "data/maps/AzaleaTown/scripts.pory"
	playbgm MUS_ROUTE47, TRUE
# 8 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Kurts_House_Sign::
# 14 "data/maps/AzaleaTown/scripts.pory"
	lock
# 15 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Kurts_House_Sign_Text_0
# 16 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 17 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Gym_Sign::
# 23 "data/maps/AzaleaTown/scripts.pory"
	lock
# 24 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Gym_Sign_Text_0
# 25 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 26 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_IlexForest_Ahead_Sign::
# 32 "data/maps/AzaleaTown/scripts.pory"
	lock
# 33 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_IlexForest_Ahead_Sign_Text_0
# 34 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 35 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Charcoal_Kiln_Sign::
# 41 "data/maps/AzaleaTown/scripts.pory"
	lock
# 42 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Charcoal_Kiln_Sign_Text_0
# 43 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 44 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Sign::
# 50 "data/maps/AzaleaTown/scripts.pory"
	lock
# 51 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Sign_Text_0
# 52 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 53 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Slowpoke_Well_Sign::
# 59 "data/maps/AzaleaTown/scripts.pory"
	lock
# 60 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Slowpoke_Well_Sign_Text_0
# 61 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 62 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Balding_Man::
# 68 "data/maps/AzaleaTown/scripts.pory"
	lock
# 69 "data/maps/AzaleaTown/scripts.pory"
	faceplayer
# 70 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Balding_Man_Text_0
# 71 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 72 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Youngster::
# 78 "data/maps/AzaleaTown/scripts.pory"
	lock
# 79 "data/maps/AzaleaTown/scripts.pory"
	faceplayer
# 80 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Youngster_Text_0
# 81 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 82 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Little_Girl::
# 88 "data/maps/AzaleaTown/scripts.pory"
	lock
# 89 "data/maps/AzaleaTown/scripts.pory"
	faceplayer
# 90 "data/maps/AzaleaTown/scripts.pory"
	msgbox AzaleaTown_Little_Girl_Text_0
# 91 "data/maps/AzaleaTown/scripts.pory"
	closemessage
# 92 "data/maps/AzaleaTown/scripts.pory"
	release
	end


AzaleaTown_Kurts_House_Sign_Text_0:
# 15 "data/maps/AzaleaTown/scripts.pory"
	.string "KURT'S HOUSE$"

AzaleaTown_Gym_Sign_Text_0:
# 24 "data/maps/AzaleaTown/scripts.pory"
	.string "AZALEA TOWN POKéMON GYM\n"
	.string "LEADER: KURT\p"
	.string "The masterful artisan from times\n"
	.string "thought to be long gone!$"

AzaleaTown_IlexForest_Ahead_Sign_Text_0:
# 33 "data/maps/AzaleaTown/scripts.pory"
	.string "AZALEA TOWN - ILEX FOREST\n"
	.string "ROUTE 34 to GOLDENROD CITY ahead!$"

AzaleaTown_Charcoal_Kiln_Sign_Text_0:
# 42 "data/maps/AzaleaTown/scripts.pory"
	.string "AZALEA TOWN -\n"
	.string "CHARCOAL KILN\p"
	.string "We let our FARFETCH'D fetch us\n"
	.string "branches for charcoal!$"

AzaleaTown_Sign_Text_0:
# 51 "data/maps/AzaleaTown/scripts.pory"
	.string "AZALEA TOWN -\n"
	.string "Living happily with POKéMON!$"

AzaleaTown_Slowpoke_Well_Sign_Text_0:
# 60 "data/maps/AzaleaTown/scripts.pory"
	.string "AZALEA TOWN - SLOWPOKE WELL\n"
	.string "Also known as RAINMAKER WELL!\p"
	.string "It is believed that SLOWPOKE'S\n"
	.string "YAWN summons the rain...\p"
	.string "Records dated 400 years ago prove\n"
	.string "this very assumption.$"

AzaleaTown_Balding_Man_Text_0:
# 70 "data/maps/AzaleaTown/scripts.pory"
	.string "Some of these BUG CATCHERS are\n"
	.string "quite bothersome younglings...\p"
	.string "BUGSY is no exception! He's not too\n"
	.string "useful at our CHARCOAL KILN...$"

AzaleaTown_Youngster_Text_0:
# 80 "data/maps/AzaleaTown/scripts.pory"
	.string "Some grown-ups feel like comfy\n"
	.string "clothing shouldn't be year-round.\p"
	.string "You know what I mean?$"

AzaleaTown_Little_Girl_Text_0:
# 90 "data/maps/AzaleaTown/scripts.pory"
	.string "They say sometimes kids who go into\n"
	.string "ILEX FOREST return differently...\p"
	.string "But sometimes they don't return!\n"
	.string "That's kind of scary...$"
