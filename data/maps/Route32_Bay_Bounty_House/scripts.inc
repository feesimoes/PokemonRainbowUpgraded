Route32_Bay_Bounty_House_MapScripts::
	.byte 0


Butch_Bounty_Hunter_Dialogue::
# 7 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	lock
# 8 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_0
# 9 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 10 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 11 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	applymovement 1, Movement_Butch_Face_Player
# 12 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	special GetBountyTaskMonAndReward
# 13 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_1
# 14 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 15 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 16 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_2, MSGBOX_YESNO
# 17 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 18 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Butch_Bounty_Hunter_Dialogue_2
# 48 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 49 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_8
# 50 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 51 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
Butch_Bounty_Hunter_Dialogue_1:
# 53 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	releaseall
	end

Butch_Bounty_Hunter_Dialogue_2:
# 20 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_3
# 21 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 22 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 23 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	special ChoosePartyMon
# 24 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitstate
# 25 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_4
# 26 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 27 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 28 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	special CheckMonClaimBountyTaskReward
# 29 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	compare VAR_BOUNTY_TASK_MON, 0
	goto_if_eq Butch_Bounty_Hunter_Dialogue_5
# 41 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_7
# 42 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 43 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
	goto Butch_Bounty_Hunter_Dialogue_1

Butch_Bounty_Hunter_Dialogue_5:
# 31 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_5
# 32 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 33 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 34 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	special GetBountyTaskMonAndReward
# 35 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Hunter_Dialogue_Text_6
# 36 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	waitmessage
# 37 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
	goto Butch_Bounty_Hunter_Dialogue_1


# 57 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
Movement_Butch_Face_Player:
# 58 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	face_player
# 59 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	step_end

# 62 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
Movement_Butch_Notice_Player_Emote:
# 63 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	emote_exclamation_mark
# 64 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	step_end

Butch_Bounty_Hunter_Dialogue_Text_0:
# 8 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "It's about time\n"
	.string "ya got here, rookie!$"

Butch_Bounty_Hunter_Dialogue_Text_1:
# 13 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "So, here's the deal, see...\n"
	.string "I need a {STR_VAR_1}!\p"
	.string "But not just any! Make sure\n"
	.string "it's LV.{STR_VAR_2}, in a\l"
	.string "{STR_VAR_3} BALL.$"

Butch_Bounty_Hunter_Dialogue_Text_2:
# 16 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Maybe I misjudged ya!\n"
	.string "Have you brought it in?$"

Butch_Bounty_Hunter_Dialogue_Text_3:
# 20 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Good, hand it over then!$"

Butch_Bounty_Hunter_Dialogue_Text_4:
# 25 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Let's see...$"

Butch_Bounty_Hunter_Dialogue_Text_5:
# 31 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Here's your payment, as promised.$"

Butch_Bounty_Hunter_Dialogue_Text_6:
# 35 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Before I let you go,\n"
	.string "I'll need a {STR_VAR_1}!\p"
	.string "But not just any! Make sure\n"
	.string "it's LV.{STR_VAR_2}, in a\l"
	.string "{STR_VAR_3} BALL.\p"
	.string "Get to work, rookie!$"

Butch_Bounty_Hunter_Dialogue_Text_7:
# 41 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "That's not right...\n"
	.string "Get to work, rookie!\p"
	.string "Also, make sure you have\n"
	.string "at least 2 PARTY POKéMON.$"

Butch_Bounty_Hunter_Dialogue_Text_8:
# 49 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "If you need tips on your task,\n"
	.string "I'm sure CASSIDY can help.\p"
	.string "She'd be around here, on\n"
	.string "sort of a remote island.\p"
	.string "So, get to work, rookie!$"
