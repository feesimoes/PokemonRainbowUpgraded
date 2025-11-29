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
	closemessage
# 15 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_Clerk_2::
# 21 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 22 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 4, Cherrygrove_Mart_Face_Player
# 23 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_0
# 24 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 25 "data/maps/Cherrygrove_Mart/scripts.pory"
	pokemart Cherrygrove_Mart_2
# 26 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_Clerk_1_Text_1
# 27 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 28 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


	.align 2
# 32 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_1:
# 34 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_RETRO_MAIL
# 35 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_HEAL_POWDER
# 36 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_NEST_BALL
# 37 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REPEAT_BALL
	.2byte ITEM_NONE

	.align 2
# 40 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_2:
# 42 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 43 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 44 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ULTRA_BALL
# 45 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_POTION
# 46 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 47 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 48 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_MAX_POTION
# 49 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 50 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REVIVE
# 51 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 52 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 53 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 54 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_BURN_HEAL
# 55 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ICE_HEAL
# 56 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 57 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
# 58 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 59 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 60 "data/maps/Cherrygrove_Mart/scripts.pory"
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_NONE

Cherrygrove_Mart_EventScript_Cooltrainer_M::
# 65 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 66 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 2, Cherrygrove_Mart_Face_Player
# 67 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Cooltrainer_M_Text_0
# 68 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 69 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 70 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Lass::
# 76 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 77 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 3, Cherrygrove_Mart_Face_Player
# 78 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Lass_Text_0
# 79 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 80 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 81 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Little_Boy::
# 87 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 88 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 1, Cherrygrove_Mart_Face_Player
# 89 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Little_Boy_Text_0
# 90 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 91 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 92 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


Cherrygrove_Mart_EventScript_Little_Girl::
# 98 "data/maps/Cherrygrove_Mart/scripts.pory"
	lock
# 99 "data/maps/Cherrygrove_Mart/scripts.pory"
	applymovement 6, Cherrygrove_Mart_Face_Player
# 100 "data/maps/Cherrygrove_Mart/scripts.pory"
	msgbox Cherrygrove_Mart_EventScript_Little_Girl_Text_0
# 101 "data/maps/Cherrygrove_Mart/scripts.pory"
	waitmessage
# 102 "data/maps/Cherrygrove_Mart/scripts.pory"
	closemessage
# 103 "data/maps/Cherrygrove_Mart/scripts.pory"
	release
	end


# 107 "data/maps/Cherrygrove_Mart/scripts.pory"
Cherrygrove_Mart_Face_Player:
# 109 "data/maps/Cherrygrove_Mart/scripts.pory"
	face_player
# 110 "data/maps/Cherrygrove_Mart/scripts.pory"
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
# 67 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "I collect latest POKé MART merch,\n"
	.string "even if I don't need it.\p"
	.string "You never know when something will\n"
	.string "be more valuable later.$"

Cherrygrove_Mart_EventScript_Lass_Text_0:
# 78 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "The POKé MART is a convenient\n"
	.string "chain of stores worldwide.\p"
	.string "The items they sell differ\n"
	.string "town to town, but also overseas.$"

Cherrygrove_Mart_EventScript_Little_Boy_Text_0:
# 89 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "My sis is afraid of the dark!\n"
	.string "We're shopping for HM05: FLASH!\p"
	.string "It's supposed to light dark caves.$"

Cherrygrove_Mart_EventScript_Little_Girl_Text_0:
# 100 "data/maps/Cherrygrove_Mart/scripts.pory"
	.string "DARK CAVE is terrifying!\n"
	.string "It's even worse without a POKéMON!$"
