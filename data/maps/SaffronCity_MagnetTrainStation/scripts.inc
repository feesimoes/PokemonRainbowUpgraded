SaffronCity_MagnetTrainStation_MapScripts::
# 3 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 6 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1
	return

SaffronCity_MagnetTrainStation_MapScripts_MAP_SCRIPT_ON_LOAD_1:
# 8 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
	return


SaffronCity_MagnetTrainStation_EventScript_Lass::
# 15 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 16 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 17 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 18 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Lass_2
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1
SaffronCity_MagnetTrainStation_EventScript_Lass_1:
# 26 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 27 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 28 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Lass_2:
# 20 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Lass_1


SaffronCity_MagnetTrainStation_EventScript_Fat_Man::
# 34 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 35 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 36 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 37 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2
# 43 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1
SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1:
# 45 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 46 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 47 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_2:
# 39 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Fat_Man_1


SaffronCity_MagnetTrainStation_EventScript_Scientist::
# 53 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 54 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 55 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 56 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Scientist_2
# 62 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1
SaffronCity_MagnetTrainStation_EventScript_Scientist_1:
# 64 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 65 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 66 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Scientist_2:
# 58 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Scientist_1


SaffronCity_MagnetTrainStation_EventScript_Boy::
# 72 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 73 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 74 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 75 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Boy_2
# 81 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1
SaffronCity_MagnetTrainStation_EventScript_Boy_1:
# 83 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 84 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 85 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Boy_2:
# 77 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0
	goto SaffronCity_MagnetTrainStation_EventScript_Boy_1


SaffronCity_MagnetTrainStation_EventScript_Rodolfo::
# 91 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 92 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	faceplayer
# 93 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	call_if_defeated TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle
# 94 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_HIDE_SILPH_ROCKETS, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1
# 121 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6
# 122 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 123 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7
# 124 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 125 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 126 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_1:
# 96 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0
# 97 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 98 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 99 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1
# 100 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 101 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 102 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2, MSGBOX_YESNO
# 103 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 104 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4
# 114 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	trainerbattle_single TRAINER_RODOLFO, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4, SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5
# 115 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_4:
# 106 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3
# 107 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 108 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 109 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end


SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle::
# 133 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	checkitem ITEM_MUSIC_PLAYER, 1
# 134 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_2
# 145 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1
# 146 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 147 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 148 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	playfanfare MUS_OBTAIN_KEY_ITEM
# 149 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	giveitem ITEM_MUSIC_PLAYER, 1
# 150 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitfanfare
# 151 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2
# 152 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 153 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 154 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_3
# 155 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 156 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 157 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
# 158 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_TO_BLACK
# 159 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	removeobject LOCALID_RODOLFO
# 160 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_FROM_BLACK
SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_1:
# 162 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	release
	end

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_2:
# 136 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0
# 137 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 138 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setflag FLAG_TEMP_1
# 139 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_TO_BLACK
# 140 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	removeobject LOCALID_RODOLFO
# 141 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	fadescreen FADE_FROM_BLACK
	goto SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_1


SaffronCity_Badge_Guard::
# 174 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 175 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Player
# 176 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 177 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, SaffronCity_Badge_Guard_1
# 190 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_Badge_Guard_Text_1
# 191 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 192 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 193 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Down
# 194 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 195 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	releaseall
	end

SaffronCity_Badge_Guard_1:
# 179 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_Badge_Guard_Text_0
# 180 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRONTRAIN, 1
# 181 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 182 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 183 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Down
# 184 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 185 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	releaseall
	end


SaffronCity_Badge_Guard_Trigger::
# 202 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	lock
# 203 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Player
# 204 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 205 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_Badge_Guard_Trigger_Text_0
# 206 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 207 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE03_GET, SaffronCity_Badge_Guard_Trigger_1
# 220 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_Badge_Guard_Text_1
# 221 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 222 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 223 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_PLAYER, Movement_SaffronStation_Walk_Down
# 224 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 225 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Down
# 226 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 227 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	releaseall
	end

SaffronCity_Badge_Guard_Trigger_1:
# 209 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	msgbox SaffronCity_Badge_Guard_Text_0
# 210 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	setvar VAR_MAP_SCENE_SAFFRONTRAIN, 1
# 211 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmessage
# 212 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	closemessage
# 213 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	applymovement LOCALID_SAFFRONCITY_GUARD, Movement_SaffronCity_Badge_Guard_Face_Down
# 214 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	waitmovement
# 215 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	releaseall
	end


# 232 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
Movement_SaffronCity_Badge_Guard_Face_Player:
# 234 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	face_player
# 235 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	step_end

# 238 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
Movement_SaffronCity_Badge_Guard_Face_Down:
# 240 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	face_down
# 241 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	step_end

# 244 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
Movement_SaffronStation_Walk_Down:
# 246 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	walk_down
# 247 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	step_end

SaffronCity_MagnetTrainStation_EventScript_Lass_Text_0:
# 20 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Oh, thank goodness!\n"
	.string "That annoying guy is gone!\p"
	.string "I can use the MAGNET TRAIN!$"

