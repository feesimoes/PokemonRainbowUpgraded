Violet_Mart_MapScripts::
	.byte 0


Violet_Mart_Clerk_1::
# 8 "data/maps/Violet_Mart/scripts.pory"
	lock
# 9 "data/maps/Violet_Mart/scripts.pory"
	applymovement 4, Violet_Mart_NPC_Face_Player
# 10 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Clerk_1_Text_0
# 11 "data/maps/Violet_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Violet_Mart/scripts.pory"
	pokemart Violet_Mart_1
# 13 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Clerk_1_Text_1
# 14 "data/maps/Violet_Mart/scripts.pory"
	release
	end


Violet_Mart_Clerk_2::
# 20 "data/maps/Violet_Mart/scripts.pory"
	lock
# 21 "data/maps/Violet_Mart/scripts.pory"
	applymovement 3, Violet_Mart_NPC_Face_Player
# 22 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Clerk_1_Text_0
# 23 "data/maps/Violet_Mart/scripts.pory"
	waitmessage
# 24 "data/maps/Violet_Mart/scripts.pory"
	pokemart Violet_Mart_2
# 25 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Clerk_1_Text_1
# 26 "data/maps/Violet_Mart/scripts.pory"
	release
	end


	.align 2
# 30 "data/maps/Violet_Mart/scripts.pory"
Violet_Mart_1:
# 32 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 33 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_DREAM_MAIL
# 34 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 35 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ENERGY_POWDER
# 36 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 37 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
# 38 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
	.2byte ITEM_NONE

	.align 2
# 41 "data/maps/Violet_Mart/scripts.pory"
Violet_Mart_2:
# 43 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 45 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 46 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 48 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 49 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 50 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 51 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ETHER
# 52 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 53 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 54 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 55 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 56 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 57 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 58 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 59 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 60 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 61 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 62 "data/maps/Violet_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

Violet_Mart_Fat_Man::
# 67 "data/maps/Violet_Mart/scripts.pory"
	lock
# 68 "data/maps/Violet_Mart/scripts.pory"
	applymovement 1, Violet_Mart_NPC_Face_Player
# 69 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Fat_Man_Text_0
# 70 "data/maps/Violet_Mart/scripts.pory"
	waitmessage
# 71 "data/maps/Violet_Mart/scripts.pory"
	closemessage
# 72 "data/maps/Violet_Mart/scripts.pory"
	release
	end


Violet_Mart_Beauty::
# 78 "data/maps/Violet_Mart/scripts.pory"
	lock
# 79 "data/maps/Violet_Mart/scripts.pory"
	applymovement 2, Violet_Mart_NPC_Face_Player
# 80 "data/maps/Violet_Mart/scripts.pory"
	msgbox Violet_Mart_Beauty_Text_0
# 81 "data/maps/Violet_Mart/scripts.pory"
	waitmessage
# 82 "data/maps/Violet_Mart/scripts.pory"
	closemessage
# 83 "data/maps/Violet_Mart/scripts.pory"
	release
	end


# 87 "data/maps/Violet_Mart/scripts.pory"
Violet_Mart_NPC_Face_Player:
# 89 "data/maps/Violet_Mart/scripts.pory"
	face_player
# 90 "data/maps/Violet_Mart/scripts.pory"
	step_end

Violet_Mart_Clerk_1_Text_0:
# 10 "data/maps/Violet_Mart/scripts.pory"
	.string "Welcome to VIOLET POKé MART!\n"
	.string "How can I help you?$"

Violet_Mart_Clerk_1_Text_1:
# 13 "data/maps/Violet_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"

Violet_Mart_Fat_Man_Text_0:
# 69 "data/maps/Violet_Mart/scripts.pory"
	.string "Honestly, you can never be too\n"
	.string "prepared for anything.$"

Violet_Mart_Beauty_Text_0:
# 80 "data/maps/Violet_Mart/scripts.pory"
	.string "Ugh!\n"
	.string "I just... I can't decide!\p"
	.string "There's so much to choose from\n"
	.string "and it's overwhelming me!$"
