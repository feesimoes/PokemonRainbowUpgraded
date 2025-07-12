# 1 "data/maps/Route1/scripts.pory"

# 2 "data/maps/Route1/scripts.pory"
Route1_MapScripts::
# 3 "data/maps/Route1/scripts.pory"
	.byte 0
# 4 "data/maps/Route1/scripts.pory"

# 5 "data/maps/Route1/scripts.pory"
Route1_EventScript_MartClerk::
# 6 "data/maps/Route1/scripts.pory"
	lock
# 7 "data/maps/Route1/scripts.pory"
	faceplayer
# 8 "data/maps/Route1/scripts.pory"
	goto_if_set FLAG_GOT_POTION_ON_ROUTE_1, Route1_EventScript_AlreadyGotPotion
# 9 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_WorkAtPokeMartTakeSample
# 10 "data/maps/Route1/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 11 "data/maps/Route1/scripts.pory"
	checkitemspace ITEM_POTION
# 12 "data/maps/Route1/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, EventScript_BagIsFull
# 13 "data/maps/Route1/scripts.pory"
	bufferitemname STR_VAR_2, ITEM_POTION
# 14 "data/maps/Route1/scripts.pory"
	playfanfare MUS_LEVEL_UP
# 15 "data/maps/Route1/scripts.pory"
	message Text_ObtainedTheX
# 16 "data/maps/Route1/scripts.pory"
	waitmessage
# 17 "data/maps/Route1/scripts.pory"
	waitfanfare
# 18 "data/maps/Route1/scripts.pory"
	additem ITEM_POTION
# 19 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_PutPotionAway
# 20 "data/maps/Route1/scripts.pory"
	call EventScript_RestorePrevTextColor
# 21 "data/maps/Route1/scripts.pory"
	setflag FLAG_GOT_POTION_ON_ROUTE_1
# 22 "data/maps/Route1/scripts.pory"
	release
# 23 "data/maps/Route1/scripts.pory"
	end
# 24 "data/maps/Route1/scripts.pory"

# 25 "data/maps/Route1/scripts.pory"
Route1_EventScript_AlreadyGotPotion::
# 26 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_ComeSeeUsIfYouNeedPokeBalls
# 27 "data/maps/Route1/scripts.pory"
	release
# 28 "data/maps/Route1/scripts.pory"
	end
# 29 "data/maps/Route1/scripts.pory"

# 30 "data/maps/Route1/scripts.pory"
Route1_EventScript_Boy::
# 31 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_CanJumpFromLedges, MSGBOX_NPC
# 32 "data/maps/Route1/scripts.pory"
	end
# 33 "data/maps/Route1/scripts.pory"

# 34 "data/maps/Route1/scripts.pory"
Route1_EventScript_RouteSign::
# 35 "data/maps/Route1/scripts.pory"
	msgbox Route1_Text_RouteSign, MSGBOX_SIGN
# 36 "data/maps/Route1/scripts.pory"
	end

Route1_HoOh_Event_Direct::
# 43 "data/maps/Route1/scripts.pory"
	setvar VAR_TEMP_0, 1
# 44 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_face_down
# 45 "data/maps/Route1/scripts.pory"
	waitmovement
# 46 "data/maps/Route1/scripts.pory"
	playbgm MUS_ENCOUNTER_RIVAL, FALSE
# 47 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_0, MSGBOX_NPC
# 48 "data/maps/Route1/scripts.pory"
	waitmessage
# 49 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_1, MSGBOX_NPC
# 50 "data/maps/Route1/scripts.pory"
	waitmessage
# 51 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_2, MSGBOX_NPC
# 52 "data/maps/Route1/scripts.pory"
	waitmessage
# 53 "data/maps/Route1/scripts.pory"
	fadeoutbgm 1
# 54 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_3, MSGBOX_NPC
# 55 "data/maps/Route1/scripts.pory"
	playmoncry SPECIES_HO_OH, CRY_MODE_NORMAL
# 56 "data/maps/Route1/scripts.pory"
	waitmessage
# 57 "data/maps/Route1/scripts.pory"
	playse SE_PIN
# 58 "data/maps/Route1/scripts.pory"
	applymovement 0x04, exclaimation_mark
# 59 "data/maps/Route1/scripts.pory"
	waitmovement
# 60 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_face_left_fast
# 61 "data/maps/Route1/scripts.pory"
	waitmovement
