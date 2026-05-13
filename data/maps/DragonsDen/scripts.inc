DragonsDen_MapScripts::
# 3 "data/maps/DragonsDen/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, DragonsDen_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

DragonsDen_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/DragonsDen/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_DRAGONS_DEN
	return


DragonsDen_PagodaShrine_Sign::
# 11 "data/maps/DragonsDen/scripts.pory"
	lock
# 12 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_PagodaShrine_Sign_Text_0
# 13 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 14 "data/maps/DragonsDen/scripts.pory"
	release
	end


DragonsDen_RockfallWarning_Sign::
# 20 "data/maps/DragonsDen/scripts.pory"
	lock
# 21 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_RockfallWarning_Sign_Text_0
# 22 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 23 "data/maps/DragonsDen/scripts.pory"
	release
	end


DragonsDen_ElderDragonMaster::
# 29 "data/maps/DragonsDen/scripts.pory"
	lock
# 30 "data/maps/DragonsDen/scripts.pory"
	faceplayer
# 31 "data/maps/DragonsDen/scripts.pory"
	goto_if_set FLAG_JOHTO_BADGE08_GET, DragonsDen_ElderDragonMaster_2
# 37 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_1, MSGBOX_YESNO
# 38 "data/maps/DragonsDen/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DragonsDen_ElderDragonMaster_5
# 45 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_4
DragonsDen_ElderDragonMaster_1:
# 48 "data/maps/DragonsDen/scripts.pory"
	closemessage
# 49 "data/maps/DragonsDen/scripts.pory"
	release
	end

DragonsDen_ElderDragonMaster_2:
# 33 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_0
	goto DragonsDen_ElderDragonMaster_1

DragonsDen_ElderDragonMaster_5:
# 40 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_2
# 41 "data/maps/DragonsDen/scripts.pory"
	msgbox DragonsDen_ElderDragonMaster_Text_3
	goto DragonsDen_ElderDragonMaster_1


DragonsDen_PagodaShrine_Sign_Text_0:
# 12 "data/maps/DragonsDen/scripts.pory"
	.string "DRAGONS' DEN PAGODA -\n"
	.string "DRAGONS' SHRINE$"

DragonsDen_RockfallWarning_Sign_Text_0:
# 21 "data/maps/DragonsDen/scripts.pory"
	.string "Beware of dangerous rockslides\n"
	.string "caused by GOLEM!\p"
	.string "The exit to BLACKTHORN CITY is\n"
	.string "further up ahead.$"

DragonsDen_ElderDragonMaster_Text_0:
# 33 "data/maps/DragonsDen/scripts.pory"
	.string "Congratulations on the RISING BADGE.\n"
	.string "Ah, but...\p"
	.string "The DRAGONS' SHRINE still does not\n"
	.string "expect you here so soon.$"

DragonsDen_ElderDragonMaster_Text_1:
# 37 "data/maps/DragonsDen/scripts.pory"
	.string "Hm... Hello.\n"
	.string "A visitor? Ah, I see...\p"
	.string "If you wish to earn CLAIR'S\n"
	.string "BADGE, I can offer you a clue.$"

DragonsDen_ElderDragonMaster_Text_2:
# 40 "data/maps/DragonsDen/scripts.pory"
	.string "Without leaving JOHTO, head for\n"
	.string "KANTO, over a body of water.\p"
	.string "Rise to the challenge, TRAINER,\n"
	.string "and make haste toward SEVII.$"

DragonsDen_ElderDragonMaster_Text_3:
# 41 "data/maps/DragonsDen/scripts.pory"
	.string "At land's end, DRAGONS' JANITOR\n"
	.string "awaits... Bestowing upon you...\p"
	.string "The fabled DRAGON'S FANG.$"

DragonsDen_ElderDragonMaster_Text_4:
# 45 "data/maps/DragonsDen/scripts.pory"
	.string "Hm.\n"
	.string "Figure it out yourself, eh?\p"
	.string "Some smart adventurer you are!$"
