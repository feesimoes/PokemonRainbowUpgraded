LindenTown_Mart_MapScripts::
	.byte 0


LindenTown_Mart_Clerk::
# 5 "data/maps/LindenTown_Mart/scripts.pory"
	lock
# 6 "data/maps/LindenTown_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/LindenTown_Mart/scripts.pory"
	msgbox LindenTown_Mart_Clerk_Text_0
# 8 "data/maps/LindenTown_Mart/scripts.pory"
	pokemart LindenTown_Mart
# 9 "data/maps/LindenTown_Mart/scripts.pory"
	msgbox LindenTown_Mart_Clerk_Text_1
# 10 "data/maps/LindenTown_Mart/scripts.pory"
	closemessage
# 11 "data/maps/LindenTown_Mart/scripts.pory"
	release
	end


	.align 2
# 15 "data/maps/LindenTown_Mart/scripts.pory"
LindenTown_Mart:
# 17 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_PREMIER_BALL
# 19 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 20 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 21 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 22 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 23 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_TIMER_BALL
# 24 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 25 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 26 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 27 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 28 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 29 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 30 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REVIVE
# 31 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 32 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 33 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 34 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 35 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 36 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 37 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 38 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 39 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
# 40 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 41 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 42 "data/maps/LindenTown_Mart/scripts.pory"
	.2byte ITEM_LAVA_COOKIE
	.2byte ITEM_NONE

LindenTown_Mart_Tuber_M_Land::
# 47 "data/maps/LindenTown_Mart/scripts.pory"
	lock
# 48 "data/maps/LindenTown_Mart/scripts.pory"
	faceplayer
# 49 "data/maps/LindenTown_Mart/scripts.pory"
	msgbox LindenTown_Mart_Tuber_M_Land_Text_0
# 50 "data/maps/LindenTown_Mart/scripts.pory"
	closemessage
# 51 "data/maps/LindenTown_Mart/scripts.pory"
	release
	end


LindenTown_Mart_Clerk_Text_0:
# 7 "data/maps/LindenTown_Mart/scripts.pory"
	.string "Welcome to LINDEN POKé MART!\n"
	.string "How may I help you?$"

LindenTown_Mart_Clerk_Text_1:
# 9 "data/maps/LindenTown_Mart/scripts.pory"
	.string "Come again!$"

LindenTown_Mart_Tuber_M_Land_Text_0:
# 49 "data/maps/LindenTown_Mart/scripts.pory"
	.string "Everything's so expensive here!\n"
	.string "My papa says it's a...\p"
	.string "POKé MART M-Muh...\n"
	.string "Monopoly, I think?$"
