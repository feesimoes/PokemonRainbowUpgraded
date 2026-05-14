GoldenrodCity_GTS_3F_PokemonBoxRoom_MapScripts::
# 3 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GoldenrodCity_GTS_3F_PokemonBoxRoom_MapScripts_MAP_SCRIPT_ON_RESUME
	.byte 0

GoldenrodCity_GTS_3F_PokemonBoxRoom_MapScripts_MAP_SCRIPT_ON_RESUME:
# 5 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	call CableClub_OnResume
	return


GoldenrodCity_GTS_3F_PokemonBoxRoom_PC::
# 11 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	lock
# 12 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	playse SE_PC_LOGIN
# 13 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	special ShowPokemonStorageSystemPC
# 14 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	waitstate
# 15 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	release
	end


GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette::
# 21 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	lock
# 22 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	faceplayer
# 23 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	msgbox GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_0
# 24 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	msgbox GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_1
# 25 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	msgbox GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_2
# 26 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	msgbox GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_3
# 27 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	closemessage
# 28 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	release
	end


GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_0:
# 23 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	.string "Hello!\n"
	.string "My name is BRIGETTE.\p"
	.string "And you are...?\n"
	.string "OK!\p"
	.string "How do you do, {PLAYER}?\n"
	.string "Wow! You're good at raising POKéMON.$"

GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_1:
# 24 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	.string "So, listen!\n"
	.string "I made the POKéMON BOX.\p"
	.string "I'm currently working on something\n"
	.string "else, too, {PLAYER}!$"

GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_2:
# 25 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	.string "It's definitely going to have a\n"
	.string "lot more capabilities than BOX...\p"
	.string "Please come back later!\n"
	.string "When I finish it up, I'll explain.$"

GoldenrodCity_GTS_3F_PokemonBoxRoom_Bridgette_Text_3:
# 26 "data/maps/GoldenrodCity_GTS_3F_PokemonBoxRoom/scripts.pory"
	.string "By the way, you can use the PC\n"
	.string "next to me, if you'd like.$"
