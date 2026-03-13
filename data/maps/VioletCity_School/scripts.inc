VioletCity_School_MapScripts::
	.byte 0


VioletCity_School_Earl::
# 5 "data/maps/VioletCity_School/scripts.pory"
	lock
# 6 "data/maps/VioletCity_School/scripts.pory"
	faceplayer
# 7 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_0, MSGBOX_YESNO
# 8 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_2
# 21 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_3
# 22 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_4
# 23 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_5, MSGBOX_YESNO
# 24 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_8
# 49 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
VioletCity_School_Earl_1:
# 52 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 53 "data/maps/VioletCity_School/scripts.pory"
	release
	end

VioletCity_School_Earl_2:
# 10 "data/maps/VioletCity_School/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE01_GET, VioletCity_School_Earl_5
# 16 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_2
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_5:
# 12 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_1
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_8:
# 26 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_6
# 27 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_7, MSGBOX_YESNO
# 28 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_11
# 44 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_11:
# 30 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_8
# 31 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_7, MSGBOX_YESNO
# 32 "data/maps/VioletCity_School/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq VioletCity_School_Earl_14
# 39 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_11
	goto VioletCity_School_Earl_1

VioletCity_School_Earl_14:
# 34 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_9
# 35 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Earl_Text_10
	goto VioletCity_School_Earl_1


VioletCity_School_Blackboard::
# 59 "data/maps/VioletCity_School/scripts.pory"
	lock
# 60 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Blackboard_Text_0
# 61 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 62 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Empty_Notebook::
# 68 "data/maps/VioletCity_School/scripts.pory"
	lock
# 69 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Empty_Notebook_Text_0
# 70 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 71 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Smart_Notebook::
# 77 "data/maps/VioletCity_School/scripts.pory"
	lock
# 78 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Smart_Notebook_Text_0
# 79 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 80 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Lass_Alyssa::
# 86 "data/maps/VioletCity_School/scripts.pory"
	lock
# 87 "data/maps/VioletCity_School/scripts.pory"
	faceplayer
# 88 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Lass_Alyssa_Text_0
# 89 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 90 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Dummy_Notebook::
# 96 "data/maps/VioletCity_School/scripts.pory"
	lock
# 97 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Dummy_Notebook_Text_0
# 98 "data/maps/VioletCity_School/scripts.pory"
	applymovement LOCALID_VIOLET_SCHOOL_GARRETT, VioletCity_School_FaceUp
# 99 "data/maps/VioletCity_School/scripts.pory"
	waitmovement
# 100 "data/maps/VioletCity_School/scripts.pory"
	applymovement LOCALID_VIOLET_SCHOOL_GARRETT, VioletCity_School_ExclamationEmote
# 101 "data/maps/VioletCity_School/scripts.pory"
	waitmovement
# 102 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Dummy_Notebook_Text_1
# 103 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 104 "data/maps/VioletCity_School/scripts.pory"
	release
	end


# 108 "data/maps/VioletCity_School/scripts.pory"
VioletCity_School_ExclamationEmote:
# 110 "data/maps/VioletCity_School/scripts.pory"
	emote_exclamation_mark
# 111 "data/maps/VioletCity_School/scripts.pory"
	step_end

# 114 "data/maps/VioletCity_School/scripts.pory"
VioletCity_School_FaceUp:
# 116 "data/maps/VioletCity_School/scripts.pory"
	face_up_fast
# 117 "data/maps/VioletCity_School/scripts.pory"
	step_end

VioletCity_School_Boy_Garrett::
# 122 "data/maps/VioletCity_School/scripts.pory"
	lock
# 123 "data/maps/VioletCity_School/scripts.pory"
	faceplayer
# 124 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Boy_Garrett_Text_0
# 125 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 126 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Field_Notebook::
# 132 "data/maps/VioletCity_School/scripts.pory"
	lock
# 133 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Field_Notebook_Text_0
# 134 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 135 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Picnicker_Jean::
# 141 "data/maps/VioletCity_School/scripts.pory"
	lock
# 142 "data/maps/VioletCity_School/scripts.pory"
	faceplayer
# 143 "data/maps/VioletCity_School/scripts.pory"
	msgbox VioletCity_School_Picnicker_Jean_Text_0
# 144 "data/maps/VioletCity_School/scripts.pory"
	closemessage
# 145 "data/maps/VioletCity_School/scripts.pory"
	release
	end


VioletCity_School_Earl_Text_0:
# 7 "data/maps/VioletCity_School/scripts.pory"
	.string "Bonjour! You are TRAINER? Battle\n"
	.string "GYM LEADER, win you did?$"

VioletCity_School_Earl_Text_1:
# 12 "data/maps/VioletCity_School/scripts.pory"
	.string "Ooh, la la!\n"
	.string "Very indeed nice!\p"
	.string "Nothing more do I teach!\n"
	.string "Smart TRAINER you are!$"

