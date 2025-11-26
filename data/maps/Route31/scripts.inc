Route31_MapScripts::
	.byte 0


Route31_VioletCity_Sign::
# 8 "data/maps/Route31/scripts.pory"
	lock
# 9 "data/maps/Route31/scripts.pory"
	msgbox Route31_VioletCity_Sign_Text_0
# 10 "data/maps/Route31/scripts.pory"
	closemessage
# 11 "data/maps/Route31/scripts.pory"
	release
	end


Route31_DarkCave_Sign::
# 17 "data/maps/Route31/scripts.pory"
	lock
# 18 "data/maps/Route31/scripts.pory"
	msgbox Route31_DarkCave_Sign_Text_0
# 19 "data/maps/Route31/scripts.pory"
	closemessage
# 20 "data/maps/Route31/scripts.pory"
	release
	end


Route31_DarkCave_Boy_Advice::
# 26 "data/maps/Route31/scripts.pory"
	lock
# 27 "data/maps/Route31/scripts.pory"
	applymovement 4, Route31_NPC_FacePlayer
# 28 "data/maps/Route31/scripts.pory"
	msgbox Route31_DarkCave_Boy_Advice_Text_0
# 29 "data/maps/Route31/scripts.pory"
	waitmessage
# 30 "data/maps/Route31/scripts.pory"
	closemessage
# 31 "data/maps/Route31/scripts.pory"
	release
	end


Route31_Fat_Man::
# 37 "data/maps/Route31/scripts.pory"
	lock
# 38 "data/maps/Route31/scripts.pory"
	applymovement 1, Route31_NPC_FacePlayer
# 39 "data/maps/Route31/scripts.pory"
	msgbox Route31_Fat_Man_Text_0
# 40 "data/maps/Route31/scripts.pory"
	waitmessage
# 41 "data/maps/Route31/scripts.pory"
	closemessage
# 42 "data/maps/Route31/scripts.pory"
	release
	end


Route31_Bug_Catcher_Wade_Battle::
# 48 "data/maps/Route31/scripts.pory"
	trainerbattle_single TRAINER_BUG_CATCHER_WADE, Route31_Bug_Catcher_Wade_Battle_Text_0, Route31_Bug_Catcher_Wade_Battle_Text_1
# 49 "data/maps/Route31/scripts.pory"
	msgbox Route31_Bug_Catcher_Wade_Battle_Text_2
# 50 "data/maps/Route31/scripts.pory"
	closemessage
# 51 "data/maps/Route31/scripts.pory"
	releaseall
	end


Route31_Super_Nerd::
# 57 "data/maps/Route31/scripts.pory"
	lock
# 58 "data/maps/Route31/scripts.pory"
	applymovement 3, Route31_NPC_FacePlayer
# 59 "data/maps/Route31/scripts.pory"
	msgbox Route31_Super_Nerd_Text_0
# 60 "data/maps/Route31/scripts.pory"
	waitmessage
# 61 "data/maps/Route31/scripts.pory"
	closemessage
# 62 "data/maps/Route31/scripts.pory"
	release
	end


# 66 "data/maps/Route31/scripts.pory"
Route31_NPC_FacePlayer:
# 68 "data/maps/Route31/scripts.pory"
	face_player
# 69 "data/maps/Route31/scripts.pory"
	step_end

Route31_VioletCity_Sign_Text_0:
# 9 "data/maps/Route31/scripts.pory"
	.string "VIOLET CITY - ROUTE 31\n"
	.string "A short, yet, nostalgic path.$"

Route31_DarkCave_Sign_Text_0:
# 18 "data/maps/Route31/scripts.pory"
	.string "DARK CAVE - ROUTE 46\n"
	.string "A tunnel network beneath JOHTO.$"

Route31_DarkCave_Boy_Advice_Text_0:
# 28 "data/maps/Route31/scripts.pory"
	.string "Here's some advice. Don't go in\n"
	.string "DARK CAVE without HM05: FLASH.$"

Route31_Fat_Man_Text_0:
# 39 "data/maps/Route31/scripts.pory"
	.string "You can technically go in DARK CAVE\n"
	.string "without HM05: FLASH...\p"
	.string "But... It's very easy to get\n"
	.string "lost in there...$"

Route31_Bug_Catcher_Wade_Battle_Text_0:
# 48 "data/maps/Route31/scripts.pory"
	.string "Are you lost?\n"
	.string "You strike me as a SPINARAK...\p"
	.string "Except, with no way home...\n"
	.string "Far from home, no homecoming.\p"
	.string "Poor little SPINARAK.$"

Route31_Bug_Catcher_Wade_Battle_Text_1:
# 48 "data/maps/Route31/scripts.pory"
	.string "Drat!\n"
	.string "The itsy bitsy little SPINARAK...\p"
	.string "...Isn't so little and weak anymore!$"

Route31_Bug_Catcher_Wade_Battle_Text_2:
# 49 "data/maps/Route31/scripts.pory"
	.string "All right, you beat me...\n"
	.string "I'm honestly kind of surprised.\p"
	.string "You did not react to my cultural\n"
	.string "references at all, not one bit.$"

Route31_Super_Nerd_Text_0:
# 59 "data/maps/Route31/scripts.pory"
	.string "Oh, wow!\n"
	.string "You've got a lot of BADGES.\p"
	.string "Since you're from KANTO, it does\n"
	.string "make sense. But...\p"
	.string "You need the LEAGUE to approve\n"
	.string "collection of even more BADGES.$"
