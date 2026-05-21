Route28_MapScripts::
	.byte 0


Route28_EventScript_PlayerRed::
# 5 "data/maps/Route28/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_PLAYER_RED, 0, Route26_Text_TrainerPlayerRed, Route26_Text_TrainerPlayerRedDefeated
# 8 "data/maps/Route28/scripts.pory"
	setflag FLAG_DEFEATED_RED
# 9 "data/maps/Route28/scripts.pory"
	msgbox Route28_EventScript_PlayerRed_Text_0
# 10 "data/maps/Route28/scripts.pory"
	closemessage
# 11 "data/maps/Route28/scripts.pory"
	releaseall
	end


Route28_EventScript_PlayerRed_Text_0:
# 9 "data/maps/Route28/scripts.pory"
	.string "Venca pela 2a vez a Liga ou GYMs Kanto\p"
	.string "ou voe para novas rotas\n"
	.string "nos barcos de Vermilion!$"

Route26_Text_TrainerPlayerRed::
# 15 "data/maps/Route28/scripts.pory"
	.string "Finalmente...\p"
	.string "Um adversario a altura.\n"
	.string "Vamos ver quem eh o campeao!$"

Route26_Text_TrainerPlayerRedDefeated::
# 20 "data/maps/Route28/scripts.pory"
	.string "De fato...\p"
	.string "Tenho que treinar mais.$"
