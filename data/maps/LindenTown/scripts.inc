LindenTown_MapScripts::
	.byte 0


LindenTown_Harbor_FerryToVermilionCity::
# 5 "data/maps/LindenTown/scripts.pory"
	lock
# 6 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 8 "data/maps/LindenTown/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 4
	goto_if_eq LindenTown_Harbor_FerryToVermilionCity_2
LindenTown_Harbor_FerryToVermilionCity_1:
# 13 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_1, MSGBOX_YESNO
# 14 "data/maps/LindenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Harbor_FerryToVermilionCity_5
# 28 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_3
# 29 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 30 "data/maps/LindenTown/scripts.pory"
	closemessage
LindenTown_Harbor_FerryToVermilionCity_4:
# 32 "data/maps/LindenTown/scripts.pory"
	release
	end

LindenTown_Harbor_FerryToVermilionCity_2:
# 10 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_0
	goto LindenTown_Harbor_FerryToVermilionCity_1

LindenTown_Harbor_FerryToVermilionCity_5:
# 16 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_2
# 17 "data/maps/LindenTown/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_LINDEN_TOWN
# 18 "data/maps/LindenTown/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_VERMILION_CITY
# 19 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 20 "data/maps/LindenTown/scripts.pory"
	closemessage
# 21 "data/maps/LindenTown/scripts.pory"
	delay 20
# 22 "data/maps/LindenTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/LindenTown/scripts.pory"
	special DoSeagallopFerryScene
# 24 "data/maps/LindenTown/scripts.pory"
	waitstate
	goto LindenTown_Harbor_FerryToVermilionCity_4


LindenTown_Fat_Man::
# 38 "data/maps/LindenTown/scripts.pory"
	lock
# 39 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 40 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Fat_Man_Text_0
# 41 "data/maps/LindenTown/scripts.pory"
	closemessage
# 42 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Sign::
# 48 "data/maps/LindenTown/scripts.pory"
	lock
# 49 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Sign_Text_0
# 50 "data/maps/LindenTown/scripts.pory"
	closemessage
# 51 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Ahead_Sign::
# 57 "data/maps/LindenTown/scripts.pory"
	lock
# 58 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Ahead_Sign_Text_0
# 59 "data/maps/LindenTown/scripts.pory"
	closemessage
# 60 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Sign::
# 66 "data/maps/LindenTown/scripts.pory"
	lock
# 67 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Sign_Text_0
# 68 "data/maps/LindenTown/scripts.pory"
	closemessage
# 69 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guard_1::
# 75 "data/maps/LindenTown/scripts.pory"
	lock
# 76 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 77 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guard_1_Text_0
# 78 "data/maps/LindenTown/scripts.pory"
	closemessage
# 79 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Down
# 80 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 81 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guard_2::
# 87 "data/maps/LindenTown/scripts.pory"
	lock
# 88 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 89 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guard_2_Text_0
# 90 "data/maps/LindenTown/scripts.pory"
	closemessage
# 91 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Face_Down
# 92 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 93 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guards_RaiseSuspicion::
# 99 "data/maps/LindenTown/scripts.pory"
	lock
# 100 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Notice_Player
# 101 "data/maps/LindenTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 102 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_0
# 103 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 104 "data/maps/LindenTown/scripts.pory"
	closemessage
# 105 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 106 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_Player_Face_Up
# 107 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 108 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Notice_Player
# 109 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 110 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Right
# 111 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 112 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_1
# 113 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_2
# 114 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 115 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Face_Down
# 116 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 117 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Down
# 118 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 119 "data/maps/LindenTown/scripts.pory"
	closemessage
# 120 "data/maps/LindenTown/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 5
# 121 "data/maps/LindenTown/scripts.pory"
	release
	end


# 125 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Face_Down:
# 127 "data/maps/LindenTown/scripts.pory"
	face_down
# 128 "data/maps/LindenTown/scripts.pory"
	step_end

# 131 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Notice_Player:
# 133 "data/maps/LindenTown/scripts.pory"
	emote_exclamation_mark
# 134 "data/maps/LindenTown/scripts.pory"
	step_end

# 137 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Face_Right:
# 139 "data/maps/LindenTown/scripts.pory"
	face_right
# 140 "data/maps/LindenTown/scripts.pory"
	step_end

# 143 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Player_Face_Up:
# 145 "data/maps/LindenTown/scripts.pory"
	face_up
# 146 "data/maps/LindenTown/scripts.pory"
	step_end

LindenTown_Mansion_Lass::
# 151 "data/maps/LindenTown/scripts.pory"
	lock
