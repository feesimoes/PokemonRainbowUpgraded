MtMora_MapScripts::
	.byte 0


MtMora_Sign::
# 5 "data/maps/MtMora/scripts.pory"
	lock
# 6 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Sign_Text_0
# 7 "data/maps/MtMora/scripts.pory"
	closemessage
# 8 "data/maps/MtMora/scripts.pory"
	release
	end


MtMora_Mew_Encounter::
# 14 "data/maps/MtMora/scripts.pory"
	lock
# 15 "data/maps/MtMora/scripts.pory"
	msgbox MtMora_Mew_Encounter_Text_0
# 16 "data/maps/MtMora/scripts.pory"
	waitmessage
# 17 "data/maps/MtMora/scripts.pory"
	closemessage
# 18 "data/maps/MtMora/scripts.pory"
	setwildbattle SPECIES_MEW, 30, ITEM_NONE
# 19 "data/maps/MtMora/scripts.pory"
	dowildbattle
# 20 "data/maps/MtMora/scripts.pory"
	release
	end


MtMora_Sign_Text_0:
# 6 "data/maps/MtMora/scripts.pory"
	.string "MT. MORA - KAIETEUR JUNGLE\n"
	.string "The mythical peak of GUYANA.$"

MtMora_Mew_Encounter_Text_0:
# 15 "data/maps/MtMora/scripts.pory"
	.string "Myuu...$"
