Route35_NationalParkGate_MapScripts::
	.byte 0


Route35_NationalParkGate_BugCatchingContest_Info_Clerk::
# 5 "data/maps/Route35_NationalParkGate/scripts.pory"
	lock
# 6 "data/maps/Route35_NationalParkGate/scripts.pory"
	faceplayer
# 7 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_0, MSGBOX_YESNO
# 8 "data/maps/Route35_NationalParkGate/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route35_NationalParkGate_BugCatchingContest_Info_Clerk_2
# 20 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_8
Route35_NationalParkGate_BugCatchingContest_Info_Clerk_1:
# 22 "data/maps/Route35_NationalParkGate/scripts.pory"
	closemessage
# 23 "data/maps/Route35_NationalParkGate/scripts.pory"
	release
	end

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_2:
# 10 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_1
# 11 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_2
# 12 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_3
# 13 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_4
# 14 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_5
# 15 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_6
# 16 "data/maps/Route35_NationalParkGate/scripts.pory"
	msgbox Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_7
	goto Route35_NationalParkGate_BugCatchingContest_Info_Clerk_1


Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_0:
# 7 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "Hi, welcome to NATIONAL PARK!\n"
	.string "Home of the BUG CATCHING CONTEST!\p"
	.string "Would you like to know more?$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_1:
# 10 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "Of course, I'm happy to explain!\n"
	.string "In this sport, we use SAFARI BALLS.\p"
	.string "We will supply 10 SAFARI BALLS,\n"
	.string "and 10 minutes to catch.$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_2:
# 11 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "For each GYM BADGE you collect,\n"
	.string "we'll add another 2 SAFARI BALLS.\p"
	.string "The timer will also be extended by\n"
	.string "an additional 1 minute each!$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_3:
# 12 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "Everyone is welcome to join in,\n"
	.string "and we're always running it!\p"
	.string "There is also no fee in any\n"
	.string "part of the CATCHING CONTEST.$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_4:
# 13 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "You will need one free space in\n"
	.string "your PARTY to register.\p"
	.string "Once you catch a POKéMON in the\n"
	.string "game, it will be judged!$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_5:
# 14 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "If you run out of time or SAFARI\n"
	.string "BALLS, you'll lose there, too.\p"
	.string "Try to catch rarer POKéMON for a\n"
	.string "chance to claim great rewards!$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_6:
# 15 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "You also get to keep your catches!\n"
	.string "If that all sounds good...\p"
	.string "You can talk to my associate,\n"
	.string "on the counter across from me.$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_7:
# 16 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "Good luck out there!$"

Route35_NationalParkGate_BugCatchingContest_Info_Clerk_Text_8:
# 20 "data/maps/Route35_NationalParkGate/scripts.pory"
	.string "No worries, enjoy the scenery!$"
