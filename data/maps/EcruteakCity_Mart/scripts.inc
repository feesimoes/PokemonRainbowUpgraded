EcruteakCity_Mart_MapScripts::
	.byte 0


EcruteakCity_Mart_Clerk_1::
# 5 "data/maps/EcruteakCity_Mart/scripts.pory"
	lock
# 6 "data/maps/EcruteakCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/EcruteakCity_Mart/scripts.pory"
	msgbox EcruteakCity_Mart_Clerk_1_Text_0
# 8 "data/maps/EcruteakCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/EcruteakCity_Mart/scripts.pory"
	pokemart Ecruteak_Mart_1
# 10 "data/maps/EcruteakCity_Mart/scripts.pory"
	msgbox EcruteakCity_Mart_Clerk_1_Text_1
# 11 "data/maps/EcruteakCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/EcruteakCity_Mart/scripts.pory"
	release
	end


EcruteakCity_Mart_Clerk_2::
# 18 "data/maps/EcruteakCity_Mart/scripts.pory"
	lock
# 19 "data/maps/EcruteakCity_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/EcruteakCity_Mart/scripts.pory"
	msgbox EcruteakCity_Mart_Clerk_1_Text_0
# 21 "data/maps/EcruteakCity_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/EcruteakCity_Mart/scripts.pory"
	pokemart Ecruteak_Mart_2
# 23 "data/maps/EcruteakCity_Mart/scripts.pory"
	msgbox EcruteakCity_Mart_Clerk_1_Text_1
# 24 "data/maps/EcruteakCity_Mart/scripts.pory"
	closemessage
# 25 "data/maps/EcruteakCity_Mart/scripts.pory"
	release
	end


	.align 2
# 29 "data/maps/EcruteakCity_Mart/scripts.pory"
Ecruteak_Mart_1:
# 31 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_SHINY_STONE
# 32 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 33 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 34 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_REVIVAL_HERB
# 35 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 36 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 37 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 38 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 39 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 40 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 41 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 45 "data/maps/EcruteakCity_Mart/scripts.pory"
Ecruteak_Mart_2:
# 47 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 48 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 49 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 50 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 51 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 52 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 53 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 54 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 55 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 56 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 57 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 58 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 59 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 60 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 61 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 62 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 63 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 64 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 65 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 66 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 67 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 68 "data/maps/EcruteakCity_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

EcruteakCity_Mart_Clerk_1_Text_0:
# 7 "data/maps/EcruteakCity_Mart/scripts.pory"
	.string "Welcome to ECRUTEAK POKé MART!\n"
	.string "How can I help you?$"

EcruteakCity_Mart_Clerk_1_Text_1:
# 10 "data/maps/EcruteakCity_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"
