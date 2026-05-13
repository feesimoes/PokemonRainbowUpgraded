OlivineCity_Mart_MapScripts::
	.byte 0


OlivineCity_Mart_Clerk_1::
# 5 "data/maps/OlivineCity_Mart/scripts.pory"
	lock
# 6 "data/maps/OlivineCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/OlivineCity_Mart/scripts.pory"
	msgbox OlivineCity_Mart_Clerk_1_Text_0
# 8 "data/maps/OlivineCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/OlivineCity_Mart/scripts.pory"
	pokemart Olivine_Mart_1
# 10 "data/maps/OlivineCity_Mart/scripts.pory"
	msgbox OlivineCity_Mart_Clerk_1_Text_1
# 11 "data/maps/OlivineCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/OlivineCity_Mart/scripts.pory"
	release
	end


OlivineCity_Mart_Clerk_2::
# 18 "data/maps/OlivineCity_Mart/scripts.pory"
	lock
# 19 "data/maps/OlivineCity_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/OlivineCity_Mart/scripts.pory"
	msgbox OlivineCity_Mart_Clerk_1_Text_0
# 21 "data/maps/OlivineCity_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/OlivineCity_Mart/scripts.pory"
	pokemart Olivine_Mart_2
# 23 "data/maps/OlivineCity_Mart/scripts.pory"
	msgbox OlivineCity_Mart_Clerk_1_Text_1
# 24 "data/maps/OlivineCity_Mart/scripts.pory"
	closemessage
# 25 "data/maps/OlivineCity_Mart/scripts.pory"
	release
	end


	.align 2
# 29 "data/maps/OlivineCity_Mart/scripts.pory"
Olivine_Mart_1:
# 31 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_METAL_COAT
# 32 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_KINGS_ROCK
# 33 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_RED_SHARD
# 34 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_BLUE_SHARD
# 35 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_GREEN_SHARD
# 36 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_YELLOW_SHARD
# 37 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_SHOAL_SALT
# 38 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_SHOAL_SHELL
# 39 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 40 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 41 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 42 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 43 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 44 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 45 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 46 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 47 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 50 "data/maps/OlivineCity_Mart/scripts.pory"
Olivine_Mart_2:
# 52 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 53 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 54 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 55 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 56 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 57 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 58 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 59 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 60 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 61 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 62 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 63 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 64 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 65 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 66 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 67 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 68 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 69 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 70 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 71 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 72 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 73 "data/maps/OlivineCity_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

OlivineCity_Mart_Clerk_1_Text_0:
# 7 "data/maps/OlivineCity_Mart/scripts.pory"
	.string "Welcome to OLIVINE POKé MART!\n"
	.string "How can I help you?$"

OlivineCity_Mart_Clerk_1_Text_1:
# 10 "data/maps/OlivineCity_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"
