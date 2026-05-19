Route34_PokemonDayCare_MapScripts::
	.byte 0


Route34_PokemonDayCare_Lady::
# 5 "data/maps/Route34_PokemonDayCare/scripts.pory"
	lock
# 6 "data/maps/Route34_PokemonDayCare/scripts.pory"
	faceplayer
# 7 "data/maps/Route34_PokemonDayCare/scripts.pory"
	msgbox Route34_PokemonDayCare_Lady_Text_0, MSGBOX_YESNO
# 8 "data/maps/Route34_PokemonDayCare/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route34_PokemonDayCare_Lady_1
# 17 "data/maps/Route34_PokemonDayCare/scripts.pory"
	msgbox Route34_PokemonDayCare_Lady_Text_3
	return

Route34_PokemonDayCare_Lady_1:
# 10 "data/maps/Route34_PokemonDayCare/scripts.pory"
	msgbox Route34_PokemonDayCare_Lady_Text_1
# 11 "data/maps/Route34_PokemonDayCare/scripts.pory"
	special ChoosePartyMon
# 12 "data/maps/Route34_PokemonDayCare/scripts.pory"
	waitstate
# 13 "data/maps/Route34_PokemonDayCare/scripts.pory"
	msgbox Route34_PokemonDayCare_Lady_Text_2
	return


Route34_PokemonDayCare_Lady_Text_0:
# 7 "data/maps/Route34_PokemonDayCare/scripts.pory"
	.string "I'm the DAY-CARE LADY.\n"
	.string "No, really, I'm the real deal...\p"
	.string "We can raise one POKéMON for you.\n"
	.string "Would you like us to?$"

Route34_PokemonDayCare_Lady_Text_1:
# 10 "data/maps/Route34_PokemonDayCare/scripts.pory"
	.string "Which POKéMON should we raise for\n"
	.string "you, then?$"

Route34_PokemonDayCare_Lady_Text_2:
# 13 "data/maps/Route34_PokemonDayCare/scripts.pory"
	.string "Please come back later.$"

Route34_PokemonDayCare_Lady_Text_3:
# 17 "data/maps/Route34_PokemonDayCare/scripts.pory"
	.string "Oh fine, then.\n"
	.string "Come again.$"
