Route39_MapScripts::
	.byte 0


Route39_EventScript_CooltrainerGuilherme::
# 5 "data/maps/Route39/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_GUILHERME, 0, Route39_Text_CooltrainerGuilhermeIntro, Route39_Text_CooltrainerGuilhermeDefeated
# 8 "data/maps/Route39/scripts.pory"
	msgbox Route39_EventScript_CooltrainerGuilherme_Text_0
# 9 "data/maps/Route39/scripts.pory"
	closemessage
# 10 "data/maps/Route39/scripts.pory"
	releaseall
	end


Route39_EventScript_CooltrainerGuilherme_Text_0:
# 8 "data/maps/Route39/scripts.pory"
	.string "Ahhh... Voce trapaceou!$"

Route39_Text_CooltrainerGuilhermeIntro::
# 14 "data/maps/Route39/scripts.pory"
	.string "E entao...\n"
	.string "Hora do show.$"

Route39_Text_CooltrainerGuilhermeDefeated::
# 19 "data/maps/Route39/scripts.pory"
	.string "Eh, talvez...\p"
	.string "Te subestimei.$"
