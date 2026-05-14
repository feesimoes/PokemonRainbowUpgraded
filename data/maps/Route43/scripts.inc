Route43_MapScripts::
	.byte 0


Route43_EventScript_CooltrainerGustavo::
# 5 "data/maps/Route43/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_GUSTAVO, 0, Route43_Text_CooltrainerGustavoIntro, Route43_Text_CooltrainerGustavoDefeated
# 8 "data/maps/Route43/scripts.pory"
	msgbox Route43_EventScript_CooltrainerGustavo_Text_0
# 9 "data/maps/Route43/scripts.pory"
	closemessage
# 10 "data/maps/Route43/scripts.pory"
	releaseall
	end


Route43_EventScript_CooltrainerGustavo_Text_0:
# 8 "data/maps/Route43/scripts.pory"
	.string "Nao foi dessa vez!$"

Route43_Text_CooltrainerGustavoIntro::
# 14 "data/maps/Route43/scripts.pory"
	.string "Indo para o lake of rage...\n"
	.string "Ainda nao, vamos lutar.$"

Route43_Text_CooltrainerGustavoDefeated::
# 19 "data/maps/Route43/scripts.pory"
	.string "Eh...\p"
	.string "Voce eh forte.$"
