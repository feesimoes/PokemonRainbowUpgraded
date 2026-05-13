AzaleaTown_Mart_MapScripts::
	.byte 0


AzaleaTown_Mart_Clerk_1::
# 5 "data/maps/AzaleaTown_Mart/scripts.pory"
	lock
# 6 "data/maps/AzaleaTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/AzaleaTown_Mart/scripts.pory"
	msgbox AzaleaTown_Mart_Clerk_1_Text_0
# 8 "data/maps/AzaleaTown_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/AzaleaTown_Mart/scripts.pory"
	pokemart Azalea_Mart_1
# 10 "data/maps/AzaleaTown_Mart/scripts.pory"
	msgbox AzaleaTown_Mart_Clerk_1_Text_1
# 11 "data/maps/AzaleaTown_Mart/scripts.pory"
	closemessage
# 12 "data/maps/AzaleaTown_Mart/scripts.pory"
	release
	end


AzaleaTown_Mart_Clerk_2::
# 18 "data/maps/AzaleaTown_Mart/scripts.pory"
	lock
# 19 "data/maps/AzaleaTown_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/AzaleaTown_Mart/scripts.pory"
	msgbox AzaleaTown_Mart_Clerk_1_Text_0
# 21 "data/maps/AzaleaTown_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/AzaleaTown_Mart/scripts.pory"
	pokemart Azalea_Mart_2
# 23 "data/maps/AzaleaTown_Mart/scripts.pory"
	msgbox AzaleaTown_Mart_Clerk_1_Text_1
# 24 "data/maps/AzaleaTown_Mart/scripts.pory"
	closemessage
# 25 "data/maps/AzaleaTown_Mart/scripts.pory"
	release
	end


	.align 2
# 29 "data/maps/AzaleaTown_Mart/scripts.pory"
Azalea_Mart_1:
# 31 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 32 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_SUN_STONE
# 33 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 34 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 35 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 36 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 37 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 38 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 39 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 40 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 41 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 42 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 46 "data/maps/AzaleaTown_Mart/scripts.pory"
Azalea_Mart_2:
# 48 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 49 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 50 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 51 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 52 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 53 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 54 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 55 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 56 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 57 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 58 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 59 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 60 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 61 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 62 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 63 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 64 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 65 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 66 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 67 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 68 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 69 "data/maps/AzaleaTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

AzaleaTown_Mart_Clerk_1_Text_0:
# 7 "data/maps/AzaleaTown_Mart/scripts.pory"
	.string "Welcome to AZALEA POKé MART!\n"
	.string "How can I help you?$"

AzaleaTown_Mart_Clerk_1_Text_1:
# 10 "data/maps/AzaleaTown_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"
