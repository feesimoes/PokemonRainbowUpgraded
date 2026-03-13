LindenTown_Harbor_MapScripts::
	.byte 0


LindenTown_Harbor_Sailor_OutsidersAreWeird_Dialogue::
# 5 "data/maps/LindenTown_Harbor/scripts.pory"
	lock
# 6 "data/maps/LindenTown_Harbor/scripts.pory"
	faceplayer
# 7 "data/maps/LindenTown_Harbor/scripts.pory"
	msgbox LindenTown_Harbor_Sailor_OutsidersAreWeird_Dialogue_Text_0
# 8 "data/maps/LindenTown_Harbor/scripts.pory"
	closemessage
# 9 "data/maps/LindenTown_Harbor/scripts.pory"
	release
	end


LindenTown_Harbor_Sailor_LtSurge_Reference_Dialogue::
# 15 "data/maps/LindenTown_Harbor/scripts.pory"
	lock
# 16 "data/maps/LindenTown_Harbor/scripts.pory"
	faceplayer
# 17 "data/maps/LindenTown_Harbor/scripts.pory"
	msgbox LindenTown_Harbor_Sailor_LtSurge_Reference_Dialogue_Text_0
# 18 "data/maps/LindenTown_Harbor/scripts.pory"
	msgbox LindenTown_Harbor_Sailor_LtSurge_Reference_Dialogue_Text_1
# 19 "data/maps/LindenTown_Harbor/scripts.pory"
	closemessage
# 20 "data/maps/LindenTown_Harbor/scripts.pory"
	release
	end


LindenTown_Harbor_Sailor_OutsidersAreWeird_Dialogue_Text_0:
# 7 "data/maps/LindenTown_Harbor/scripts.pory"
	.string "Are you a friend of DR. FUJI?\n"
	.string "Why are you here, kid?\p"
	.string "Don't feel like talking?\n"
	.string "Eh, outsiders are weird...$"

LindenTown_Harbor_Sailor_LtSurge_Reference_Dialogue_Text_0:
# 17 "data/maps/LindenTown_Harbor/scripts.pory"
	.string "Huh?\n"
	.string "You met LT. SURGE, eh?\p"
	.string "Ah, so that's what he's\n"
	.string "been up to...\p"
	.string "He's been here, sometimes,\n"
	.string "in the past...$"

LindenTown_Harbor_Sailor_LtSurge_Reference_Dialogue_Text_1:
# 18 "data/maps/LindenTown_Harbor/scripts.pory"
	.string "LT. SURGE knew how to blend in with\n"
	.string "the surrounding jungle.\p"
	.string "He did so well, you'd be caught off-\n"
	.string "guard if attacked, during the war.$"
