Route34_MapScripts::
	.byte 0


Route34_DayCareMan::
# 5 "data/maps/Route34/scripts.pory"
	lock
# 6 "data/maps/Route34/scripts.pory"
	faceplayer
# 7 "data/maps/Route34/scripts.pory"
	msgbox Route34_DayCareMan_Text_0
# 8 "data/maps/Route34/scripts.pory"
	closemessage
# 9 "data/maps/Route34/scripts.pory"
	msgbox Route34_DayCareMan_Text_1
# 10 "data/maps/Route34/scripts.pory"
	msgbox Route34_DayCareMan_Text_2
# 11 "data/maps/Route34/scripts.pory"
	msgbox Route34_DayCareMan_Text_3
# 12 "data/maps/Route34/scripts.pory"
	msgbox Route34_DayCareMan_Text_4, MSGBOX_YESNO
# 13 "data/maps/Route34/scripts.pory"
	closemessage
# 14 "data/maps/Route34/scripts.pory"
	release
	end


Route34_Smells::
# 20 "data/maps/Route34/scripts.pory"
	lock
# 21 "data/maps/Route34/scripts.pory"
	faceplayer
# 22 "data/maps/Route34/scripts.pory"
	msgbox Route34_Smells_Text_0
# 23 "data/maps/Route34/scripts.pory"
	closemessage
# 24 "data/maps/Route34/scripts.pory"
	release
	end


Route34_EventScript_CooltrainerLucas::
# 30 "data/maps/Route34/scripts.pory"
	trainerbattle TRAINER_BATTLE_SINGLE, TRAINER_COOLTRAINER_LUCAS, 0, Route34_Text_CooltrainerLucasIntro, Route34_Text_CooltrainerLucasDefeated
# 33 "data/maps/Route34/scripts.pory"
	msgbox Route34_EventScript_CooltrainerLucas_Text_0
# 34 "data/maps/Route34/scripts.pory"
	closemessage
# 35 "data/maps/Route34/scripts.pory"
	releaseall
	end


Route34_DayCareMan_Text_0:
# 7 "data/maps/Route34/scripts.pory"
	.string "Ah, it's you!$"

Route34_DayCareMan_Text_1:
# 9 "data/maps/Route34/scripts.pory"
	.string "We were raising your POKéMON, and\n"
	.string "my goodness, were we surprised!$"

Route34_DayCareMan_Text_2:
# 10 "data/maps/Route34/scripts.pory"
	.string "Your POKéMON had thrown it back!$"

Route34_DayCareMan_Text_3:
# 11 "data/maps/Route34/scripts.pory"
	.string "We don't know how it did that,\n"
	.string "but your POKéMON was caked up.$"

Route34_DayCareMan_Text_4:
# 12 "data/maps/Route34/scripts.pory"
	.string "...You do want it, yes?$"

Route34_Smells_Text_0:
# 22 "data/maps/Route34/scripts.pory"
	.string "That smell...\n"
	.string "Oh my!\p"
	.string "You're definitely stinky!\n"
	.string "Have you showered yet?$"

Route34_EventScript_CooltrainerLucas_Text_0:
# 33 "data/maps/Route34/scripts.pory"
	.string "Nao creio... Perdi essa!$"

Route34_Text_CooltrainerLucasIntro::
# 39 "data/maps/Route34/scripts.pory"
	.string "Voce eh o famoso Campeao...\n"
	.string "Vamos ver.$"

Route34_Text_CooltrainerLucasDefeated::
# 44 "data/maps/Route34/scripts.pory"
	.string "Esta explicado...\p"
	.string "Voce eh mesmo o Campeao.$"
