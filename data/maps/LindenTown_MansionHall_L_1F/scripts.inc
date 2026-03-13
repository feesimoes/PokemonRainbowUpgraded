LindenTown_MansionHall_L_1F_MapScripts::
	.byte 0


LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger::
# 5 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	lock
# 6 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 7 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	msgbox LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_0
# 8 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	closemessage
# 9 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_MansionHall_L_1F_Player_Face_Right
# 10 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmovement
# 11 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	textcolor NPC_TEXT_COLOR_FEMALE
# 12 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	fadenewbgm MUS_ENCOUNTER_BATTLE_ZONE
# 13 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	msgbox LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_1
# 14 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	applymovement LOCALID_PLAYER, LindenTown_MansionHall_L_1F_Player_Walk_Right
# 15 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmovement
# 16 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	applymovement LOCALID_LINDEN_LASS_TAUNIE, LindenTown_MansionHall_L_1F_LassTaunie_Walk_Left
# 17 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmovement
# 18 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	delay 30
# 19 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmessage
# 20 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	closemessage
# 21 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	trainerbattle_no_intro TRAINER_LASS_TAUNIE, LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_2
# 22 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	release
	end


LindenTown_MansionHall_L_1F_LassTaunie::
# 28 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	lock
# 29 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	faceplayer
# 30 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	msgbox LindenTown_MansionHall_L_1F_LassTaunie_Text_0
# 31 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	closemessage
# 32 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	applymovement LOCALID_LINDEN_LASS_TAUNIE, LindenTown_MansionHall_L_1F_LassTaunie_FaceLeft
# 33 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmovement
# 34 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	setvar FLAG_MEW_QUEST_STARTED, 15
# 35 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	release
	end


LindenTown_MansionHall_L_1F_RankBattleReceptionist::
# 41 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	lock
# 42 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	faceplayer
# 43 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	msgbox LindenTown_MansionHall_L_1F_RankBattleReceptionist_Text_0
# 44 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	closemessage
# 45 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	applymovement LOCALID_RANK_MATCH_LADY, LindenTown_MansionHall_L_1F_RankMatchReceptionist_Face_Down
# 46 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	waitmovement
# 47 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	release
	end


# 51 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_LassTaunie_FaceLeft:
# 53 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	face_left
# 54 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

# 57 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_RankMatchReceptionist_Face_Down:
# 59 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	face_down
# 60 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

# 63 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_Player_Face_Left:
# 65 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	face_left
# 66 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

# 69 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_Player_Face_Right:
# 71 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	face_right
# 72 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

# 75 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_Player_Walk_Right:
# 77 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	walk_right
# 78 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

# 81 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
LindenTown_MansionHall_L_1F_LassTaunie_Walk_Left:
# 83 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	walk_left
# 84 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	step_end

LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_0:
# 7 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	.string "NOTE: This feature is incomplete,\n"
	.string "but you can enjoy a quick test!$"

LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_1:
# 13 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	.string "{PLAYER}, was it? Nice!\n"
	.string "I'll be your opponent!\p"
	.string "Maybe after this is over, you can\n"
	.string "help me film a cool advertisement?$"

LindenTown_MansionHall_L_1F_RankBattle_LassTaunie_Trigger_Text_2:
# 21 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	.string "Oh, wow!\n"
	.string "You're so strong! I respect that.$"

LindenTown_MansionHall_L_1F_LassTaunie_Text_0:
# 30 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	.string "Hey! I'm ready to battle...\n"
	.string "Are you?\p"
	.string "You'll need to face me from a\n"
	.string "short distance away. We need space!$"

LindenTown_MansionHall_L_1F_RankBattleReceptionist_Text_0:
# 43 "data/maps/LindenTown_MansionHall_L_1F/scripts.pory"
	.string "You have enough points from battling,\n"
	.string "so your RANK MATCH is here!\p"
	.string "Please face against them from a\n"
	.string "distance, and the match will start.$"
