Route38_MapScripts::
	.byte 0


Route38_EventScript_CooltrainerDiogo::
# 5 "data/maps/Route38/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_DIOGO, 0, Route38_Text_CooltrainerDiogoIntro, Route38_Text_CooltrainerDiogoDefeated
# 8 "data/maps/Route38/scripts.pory"
	msgbox Route38_EventScript_CooltrainerDiogo_Text_0
# 9 "data/maps/Route38/scripts.pory"
	closemessage
# 10 "data/maps/Route38/scripts.pory"
	releaseall
	end


Route38_EventScript_CooltrainerDiogo_Text_0:
# 8 "data/maps/Route38/scripts.pory"
	.string "Mais uma derrota... Chateado!$"

Route38_Text_CooltrainerDiogoIntro::
# 14 "data/maps/Route38/scripts.pory"
	.string "Se prepare, carinha...\n"
	.string "Bote pra quebrar.$"

Route38_Text_CooltrainerDiogoDefeated::
# 19 "data/maps/Route38/scripts.pory"
	.string "No fim...\p"
	.string "Quem quebrou fui eu.$"
