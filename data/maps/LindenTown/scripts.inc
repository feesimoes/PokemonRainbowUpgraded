LindenTown_MapScripts::
	.byte 0


LindenTown_Harbor_FerryToVermilionCity::
# 5 "data/maps/LindenTown/scripts.pory"
	lock
# 6 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 7 "data/maps/LindenTown/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 4
	goto_if_eq LindenTown_Harbor_FerryToVermilionCity_2
LindenTown_Harbor_FerryToVermilionCity_1:
# 12 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_1, MSGBOX_YESNO
# 13 "data/maps/LindenTown/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_Harbor_FerryToVermilionCity_5
# 27 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_3
# 28 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 29 "data/maps/LindenTown/scripts.pory"
	closemessage
LindenTown_Harbor_FerryToVermilionCity_4:
# 31 "data/maps/LindenTown/scripts.pory"
	release
	end

LindenTown_Harbor_FerryToVermilionCity_2:
# 9 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_0
	goto LindenTown_Harbor_FerryToVermilionCity_1

LindenTown_Harbor_FerryToVermilionCity_5:
# 15 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Harbor_FerryToVermilionCity_Text_2
# 16 "data/maps/LindenTown/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_LINDEN_TOWN
# 17 "data/maps/LindenTown/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_VERMILION_CITY
# 18 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 19 "data/maps/LindenTown/scripts.pory"
	closemessage
# 20 "data/maps/LindenTown/scripts.pory"
	delay 20
# 21 "data/maps/LindenTown/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/LindenTown/scripts.pory"
	special DoSeagallopFerryScene
# 23 "data/maps/LindenTown/scripts.pory"
	waitstate
	goto LindenTown_Harbor_FerryToVermilionCity_4


LindenTown_Fat_Man::
# 37 "data/maps/LindenTown/scripts.pory"
	lock
# 38 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 39 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Fat_Man_Text_0
# 40 "data/maps/LindenTown/scripts.pory"
	closemessage
# 41 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Sign::
# 47 "data/maps/LindenTown/scripts.pory"
	lock
# 48 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Sign_Text_0
# 49 "data/maps/LindenTown/scripts.pory"
	closemessage
# 50 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Ahead_Sign::
# 56 "data/maps/LindenTown/scripts.pory"
	lock
# 57 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Ahead_Sign_Text_0
# 58 "data/maps/LindenTown/scripts.pory"
	closemessage
# 59 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Sign::
# 65 "data/maps/LindenTown/scripts.pory"
	lock
# 66 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Sign_Text_0
# 67 "data/maps/LindenTown/scripts.pory"
	closemessage
# 68 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guard_1::
# 74 "data/maps/LindenTown/scripts.pory"
	lock
# 75 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 76 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guard_1_Text_0
# 77 "data/maps/LindenTown/scripts.pory"
	closemessage
# 78 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Down
# 79 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 80 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guard_2::
# 86 "data/maps/LindenTown/scripts.pory"
	lock
# 87 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 88 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guard_2_Text_0
# 89 "data/maps/LindenTown/scripts.pory"
	closemessage
# 90 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Face_Down
# 91 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 92 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Guards_RaiseSuspicion::
# 98 "data/maps/LindenTown/scripts.pory"
	lock
# 99 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Notice_Player
# 100 "data/maps/LindenTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 101 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_0
# 102 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 103 "data/maps/LindenTown/scripts.pory"
	closemessage
# 104 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 105 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Mansion_Player_Face_Up
# 106 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 107 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Notice_Player
# 108 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 109 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Right
# 110 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 111 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_1
# 112 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Guards_RaiseSuspicion_Text_2
# 113 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 114 "data/maps/LindenTown/scripts.pory"
	applymovement 4, LindenTown_Mansion_Guard_Face_Down
# 115 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 116 "data/maps/LindenTown/scripts.pory"
	applymovement 5, LindenTown_Mansion_Guard_Face_Down
# 117 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 118 "data/maps/LindenTown/scripts.pory"
	closemessage
# 119 "data/maps/LindenTown/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 5
# 120 "data/maps/LindenTown/scripts.pory"
	release
	end


# 124 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Face_Down:
# 126 "data/maps/LindenTown/scripts.pory"
	face_down
# 127 "data/maps/LindenTown/scripts.pory"
	step_end

# 130 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Notice_Player:
# 132 "data/maps/LindenTown/scripts.pory"
	emote_exclamation_mark
# 133 "data/maps/LindenTown/scripts.pory"
	step_end

# 136 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Guard_Face_Right:
# 138 "data/maps/LindenTown/scripts.pory"
	face_right
# 139 "data/maps/LindenTown/scripts.pory"
	step_end

# 142 "data/maps/LindenTown/scripts.pory"
LindenTown_Mansion_Player_Face_Up:
# 144 "data/maps/LindenTown/scripts.pory"
	face_up
# 145 "data/maps/LindenTown/scripts.pory"
	step_end

