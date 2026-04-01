CeruleanCape_MapScripts::
	.byte 0


CeruleanCape_Lighthouse::
# 5 "data/maps/CeruleanCape/scripts.pory"
	lock
# 6 "data/maps/CeruleanCape/scripts.pory"
	msgbox CeruleanCape_Lighthouse_Text_0
# 7 "data/maps/CeruleanCape/scripts.pory"
	closemessage
# 8 "data/maps/CeruleanCape/scripts.pory"
	release
	end


CeruleanCape_Suicune::
# 14 "data/maps/CeruleanCape/scripts.pory"
	lock
# 15 "data/maps/CeruleanCape/scripts.pory"
	setwildbattle SPECIES_SUICUNE, 50, ITEM_NONE
# 16 "data/maps/CeruleanCape/scripts.pory"
	release
	end


CeruleanCape_Lighthouse_Text_0:
# 6 "data/maps/CeruleanCape/scripts.pory"
	.string "It's BILL'S LIGHTHOUSE!\n"
	.string "Darn! The door is locked...$"