SaffronCity_MagnetTrainStation_EventScript_Lass_Text_1:
# 24 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's an annoying guy blocking\n"
	.string "that MAGNET TRAIN entrance...\p"
	.string "I do wish someone would do\n"
	.string "something about this!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_0:
# 39 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Have you been to JOHTO?\n"
	.string "I heard this from a friend...\p"
	.string "But TEAM ROCKET is operating there\n"
	.string "as well, harming the SLOWPOKE.\p"
	.string "No crime is too wicked for\n"
	.string "them, those nasty goons!$"

SaffronCity_MagnetTrainStation_EventScript_Fat_Man_Text_1:
# 43 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "That guy there seems to be\n"
	.string "blocking the entrance...\p"
	.string "He keeps telling people to check\n"
	.string "out the HOENN REGION, because...\p"
	.string "Apparently, he came from there?\n"
	.string "He's weird.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_0:
# 58 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm relieved the MAGNET TRAIN\n"
	.string "is back up and running.\p"
	.string "TEAM ROCKET seems to be gone, too.$"

SaffronCity_MagnetTrainStation_EventScript_Scientist_Text_1:
# 62 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm an expert in sciences\n"
	.string "and technologies. But, uh...\p"
	.string "My studies could have never\n"
	.string "prepared me for a yapping MANIAC.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_0:
# 77 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I'm so glad that guy is gone.$"

SaffronCity_MagnetTrainStation_EventScript_Boy_Text_1:
# 81 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "There's a guy blocking the\n"
	.string "MAGNET TRAIN entrance! Honestly...\p"
	.string "I just want him to shut up!\n"
	.string "He's the worst! TEAM ROCKET'S better!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_0:
# 96 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON\n"
	.string "and SILPH...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_1:
# 99 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Anyways, I'm RODOLFO!\n"
	.string "So, uh, you're {PLAYER}? Yeah, I know.\p"
	.string "Hah! That look on your face!\n"
	.string "you should've seen it!\p"
	.string "I mean, you're obviously becoming\n"
	.string "pretty well-known in KANTO, duh.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_2:
# 102 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "I've got something for you, {PLAYER}!\n"
	.string "But you have to beat me in battle!\p"
	.string "Ready?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_3:
# 106 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Well, you're a lucky TRAINER!\n"
	.string "Can you believe I even asked?\p"
	.string "You can go prepare, I'll just be...\n"
	.string "Uh, here... Yeah...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_4:
# 114 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "No, wait!\n"
	.string "I don't have a catchy phrase yet!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_5:
# 114 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Uh, I lost...\n"
	.string "But, how did you like my battle theme?$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_6:
# 121 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Hey, good job on beating TEAM\n"
	.string "ROCKET! Uh, well I mean...\p"
	.string "Technically, you didn't beat them\n"
	.string "...not yet, anyways.\p"
	.string "You did drive them out of SAFFRON...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_Text_7:
# 123 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Yeah, but, anyways...\n"
	.string "you should come back later!\p"
	.string "Drive 'em out of SILPH,\n"
	.string "then, we'll talk!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_0:
# 136 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Sorry, you caught me at a bad\n"
	.string "time, I was just heading back!\p"
	.string "I'm gonna be in GOLDENROD CITY.\n"
	.string "You're welcome to stop by.$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_1:
# 145 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Wow, you defeated me, huh?\n"
	.string "That's crazy... Anyways!\p"
	.string "That thing I had for you...\n"
	.string "It's called... The GB SOUNDS!\p"
	.string "Here you go!$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_2:
# 151 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "The GB SOUNDS is a device that\n"
	.string "lets you change the music.\p"
	.string "But wait, here's the catch!\n"
	.string "It gives you beeps 'n boops!\p"
	.string "Some sort of GEN 1-2 shenanigans...$"

SaffronCity_MagnetTrainStation_EventScript_Rodolfo_PostBattle_Text_3:
# 154 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "So, yeah, that's the basics!\n"
	.string "I'm gonna be in GOLDENROD CITY.\p"
	.string "You're welcome to stop by.$"

SaffronCity_Badge_Guard_Text_0:
# 179 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "...Oh!\n"
	.string "That is the PLAINBADGE!{PAUSE_MUSIC}{PLAY_BGM}{MUS_LEVEL_UP}{PAUSE 0x60}{RESUME_MUSIC}\p"
	.string "Okay, then.\n"
	.string "Please, go right ahead.$"

SaffronCity_Badge_Guard_Text_1:
# 190 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Only truly skilled TRAINERS are\n"
	.string "allowed through.\p"
	.string "You don't have the PLAINBADGE\n"
	.string "yet! Sorry, rules are rules.\p"
	.string "I can't let you pass.$"

SaffronCity_Badge_Guard_Trigger_Text_0:
# 205 "data/maps/SaffronCity_MagnetTrainStation/scripts.pory"
	.string "Halt!$"
