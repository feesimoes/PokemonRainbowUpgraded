Route35_MapScripts::
	.byte 0


Route35_EventScript_CooltrainerPedro::
# 5 "data/maps/Route35/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_PEDRO, 0, Route35_Text_CooltrainerPedroIntro, Route35_Text_CooltrainerPedroDefeated
# 8 "data/maps/Route35/scripts.pory"
	msgbox Route35_EventScript_CooltrainerPedro_Text_0
# 9 "data/maps/Route35/scripts.pory"
	closemessage
# 10 "data/maps/Route35/scripts.pory"
	releaseall
	end


Route35_EventScript_CooltrainerPedro_Text_0:
# 8 "data/maps/Route35/scripts.pory"
	.string "Essa nao... Por essa eu nao esperava!$"

Route35_Text_CooltrainerPedroIntro::
# 14 "data/maps/Route35/scripts.pory"
	.string "Esta pronto para perder, novato!\n"
	.string "Maos a obra.$"

Route35_Text_CooltrainerPedroDefeated::
# 19 "data/maps/Route35/scripts.pory"
	.string "Parabens...\p"
	.string "Voce ganhou.$"
