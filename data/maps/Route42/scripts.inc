Route42_MapScripts::
	.byte 0


Route42_EventScript_CooltrainerJoao::
# 5 "data/maps/Route42/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_JOAO, 0, Route42_Text_CooltrainerJoaoIntro, Route42_Text_CooltrainerJoaoDefeated
# 8 "data/maps/Route42/scripts.pory"
	msgbox Route42_EventScript_CooltrainerJoao_Text_0
# 9 "data/maps/Route42/scripts.pory"
	closemessage
# 10 "data/maps/Route42/scripts.pory"
	releaseall
	end


Route42_EventScript_CooltrainerJoao_Text_0:
# 8 "data/maps/Route42/scripts.pory"
	.string "Porque eu sempre perco!$"

Route42_Text_CooltrainerJoaoIntro::
# 14 "data/maps/Route42/scripts.pory"
	.string "Rapaz, pensa que vai onde...\n"
	.string "Venha pra rinha.$"

Route42_Text_CooltrainerJoaoDefeated::
# 19 "data/maps/Route42/scripts.pory"
	.string "Hmmm...\p"
	.string "Voce venceu dessa vez.$"
