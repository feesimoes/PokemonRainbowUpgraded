Route27_MapScripts::
	.byte 0


Route27_Map_Sign::
# 8 "data/maps/Route27/scripts.pory"
	msgbox Route27_Map_Sign_Text_0
# 9 "data/maps/Route27/scripts.pory"
	closemessage
# 10 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_TohjoFalls_Sign::
# 16 "data/maps/Route27/scripts.pory"
	msgbox Route27_TohjoFalls_Sign_Text_0
# 17 "data/maps/Route27/scripts.pory"
	closemessage
# 18 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Fat_Man::
# 24 "data/maps/Route27/scripts.pory"
	lock
# 25 "data/maps/Route27/scripts.pory"
	faceplayer
# 26 "data/maps/Route27/scripts.pory"
	msgbox Route27_Fat_Man_Text_0
# 27 "data/maps/Route27/scripts.pory"
	closemessage
# 28 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Birdkeeper_Jose_Battle::
# 34 "data/maps/Route27/scripts.pory"
	trainerbattle_single TRAINER_BIRDKEEPER_JOSE, Route27_Birdkeeper_Jose_Battle_Text_0, Route27_Birdkeeper_Jose_Battle_Text_1
# 35 "data/maps/Route27/scripts.pory"
	msgbox Route27_Birdkeeper_Jose_Battle_Text_2
# 36 "data/maps/Route27/scripts.pory"
	closemessage
# 37 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Picnicker_Megan_Battle::
# 43 "data/maps/Route27/scripts.pory"
	trainerbattle_single TRAINER_PICNICKER_MEGAN, Route27_Picnicker_Megan_Battle_Text_0, Route27_Picnicker_Megan_Battle_Text_1
# 44 "data/maps/Route27/scripts.pory"
	msgbox Route27_Picnicker_Megan_Battle_Text_2
# 45 "data/maps/Route27/scripts.pory"
	closemessage
# 46 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Cooltrainer_Blake_Battle::
# 52 "data/maps/Route27/scripts.pory"
	trainerbattle_single TRAINER_COOLTRAINER_BLAKE, Route27_Cooltrainer_Blake_Battle_Text_0, Route27_Cooltrainer_Blake_Battle_Text_1
# 53 "data/maps/Route27/scripts.pory"
	msgbox Route27_Cooltrainer_Blake_Battle_Text_2
# 54 "data/maps/Route27/scripts.pory"
	closemessage
# 55 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Shy_Beauty_Dialogue::
# 61 "data/maps/Route27/scripts.pory"
	lock
# 62 "data/maps/Route27/scripts.pory"
	faceplayer
# 63 "data/maps/Route27/scripts.pory"
	msgbox Route27_Shy_Beauty_Dialogue_Text_0
# 64 "data/maps/Route27/scripts.pory"
	closemessage
# 65 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Swimmer_Encouraging_Friend_Dialogue::
# 71 "data/maps/Route27/scripts.pory"
	lock
# 72 "data/maps/Route27/scripts.pory"
	faceplayer
# 73 "data/maps/Route27/scripts.pory"
	msgbox Route27_Swimmer_Encouraging_Friend_Dialogue_Text_0
# 74 "data/maps/Route27/scripts.pory"
	closemessage
# 75 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Fisherman_Confused_Dialogue::
# 81 "data/maps/Route27/scripts.pory"
	lock
# 82 "data/maps/Route27/scripts.pory"
	faceplayer
# 83 "data/maps/Route27/scripts.pory"
	msgbox Route27_Fisherman_Confused_Dialogue_Text_0
# 84 "data/maps/Route27/scripts.pory"
	closemessage
# 85 "data/maps/Route27/scripts.pory"
	releaseall
	end


Route27_Map_Sign_Text_0:
# 8 "data/maps/Route27/scripts.pory"
	.string "KANTO ROUTE 27:\n"
	.string "Connects KANTO to JOHTO.$"

Route27_TohjoFalls_Sign_Text_0:
# 16 "data/maps/Route27/scripts.pory"
	.string "TOHJO FALLS\n"
	.string "The waterfall linking KANTO to JOHTO.$"

Route27_Fat_Man_Text_0:
# 26 "data/maps/Route27/scripts.pory"
	.string "Hey!\n"
	.string "You know what you just did?\p"
	.string "You just took your first\n"
	.string "step in KANTO!\p"
	.string "Check your map!\n"
	.string "...\p"
	.string "...\n"
	.string "...\p"
	.string "...Oh, if you're from KANTO,\n"
	.string "this is pretty awkward...\p"
	.string "Sorry...$"

Route27_Birdkeeper_Jose_Battle_Text_0:
# 34 "data/maps/Route27/scripts.pory"
	.string "Hey!\n"
	.string "This is my plot of land!$"

Route27_Birdkeeper_Jose_Battle_Text_1:
# 34 "data/maps/Route27/scripts.pory"
	.string "Alright, alright...\n"
	.string "Fine, I'll share!$"

Route27_Birdkeeper_Jose_Battle_Text_2:
# 35 "data/maps/Route27/scripts.pory"
	.string "This hidden plot of land is\n"
	.string "our base now. Happy?$"

Route27_Picnicker_Megan_Battle_Text_0:
# 43 "data/maps/Route27/scripts.pory"
	.string "TOHJO FALLS is too eerie\n"
	.string "for a date, honestly.\p"
	.string "I would prefer going to\n"
	.string "CERULEAN CAPE. So romantic!\p"
	.string "...Excuse me?\n"
	.string "Asking why I'm over here?!$"

Route27_Picnicker_Megan_Battle_Text_1:
# 43 "data/maps/Route27/scripts.pory"
	.string "Okay, okay!\n"
	.string "I will admit, I am lost.$"

Route27_Picnicker_Megan_Battle_Text_2:
# 44 "data/maps/Route27/scripts.pory"
	.string "As soon as I started wandering\n"
	.string "into JOHTO territory...\p"
	.string "I figured I got lost,\n"
	.string "trying to retrace my steps.$"

Route27_Cooltrainer_Blake_Battle_Text_0:
# 52 "data/maps/Route27/scripts.pory"
	.string "I'm too cool for TRAINERS'\n"
	.string "SCHOOL! Let's battle!$"

Route27_Cooltrainer_Blake_Battle_Text_1:
# 52 "data/maps/Route27/scripts.pory"
	.string "Huh, so I guess there are\n"
	.string "a few things I could learn...$"

Route27_Cooltrainer_Blake_Battle_Text_2:
# 53 "data/maps/Route27/scripts.pory"
	.string "Where did you study the techniques\n"
	.string "that you used in battle?$"

Route27_Shy_Beauty_Dialogue_Text_0:
# 63 "data/maps/Route27/scripts.pory"
	.string "He loves me...\n"
	.string "He loves me... not...\p"
	.string "I can't do this!\n"
	.string "It's just... I'm so shy!$"

Route27_Swimmer_Encouraging_Friend_Dialogue_Text_0:
# 73 "data/maps/Route27/scripts.pory"
	.string "You only live one life...\n"
	.string "So, don't be shy! Go for it!$"

Route27_Fisherman_Confused_Dialogue_Text_0:
# 83 "data/maps/Route27/scripts.pory"
	.string "I think those two pretty\n"
	.string "ladies are bickering over me.\p"
	.string "I don't want to be\n"
	.string "the cause of a fight...$"