# 152 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Lass_Text_0
# 153 "data/maps/LindenTown/scripts.pory"
	closemessage
# 154 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Beauty::
# 160 "data/maps/LindenTown/scripts.pory"
	lock
# 161 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 162 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Beauty_Text_0
# 163 "data/maps/LindenTown/scripts.pory"
	closemessage
# 164 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Bug_Catcher::
# 170 "data/maps/LindenTown/scripts.pory"
	lock
# 171 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 172 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Bug_Catcher_Text_0
# 173 "data/maps/LindenTown/scripts.pory"
	closemessage
# 174 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Youngster::
# 180 "data/maps/LindenTown/scripts.pory"
	lock
# 181 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 182 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Youngster_Text_0
# 183 "data/maps/LindenTown/scripts.pory"
	closemessage
# 184 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Harbor_FerryToVermilionCity_Text_0:
# 10 "data/maps/LindenTown/scripts.pory"
	.string "Well, we made it.\n"
	.string "BLAINE went running into town.\p"
	.string "Something about getting a tip\n"
	.string "from some rich friends?$"

LindenTown_Harbor_FerryToVermilionCity_Text_1:
# 13 "data/maps/LindenTown/scripts.pory"
	.string "Did you want to return\n"
	.string "to KANTO, VERMILION CITY?$"

LindenTown_Harbor_FerryToVermilionCity_Text_2:
# 16 "data/maps/LindenTown/scripts.pory"
	.string "Understood!\n"
	.string "Let's head out.$"

LindenTown_Harbor_FerryToVermilionCity_Text_3:
# 28 "data/maps/LindenTown/scripts.pory"
	.string "Alright, I'll be here...$"

LindenTown_Fat_Man_Text_0:
# 40 "data/maps/LindenTown/scripts.pory"
	.string "Is this your first visit?\n"
	.string "POKéMON LEAGUE? GYM BADGES?\p"
	.string "As if the jungle isn't\n"
	.string "enough of a challenge...$"

LindenTown_Sign_Text_0:
# 49 "data/maps/LindenTown/scripts.pory"
	.string "LINDEN TOWN -\n"
	.string "A town attuned to nature.$"

LindenTown_Mansion_Ahead_Sign_Text_0:
# 58 "data/maps/LindenTown/scripts.pory"
	.string "LINDEN TOWN - PRIVATE PROPERTY\n"
	.string "Absolutely no trespassing allowed!$"

LindenTown_Mansion_Sign_Text_0:
# 67 "data/maps/LindenTown/scripts.pory"
	.string "GEORGE'S MANSION\n"
	.string "GUYANA RESIDENCE$"

LindenTown_Mansion_Guard_1_Text_0:
# 77 "data/maps/LindenTown/scripts.pory"
	.string "Sorry, I'd love to chat...\n"
	.string "But, I'm on guard duty.$"

LindenTown_Mansion_Guard_2_Text_0:
# 89 "data/maps/LindenTown/scripts.pory"
	.string "Sorry, I can't chat...\n"
	.string "I'm on guard duty.$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_0:
# 102 "data/maps/LindenTown/scripts.pory"
	.string "Uh...\n"
	.string "Excuse me!$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_1:
# 112 "data/maps/LindenTown/scripts.pory"
	.string "This is private property... Do\n"
	.string "you have business being here?\p"
	.string "...\n"
	.string "...Yes, yes, I see.$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_2:
# 113 "data/maps/LindenTown/scripts.pory"
	.string "Alright.\n"
	.string "Your story checks out...\p"
	.string "BLAINE is inside, waiting for\n"
	.string "you, {PLAYER}. Good luck.$"

LindenTown_Mansion_Lass_Text_0:
# 152 "data/maps/LindenTown/scripts.pory"
	.string "What do you want?\n"
	.string "This is private property.$"

LindenTown_Mansion_Beauty_Text_0:
# 162 "data/maps/LindenTown/scripts.pory"
	.string "DR. FUJI used to live here.\n"
	.string "For some reason, he left.$"

LindenTown_Bug_Catcher_Text_0:
# 172 "data/maps/LindenTown/scripts.pory"
	.string "You seem like you had a fair\n"
	.string "share of POKéMON battles!\p"
	.string "Make sure you're prepared\n"
	.string "if exploring KAIETEUR JUNGLE.$"

LindenTown_Youngster_Text_0:
# 182 "data/maps/LindenTown/scripts.pory"
	.string "You're definitely not from here!\n"
	.string "Wait, you know DR. FUJI?\p"
	.string "No way! He's a legend in\n"
	.string "our history books.$"
