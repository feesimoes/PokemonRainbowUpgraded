BlackthornCity_Mart_MapScripts::
	.byte 0


BlackthornCity_Mart_Clerk_1::
# 5 "data/maps/BlackthornCity_Mart/scripts.pory"
	lock
# 6 "data/maps/BlackthornCity_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/BlackthornCity_Mart/scripts.pory"
	msgbox BlackthornCity_Mart_Clerk_1_Text_0
# 8 "data/maps/BlackthornCity_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/BlackthornCity_Mart/scripts.pory"
	pokemart Blackthorn_Mart_1
# 10 "data/maps/BlackthornCity_Mart/scripts.pory"
	msgbox BlackthornCity_Mart_Clerk_1_Text_1
# 11 "data/maps/BlackthornCity_Mart/scripts.pory"
	closemessage
# 12 "data/maps/BlackthornCity_Mart/scripts.pory"
	release
	end


BlackthornCity_Mart_Clerk_2::
# 18 "data/maps/BlackthornCity_Mart/scripts.pory"
	lock
# 19 "data/maps/BlackthornCity_Mart/scripts.pory"
	faceplayer
# 20 "data/maps/BlackthornCity_Mart/scripts.pory"
	msgbox BlackthornCity_Mart_Clerk_1_Text_0
# 21 "data/maps/BlackthornCity_Mart/scripts.pory"
	waitmessage
# 22 "data/maps/BlackthornCity_Mart/scripts.pory"
	pokemart Blackthorn_Mart_2
# 23 "data/maps/BlackthornCity_Mart/scripts.pory"
	msgbox BlackthornCity_Mart_Clerk_1_Text_1
# 24 "data/maps/BlackthornCity_Mart/scripts.pory"
	closemessage
# 25 "data/maps/BlackthornCity_Mart/scripts.pory"
	release
	end


	.align 2
# 29 "data/maps/BlackthornCity_Mart/scripts.pory"
Blackthorn_Mart_1:
# 31 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_FANG
# 32 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 33 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 34 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 35 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 36 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 37 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 38 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 39 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 40 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 41 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 42 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_LUXURY_BALL
# 43 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
	.2byte ITEM_NONE

	.align 2
# 47 "data/maps/BlackthornCity_Mart/scripts.pory"
Blackthorn_Mart_2:
# 49 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 50 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 51 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 52 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 53 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 54 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 55 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 56 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 57 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 58 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 59 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 60 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 63 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 64 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 65 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 66 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 67 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 68 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 69 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 70 "data/maps/BlackthornCity_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
	.2byte ITEM_NONE

BlackthornCity_Mart_Cooltrainer_M::
# 75 "data/maps/BlackthornCity_Mart/scripts.pory"
	lock
# 76 "data/maps/BlackthornCity_Mart/scripts.pory"
	faceplayer
# 77 "data/maps/BlackthornCity_Mart/scripts.pory"
	msgbox BlackthornCity_Mart_Cooltrainer_M_Text_0
# 78 "data/maps/BlackthornCity_Mart/scripts.pory"
	closemessage
# 79 "data/maps/BlackthornCity_Mart/scripts.pory"
	release
	end


BlackthornCity_Mart_Clerk_1_Text_0:
# 7 "data/maps/BlackthornCity_Mart/scripts.pory"
	.string "Welcome to BLACKTHORN POKé MART!\n"
	.string "How can I help you?$"

BlackthornCity_Mart_Clerk_1_Text_1:
# 10 "data/maps/BlackthornCity_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"

BlackthornCity_Mart_Cooltrainer_M_Text_0:
# 77 "data/maps/BlackthornCity_Mart/scripts.pory"
	.string "This is it.\n"
	.string "This is the final test.\p"
	.string "CLAIR'S GYM is the last\n"
	.string "obstacle before the-\p"
	.string "Huh? Those BADGES you have...\n"
	.string "Are from... KANTO?!$"
