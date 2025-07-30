TohjoFalls_B1F_MapScripts::
# 3 "data/maps/TohjoFalls_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TohjoFalls_B1F_MapScripts_MAP_SCRIPT_ON_LOAD
	.byte 0

TohjoFalls_B1F_MapScripts_MAP_SCRIPT_ON_LOAD:
# 5 "data/maps/TohjoFalls_B1F/scripts.pory"
	setvar VAR_EXPLORER_KIT, -1
	return


TohjoFalls_B1F_RocketGruntBattle::
# 11 "data/maps/TohjoFalls_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_GRUNT_52, TohjoFalls_B1F_RocketGruntBattle_Text_0, TohjoFalls_B1F_RocketGruntBattle_Text_1
# 12 "data/maps/TohjoFalls_B1F/scripts.pory"
	msgbox TohjoFalls_B1F_RocketGruntBattle_Text_2
# 13 "data/maps/TohjoFalls_B1F/scripts.pory"
	closemessage
# 14 "data/maps/TohjoFalls_B1F/scripts.pory"
	releaseall
	end


TohjoFalls_B1F_RocketAdminBattle::
# 20 "data/maps/TohjoFalls_B1F/scripts.pory"
	trainerbattle_single TRAINER_TEAM_ROCKET_ADMIN_3, TohjoFalls_B1F_RocketAdminBattle_Text_0, TohjoFalls_B1F_RocketAdminBattle_Text_1
# 21 "data/maps/TohjoFalls_B1F/scripts.pory"
	msgbox TohjoFalls_B1F_RocketAdminBattle_Text_2
# 22 "data/maps/TohjoFalls_B1F/scripts.pory"
	closemessage
# 23 "data/maps/TohjoFalls_B1F/scripts.pory"
	releaseall
	end


TohjoFalls_B1F_RocketGruntBattle_Text_0:
# 11 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "What's a kid like you doing\n"
	.string "so far away from home?\p"
	.string "Don't you miss your mommy?$"

TohjoFalls_B1F_RocketGruntBattle_Text_1:
# 11 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "Oh no...\n"
	.string "You're {PLAYER}, aren't you?$"

TohjoFalls_B1F_RocketGruntBattle_Text_2:
# 12 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "At least I don't need to\n"
	.string "raise any alarm... Phew...\p"
	.string "If you could ROCK CLIMB or\n"
	.string "go UNDERGROUND, we'd be done for.\p"
	.string "But I'm so glad that something\n"
	.string "like that doesn't exist yet.$"

TohjoFalls_B1F_RocketAdminBattle_Text_0:
# 20 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "What are you doing here?!\n"
	.string "My associate didn't sound an alarm?!\p"
	.string "{PLAYER}, this is as far as\n"
	.string "you'll go!$"

TohjoFalls_B1F_RocketAdminBattle_Text_1:
# 20 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "Why didn't my associate tell me\n"
	.string "you were here?! Argh!$"

TohjoFalls_B1F_RocketAdminBattle_Text_2:
# 21 "data/maps/TohjoFalls_B1F/scripts.pory"
	.string "Oh, for pete's sake...\n"
	.string "Get lost!\p"
	.string "Are you trying to rub your\n"
	.string "winning smirk in my face?!\p"
	.string "There's nothing up there, anyways!\n"
	.string "Hahahahaha!\p"
	.string "I'm definitely guarding nothing...\n"
	.string "Scram!$"
