Cherrygrove_Mart_MapScripts::
	.byte 0


Cherrygrove_Mart_Clerk_1::
# 8 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 9 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 5, Cherrygrove_Mart_Face_Player
# 10 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_0
# 11 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 12 "data/maps/Cherrygrove_Mart/scripts.pory"
	pokemart Cherrygrove_Mart_1
# 13 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_1
# 14 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_Clerk_2::
# 20 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 21 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 4, Cherrygrove_Mart_Face_Player
# 22 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_0
# 23 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 24 "data/maps/Cherrygrove_Mart/scripts.pory"
	pokemart Cherrygrove_Mart_2
# 25 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_1
# 26 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


	.align 2
# 30 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_1:
# 32 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 33 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 34 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 35 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

	.align 2
# 38 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_2:
# 40 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 41 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 42 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 43 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_POTION
# 44 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 45 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 46 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 47 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 48 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 49 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 50 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 51 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 52 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 53 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 54 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 55 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 56 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 57 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 58 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

Cherrygrove_Mart_EventScript_Cooltrainer_M::
# 63 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 64 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 2, Cherrygrove_Mart_Face_Player
# 65 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Cooltrainer_M_Text_0
# 66 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 67 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 68 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Lass::
# 74 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 75 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 3, Cherrygrove_Mart_Face_Player
# 76 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Lass_Text_0
# 77 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 78 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 79 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Little_Boy::
# 85 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 86 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 1, Cherrygrove_Mart_Face_Player
# 87 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Little_Boy_Text_0
# 88 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 89 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 90 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Little_Girl::
# 96 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 97 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 6, Cherrygrove_Mart_Face_Player
# 98 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Little_Girl_Text_0
# 99 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 100 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 101 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


# 105 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_Face_Player:
# 107 "data/maps/Cherrygrove_Mart/scripts.pory"
	face_player
# 108 "data/maps/Cherrygrove_Mart/scripts.pory"
	step_end

Cherrygrove_Mart_Clerk_1_Text_0:
# 10 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "Welcome to CHERRYGROVE POKé MART!\n"
	.string "How can I help you?$"

Cherrygrove_Mart_Clerk_1_Text_1:
# 13 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "Thanks for stopping by!\n"
	.string "Please come again!$"

Cherrygrove_Mart_EventScript_Cooltrainer_M_Text_0:
# 65 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "I collect latest POKé MART merch,\n"
	.string "even if I don't need it.\p"
	.string "You never know when something will\n"
	.string "be more valuable later.$"

Cherrygrove_Mart_EventScript_Lass_Text_0:
# 76 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "The POKé MART is a convenient\n"
	.string "chain of stores worldwide.\p"
	.string "The items they sell differ\n"
	.string "town to town, but also overseas.$"

Cherrygrove_Mart_EventScript_Little_Boy_Text_0:
# 87 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "My sis is afraid of the dark!\n"
	.string "We're shopping for HM05: FLASH!\p"
	.string "It's supposed to light dark caves.$"

Cherrygrove_Mart_EventScript_Little_Girl_Text_0:
# 98 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "DARK CAVE is terrifying!\n"
	.string "It's even worse without a POKéMON!$"
