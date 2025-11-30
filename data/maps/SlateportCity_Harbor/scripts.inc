SlateportCity_Harbor_MapScripts::
	.byte 0


SlateportCity_Harbor_FerryToGuyana::
# 5 "data/maps/SlateportCity_Harbor/scripts.pory"
	lock
# 6 "data/maps/SlateportCity_Harbor/scripts.pory"
	faceplayer
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_FerryToGuyana_Text_0, MSGBOX_YESNO
# 8 "data/maps/SlateportCity_Harbor/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq SlateportCity_Harbor_FerryToGuyana_1
# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_FerryToGuyana_Text_2
# 25 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 26 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
	end

SlateportCity_Harbor_FerryToGuyana_1:
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	msgbox SlateportCity_Harbor_FerryToGuyana_Text_1
# 11 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_SLATEPORT_CITY
# 12 "data/maps/SlateportCity_Harbor/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_KAIETEUR_JUNGLE
# 13 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitmessage
# 14 "data/maps/SlateportCity_Harbor/scripts.pory"
	closemessage
# 15 "data/maps/SlateportCity_Harbor/scripts.pory"
	delay 20
# 16 "data/maps/SlateportCity_Harbor/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/SlateportCity_Harbor/scripts.pory"
	special DoSeagallopFerryScene
# 18 "data/maps/SlateportCity_Harbor/scripts.pory"
	waitstate
# 19 "data/maps/SlateportCity_Harbor/scripts.pory"
	release
	end


SlateportCity_Harbor_FerryToGuyana_Text_0:
# 7 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Would you like to head\n"
	.string "out to the GUYANA REGION?$"

SlateportCity_Harbor_FerryToGuyana_Text_1:
# 10 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "Let's set sail!$"

SlateportCity_Harbor_FerryToGuyana_Text_2:
# 24 "data/maps/SlateportCity_Harbor/scripts.pory"
	.string "No worries, I'll be here.$"
