NewBarkTown_MapScripts::
	.byte 0


ProfessorElmsLab_Sign::
# 4 "data/maps/NewBarkTown/scripts.pory"
	lock
# 5 "data/maps/NewBarkTown/scripts.pory"
	msgbox ProfessorElmsLab_Sign_Text_0
# 6 "data/maps/NewBarkTown/scripts.pory"
	release
	end


NewBarkTown_Sign::
# 11 "data/maps/NewBarkTown/scripts.pory"
	lock
# 12 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_Sign_Text_0
# 13 "data/maps/NewBarkTown/scripts.pory"
	release
	end


LyrasHouse_Sign::
# 18 "data/maps/NewBarkTown/scripts.pory"
	lock
# 19 "data/maps/NewBarkTown/scripts.pory"
	msgbox LyrasHouse_Sign_Text_0
# 20 "data/maps/NewBarkTown/scripts.pory"
	release
	end


EthansHouse_Sign::
# 25 "data/maps/NewBarkTown/scripts.pory"
	lock
# 26 "data/maps/NewBarkTown/scripts.pory"
	msgbox EthansHouse_Sign_Text_0
# 27 "data/maps/NewBarkTown/scripts.pory"
	release
	end


LadyWarningAboutGrassOutsideOfNewBarkTown::
# 33 "data/maps/NewBarkTown/scripts.pory"
	lock
# 34 "data/maps/NewBarkTown/scripts.pory"
	applymovement 1, Movement_NewBarkTown_Face_Player
# 35 "data/maps/NewBarkTown/scripts.pory"
	msgbox LadyWarningAboutGrassOutsideOfNewBarkTown_Text_0
# 36 "data/maps/NewBarkTown/scripts.pory"
	release
	end


LittleGirlWonderingWhereYouAreFrom::
# 42 "data/maps/NewBarkTown/scripts.pory"
	lock
# 43 "data/maps/NewBarkTown/scripts.pory"
	applymovement 3, Movement_NewBarkTown_Face_Player
# 44 "data/maps/NewBarkTown/scripts.pory"
	msgbox LittleGirlWonderingWhereYouAreFrom_Text_0
# 45 "data/maps/NewBarkTown/scripts.pory"
	release
	end


GentlemanIsTiredOfThisPlace::
# 51 "data/maps/NewBarkTown/scripts.pory"
	lock
# 52 "data/maps/NewBarkTown/scripts.pory"
	applymovement 2, Movement_NewBarkTown_Face_Player
# 53 "data/maps/NewBarkTown/scripts.pory"
	msgbox GentlemanIsTiredOfThisPlace_Text_0
# 54 "data/maps/NewBarkTown/scripts.pory"
	release
	end


# 58 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Face_Player:
# 59 "data/maps/NewBarkTown/scripts.pory"
	face_player
# 60 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 63 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_Bill_Spots_Player:
# 65 "data/maps/NewBarkTown/scripts.pory"
	face_player
# 66 "data/maps/NewBarkTown/scripts.pory"
	emote_exclamation_mark
# 67 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 70 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_MovePlayerUp:
# 71 "data/maps/NewBarkTown/scripts.pory"
	walk_up
# 72 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 75 "data/maps/NewBarkTown/scripts.pory"
Movement_NewBarkTown_MovePlayerDown:
# 76 "data/maps/NewBarkTown/scripts.pory"
	walk_down
# 77 "data/maps/NewBarkTown/scripts.pory"
	step_end

# 80 "data/maps/NewBarkTown/scripts.pory"
Movement_Bill_Leaves_New_Bark_Town:
# 81 "data/maps/NewBarkTown/scripts.pory"
	walk_left
# 82 "data/maps/NewBarkTown/scripts.pory"
	step_end

ProfessorElmsLab_Sign_Text_0:
# 5 "data/maps/NewBarkTown/scripts.pory"
	.string "ELM POKéMON RESEARCH LAB$"

NewBarkTown_Sign_Text_0:
# 12 "data/maps/NewBarkTown/scripts.pory"
	.string "NEW BARK TOWN\n"
	.string "Winds of a new beginning!$"

LyrasHouse_Sign_Text_0:
# 19 "data/maps/NewBarkTown/scripts.pory"
	.string "LYRA's House$"

EthansHouse_Sign_Text_0:
# 26 "data/maps/NewBarkTown/scripts.pory"
	.string "ETHAN's House$"

LadyWarningAboutGrassOutsideOfNewBarkTown_Text_0:
# 35 "data/maps/NewBarkTown/scripts.pory"
	.string "You shouldn't go walking into\n"
	.string "tall grass with no POKéMON.\p"
	.string "It's not safe like that.$"

LittleGirlWonderingWhereYouAreFrom_Text_0:
# 44 "data/maps/NewBarkTown/scripts.pory"
	.string "Hey mister! Where are you from?\n"
	.string "PALLET TOWN? Where is that?\p"
	.string "Oh, that's in KANTO?!\n"
	.string "I never knew!$"

GentlemanIsTiredOfThisPlace_Text_0:
# 53 "data/maps/NewBarkTown/scripts.pory"
	.string "I've travelled the world.\n"
	.string "It doesn't matter where you go.\p"
	.string "But it's important to have\n"
	.string "culture that welcomes you.$"
