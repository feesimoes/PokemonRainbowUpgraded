Route44_MapScripts::
	.byte 0


Route44_EventScript_CooltrainerElias::
# 5 "data/maps/Route44/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_ELIAS, 0, Route44_Text_CooltrainerEliasIntro, Route44_Text_CooltrainerEliasDefeated
# 8 "data/maps/Route44/scripts.pory"
	msgbox Route44_EventScript_CooltrainerElias_Text_0
# 9 "data/maps/Route44/scripts.pory"
	closemessage
# 10 "data/maps/Route44/scripts.pory"
	releaseall
	end


Route44_EventScript_CooltrainerElias_Text_0:
# 8 "data/maps/Route44/scripts.pory"
	.string "Voce me estressa...$"

Route44_Text_CooltrainerEliasIntro::
# 14 "data/maps/Route44/scripts.pory"
	.string "Quer a ultima badge...\n"
	.string "Nao vai ser facil.$"

Route44_Text_CooltrainerEliasDefeated::
# 19 "data/maps/Route44/scripts.pory"
	.string "Voce...\p"
	.string "Voce esta pronto.$"