# 62 "data/maps/Route1/scripts.pory"
	applymovement 0x03, move_right_16
# 63 "data/maps/Route1/scripts.pory"
	waitmovement
# 64 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_4, MSGBOX_NPC
# 65 "data/maps/Route1/scripts.pory"
	waitmessage
# 66 "data/maps/Route1/scripts.pory"
	applymovement 0x03, move_left_16
# 67 "data/maps/Route1/scripts.pory"
	waitmovement
# 68 "data/maps/Route1/scripts.pory"
	msgbox Route1_HoOh_Event_Direct_Text_5, MSGBOX_NPC
# 69 "data/maps/Route1/scripts.pory"
	waitmessage
# 70 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_up_1
# 71 "data/maps/Route1/scripts.pory"
	waitmovement
# 72 "data/maps/Route1/scripts.pory"
	applymovement 0x04, run_left_16
# 73 "data/maps/Route1/scripts.pory"
	waitmovement
# 74 "data/maps/Route1/scripts.pory"
	setflag FLAG_ROUTE1_HO_OH_EVENT_HAPPENED
# 75 "data/maps/Route1/scripts.pory"
	playbgm MUS_ROUTE1, TRUE
# 76 "data/maps/Route1/scripts.pory"
	release
	end


Route1_HoOh_Event_Move_Rival_1_Left::
# 81 "data/maps/Route1/scripts.pory"
	goto_if_unset FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, Route1_HoOh_Event_Move_Rival_1_Left_1
	return

Route1_HoOh_Event_Move_Rival_1_Left_1:
# 82 "data/maps/Route1/scripts.pory"
	lock
# 83 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_left_1
# 84 "data/maps/Route1/scripts.pory"
	goto Route1_HoOh_Event_Direct
# 85 "data/maps/Route1/scripts.pory"
	release
	end


Route1_HoOh_Event_Move_Rival_2_Left::
# 91 "data/maps/Route1/scripts.pory"
	goto_if_unset ! FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, Route1_HoOh_Event_Move_Rival_2_Left_1
	return

Route1_HoOh_Event_Move_Rival_2_Left_1:
# 92 "data/maps/Route1/scripts.pory"
	lock
# 93 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_left_2
# 94 "data/maps/Route1/scripts.pory"
	goto Route1_HoOh_Event_Direct
# 95 "data/maps/Route1/scripts.pory"
	release
	end


Route1_HoOh_Event_Move_Rival_3_Left::
# 101 "data/maps/Route1/scripts.pory"
	goto_if_unset ! FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, Route1_HoOh_Event_Move_Rival_3_Left_1
	return

Route1_HoOh_Event_Move_Rival_3_Left_1:
# 102 "data/maps/Route1/scripts.pory"
	lock
# 103 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_left_3
# 104 "data/maps/Route1/scripts.pory"
	goto Route1_HoOh_Event_Direct
# 105 "data/maps/Route1/scripts.pory"
	release
	end


Route1_HoOh_Event_Move_Rival_4_Left::
# 111 "data/maps/Route1/scripts.pory"
	goto_if_unset ! FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, Route1_HoOh_Event_Move_Rival_4_Left_1
	return

Route1_HoOh_Event_Move_Rival_4_Left_1:
# 112 "data/maps/Route1/scripts.pory"
	lock
# 113 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_left_4
# 114 "data/maps/Route1/scripts.pory"
	goto Route1_HoOh_Event_Direct
# 115 "data/maps/Route1/scripts.pory"
	release
	end


Route1_HoOh_Event_Move_Rival_5_Left::
# 121 "data/maps/Route1/scripts.pory"
	goto_if_unset ! FLAG_ROUTE1_HO_OH_EVENT_HAPPENED, Route1_HoOh_Event_Move_Rival_5_Left_1
	return

Route1_HoOh_Event_Move_Rival_5_Left_1:
# 122 "data/maps/Route1/scripts.pory"
	lock
# 123 "data/maps/Route1/scripts.pory"
	applymovement 0x04, move_left_5
# 124 "data/maps/Route1/scripts.pory"
	goto Route1_HoOh_Event_Direct
# 125 "data/maps/Route1/scripts.pory"
	release
	end


# 130 "data/maps/Route1/scripts.pory"
move_face_player:
# 131 "data/maps/Route1/scripts.pory"
	face_player
# 132 "data/maps/Route1/scripts.pory"
	step_end

