DragonsDen_MapScripts::
	.byte 0


DragonsDen_PagodaShrine_Sign::
# 5 "data/maps/DragonsDen/scripts.pory"
	lock
# 6 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_PagodaShrine_Sign_Text_0
# 7 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 8 "data/maps/DragonsDen/scripts.pory"
	release
	end


DragonsDen_RockfallWarning_Sign::
# 14 "data/maps/DragonsDen/scripts.pory"
	lock
# 15 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_RockfallWarning_Sign_Text_0
# 16 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 17 "data/maps/DragonsDen/scripts.pory"
	release
	end


DragonsDen_ElderDragonMaster::
# 23 "data/maps/DragonsDen/scripts.pory"
	lock
# 24 "data/maps/DragonsDen/scripts.pory"
	faceplayer
# 25 "data/maps/DragonsDen/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, DragonsDen_ElderDragonMaster_2
# 32 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_1, MSGBOX_YESNO
# 33 "data/maps/DragonsDen/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DragonsDen_ElderDragonMaster_5
# 40 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_4
DragonsDen_ElderDragonMaster_1:
# 43 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 44 "data/maps/DragonsDen/scripts.pory"
	release
	end

DragonsDen_ElderDragonMaster_2:
# 27 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_0
# 28 "data/maps/DragonsDen/scripts.pory"
	clearflag FLAG_JOHTO_BADGE08_GET
	goto DragonsDen_ElderDragonMaster_1

DragonsDen_ElderDragonMaster_5:
# 35 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_2
# 36 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_3
	goto DragonsDen_ElderDragonMaster_1


DragonsDen_PagodaShrine_Sign_Text_0:
# 6 "data/maps/DragonsDen/scripts.pory"
	.string "DRAGONS' DEN PAGODA -\n"
	.string "DRAGONS' SHRINE$"

DragonsDen_RockfallWarning_Sign_Text_0:
# 15 "data/maps/DragonsDen/scripts.pory"
	.string "Beware of dangerous rockslides\n"
	.string "caused by GOLEM!\p"
	.string "The exit to BLACKTHORN CITY is\n"
	.string "further up ahead.$"

DragonsDen_ElderDragonMaster_Text_0:
# 27 "data/maps/DragonsDen/scripts.pory"
	.string "Congratulations on the RISING BADGE.\n"
	.string "Ah, but...\p"
	.string "The DRAGONS' SHRINE still does not\n"
	.string "expect you here so soon.$"

DragonsDen_ElderDragonMaster_Text_1:
# 32 "data/maps/DragonsDen/scripts.pory"
	.string "Hm... Hello.\n"
	.string "A visitor? Ah, I see...\p"
	.string "If you wish to earn CLAIR'S\n"
	.string "BADGE, I can offer you a clue.$"

DragonsDen_ElderDragonMaster_Text_2:
# 35 "data/maps/DragonsDen/scripts.pory"
	.string "Without leaving JOHTO, head for\n"
	.string "KANTO, over a body of water.\p"
	.string "Rise to the challenge, TRAINER,\n"
	.string "and make haste toward SEVII.$"

DragonsDen_ElderDragonMaster_Text_3:
# 36 "data/maps/DragonsDen/scripts.pory"
	.string "At land's end, DRAGONS' JANITOR\n"
	.string "awaits... Bestowing upon you...\p"
	.string "The fabled DRAGON'S FANG.$"

DragonsDen_ElderDragonMaster_Text_4:
# 40 "data/maps/DragonsDen/scripts.pory"
	.string "Hm.\n"
	.string "Figure it out yourself, eh?\p"
	.string "Some smart adventurer you are!$"
