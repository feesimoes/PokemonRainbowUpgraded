Route34_IlexForestEntrance_MapScripts::
	.byte 0


Route34_IlexForestEntrance_Guard::
# 5 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	lock
# 6 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	faceplayer
# 7 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	msgbox Route34_IlexForestEntrance_Guard_Text_0
# 8 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	closemessage
# 9 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	release
	end


Route34_IlexForestEntrance_Guard_Text_0:
# 7 "data/maps/Route34_IlexForestEntrance/scripts.pory"
	.string "ROUTE 34 is up ahead.\n"
	.string "Ah, you are a TRAINER, yes?\p"
	.string "Be sure to stop by the\n"
	.string "DAY-CARE on ROUTE 34!$"
