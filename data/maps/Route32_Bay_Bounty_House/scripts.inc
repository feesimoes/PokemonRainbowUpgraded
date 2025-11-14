Route32_Bay_Bounty_House_MapScripts::
	.byte 0


Butch_Bounty_Intro_Dialogue::
# 4 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	lock
# 5 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Intro_Dialogue_Text_0
# 6 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 7 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	applymovement 1, Movement_Butch_Face_Player
# 8 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Intro_Dialogue_Text_1
# 9 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 10 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	applymovement 1, Movement_Butch_Notice_Player_Emote
# 11 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Intro_Dialogue_Text_2
# 12 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 13 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Intro_Dialogue_Text_3
# 14 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	closemessage
# 15 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	msgbox Butch_Bounty_Intro_Dialogue_Text_4
# 16 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	releaseall
	end


# 20 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
Movement_Butch_Face_Player:
# 21 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	face_player
# 22 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	step_end

# 25 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
Movement_Butch_Notice_Player_Emote:
# 26 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	emote_exclamation_mark
# 27 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	step_end

Butch_Bounty_Intro_Dialogue_Text_0:
# 5 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "...Eh? It's about time\n"
	.string "ya got here, rookie!$"

Butch_Bounty_Intro_Dialogue_Text_1:
# 8 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "...$"

Butch_Bounty_Intro_Dialogue_Text_2:
# 11 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Oh, for cryin' out loud!\n"
	.string "Sendin' me a heckin' child?!\p"
	.string "I tell ya, the absolute nerve!\n"
	.string "Darned children, I tell them!$"

Butch_Bounty_Intro_Dialogue_Text_3:
# 13 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "BUTCH, they're tellin' me!\n"
	.string "sayin' crazy stuff to our ADMIN!\p"
	.string "Apparently kids ain't half bad!\n"
	.string "Kid slashin' our KANTO op?!$"

Butch_Bounty_Intro_Dialogue_Text_4:
# 15 "data/maps/Route32_Bay_Bounty_House/scripts.pory"
	.string "Yeah, anyways, kiddo...\n"
	.string "My rant is over for now!\p"
	.string "Let's get ya started on\n"
	.string "your trainin', here.$"
