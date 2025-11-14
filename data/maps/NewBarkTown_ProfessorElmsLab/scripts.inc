NewBarkTown_ProfessorElmsLab_MapScripts::
# 3 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

NewBarkTown_ProfessorElmsLab_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_NEW_BARK_TOWN
	return


NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue::
# 11 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 12 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 3, Movement_ProfessorElmsLabNPCFacesPlayer
# 13 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0
# 14 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 15 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue::
# 21 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 22 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 4, Movement_ProfessorElmsLabNPCFacesPlayer
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0
# 24 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 25 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


NewBarkTown_ProfessorElmsLab_Heal_Dialogue::
# 31 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 32 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 2, Movement_ProfessorElmsLabNPCFacesPlayer
# 33 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0, MSGBOX_YESNO
# 34 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2
# 45 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 46 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3
# 47 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1:
# 49 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_2:
# 36 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 37 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1
# 38 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 39 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	call EventScript_OutOfCenterPartyHeal
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2
# 41 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
	goto NewBarkTown_ProfessorElmsLab_Heal_Dialogue_1


NewBarkTown_ProfessorElmsLab_Elm_Dialogue::
# 55 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	goto_if_set FLAG_MEW_QUEST_STARTED, NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1
# 66 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1
# 68 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 69 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 70 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 71 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 72 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 73 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2
# 74 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 75 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3
# 76 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4
# 78 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5
# 80 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 81 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmNoticesPlayer
# 82 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	waitmovement
# 83 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6
# 84 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 85 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7
# 86 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 87 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8
# 88 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 89 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setflag FLAG_MEW_QUEST_STARTED
# 90 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	setvar VAR_JOHTO_STORY_PROGRESS, 1
# 91 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_1:
# 57 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	lock
# 58 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	applymovement 1, Movement_ProfessorElmsLabNPCFacesPlayer
# 59 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	msgbox NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0
# 60 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	closemessage
# 61 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	releaseall
	end


# 96 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmNoticesPlayer:
# 98 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	emote_exclamation_mark
# 99 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

# 102 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
Movement_ProfessorElmsLabNPCFacesPlayer:
# 104 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	face_player
# 105 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	step_end

NewBarkTown_ProfessorElmsLab_Aide_1_Dialogue_Text_0:
# 13 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I help PROF. ELM with his research.\n"
	.string "He gets distracted easily.$"

NewBarkTown_ProfessorElmsLab_Aide_2_Dialogue_Text_0:
# 23 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "You're compiling a POKéDEX, too?\n"
	.string "Interesting...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_0:
# 33 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hello!\n"
	.string "I can heal your POKéMON.\p"
	.string "Would you like me to restore\n"
	.string "your POKéMON to full health?$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_1:
# 37 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I'll take your POKéMON for one\n"
	.string "quick moment, then...$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_2:
# 40 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Your POKéMON have been fully\n"
	.string "healed. Good luck out there!$"

NewBarkTown_ProfessorElmsLab_Heal_Dialogue_Text_3:
# 46 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Got it, no worries!\n"
	.string "I'll be here.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_0:
# 59 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hi, {PLAYER}!\n"
	.string "How are you doing?\p"
	.string "If your POKéMON get hurt, you\n"
	.string "can heal them here, too!\p"
	.string "Please speak with my wife by\n"
	.string "the machine there.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_1:
# 67 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Hmm... What's this?\n"
	.string "Email from MR. POKéMON?\p"
	.string "Uh-huh... I see...\n"
	.string "Ah! PROF. OAK is there?\p"
	.string "This is fascinating!\n"
	.string "I'd better get-$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_2:
# 73 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Uh, hi!\n"
	.string "Who are you?\p"
	.string "{PLAYER}? It's nice to meet you!\n"
	.string "Your timing is perfect, actually!\p"
	.string "I'm PROF. ELM, by the way!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_3:
# 75 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "An associate of mine, MR. POKéMON,\n"
	.string "just sent me a lengthy email.\p"
	.string "If you'd be so kind to\n"
	.string "assist, I would appreciate it!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_4:
# 77 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "I see that you have POKéMON already,\n"
	.string "so this should be easy, right?\p"
	.string "Just head west to CHERRYGROVE CITY.\n"
	.string "His house is north from there!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_5:
# 79 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, right! On your way there,\n"
	.string "stop by the POKéMON CENTER.\p"
	.string "Make sure you have free\n"
	.string "space in your party.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_6:
# 83 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Oh, wait!\n"
	.string "I almost forgot!\p"
	.string "SILPH CO. has resumed operations,\n"
	.string "and recently sent me an email.$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_7:
# 85 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "They were looking for help testing\n"
	.string "their new prototype device.\p"
	.string "They need experienced TRAINERS,\n"
	.string "a specific criteria you fit!$"

NewBarkTown_ProfessorElmsLab_Elm_Dialogue_Text_8:
# 87 "data/maps/NewBarkTown_ProfessorElmsLab/scripts.pory"
	.string "Ah... I apologize!\n"
	.string "We've only just met...\p"
	.string "I hope it's not too much to\n"
	.string "ask of you!$"
