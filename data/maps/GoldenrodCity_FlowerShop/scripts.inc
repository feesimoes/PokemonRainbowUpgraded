GoldenrodCity_FlowerShop_MapScripts::
	.byte 0


GoldenrodCity_FlowerShop_Little_Girl::
# 5 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	lock
# 6 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	faceplayer
# 7 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Little_Girl_Text_0
# 8 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	closemessage
# 9 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	release
	end


GoldenrodCity_FlowerShop_Old_Woman::
# 15 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	lock
# 16 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	faceplayer
# 17 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Old_Woman_Text_0
# 18 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	closemessage
# 19 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	release
	end


GoldenrodCity_FlowerShop_Beauty::
# 25 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	lock
# 26 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	faceplayer
# 27 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Beauty_Text_0
# 28 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	closemessage
# 29 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	release
	end


GoldenrodCity_FlowerShop_Woman_1::
# 35 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	lock
# 36 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	faceplayer
# 37 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	checkitem ITEM_SQUIRT_BOTTLE, 1
# 38 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GoldenrodCity_FlowerShop_Woman_1_2
# 44 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Woman_1_Text_1
# 45 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 46 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	giveitem_msg GoldenrodCity_FlowerShop_Woman_1_Text_2, ITEM_SQUIRT_BOTTLE, 1, MUS_OBTAIN_KEY_ITEM
# 47 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	waitmessage
# 48 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	waitfanfare
# 49 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 50 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Woman_1_Text_3
GoldenrodCity_FlowerShop_Woman_1_1:
# 52 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	closemessage
# 53 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	release
	end

GoldenrodCity_FlowerShop_Woman_1_2:
# 40 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	msgbox GoldenrodCity_FlowerShop_Woman_1_Text_0
	goto GoldenrodCity_FlowerShop_Woman_1_1


GoldenrodCity_FlowerShop_Little_Girl_Text_0:
# 7 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "My voice sounds so weird!\n"
	.string "Have you ever listened to yours?$"

GoldenrodCity_FlowerShop_Old_Woman_Text_0:
# 17 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "What's that, you say?\n"
	.string "I'm so beautiful...?\p"
	.string "I know it!$"

GoldenrodCity_FlowerShop_Beauty_Text_0:
# 27 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "Every day is a constant struggle...\n"
	.string "In the mirror, I look so ugly!$"

GoldenrodCity_FlowerShop_Woman_1_Text_0:
# 40 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "Plants are like POKéMON, you know...\n"
	.string "Treat them with love and care!$"

GoldenrodCity_FlowerShop_Woman_1_Text_1:
# 44 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "Hello! Oh, you're from KANTO?!\n"
	.string "Hmm... You definitely need this!$"

GoldenrodCity_FlowerShop_Woman_1_Text_2:
# 46 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "{PLAYER} got a SQUIRT BOTTLE from\n"
	.string "the enthusiastic woman.$"

GoldenrodCity_FlowerShop_Woman_1_Text_3:
# 50 "data/maps/GoldenrodCity_FlowerShop/scripts.pory"
	.string "With that, you can grow BERRIES!\n"
	.string "Treat all plants with love and care!$"