LindenTown_Mansion_Lass::
# 150 "data/maps/LindenTown/scripts.pory"
	lock
# 151 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Lass_Text_0
# 152 "data/maps/LindenTown/scripts.pory"
	closemessage
# 153 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Mansion_Beauty::
# 159 "data/maps/LindenTown/scripts.pory"
	lock
# 160 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 161 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Mansion_Beauty_Text_0
# 162 "data/maps/LindenTown/scripts.pory"
	closemessage
# 163 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Bug_Catcher::
# 169 "data/maps/LindenTown/scripts.pory"
	lock
# 170 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 171 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Bug_Catcher_Text_0
# 172 "data/maps/LindenTown/scripts.pory"
	closemessage
# 173 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Youngster::
# 179 "data/maps/LindenTown/scripts.pory"
	lock
# 180 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 181 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Youngster_Text_0
# 182 "data/maps/LindenTown/scripts.pory"
	closemessage
# 183 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Beauty::
# 189 "data/maps/LindenTown/scripts.pory"
	lock
# 190 "data/maps/LindenTown/scripts.pory"
	faceplayer
# 191 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Beauty_Text_0
# 192 "data/maps/LindenTown/scripts.pory"
	closemessage
# 193 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Roadblock_GetOffTheFlowers::
# 199 "data/maps/LindenTown/scripts.pory"
	lock
# 200 "data/maps/LindenTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 201 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_LINDEN_BEAUTY_ROADBLOCK, LindenTown_Roadblock_Emote
# 202 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 203 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_LINDEN_BEAUTY_ROADBLOCK, LindenTown_Roadblock_Face_Right
# 204 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 205 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Roadblock_GetOffTheFlowers_Text_0
# 206 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 207 "data/maps/LindenTown/scripts.pory"
	closemessage
# 208 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Roadblock_Emote
# 209 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 210 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Roadblock_Walk_Up
# 211 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 212 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Roadblock_GetOffTheFlowers_Text_1
# 213 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 214 "data/maps/LindenTown/scripts.pory"
	closemessage
# 215 "data/maps/LindenTown/scripts.pory"
	release
	end


LindenTown_Roadblock_HeyYoureATrainerRight::
# 221 "data/maps/LindenTown/scripts.pory"
	lock
# 222 "data/maps/LindenTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 223 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_LINDEN_BEAUTY_ROADBLOCK, LindenTown_Roadblock_Emote
# 224 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 225 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_LINDEN_BEAUTY_ROADBLOCK, LindenTown_Roadblock_Face_Down
# 226 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 227 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Roadblock_HeyYoureATrainerRight_Text_0
# 228 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 229 "data/maps/LindenTown/scripts.pory"
	closemessage
# 230 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Roadblock_Walk_Up
# 231 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 232 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_Roadblock_Face_Right
# 233 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 234 "data/maps/LindenTown/scripts.pory"
	applymovement LOCALID_LINDEN_BEAUTY_ROADBLOCK, LindenTown_Roadblock_Face_Left
# 235 "data/maps/LindenTown/scripts.pory"
	waitmovement
# 236 "data/maps/LindenTown/scripts.pory"
	msgbox LindenTown_Roadblock_HeyYoureATrainerRight_Text_1
# 237 "data/maps/LindenTown/scripts.pory"
	waitmessage
# 238 "data/maps/LindenTown/scripts.pory"
	closemessage
# 239 "data/maps/LindenTown/scripts.pory"
	release
	end


# 243 "data/maps/LindenTown/scripts.pory"
LindenTown_Roadblock_Face_Left:
# 245 "data/maps/LindenTown/scripts.pory"
	face_left
# 246 "data/maps/LindenTown/scripts.pory"
	step_end

# 249 "data/maps/LindenTown/scripts.pory"
LindenTown_Roadblock_Face_Right:
# 251 "data/maps/LindenTown/scripts.pory"
	face_right
# 252 "data/maps/LindenTown/scripts.pory"
	step_end

# 254 "data/maps/LindenTown/scripts.pory"
LindenTown_Roadblock_Face_Down:
# 256 "data/maps/LindenTown/scripts.pory"
	face_down
# 257 "data/maps/LindenTown/scripts.pory"
	step_end

# 260 "data/maps/LindenTown/scripts.pory"
LindenTown_Roadblock_Walk_Up:
# 262 "data/maps/LindenTown/scripts.pory"
	walk_up
# 263 "data/maps/LindenTown/scripts.pory"
	step_end

# 266 "data/maps/LindenTown/scripts.pory"
LindenTown_Roadblock_Emote:
# 268 "data/maps/LindenTown/scripts.pory"
	emote_exclamation_mark
# 269 "data/maps/LindenTown/scripts.pory"
	step_end

LindenTown_Harbor_FerryToVermilionCity_Text_0:
# 9 "data/maps/LindenTown/scripts.pory"
	.string "Well, we made it.\n"
	.string "BLAINE went running into town.\p"
	.string "Something about getting a tip from\n"
	.string "some wealthy... Uh, friends?$"

