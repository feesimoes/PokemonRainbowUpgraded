# 1 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 2 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_MapScripts::
# 3 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.byte 0
# 4 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 5 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji::
# 6 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 7 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 8 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
    goto_if_set FLAG_MEW_QUEST_STARTED, LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine
# 9 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_GOT_POKE_FLUTE, LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute
# 10 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_IdLikeYouToHaveThis
# 11 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	checkitemspace ITEM_POKE_FLUTE
# 12 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute
# 13 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_GOT_POKE_FLUTE
# 14 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playfanfare MUS_LAVENDER_PEACE_INTRO
# 15 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	giveitem_msg LavenderTown_VolunteerPokemonHouse_Text_ReceivedPokeFluteFromMrFuji, ITEM_POKE_FLUTE, 1, MUS_OBTAIN_KEY_ITEM
# 16 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitfanfare
# 17 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_ExplainPokeFlute
# 18 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmessage
# 19 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playbgm MUS_LAVENDER_PEACE, TRUE
# 20 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 21 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 22 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 23 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_AlreadyHavePokeFlute::
# 24 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_HasPokeFluteHelpedYou
# 25 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 26 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 27 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 28 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_NoRoomForPokeFlute::
# 29 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MustMakeRoomForThis
# 30 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 31 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 32 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 33 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleGirl::
# 34 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 35 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 36 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 0
# 37 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiLooksAfterOrphanedMons
# 38 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 39 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 40 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 41 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_LittleBoy::
# 42 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MonsNiceToHug, MSGBOX_NPC
# 43 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 44 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 45 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Youngster::
# 46 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 47 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 48 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	goto_if_set FLAG_RESCUED_MR_FUJI, LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack
# 49 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_WhereDidMrFujiGo
# 50 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 51 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 52 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 53 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_YoungsterFujiBack::
# 54 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_MrFujiWasPrayingForCubonesMother
# 55 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 56 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 57 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 58 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Nidorino::
# 59 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 60 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 61 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 62 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_NIDORINO, CRY_MODE_NORMAL
# 63 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Nidorino
# 64 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 65 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 66 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 67 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 68 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Psyduck::
# 69 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 70 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 71 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitse
# 72 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	playmoncry SPECIES_PSYDUCK, CRY_MODE_NORMAL
# 73 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_Psyduck
# 74 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	waitmoncry
# 75 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
# 76 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 77 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 78 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_PokemonFanMagazine::
# 79 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lockall
# 80 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	famechecker FAMECHECKER_MRFUJI, 2
# 81 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_GrandPrizeDrawingClipped
# 82 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	releaseall
# 83 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end
# 84 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"

# 85 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
LavenderTown_VolunteerPokemonHouse_EventScript_Bookshelf::
# 86 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_Text_PokemonMagazinesLineShelf, MSGBOX_SIGN
# 87 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine::
# 93 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 9
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_1
# 108 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 1
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_2
# 122 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 2
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_3
# 132 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	compare VAR_MEW_QUEST_PROGRESS, 7
	goto_if_eq LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_4
# 143 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 144 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 145 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_10
# 146 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	closemessage
# 147 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_1:
# 95 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 96 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 97 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_0
# 98 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	fadenewbgm MUS_KANTO_EMOTION
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_1
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_2
# 101 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	closemessage
# 102 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	fadedefaultbgm
# 103 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 10
# 104 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setflag FLAG_HIDE_CERULEAN_CAVE_GUARD
# 105 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_2:
# 110 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 111 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_3
# 113 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_4
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_5
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_6
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_7
# 117 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	setvar VAR_MEW_QUEST_PROGRESS, 2
# 118 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	closemessage
# 119 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_3:
# 124 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 125 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 126 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_8
# 127 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	closemessage
# 128 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	clearflag FLAG_HIDE_CINNABAR_ISLAND_GYM_BLAINE
# 129 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_4:
# 134 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	lock
# 135 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	faceplayer
# 136 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	msgbox LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_9
# 137 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	closemessage
# 138 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	release
	end


LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_0:
# 97 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MR. FUJI: {PLAYER}, you're back?\n"
	.string "...Hm, I see...\p"
	.string "Yes, the PRESIDENT is acting with\n"
	.string "more caution, now...$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_1:
# 99 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MEW... I wonder if it's still\n"
	.string "out there...\p"
	.string "{PLAYER}. If...\n"
	.string "If you find MEW, please...$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_2:
# 100 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "Treat MEW with deep love and\n"
	.string "care for it, as if family...\p"
	.string "Thank you.\n"
	.string "From the bottom of my heart.$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_3:
# 112 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MR. FUJI: Has my POKé FLUTE\n"
	.string "helped you?\p"
	.string "...Hm? What's the matter?\n"
	.string "SILPH CO.'s prototype, stolen?$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_4:
# 113 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "I'm not sure I understand\n"
	.string "why the PRESIDENT would...\p"
	.string "Hm...\n"
	.string "Oh, right...$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_5:
# 114 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "{PLAYER}. I cannot help you.\n"
	.string "However...\p"
	.string "If you truly had deep\n"
	.string "love for POKéMON...\p"
	.string "You wouldn't have skipped\n"
	.string "the 7th GYM BADGE.$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_6:
# 115 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "So, please speak with BLAINE.\n"
	.string "CINNABAR ISLAND's GYM LEADER...\p"
	.string "Yes, that's who you must\n"
	.string "face, of course...$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_7:
# 116 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "I will be cheering you on\n"
	.string "for your final challenge!\p"
	.string "Bring out your strongest POKéMON\n"
	.string "and secure the BADGE.$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_8:
# 126 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MR. FUJI: Bring your strongest\n"
	.string "POKéMON, and secure the 7th BADGE.\p"
	.string "I will be cheering you on!\n"
	.string "...From distance of CINNABAR ISLAND.$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_9:
# 136 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MR. FUJI: ...BLAINE is not\n"
	.string "a bad man.\p"
	.string "His intentions are noble,\n"
	.string "genuine, even...\p"
	.string "{PLAYER}, I'm sorry, you don't\n"
	.string "understand... Focus on GIOVANNI.$"

LavenderTown_VolunteerPokemonHouse_EventScript_MrFuji_Mew_Quest_PleaseSpeakWithBlaine_Text_10:
# 145 "data/maps/LavenderTown_VolunteerPokemonHouse/scripts.pory"
	.string "MR. FUJI: Has my wisdom\n"
	.string "helped you?$"
