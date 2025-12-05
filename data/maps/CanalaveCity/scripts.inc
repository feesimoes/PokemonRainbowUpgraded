CanalaveCity_MapScripts::
	.byte 0


CanalaveCity_GiveRockClimbKit::
# 5 "data/maps/CanalaveCity/scripts.pory"
	lock
# 6 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_GiveRockClimbKit_Text_0
# 7 "data/maps/CanalaveCity/scripts.pory"
	clearflag FLAG_OBTAINED_ROCK_CLIMB_KIT
# 8 "data/maps/CanalaveCity/scripts.pory"
	cleartrainerflag TRAINER_LEADER_BYRON
# 9 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Gym_Sign::
# 14 "data/maps/CanalaveCity/scripts.pory"
	lock
# 15 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Gym_Sign_Text_0
# 16 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_SailorEldritchHouse_Sign::
# 21 "data/maps/CanalaveCity/scripts.pory"
	lock
# 22 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_SailorEldritchHouse_Sign_Text_0
# 23 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_Sign::
# 28 "data/maps/CanalaveCity/scripts.pory"
	lock
# 29 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_Sign_Text_0
# 30 "data/maps/CanalaveCity/scripts.pory"
	release
	end


CanalaveCity_KantoFerry::
# 36 "data/maps/CanalaveCity/scripts.pory"
	lock
# 37 "data/maps/CanalaveCity/scripts.pory"
	faceplayer
# 38 "data/maps/CanalaveCity/scripts.pory"
	goto_if_unset FLAG_OBTAINED_ROCK_CLIMB_KIT, CanalaveCity_KantoFerry_2
CanalaveCity_KantoFerry_1:
# 42 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_KantoFerry_Text_1, MSGBOX_YESNO
# 43 "data/maps/CanalaveCity/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CanalaveCity_KantoFerry_5
# 57 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_KantoFerry_Text_3
# 58 "data/maps/CanalaveCity/scripts.pory"
	waitmessage
# 59 "data/maps/CanalaveCity/scripts.pory"
	closemessage
CanalaveCity_KantoFerry_4:
# 61 "data/maps/CanalaveCity/scripts.pory"
	release
	end

CanalaveCity_KantoFerry_2:
# 40 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_KantoFerry_Text_0
	goto CanalaveCity_KantoFerry_1

CanalaveCity_KantoFerry_5:
# 45 "data/maps/CanalaveCity/scripts.pory"
	msgbox CanalaveCity_KantoFerry_Text_2
# 46 "data/maps/CanalaveCity/scripts.pory"
	setvar VAR_0x8004, SEAGALLOP_CANALAVE_CITY
# 47 "data/maps/CanalaveCity/scripts.pory"
	setvar VAR_0x8006, SEAGALLOP_VERMILION_CITY
# 48 "data/maps/CanalaveCity/scripts.pory"
	waitmessage
# 49 "data/maps/CanalaveCity/scripts.pory"
	closemessage
# 50 "data/maps/CanalaveCity/scripts.pory"
	delay 20
# 51 "data/maps/CanalaveCity/scripts.pory"
	fadescreen FADE_TO_BLACK
# 52 "data/maps/CanalaveCity/scripts.pory"
	special DoSeagallopFerryScene
# 53 "data/maps/CanalaveCity/scripts.pory"
	waitstate
	goto CanalaveCity_KantoFerry_4


CanalaveCity_GiveRockClimbKit_Text_0:
# 6 "data/maps/CanalaveCity/scripts.pory"
	.string "That's BYRON'S badge!\n"
	.string "Sorry, but... it's MINE now!$"

CanalaveCity_Gym_Sign_Text_0:
# 15 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY POKéMON GYM\n"
	.string "LEADER: BYRON\p"
	.string "The Man with the STEEL Body!$"

CanalaveCity_SailorEldritchHouse_Sign_Text_0:
# 22 "data/maps/CanalaveCity/scripts.pory"
	.string "SAILOR ELDRITCH'S HOUSE$"

CanalaveCity_Sign_Text_0:
# 29 "data/maps/CanalaveCity/scripts.pory"
	.string "CANALAVE CITY\n"
	.string "Cargo Port$"

CanalaveCity_KantoFerry_Text_0:
# 40 "data/maps/CanalaveCity/scripts.pory"
	.string "{PLAYER}, welcome to SINNOH!\n"
	.string "Ahem, right...$"

CanalaveCity_KantoFerry_Text_1:
# 42 "data/maps/CanalaveCity/scripts.pory"
	.string "Did you want to return\n"
	.string "to KANTO?$"

CanalaveCity_KantoFerry_Text_2:
# 45 "data/maps/CanalaveCity/scripts.pory"
	.string "Alright!\n"
	.string "Let's head out.$"

CanalaveCity_KantoFerry_Text_3:
# 57 "data/maps/CanalaveCity/scripts.pory"
	.string "Alright, I'll be here...$"
