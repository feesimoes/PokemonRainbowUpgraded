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

NewBarkTown_RechooseStarter::
# 119 "data/maps/NewBarkTown/scripts.pory"
	lock
# 120 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 121 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_RechooseStarter_Text_0
# 122 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 123 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 11
# 124 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_CHOSE_CHIKORITA
# 125 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_CHOSE_TOTODILE
# 126 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_CHOSE_CYNDAQUIL
# 127 "data/maps/NewBarkTown/scripts.pory"
	release
	end


NewBarkTown_ResetProgress::
# 133 "data/maps/NewBarkTown/scripts.pory"
	lock
# 134 "data/maps/NewBarkTown/scripts.pory"
	faceplayer
# 135 "data/maps/NewBarkTown/scripts.pory"
	msgbox NewBarkTown_ResetProgress_Text_0
# 136 "data/maps/NewBarkTown/scripts.pory"
	closemessage
# 137 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 0
# 138 "data/maps/NewBarkTown/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 0
# 139 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_MEW_QUEST_STARTED
# 140 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE01_GET
# 141 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE02_GET
# 142 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE03_GET
# 143 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE04_GET
# 144 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE05_GET
# 145 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE06_GET
# 146 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE07_GET
# 147 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_JOHTO_BADGE08_GET
# 148 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_SYS_NATIONAL_DEX
# 149 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_DARK_CAVE
# 150 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_RUINS_OF_ALPH
# 151 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_ROUTE32_POKEMON_CENTER_1F
# 152 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_VIOLET_CITY
# 153 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_CHERRYGROVE_CITY
# 154 "data/maps/NewBarkTown/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_RIVAL
# 155 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_HIDE_VIRIDIAN_GIOVANNI
# 156 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_BADGE08_GET
# 157 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_NEW_BARK_TOWN
# 158 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_TOHJO_FALLS
# 159 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_ROUTE27_REST_HOUSE
# 160 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_OBTAINED_ROCK_CLIMB_KIT
# 161 "data/maps/NewBarkTown/scripts.pory"
	clearflag FLAG_WORLD_MAP_CANALAVE_CITY
# 162 "data/maps/NewBarkTown/scripts.pory"
	release
	end


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
	.string "Hey! Where are you from?\n"
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

NewBarkTown_RechooseStarter_Text_0:
# 121 "data/maps/NewBarkTown/scripts.pory"
	.string "I gotchu.\n"
	.string "Bless up.$"

NewBarkTown_ResetProgress_Text_0:
# 135 "data/maps/NewBarkTown/scripts.pory"
	.string "I just reset your progress.\n"
	.string "Leave and come back to update!$"