# 135 "data/maps/Route1/scripts.pory"
move_face_down:
# 136 "data/maps/Route1/scripts.pory"
	face_down
# 137 "data/maps/Route1/scripts.pory"
	step_end

# 140 "data/maps/Route1/scripts.pory"
exclaimation_mark:
# 141 "data/maps/Route1/scripts.pory"
	emote_exclamation_mark
# 142 "data/maps/Route1/scripts.pory"
	step_end

# 145 "data/maps/Route1/scripts.pory"
move_up_1:
# 146 "data/maps/Route1/scripts.pory"
	walk_up
# 147 "data/maps/Route1/scripts.pory"
	step_end

# 150 "data/maps/Route1/scripts.pory"
move_face_left_fast:
# 151 "data/maps/Route1/scripts.pory"
	face_left_fast
# 152 "data/maps/Route1/scripts.pory"
	step_end

# 155 "data/maps/Route1/scripts.pory"
move_left_1:
# 156 "data/maps/Route1/scripts.pory"
	walk_left
# 157 "data/maps/Route1/scripts.pory"
	step_end

# 159 "data/maps/Route1/scripts.pory"
move_left_2:
# 160 "data/maps/Route1/scripts.pory"
	walk_left
# 160 "data/maps/Route1/scripts.pory"
	walk_left
# 161 "data/maps/Route1/scripts.pory"
	step_end

# 163 "data/maps/Route1/scripts.pory"
move_left_3:
# 164 "data/maps/Route1/scripts.pory"
	walk_left
# 164 "data/maps/Route1/scripts.pory"
	walk_left
# 164 "data/maps/Route1/scripts.pory"
	walk_left
# 165 "data/maps/Route1/scripts.pory"
	step_end

# 167 "data/maps/Route1/scripts.pory"
move_left_4:
# 168 "data/maps/Route1/scripts.pory"
	walk_left
# 168 "data/maps/Route1/scripts.pory"
	walk_left
# 168 "data/maps/Route1/scripts.pory"
	walk_left
# 168 "data/maps/Route1/scripts.pory"
	walk_left
# 169 "data/maps/Route1/scripts.pory"
	step_end

# 172 "data/maps/Route1/scripts.pory"
move_left_5:
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 173 "data/maps/Route1/scripts.pory"
	walk_left
# 174 "data/maps/Route1/scripts.pory"
	step_end

# 177 "data/maps/Route1/scripts.pory"
move_left_16:
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 178 "data/maps/Route1/scripts.pory"
	walk_left
# 179 "data/maps/Route1/scripts.pory"
	step_end

# 181 "data/maps/Route1/scripts.pory"
run_left_16:
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 182 "data/maps/Route1/scripts.pory"
	walk_faster_left
# 183 "data/maps/Route1/scripts.pory"
	step_end

# 186 "data/maps/Route1/scripts.pory"
move_right_16:
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 187 "data/maps/Route1/scripts.pory"
	walk_right
# 188 "data/maps/Route1/scripts.pory"
	step_end

Route1_HoOh_Event_Direct_Text_0:
# 47 "data/maps/Route1/scripts.pory"
	.string "{RIVAL}: Hey, {PLAYER}!\p"
	.string "You're just getting here?\n"
	.string "$"

Route1_HoOh_Event_Direct_Text_1:
# 49 "data/maps/Route1/scripts.pory"
	.string "I already have at least 6 different\n"
	.string "Pokémon!\p"
	.string "That's right! While you've been slacking\n"
	.string "off,\n"
	.string "$"

Route1_HoOh_Event_Direct_Text_2:
# 51 "data/maps/Route1/scripts.pory"
	.string "I've been training hard!\p"
	.string "Come on, I'll take you on!\n"
	.string "$"

Route1_HoOh_Event_Direct_Text_3:
# 54 "data/maps/Route1/scripts.pory"
	.string "{RIVAL}: Huh? What was that?\n"
	.string "$"

Route1_HoOh_Event_Direct_Text_4:
# 64 "data/maps/Route1/scripts.pory"
	.string "{RIVAL}: No way! What is that thing?\p"
	.string "I've never seen anything like it!\n"
	.string "$"

Route1_HoOh_Event_Direct_Text_5:
# 68 "data/maps/Route1/scripts.pory"
	.string "No! It's getting away!\p"
	.string "Get back here!\n"
	.string "$"
