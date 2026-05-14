# 1 "data/maps/CeruleanCity_Gym/scripts.pory"

# 2 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_MapScripts::
# 3 "data/maps/CeruleanCity_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/CeruleanCity_Gym/scripts.pory"

# 5 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Misty::
# 6 "data/maps/CeruleanCity_Gym/scripts.pory"
    goto_if_set FLAG_BADGE08_GET, CeruleanCity_Gym_EventScript_Misty_Rematch
# 7 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, FCPICKSTATE_COLORED, UpdatePickStateFromSpecialVar8005
# 8 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY, CeruleanCity_Gym_Text_MistyIntro, CeruleanCity_Gym_Text_MistyDefeat, CeruleanCity_Gym_EventScript_MistyDefeated, NO_MUSIC
# 9 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_unset FLAG_GOT_TM03_FROM_MISTY, CeruleanCity_Gym_EventScript_GiveTM03
# 10 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 11 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 12 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 13 "data/maps/CeruleanCity_Gym/scripts.pory"

# 14 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_MistyDefeated::
# 15 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 1
# 16 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_MISTY
# 17 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 18 "data/maps/CeruleanCity_Gym/scripts.pory"
	setrespawn HEAL_LOCATION_CERULEAN_CITY
# 19 "data/maps/CeruleanCity_Gym/scripts.pory"
	set_gym_trainers 2
# 20 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto CeruleanCity_Gym_EventScript_GiveTM03
# 21 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 22 "data/maps/CeruleanCity_Gym/scripts.pory"

# 23 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GiveTM03::
# 24 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainCascadeBadge
# 25 "data/maps/CeruleanCity_Gym/scripts.pory"
	checkitemspace ITEM_TM03
# 26 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, CeruleanCity_Gym_EventScript_NoRoomForTM03
# 27 "data/maps/CeruleanCity_Gym/scripts.pory"
	giveitem_msg CeruleanCity_Gym_Text_ReceivedTM03FromMisty, ITEM_TM03
# 28 "data/maps/CeruleanCity_Gym/scripts.pory"
	setflag FLAG_GOT_TM03_FROM_MISTY
# 29 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_ExplainTM03
# 30 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 31 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 32 "data/maps/CeruleanCity_Gym/scripts.pory"

# 33 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_NoRoomForTM03::
# 34 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_BetterMakeRoomForThis
# 35 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 36 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 37 "data/maps/CeruleanCity_Gym/scripts.pory"

# 38 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Diana::
# 39 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_DIANA, CeruleanCity_Gym_Text_DianaIntro, CeruleanCity_Gym_Text_DianaDefeat
# 40 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_DianaPostBattle, MSGBOX_AUTOCLOSE
# 41 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 42 "data/maps/CeruleanCity_Gym/scripts.pory"

# 43 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_Luis::
# 44 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_SWIMMER_MALE_LUIS, CeruleanCity_Gym_Text_LuisIntro, CeruleanCity_Gym_Text_LuisDefeat
# 45 "data/maps/CeruleanCity_Gym/scripts.pory"
	famechecker FAMECHECKER_MISTY, 2
# 46 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_LuisPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 48 "data/maps/CeruleanCity_Gym/scripts.pory"

# 49 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuy::
# 50 "data/maps/CeruleanCity_Gym/scripts.pory"
	lock
# 51 "data/maps/CeruleanCity_Gym/scripts.pory"
	faceplayer
# 52 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_MISTY, CeruleanCity_Gym_EventScript_GymGuyPostVictory
# 53 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymGuyAdvice
# 54 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 55 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 56 "data/maps/CeruleanCity_Gym/scripts.pory"

# 57 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymGuyPostVictory::
# 58 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_WeMakePrettyGoodTeam
# 59 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
# 60 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 61 "data/maps/CeruleanCity_Gym/scripts.pory"

# 62 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatue::
# 63 "data/maps/CeruleanCity_Gym/scripts.pory"
	lockall
# 64 "data/maps/CeruleanCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, CeruleanCity_Gym_EventScript_GymStatuePostVictory
# 65 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatue
# 66 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 67 "data/maps/CeruleanCity_Gym/scripts.pory"
	end
# 68 "data/maps/CeruleanCity_Gym/scripts.pory"

# 69 "data/maps/CeruleanCity_Gym/scripts.pory"
CeruleanCity_Gym_EventScript_GymStatuePostVictory::
# 70 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_Text_GymStatuePlayerWon
# 71 "data/maps/CeruleanCity_Gym/scripts.pory"
	releaseall
# 72 "data/maps/CeruleanCity_Gym/scripts.pory"
	end

CeruleanCity_Gym_EventScript_Misty_Rematch::
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LEADER_MISTY_2, CeruleanCity_Gym_EventScript_Misty_Rematch_Text_0, CeruleanCity_Gym_EventScript_Misty_Rematch_Text_1, CeruleanCity_Gym_EventScript_Misty_Rematch_Text_2, NO_MUSIC
# 78 "data/maps/CeruleanCity_Gym/scripts.pory"
	msgbox CeruleanCity_Gym_EventScript_Misty_Rematch_Text_3
# 79 "data/maps/CeruleanCity_Gym/scripts.pory"
	closemessage
# 80 "data/maps/CeruleanCity_Gym/scripts.pory"
	cleartrainerflag TRAINER_LEADER_MISTY_2
# 81 "data/maps/CeruleanCity_Gym/scripts.pory"
	release
	end


CeruleanCity_Gym_EventScript_Misty_Rematch_Text_0:
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Hi, again!\n"
	.string "Wow! {PLAYER}, was it?\p"
	.string "What's been happening? Everything's\n"
	.string "good with me...\p"
	.string "I heard an interesting rumor!\n"
	.string "It isn't just a rumor, huh?\p"
	.string "You got all 8 BADGES!\n"
	.string "You've gotten so strong!\p"
	.string "I can't take it anymore! I just\n"
	.string "have to battle you again!{PLAY_BGM}{MUS_ENCOUNTER_GYM_LEADER}$"

CeruleanCity_Gym_EventScript_Misty_Rematch_Text_1:
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "Hmph!\n"
	.string "How annoying!$"

CeruleanCity_Gym_EventScript_Misty_Rematch_Text_2:
# 77 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "$"

CeruleanCity_Gym_EventScript_Misty_Rematch_Text_3:
# 78 "data/maps/CeruleanCity_Gym/scripts.pory"
	.string "I lost...\n"
	.string "I need to try swimming around.\p"
	.string "Just for a bit so I can clear\n"
	.string "my head of these feelings...\p"
	.string "I definitely won't lose to\n"
	.string "you next time, {PLAYER}!$"
