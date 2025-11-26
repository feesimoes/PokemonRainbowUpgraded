# 1 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_MapScripts::
# 3 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_PokemonCenter_1F_OnTransition
# 4 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 5 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 6 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 7 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_OnTransition::
# 8 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_VIRIDIAN_CITY
# 9 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 10 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 11 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Nurse::
# 12 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 13 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 14 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	call EventScript_PkmnCenterNurse
# 15 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	release
# 16 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 17 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 18 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Boy::
# 19 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCenterInEveryTown, MSGBOX_NPC
# 20 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 21 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 22 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Gentleman::
# 23 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_FeelFreeToUsePC, MSGBOX_NPC
# 24 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end
# 25 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"

# 26 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
ViridianCity_PokemonCenter_1F_EventScript_Youngster::
# 27 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_Text_PokeCentersHealMons, MSGBOX_NPC
# 28 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	end

ViridianCity_PokemonCenter_1F_EventScript_James_Dialogue::
# 32 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 33 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_James_Dialogue_Text_0
# 34 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 35 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


ViridianCity_PokemonCenter_1F_EventScript_Jessie_Dialogue::
# 40 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 41 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Jessie_Dialogue_Text_0
# 42 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 43 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle::
# 48 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	lock
# 49 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 50 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_0
# 51 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 52 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 53 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MEOWTH, Movement_ViridianCity_PokemonCenter_1F_Notice_Player_Emote
# 54 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 55 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_MEOWTH, Movement_ViridianCity_PokemonCenter_1F_Face_Down
# 56 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 57 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	fadenewbgm MUS_JESSIE_JAMES_THEME
# 58 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_1
# 59 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 60 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 61 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_JESSIE, Movement_ViridianCity_PokemonCenter_1F_Notice_Player_Emote
# 62 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_JAMES, Movement_ViridianCity_PokemonCenter_1F_Notice_Player_Emote
# 63 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 64 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_JESSIE, Movement_ViridianCity_PokemonCenter_1F_Face_Down
# 65 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 66 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 67 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_2
# 68 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 69 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 70 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_VIRIDIAN_JAMES, Movement_ViridianCity_PokemonCenter_1F_Face_Down
# 71 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 72 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 73 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_3
# 74 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 75 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 76 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 77 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_4
# 78 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 79 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 80 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 81 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_5
# 82 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 83 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 84 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 85 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_6
# 86 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 87 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 88 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 89 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_7
# 90 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 91 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 92 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 93 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_8
# 94 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 95 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 96 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 97 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_9
# 98 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 99 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 100 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 101 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_10
# 102 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 103 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 104 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 105 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_11
# 106 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 107 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 108 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 109 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_12
# 110 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 111 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 112 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_JAMES_1, ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_13
# 113 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 114 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_14
# 115 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 116 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 117 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_TEAM_ROCKET_JESSIE_1, ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_15
# 118 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 119 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_16
# 120 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 121 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 122 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 123 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_17
# 124 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 125 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 126 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 127 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_18
# 128 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 129 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 130 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_VIRIDIAN_POKECENTER_ROCKETS
# 132 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_VIRIDIAN_MEOWTH
# 133 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_VIRIDIAN_JESSIE
# 134 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	removeobject LOCALID_VIRIDIAN_JAMES
# 135 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 136 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 137 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_19
# 138 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 139 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 140 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_ViridianCity_PokemonCenter_1F_Walk_Up_1
# 141 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmovement
# 142 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	msgbox ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_20
# 143 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 144 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	closemessage
# 145 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	releaseall
	end


# 149 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
Movement_ViridianCity_PokemonCenter_1F_Notice_Player_Emote:
# 151 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	emote_exclamation_mark
# 152 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	step_end

# 155 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
Movement_ViridianCity_PokemonCenter_1F_Face_Down:
# 157 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	face_down
# 158 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	step_end

# 161 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
Movement_ViridianCity_PokemonCenter_1F_Jump_In_Place:
# 163 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	jump_in_place_down
# 164 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	step_end

# 167 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
Movement_ViridianCity_PokemonCenter_1F_Walk_Up_1:
# 169 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	walk_up
# 170 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	step_end

ViridianCity_PokemonCenter_1F_EventScript_James_Dialogue_Text_0:
# 33 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "What do you mean, you can't\n"
	.string "just hand them over...?\p"
	.string "What kind of answer is that?!\n"
	.string "No?$"

ViridianCity_PokemonCenter_1F_EventScript_Jessie_Dialogue_Text_0:
# 41 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Listen, missy!\n"
	.string "I don't appreciate your tone!\p"
	.string "Be a good bit of joy and\n"
	.string "hand over those logs... or else!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_0:
# 50 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Meeeeeowwwth!\n"
	.string "That's right, don't forget, I'm the-$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_1:
# 58 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Uh... Guys?\n"
	.string "I think there's a nosy kid here!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_2:
# 67 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Prepare for trouble!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_3:
# 73 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "...And make it double!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_4:
# 77 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "To protect the world from\n"
	.string "devastation!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_5:
# 81 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "To unite all people within our\n"
	.string "nation!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_6:
# 85 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "To denounce the evils of truth and\n"
	.string "love!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_7:
# 89 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "To extend our reach to the stars\n"
	.string "above!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_8:
# 93 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "JESSIE!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_9:
# 97 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "JAMES!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_10:
# 101 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "TEAM ROCKET,\n"
	.string "blast off at the speed of light!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_11:
# 105 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Surrender now, or prepare to fight!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_12:
# 109 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Meeeeeowwwth!\n"
	.string "That's right!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_13:
# 112 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "KOFFING?!\n"
	.string "Nooo!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_14:
# 114 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Must I do everything myself?!\n"
	.string "I'm next, twerp!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_15:
# 117 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Argh!\n"
	.string "You little brat!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_16:
# 119 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "That POKéMON seems rare and tough...\n"
	.string "Alright, JAMES! Wrap it up!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_17:
# 123 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "Wahaha!\n"
	.string "Wait until BOSS gets this!\p"
	.string "We are going to get promoted!\n"
	.string "Then, maybe, we can-$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_18:
# 127 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "JAMES!\n"
	.string "Don't spoil our secrets!\p"
	.string "TEAM ROCKET is blasting off, now!\n"
	.string "Your POKéMON will be ours, twerp!$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_19:
# 137 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "...Thank you.$"

ViridianCity_PokemonCenter_1F_EventScript_Team_Rocket_Double_Trouble_Battle_Text_20:
# 142 "data/maps/ViridianCity_PokemonCenter_1F/scripts.pory"
	.string "If you ever need to heal your\n"
	.string "POKéMON, please let me know.$"
