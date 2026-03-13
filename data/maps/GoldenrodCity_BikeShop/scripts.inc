GoldenrodCity_BikeShop_MapScripts::
	.byte 0


GoldenrodCity_BikeShop_Clerk::
# 5 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	lock
# 6 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	faceplayer
# 7 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_0
# 8 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE, GoldenrodCity_BikeShop_Clerk_2
# 78 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_13
# 79 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_14
GoldenrodCity_BikeShop_Clerk_1:
# 81 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	closemessage
# 82 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	release
	end

GoldenrodCity_BikeShop_Clerk_2:
# 10 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	goto_if_set FLAG_GOT_BICYCLE_SPEED_UPGRADE, GoldenrodCity_BikeShop_Clerk_5
# 17 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	goto_if_set FLAG_WAITING_FOR_BICYCLE_UPGRADE, GoldenrodCity_BikeShop_Clerk_8
# 56 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_8
# 57 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_9, MSGBOX_YESNO
# 58 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GoldenrodCity_BikeShop_Clerk_18
# 71 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_12
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_5:
# 12 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_1
# 13 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_2
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_8:
# 19 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	setvar VAR_RESULT, 0
# 20 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	copyvar VAR_RESULT, VAR_TIME_DAYS_PLAYED
# 21 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	subvar VAR_RESULT, VAR_MIRACLE_CYCLE_UPGRADE
# 23 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GoldenrodCity_BikeShop_Clerk_11
# 27 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq GoldenrodCity_BikeShop_Clerk_12
# 31 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq GoldenrodCity_BikeShop_Clerk_13
# 44 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_7
# 45 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	closemessage
# 46 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	giveitem ITEM_BICYCLE, 1
# 47 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	clearflag FLAG_WAITING_FOR_BICYCLE_UPGRADE
# 48 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	setflag FLAG_GOT_BICYCLE_SPEED_UPGRADE
# 49 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 50 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_2
# 51 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_6
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_11:
# 25 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_3
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_12:
# 29 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_4
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_13:
# 33 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_5
# 34 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	closemessage
# 35 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	giveitem ITEM_BICYCLE, 1
# 36 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	clearflag FLAG_WAITING_FOR_BICYCLE_UPGRADE
# 37 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	setflag FLAG_GOT_BICYCLE_SPEED_UPGRADE
# 38 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 39 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_2
# 40 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_6
	goto GoldenrodCity_BikeShop_Clerk_1

GoldenrodCity_BikeShop_Clerk_18:
# 60 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 61 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_10
# 62 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	closemessage
# 63 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	removeitem ITEM_BICYCLE, 1
# 64 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	copyvar VAR_MIRACLE_CYCLE_UPGRADE, VAR_TIME_DAYS_PLAYED
# 65 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	setflag FLAG_WAITING_FOR_BICYCLE_UPGRADE
# 66 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 67 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	msgbox GoldenrodCity_BikeShop_Clerk_Text_11
	goto GoldenrodCity_BikeShop_Clerk_1


GoldenrodCity_BikeShop_Clerk_Text_0:
# 7 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Hi, there.\n"
	.string "Thanks for stopping by!$"

GoldenrodCity_BikeShop_Clerk_Text_1:
# 12 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Please spread the word about\n"
	.string "MIRACLE CYCLE, loyal customer!\p"
	.string "Thank you so much!\n"
	.string "By the way, if you forgot...$"

GoldenrodCity_BikeShop_Clerk_Text_2:
# 13 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Your upgraded BICYCLE should be\n"
	.string "similar to your RUNNING SHOES.\p"
	.string "Press that 'B' button there to\n"
	.string "toggle the speed shift!$"

GoldenrodCity_BikeShop_Clerk_Text_3:
# 25 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "I'm still working on it.\n"
	.string "Come back in 2 days, okay?$"

GoldenrodCity_BikeShop_Clerk_Text_4:
# 29 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Hey! Your BICYCLE should be\n"
	.string "ready by tomorrow, first thing!\p"
	.string "Come back later, okay?\n"
	.string "Spread word of my SHOP!$"

GoldenrodCity_BikeShop_Clerk_Text_5:
# 33 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Hey, just on time!\n"
	.string "Your BICYCLE is ready now.$"

GoldenrodCity_BikeShop_Clerk_Text_6:
# 40 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Thank you so much for stopping\n"
	.string "by. Please spread the word!$"

GoldenrodCity_BikeShop_Clerk_Text_7:
# 44 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Hey, you took your time!\n"
	.string "Your BICYCLE is ready now.$"

GoldenrodCity_BikeShop_Clerk_Text_8:
# 56 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "This is MIRACLE CYCLE!\n"
	.string "We're a small BICYCLE SHOP...\p"
	.string "Your BICYCLE seems to be in\n"
	.string "bad shape! I could fix it...$"

GoldenrodCity_BikeShop_Clerk_Text_9:
# 57 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "No, it won't cost you a cent!\n"
	.string "I might need time, though.\p"
	.string "At most, give me a couple days.\n"
	.string "So, how about it?$"

GoldenrodCity_BikeShop_Clerk_Text_10:
# 61 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "{PLAYER} handed over the BICYCLE\n"
	.string "to the MIRACLE CYCLE shopkeeper.$"

GoldenrodCity_BikeShop_Clerk_Text_11:
# 67 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Great! Hmm... I got this.\n"
	.string "Come back in 2 days, okay?$"

GoldenrodCity_BikeShop_Clerk_Text_12:
# 71 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "No worries!\n"
	.string "Come back whenever...\p"
	.string "Please refer MIRACLE CYCLE to your\n"
	.string "friends, too!$"

GoldenrodCity_BikeShop_Clerk_Text_13:
# 78 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "Hmm... You travelled a very\n"
	.string "long way to get here!\p"
	.string "A BICYCLE could be useful,\n"
	.string "but I don't sell them...$"

GoldenrodCity_BikeShop_Clerk_Text_14:
# 79 "data/maps/GoldenrodCity_BikeShop/scripts.pory"
	.string "I really only deal in repairs\n"
	.string "and upgrades to your BICYCLE.\p"
	.string "Sorry, please come again!\n"
	.string "Spread the word, too!$"