LindenTown_Harbor_FerryToVermilionCity_Text_1:
# 12 "data/maps/LindenTown/scripts.pory"
	.string "Did you want to return to KANTO,\n"
	.string "VERMILION CITY?$"

LindenTown_Harbor_FerryToVermilionCity_Text_2:
# 15 "data/maps/LindenTown/scripts.pory"
	.string "Understood!\n"
	.string "Let's head out.$"

LindenTown_Harbor_FerryToVermilionCity_Text_3:
# 27 "data/maps/LindenTown/scripts.pory"
	.string "Alright, I'll be here...$"

LindenTown_Fat_Man_Text_0:
# 39 "data/maps/LindenTown/scripts.pory"
	.string "Is this your first visit?\n"
	.string "POKéMON LEAGUE? GYM BADGES?\p"
	.string "As if the jungle isn't enough of a\n"
	.string "challenge for you...$"

LindenTown_Sign_Text_0:
# 48 "data/maps/LindenTown/scripts.pory"
	.string "LINDEN TOWN -\n"
	.string "A town attuned to nature.$"

LindenTown_Mansion_Ahead_Sign_Text_0:
# 57 "data/maps/LindenTown/scripts.pory"
	.string "LINDEN TOWN - PRIVATE PROPERTY\n"
	.string "Absolutely no trespassing allowed!$"

LindenTown_Mansion_Sign_Text_0:
# 66 "data/maps/LindenTown/scripts.pory"
	.string "GEORGE'S MANSION\n"
	.string "GUYANA RESIDENCE$"

LindenTown_Mansion_Guard_1_Text_0:
# 76 "data/maps/LindenTown/scripts.pory"
	.string "Sorry, I'd love to chat...\n"
	.string "But, I'm on guard duty.$"

LindenTown_Mansion_Guard_2_Text_0:
# 88 "data/maps/LindenTown/scripts.pory"
	.string "Sorry, I can't chat...\n"
	.string "I'm on guard duty.$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_0:
# 101 "data/maps/LindenTown/scripts.pory"
	.string "Uh...\n"
	.string "Excuse me!$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_1:
# 111 "data/maps/LindenTown/scripts.pory"
	.string "This is private property...\n"
	.string "Do you have business being here?\p"
	.string "...\n"
	.string "...Yes, yes, I see.$"

LindenTown_Mansion_Guards_RaiseSuspicion_Text_2:
# 112 "data/maps/LindenTown/scripts.pory"
	.string "Alright!\n"
	.string "Your story checks out...\p"
	.string "BLAINE is inside, waiting for you,\n"
	.string "{PLAYER}. Best of luck in your search!$"

LindenTown_Mansion_Lass_Text_0:
# 151 "data/maps/LindenTown/scripts.pory"
	.string "What do you want?\n"
	.string "This is private property.$"

LindenTown_Mansion_Beauty_Text_0:
# 161 "data/maps/LindenTown/scripts.pory"
	.string "DR. FUJI used to live here.\n"
	.string "For some reason, he left.$"

LindenTown_Bug_Catcher_Text_0:
# 171 "data/maps/LindenTown/scripts.pory"
	.string "You seem like you had a fair\n"
	.string "share of POKéMON battles!\p"
	.string "Make sure you're fully prepared if\n"
	.string "you're exploring the KAIETEUR JUNGLE.$"

LindenTown_Youngster_Text_0:
# 181 "data/maps/LindenTown/scripts.pory"
	.string "You're definitely not from here!\n"
	.string "Wait, you know DR. FUJI?\p"
	.string "No way! He's a legend in\n"
	.string "our history books.$"

LindenTown_Beauty_Text_0:
# 191 "data/maps/LindenTown/scripts.pory"
	.string "Aren't these flowers just so pretty?\n"
	.string "Kind of like me! Teehee...$"

LindenTown_Roadblock_GetOffTheFlowers_Text_0:
# 205 "data/maps/LindenTown/scripts.pory"
	.string "Hey!\n"
	.string "Move out of the way!\p"
	.string "You're stepping on the flowers while\n"
	.string "I'm admiring them!$"

LindenTown_Roadblock_GetOffTheFlowers_Text_1:
# 212 "data/maps/LindenTown/scripts.pory"
	.string "Argh!\n"
	.string "The audacity! Who was that kid?!$"

LindenTown_Roadblock_HeyYoureATrainerRight_Text_0:
# 227 "data/maps/LindenTown/scripts.pory"
	.string "Hey, wait!\n"
	.string "You're a TRAINER, right?$"

LindenTown_Roadblock_HeyYoureATrainerRight_Text_1:
# 236 "data/maps/LindenTown/scripts.pory"
	.string "Well, actually, it doesn't matter.\n"
	.string "I think I found a rare flower...?\p"
	.string "Sorry, but I can't let you wander\n"
	.string "through until I'm done checking.$"
