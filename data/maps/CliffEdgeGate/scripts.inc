CliffEdgeGate_MapScripts::
# 3 "data/maps/CliffEdgeGate/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, CliffEdgeGate_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

CliffEdgeGate_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/CliffEdgeGate/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_CLIFF_EDGE_GATE
	return


CliffEdgeGate_Receptionist::
# 11 "data/maps/CliffEdgeGate/scripts.pory"
	lock
# 12 "data/maps/CliffEdgeGate/scripts.pory"
	faceplayer
# 13 "data/maps/CliffEdgeGate/scripts.pory"
	msgbox CliffEdgeGate_Receptionist_Text_0
# 14 "data/maps/CliffEdgeGate/scripts.pory"
	msgbox CliffEdgeGate_Receptionist_Text_1
# 15 "data/maps/CliffEdgeGate/scripts.pory"
	msgbox CliffEdgeGate_Receptionist_Text_2
# 16 "data/maps/CliffEdgeGate/scripts.pory"
	closemessage
# 17 "data/maps/CliffEdgeGate/scripts.pory"
	release
	end


CliffEdgeGate_Receptionist_Text_0:
# 13 "data/maps/CliffEdgeGate/scripts.pory"
	.string "Hi! Are you headed out to\n"
	.string "PAL PARK? Ooh, how exciting!\p"
	.string "Do you know who FENNEL is?\n"
	.string "From the UNOVA REGION?$"

CliffEdgeGate_Receptionist_Text_1:
# 14 "data/maps/CliffEdgeGate/scripts.pory"
	.string "Yep, she collaborated with all\n"
	.string "the big PC MANIACS here!\p"
	.string "BILL, CELIO, BRIGETTE, LANETTE,\n"
	.string "BEBE... So many smarties!$"

CliffEdgeGate_Receptionist_Text_2:
# 15 "data/maps/CliffEdgeGate/scripts.pory"
	.string "Oops! Look at the time!\n"
	.string "I got a little carried away...\p"
	.string "Oh, but you should go check the\n"
	.string "PAL PARK out! It's up ahead!$"
