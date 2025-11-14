Route46_MapScripts::
	.byte 0


Route46_Sign::
# 5 "data/maps/Route46/scripts.pory"
	msgbox Route46_Sign_Text_0
# 6 "data/maps/Route46/scripts.pory"
	closemessage
# 7 "data/maps/Route46/scripts.pory"
	releaseall
	end


Route46_DarkCave_Sign::
# 12 "data/maps/Route46/scripts.pory"
	msgbox Route46_DarkCave_Sign_Text_0
# 13 "data/maps/Route46/scripts.pory"
	closemessage
# 14 "data/maps/Route46/scripts.pory"
	releaseall
	end


Route46_Picnicker_Erin_Battle::
# 20 "data/maps/Route46/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_ERIN, Route46_Picnicker_Erin_Battle_Text_0, Route46_Picnicker_Erin_Battle_Text_1
# 21 "data/maps/Route46/scripts.pory"
	msgbox Route46_Picnicker_Erin_Battle_Text_2
# 22 "data/maps/Route46/scripts.pory"
	closemessage
# 23 "data/maps/Route46/scripts.pory"
	releaseall
	end


Route46_Hiker_Bailey_Battle::
# 29 "data/maps/Route46/scripts.pory"
	trainerbattle_single TRAINER_HIKER_BAILEY, Route46_Hiker_Bailey_Battle_Text_0, Route46_Hiker_Bailey_Battle_Text_1
# 30 "data/maps/Route46/scripts.pory"
	msgbox Route46_Hiker_Bailey_Battle_Text_2
# 31 "data/maps/Route46/scripts.pory"
	closemessage
# 32 "data/maps/Route46/scripts.pory"
	releaseall
	end


Route46_Explorer_Guy_Dialogue::
# 38 "data/maps/Route46/scripts.pory"
	lock
# 39 "data/maps/Route46/scripts.pory"
	applymovement 2, Movement_Route46_NPC_Face_Player
# 40 "data/maps/Route46/scripts.pory"
	msgbox Route46_Explorer_Guy_Dialogue_Text_0
# 41 "data/maps/Route46/scripts.pory"
	closemessage
# 42 "data/maps/Route46/scripts.pory"
	releaseall
	end


# 46 "data/maps/Route46/scripts.pory"
Movement_Route46_NPC_Face_Player:
# 48 "data/maps/Route46/scripts.pory"
	face_player
# 49 "data/maps/Route46/scripts.pory"
	step_end

Route46_Sign_Text_0:
# 5 "data/maps/Route46/scripts.pory"
	.string "ROUTE 46 -\n"
	.string "Sloping path down to grassy plains.$"

Route46_DarkCave_Sign_Text_0:
# 12 "data/maps/Route46/scripts.pory"
	.string "DARK CAVE -\n"
	.string "A tunnel that runs beneath JOHTO.$"

Route46_Picnicker_Erin_Battle_Text_0:
# 20 "data/maps/Route46/scripts.pory"
	.string "Excuse me?$"

Route46_Picnicker_Erin_Battle_Text_1:
# 20 "data/maps/Route46/scripts.pory"
	.string "...I-$"

Route46_Picnicker_Erin_Battle_Text_2:
# 21 "data/maps/Route46/scripts.pory"
	.string "Oof!$"

Route46_Hiker_Bailey_Battle_Text_0:
# 29 "data/maps/Route46/scripts.pory"
	.string "Hopping off a rocky ledge...\n"
	.string "Does that make you an anti-HIKER?$"

Route46_Hiker_Bailey_Battle_Text_1:
# 29 "data/maps/Route46/scripts.pory"
	.string "Perhaps I should re-do my vocabulary...$"

Route46_Hiker_Bailey_Battle_Text_2:
# 30 "data/maps/Route46/scripts.pory"
	.string "You handled my sturdy team like\n"
	.string "it was an anti-climatic moment!$"

Route46_Explorer_Guy_Dialogue_Text_0:
# 40 "data/maps/Route46/scripts.pory"
	.string "I'm trying to find rare POKéMON.\n"
	.string "So far, no luck...$"
