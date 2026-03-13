# 1 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 2 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_MapScripts::
# 3 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PokemonLeague_HallOfFame_Lance_OnFrame
# 4 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonLeague_HallOfFame_Lance_OnWarp
# 5 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	.byte 0
# 6 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 7 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_OnWarp::
# 8 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_Lance_EventScript_TurnPlayerNorth
# 9 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	.2byte 0
# 10 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 11 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_EventScript_TurnPlayerNorth::
# 12 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	turnobject LOCALID_PLAYER, DIR_NORTH
# 13 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	end
# 14 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 15 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_OnFrame::
# 16 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, PokemonLeague_HallOfFame_Lance_EventScript_EnterRoom
# 17 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	.2byte 0
# 18 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 19 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_EventScript_EnterRoom::
# 20 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	lockall
# 21 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 22 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, PokemonLeague_HallOfFame_Lance_Movement_EnterRoom
# 23 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	waitmovement 0
# 24 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_LANCE, Common_Movement_WalkInPlaceFasterLeft
# 25 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 26 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	waitmovement 0
# 27 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	delay 18
# 28 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	call PokemonLeague_HallOfFame_Lance_Congratulations
# 29 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	closemessage
# 30 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 31 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	applymovement LOCALID_HALL_OF_FAME_LANCE, PokemonLeague_HallOfFame_Lance_PutPokemonInHallOfFame_Movement
# 32 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	waitmovement 0
# 33 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	delay 20
# 34 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 35 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
# 36 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	delay 40
# 37 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	setvar VAR_TEMP_1, 1
# 38 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	call EventScript_SetDefeatedEliteFourFlagsVars
# 39 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	setrespawn HEAL_LOCATION_PALLET_TOWN
# 40 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 24
# 41 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	setvar VAR_GAME_CLEAR_ENDING, 2
# 42 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	special EnterHallOfFame
# 43 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	waitstate
# 44 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	releaseall
# 45 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	end
# 46 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"

# 47 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_Movement_EnterRoom::
# 48 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 49 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 50 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 51 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 52 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 53 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 54 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 55 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 56 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	step_end

PokemonLeague_HallOfFame_Lance_Congratulations::
# 62 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Lance_Congratulations_Text_0
# 63 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	msgbox PokemonLeague_HallOfFame_Lance_Congratulations_Text_1
	return


# 66 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
PokemonLeague_HallOfFame_Lance_PutPokemonInHallOfFame_Movement:
# 68 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	walk_up
# 69 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	face_left
# 70 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	step_end

PokemonLeague_HallOfFame_Lance_Congratulations_Text_0:
# 62 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	.string "This is where we commemorate\n"
	.string "LEAGUE CHAMPIONS for eternity.\p"
	.string "You've been here before, yes?\n"
	.string "Your compassion torward POKéMON...$"

PokemonLeague_HallOfFame_Lance_Congratulations_Text_1:
# 63 "data/maps/PokemonLeague_HallOfFame_Lance/scripts.pory"
	.string "You succeeded through perseverance\n"
	.string "and determination...\p"
	.string "{PLAYER}, allow me to register you\n"
	.string "and your partners as CHAMPIONS!$"
