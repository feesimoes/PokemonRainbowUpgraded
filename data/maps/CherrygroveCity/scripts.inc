CherrygroveCity_MapScripts::
	.byte 0


CherrygroveCity_RunningShoes_Guide_Dialogue::
# 7 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 8 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 1, Movement_CherrygroveCity_NPC_Face_Player
# 9 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_RunningShoes_Guide_Dialogue_Text_0
# 10 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 11 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 12 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


# 16 "data/maps/CherrygroveCity/scripts.pory"
Movement_CherrygroveCity_NPC_Face_Player:
# 18 "data/maps/CherrygroveCity/scripts.pory"
	face_player
# 19 "data/maps/CherrygroveCity/scripts.pory"
	step_end

CherrygroveCity_Gossip_Lass_Dialogue::
# 24 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 25 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 2, Movement_CherrygroveCity_NPC_Face_Player
# 26 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Gossip_Lass_Dialogue_Text_0
# 27 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 28 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 29 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


CherrygroveCity_Man_Dialogue::
# 35 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 36 "data/maps/CherrygroveCity/scripts.pory"
	applymovement 3, Movement_CherrygroveCity_NPC_Face_Player
# 37 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Man_Dialogue_Text_0
# 38 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 39 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 40 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


CherrygroveCity_Sign::
# 46 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 47 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Sign_Text_0
# 48 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 49 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 50 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


CherrygroveCity_Battle_Nerd_House_Sign::
# 56 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 57 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_Battle_Nerd_House_Sign_Text_0
# 58 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 59 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 60 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


CherrygroveCity_News_Lady_House_Sign::
# 66 "data/maps/CherrygroveCity/scripts.pory"
	lock
# 67 "data/maps/CherrygroveCity/scripts.pory"
	msgbox CherrygroveCity_News_Lady_House_Sign_Text_0
# 68 "data/maps/CherrygroveCity/scripts.pory"
	waitmessage
# 69 "data/maps/CherrygroveCity/scripts.pory"
	closemessage
# 70 "data/maps/CherrygroveCity/scripts.pory"
	release
	end


CherrygroveCity_RunningShoes_Guide_Dialogue_Text_0:
# 9 "data/maps/CherrygroveCity/scripts.pory"
	.string "Out there is the sea,\n"
	.string "as you can see...\p"
	.string "Ohoho...\n"
	.string "Did you not find that funny?\p"
	.string "...Oh, well. Anyhow...\n"
	.string "To make up for it, how-\p"
	.string "Oh, dear me... I apologize.\n"
	.string "You already have RUNNING SHOES.$"

CherrygroveCity_Gossip_Lass_Dialogue_Text_0:
# 26 "data/maps/CherrygroveCity/scripts.pory"
	.string "The hottest topic circulating around\n"
	.string "CHERRYGROVE CITY right now is...\p"
	.string "The old man by the beach keeps\n"
	.string "RUNNING SHOES warm for ladies!$"

CherrygroveCity_Man_Dialogue_Text_0:
# 37 "data/maps/CherrygroveCity/scripts.pory"
	.string "Your shoes sure are dirty!\n"
	.string "...What's that?\p"
	.string "You travelled all the way here\n"
	.string "from... KANTO?!$"

CherrygroveCity_Sign_Text_0:
# 47 "data/maps/CherrygroveCity/scripts.pory"
	.string "CHERRYGROVE CITY -\n"
	.string "A cute city, with fragrant flowers.$"

CherrygroveCity_Battle_Nerd_House_Sign_Text_0:
# 57 "data/maps/CherrygroveCity/scripts.pory"
	.string "ROBERTO'S HOUSE\n"
	.string "A self-proclaimed BATTLE EXPERT!$"

CherrygroveCity_News_Lady_House_Sign_Text_0:
# 67 "data/maps/CherrygroveCity/scripts.pory"
	.string "ROBERTITA'S HOUSE\n"
	.string "A self-proclaimed NEWS EXPERT!$"