VioletCity_School_Earl_Text_2:
# 16 "data/maps/VioletCity_School/scripts.pory"
	.string "Oh! You lie!\n"
	.string "Good it is you study here!$"

VioletCity_School_Earl_Text_3:
# 21 "data/maps/VioletCity_School/scripts.pory"
	.string "Here, teacher I am. Good it\n"
	.string "is you study here, yes!$"

VioletCity_School_Earl_Text_4:
# 22 "data/maps/VioletCity_School/scripts.pory"
	.string "EARL, I am! Wonderful are\n"
	.string "POKéMON, yes? Teach you I will!$"

VioletCity_School_Earl_Text_5:
# 23 "data/maps/VioletCity_School/scripts.pory"
	.string "What you want to know?\n"
	.string "Want to be a winner is you?$"

VioletCity_School_Earl_Text_6:
# 26 "data/maps/VioletCity_School/scripts.pory"
	.string "Good! Teach you, I will!\n"
	.string "In battle, POKéMON top on list.\p"
	.string "The top one, jump out first!\n"
	.string "Change order in list, make easy!$"

VioletCity_School_Earl_Text_7:
# 27 "data/maps/VioletCity_School/scripts.pory"
	.string "More from EARL you want\n"
	.string "to hear?$"

VioletCity_School_Earl_Text_8:
# 30 "data/maps/VioletCity_School/scripts.pory"
	.string "Fine! Teach you, I will!\n"
	.string "If POKéMON come out in battle...\p"
	.string "Some EXP. POINTS it gets.\n"
	.string "Keep out weak POKéMON!\p"
	.string "Switch in battle quick! This way,\n"
	.string "weak POKéMON very strong get!$"

VioletCity_School_Earl_Text_9:
# 34 "data/maps/VioletCity_School/scripts.pory"
	.string "Fine! Teach you, I will!\n"
	.string "POKéMON have goods and bads.\p"
	.string "Because many types. High LV.\n"
	.string "POKéMON not win always if bad types.$"

VioletCity_School_Earl_Text_10:
# 35 "data/maps/VioletCity_School/scripts.pory"
	.string "POKéMON with good types for\n"
	.string "foe you choose, smart battle!\p"
	.string "You come again later! EARL\n"
	.string "tired, but teaches whenever!$"

VioletCity_School_Earl_Text_11:
# 39 "data/maps/VioletCity_School/scripts.pory"
	.string "You come again later, yes?\n"
	.string "EARL teach you whenever!$"

VioletCity_School_Blackboard_Text_0:
# 60 "data/maps/VioletCity_School/scripts.pory"
	.string "Wow! Useful information on here!\n"
	.string "It's quite like VIRIDIAN'S SCHOOL!$"

VioletCity_School_Empty_Notebook_Text_0:
# 69 "data/maps/VioletCity_School/scripts.pory"
	.string "It's an empty notebook.\n"
	.string "Perfect for any new student!$"

VioletCity_School_Smart_Notebook_Text_0:
# 78 "data/maps/VioletCity_School/scripts.pory"
	.string "It's ALYSSA'S educational notebook.\n"
	.string "Oh! Seems like she's very smart.$"

VioletCity_School_Lass_Alyssa_Text_0:
# 88 "data/maps/VioletCity_School/scripts.pory"
	.string "Hi! Are you here to learn?\n"
	.string "Let me know if you need help!$"

VioletCity_School_Dummy_Notebook_Text_0:
# 97 "data/maps/VioletCity_School/scripts.pory"
	.string "It's GARRETT'S personal notebook.\n"
	.string "Hmm...\p"
	.string "Wait, that can't be right!\n"
	.string "They need an educational one...\p"
	.string "There is a note attached:$"

VioletCity_School_Dummy_Notebook_Text_1:
# 102 "data/maps/VioletCity_School/scripts.pory"
	.string "GARRETT was here!\n"
	.string "ASHLEY is a dummy!\p"
	.string "Signed,\n"
	.string "EARL'S star pupil!$"

VioletCity_School_Boy_Garrett_Text_0:
# 124 "data/maps/VioletCity_School/scripts.pory"
	.string "That pop quiz? Yeah, of course I'm\n"
	.string "gonna ace it, It's so easy!$"

VioletCity_School_Field_Notebook_Text_0:
# 133 "data/maps/VioletCity_School/scripts.pory"
	.string "The wide open fields up north\n"
	.string "have an interesting climate!\p"
	.string "Culturally, KITAKAMI follows a\n"
	.string "similar tradition to JOHTO.$"

VioletCity_School_Picnicker_Jean_Text_0:
# 143 "data/maps/VioletCity_School/scripts.pory"
	.string "Did you know that a lot of\n"
	.string "far-off academies study here?$"
