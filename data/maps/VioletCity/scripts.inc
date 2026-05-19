VioletCity_MapScripts::
	.byte 0


VioletCity_Sign::
# 8 "data/maps/VioletCity/scripts.pory"
	lock
# 9 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Sign_Text_0
# 10 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 11 "data/maps/VioletCity/scripts.pory"
	closemessage
# 12 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_Gym_Sign::
# 18 "data/maps/VioletCity/scripts.pory"
	lock
# 19 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Gym_Sign_Text_0
# 20 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 21 "data/maps/VioletCity/scripts.pory"
	closemessage
# 22 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_School_Sign::
# 28 "data/maps/VioletCity/scripts.pory"
	lock
# 29 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_School_Sign_Text_0
# 30 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 31 "data/maps/VioletCity/scripts.pory"
	closemessage
# 32 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_BlackBelt::
# 38 "data/maps/VioletCity/scripts.pory"
	lock
# 39 "data/maps/VioletCity/scripts.pory"
	applymovement 2, VioletCity_NPC_Face_Player
# 40 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_BlackBelt_Text_0
# 41 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 42 "data/maps/VioletCity/scripts.pory"
	closemessage
# 43 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_Beauty::
# 49 "data/maps/VioletCity/scripts.pory"
	lock
# 50 "data/maps/VioletCity/scripts.pory"
	applymovement 3, VioletCity_NPC_Face_Player
# 51 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Beauty_Text_0
# 52 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 53 "data/maps/VioletCity/scripts.pory"
	closemessage
# 54 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_Man::
# 60 "data/maps/VioletCity/scripts.pory"
	lock
# 61 "data/maps/VioletCity/scripts.pory"
	applymovement 4, VioletCity_NPC_Face_Player
# 62 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Man_Text_0
# 63 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 64 "data/maps/VioletCity/scripts.pory"
	closemessage
# 65 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Man_Text_1
# 66 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 67 "data/maps/VioletCity/scripts.pory"
	closemessage
# 68 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Man_Text_2
# 69 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 70 "data/maps/VioletCity/scripts.pory"
	closemessage
# 71 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Man_Text_3
# 72 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 73 "data/maps/VioletCity/scripts.pory"
	closemessage
# 74 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_Hiker::
# 80 "data/maps/VioletCity/scripts.pory"
	lock
# 81 "data/maps/VioletCity/scripts.pory"
	applymovement 5, VioletCity_NPC_Face_Player
# 82 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Hiker_Text_0
# 83 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 84 "data/maps/VioletCity/scripts.pory"
	closemessage
# 85 "data/maps/VioletCity/scripts.pory"
	release
	end


VioletCity_Sprout_Tower_Sign::
# 91 "data/maps/VioletCity/scripts.pory"
	lock
# 92 "data/maps/VioletCity/scripts.pory"
	msgbox VioletCity_Sprout_Tower_Sign_Text_0
# 93 "data/maps/VioletCity/scripts.pory"
	waitmessage
# 94 "data/maps/VioletCity/scripts.pory"
	closemessage
# 95 "data/maps/VioletCity/scripts.pory"
	release
	end


# 99 "data/maps/VioletCity/scripts.pory"
VioletCity_NPC_Face_Player:
# 101 "data/maps/VioletCity/scripts.pory"
	face_player
# 102 "data/maps/VioletCity/scripts.pory"
	step_end

VioletCity_Sign_Text_0:
# 9 "data/maps/VioletCity/scripts.pory"
	.string "VIOLET CITY -\n"
	.string "The city of nostalgic scents.$"

VioletCity_Gym_Sign_Text_0:
# 19 "data/maps/VioletCity/scripts.pory"
	.string "VIOLET CITY POKéMON GYM\n"
	.string "LEADER: WALKER\p"
	.string "The courageous master of flying\n"
	.string "POKéMON!$"

VioletCity_School_Sign_Text_0:
# 29 "data/maps/VioletCity/scripts.pory"
	.string "VIOLET CITY - TRAINERS' SCHOOL\n"
	.string "TEACHER: EARL DERVISH$"

VioletCity_BlackBelt_Text_0:
# 40 "data/maps/VioletCity/scripts.pory"
	.string "EARL taught me all there is to\n"
	.string "know about POKéMON, I think.$"

VioletCity_Beauty_Text_0:
# 51 "data/maps/VioletCity/scripts.pory"
	.string "Have you been to SPROUT TOWER?\n"
	.string "Avoid my mistake...\p"
	.string "It isn't a joke, that\n"
	.string "tower is rough!$"

VioletCity_Man_Text_0:
# 62 "data/maps/VioletCity/scripts.pory"
	.string "Have you heard the DAY CARE story?\n"
	.string "I'll tell you.\p"
	.string "A woman who lived near GOLDENROD\n"
	.string "CITY ran a DAY CARE.\p"
	.string "Over time, more TRAINERS kept using\n"
	.string "her valuable services.$"

VioletCity_Man_Text_1:
# 65 "data/maps/VioletCity/scripts.pory"
	.string "So, you know, business was booming.\n"
	.string "Eventually, she couldn't keep up.\p"
	.string "That's when she met a man\n"
	.string "who was more than a helper.$"

VioletCity_Man_Text_2:
# 68 "data/maps/VioletCity/scripts.pory"
	.string "One day, her husband started finding\n"
	.string "these oval-shaped things...\p"
	.string "Now, nobody knows how it got\n"
	.string "there, or what, but...$"

VioletCity_Man_Text_3:
# 71 "data/maps/VioletCity/scripts.pory"
	.string "These things eventually shake and\n"
	.string "crack open, revealing POKéMON!\p"
	.string "That's what many TRAINERS report...\n"
	.string "It seems to be random, though.$"

VioletCity_Hiker_Text_0:
# 82 "data/maps/VioletCity/scripts.pory"
	.string "So, this is the way, eh?\n"
	.string "This tower is unlike any mountain!$"

VioletCity_Sprout_Tower_Sign_Text_0:
# 92 "data/maps/VioletCity/scripts.pory"
	.string "VIOLET CITY - SPROUT TOWER\n"
	.string "The way of POKéMON... No doubts!$"
