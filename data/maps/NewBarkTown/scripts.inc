NewBarkTown_MapScripts::
	.byte 0


ProfessorElmsLab_Sign::
# 4 "data/maps/NewBarkTown/scripts.pory"
	lock
# 5 "data/maps/NewBarkTown/scripts.pory"
	msgbox ProfessorElmsLab_Sign_Text_0
# 6 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 7 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


NewBarkTown_Sign::
# 12 "data/maps/NewBarkTown/scripts.pory"
	lock
# 13 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Sign_Text_0
# 14 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 15 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


LyrasHouse_Sign::
# 20 "data/maps/NewBarkTown/scripts.pory"
	lock
# 21 "data/maps/NewBarkTown/scripts.pory"
	msgbox LyrasHouse_Sign_Text_0
# 22 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 23 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


EthansHouse_Sign::
# 28 "data/maps/NewBarkTown/scripts.pory"
	lock
# 29 "data/maps/NewBarkTown/scripts.pory"
	msgbox EthansHouse_Sign_Text_0
# 30 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 31 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


LadyWarningAboutGrassOutsideOfNewBarkTown::
# 37 "data/maps/NewBarkTown/scripts.pory"
	lock
# 38 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, Movement_NewBarkTown_Face_Player
# 39 "data/maps/NewBarkTown/scripts.pory"
	msgbox LadyWarningAboutGrassOutsideOfNewBarkTown_Text_0
# 40 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 41 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


LittleGirlWonderingWhereYouAreFrom::
# 47 "data/maps/NewBarkTown/scripts.pory"
	lock
# 48 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, Movement_NewBarkTown_Face_Player
# 49 "data/maps/NewBarkTown/scripts.pory"
	msgbox LittleGirlWonderingWhereYouAreFrom_Text_0
# 50 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 51 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


GentlemanIsTiredOfThisPlace::
# 57 "data/maps/NewBarkTown/scripts.pory"
	lock
# 58 "data/maps/NewBarkTown/scripts.pory"
	applymovement 2, Movement_NewBarkTown_Face_Player
# 59 "data/maps/NewBarkTown/scripts.pory"
	msgbox GentlemanIsTiredOfThisPlace_Text_0
# 60 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 61 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


NewBarkTown_Police_Roadblock_Interact::
# 67 "data/maps/NewBarkTown/scripts.pory"
	lock
# 68 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, Movement_NewBarkTown_Face_Player
# 69 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Police_Roadblock_Interact_Text_0
# 70 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 71 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


NewBarkTown_Police_Roadblock_Interrupt::
# 76 "data/maps/NewBarkTown/scripts.pory"
	lock
# 77 "data/maps/NewBarkTown/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 78 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, Movement_NewBarkTown_Notice_Player
# 79 "data/maps/NewBarkTown/scripts.pory"
	waitmovement
# 80 "data/maps/NewBarkTown/scripts.pory"
	applymovement 4, Movement_NewBarkTown_Face_Player
# 81 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Police_Roadblock_Interrupt_Text_0, MSGBOX_NPC
# 82 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 83 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_NewBarkTown_Face_Player_Up
# 84 "data/maps/NewBarkTown/scripts.pory"
	waitmovement
# 85 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Police_Roadblock_Interrupt_Text_1, MSGBOX_NPC
# 86 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 87 "data/maps/NewBarkTown/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_NewBarkTown_Walk_Player_Right_1
# 88 "data/maps/NewBarkTown/scripts.pory"
	waitmovement
# 89 "data/maps/NewBarkTown/scripts.pory"
	releaseall
	end


# 93 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Face_Player:
# 95 "data/maps/NewBarkTown/scripts.pory"
	face_player
# 96 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 99 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Notice_Player:
# 101 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 102 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 105 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Walk_Player_Right_1:
# 107 "data/maps/NewBarkTown/scripts.pory"
	walk_right
# 108 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 111 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Face_Player_Up:
# 113 "data/maps/NewBarkTown/scripts.pory"
	face_up
# 114 "data/maps/NewBarkTown/scripts.pory"
	step_end

ProfessorElmsLab_Sign_Text_0:
# 5 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON RESEARCH LAB$"

NewBarkTown_Sign_Text_0:
# 13 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\n"
	.string "Winds of a new beginning!$"

LyrasHouse_Sign_Text_0:
# 21 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA's House$"

EthansHouse_Sign_Text_0:
# 29 "data/maps/NewBarkTown/scripts.pory"
	.string "ETHAN's House$"

LadyWarningAboutGrassOutsideOfNewBarkTown_Text_0:
# 39 "data/maps/NewBarkTown/scripts.pory"
	.string "You shouldn't go walking into\n"
	.string "tall grass with no POKéMON.\p"
	.string "It's not safe like that.$"

LittleGirlWonderingWhereYouAreFrom_Text_0:
# 49 "data/maps/NewBarkTown/scripts.pory"
	.string "Hey mister! Where are you from?\n"
	.string "PALLET TOWN? Where is that?\p"
	.string "Oh, that's in KANTO?!\n"
	.string "I never knew!$"

GentlemanIsTiredOfThisPlace_Text_0:
# 59 "data/maps/NewBarkTown/scripts.pory"
	.string "I've travelled the world.\n"
	.string "It doesn't matter where you go.\p"
	.string "But it's important to have\n"
	.string "culture that welcomes you.$"

NewBarkTown_Police_Roadblock_Interact_Text_0:
# 69 "data/maps/NewBarkTown/scripts.pory"
	.string "I'm on the lookout for shady\n"
	.string "individuals from TEAM ROCKET.\p"
	.string "If you see anything, let us know.$"

NewBarkTown_Police_Roadblock_Interrupt_Text_0:
# 81 "data/maps/NewBarkTown/scripts.pory"
	.string "Freeze!\n"
	.string "I've got you now, you filthy-$"

NewBarkTown_Police_Roadblock_Interrupt_Text_1:
# 85 "data/maps/NewBarkTown/scripts.pory"
	.string "...Oh, I apologize.\n"
	.string "I thought you were...\p"
	.string "Ahem, I'm looking out for shady\n"
	.string "individuals from TEAM ROCKET.\p"
	.string "Sorry, you need to step back.\n"
	.string "Report any criminal activity.$"
