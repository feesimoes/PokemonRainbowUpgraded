VioletCity_MapScripts::
	.byte 0


TestBattleVioletCity::
# 5 "data/maps/VioletCity/scripts.pory"
	trainerbattle_single TRAINER_LEADER_WALKER, TestBattleVioletCity_Text_0, TestBattleVioletCity_Text_1
	return


TestBattleVioletCity_Text_0:
# 5 "data/maps/VioletCity/scripts.pory"
	.string "Test Walker battle$"

TestBattleVioletCity_Text_1:
# 5 "data/maps/VioletCity/scripts.pory"
	.string "$"
