# 1 "data/maps/ViridianCity/scripts.pory"

# 2 "data/maps/ViridianCity/scripts.pory"
ViridianCity_MapScripts::
# 3 "data/maps/ViridianCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
# 4 "data/maps/ViridianCity/scripts.pory"
	.byte 0
# 5 "data/maps/ViridianCity/scripts.pory"

# 6 "data/maps/ViridianCity/scripts.pory"
ViridianCity_OnTransition::
# 7 "data/maps/ViridianCity/scripts.pory"
	setworldmapflag FLAG_WORLD_MAP_VIRIDIAN_CITY
# 8 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_SetOldManBlockingRoad
# 9 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_SetOldManStandingByRoad
# 10 "data/maps/ViridianCity/scripts.pory"
	call_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_SetOldManNormal
# 11 "data/maps/ViridianCity/scripts.pory"
	call_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 0, ViridianCity_EventScript_TryUnlockGym
# 12 "data/maps/ViridianCity/scripts.pory"
	end
# 13 "data/maps/ViridianCity/scripts.pory"

# 14 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManNormal::
# 15 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 16 "data/maps/ViridianCity/scripts.pory"
	return
# 17 "data/maps/ViridianCity/scripts.pory"

# 18 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManStandingByRoad::
# 19 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_1
# 20 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 8
# 21 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_LOOK_AROUND
# 22 "data/maps/ViridianCity/scripts.pory"
	return
# 23 "data/maps/ViridianCity/scripts.pory"

# 24 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_SetOldManBlockingRoad::
# 25 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_OLD_MAN_LYING_DOWN
# 26 "data/maps/ViridianCity/scripts.pory"
	setobjectxyperm LOCALID_TUTORIAL_MAN, 21, 11
# 27 "data/maps/ViridianCity/scripts.pory"
	setobjectmovementtype LOCALID_TUTORIAL_MAN, MOVEMENT_TYPE_FACE_DOWN
# 28 "data/maps/ViridianCity/scripts.pory"
	return
# 29 "data/maps/ViridianCity/scripts.pory"

# 30 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TryUnlockGym::
# 31 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, EventScript_Return
# 32 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, EventScript_Return
# 33 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, EventScript_Return
# 34 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, EventScript_Return
# 35 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE06_GET, EventScript_Return
# 36 "data/maps/ViridianCity/scripts.pory"
	goto_if_unset FLAG_BADGE07_GET, EventScript_Return
# 37 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1
# 38 "data/maps/ViridianCity/scripts.pory"
	return
# 39 "data/maps/ViridianCity/scripts.pory"

# 40 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoorLocked::
# 41 "data/maps/ViridianCity/scripts.pory"
	lockall
# 42 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_NEUTRAL
# 43 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 44 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 45 "data/maps/ViridianCity/scripts.pory"
	delay 20
# 46 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked
# 47 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 48 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 49 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 50 "data/maps/ViridianCity/scripts.pory"
	releaseall
# 51 "data/maps/ViridianCity/scripts.pory"
	end
# 52 "data/maps/ViridianCity/scripts.pory"

# 53 "data/maps/ViridianCity/scripts.pory"
ViridianCity_Movement_WalkDown::
# 54 "data/maps/ViridianCity/scripts.pory"
	walk_down
# 55 "data/maps/ViridianCity/scripts.pory"
	step_end
# 56 "data/maps/ViridianCity/scripts.pory"

# 57 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_CitySign::
# 58 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CitySign, MSGBOX_SIGN
# 59 "data/maps/ViridianCity/scripts.pory"
	end
# 60 "data/maps/ViridianCity/scripts.pory"

# 61 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips1::
# 62 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CatchMonsForEasierBattles, MSGBOX_SIGN
# 63 "data/maps/ViridianCity/scripts.pory"
	end
# 64 "data/maps/ViridianCity/scripts.pory"

# 65 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TrainerTips2::
# 66 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MovesLimitedByPP, MSGBOX_SIGN
# 67 "data/maps/ViridianCity/scripts.pory"
	end
# 68 "data/maps/ViridianCity/scripts.pory"

# 69 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymSign::
# 70 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymSign, MSGBOX_SIGN
# 71 "data/maps/ViridianCity/scripts.pory"
	end
# 72 "data/maps/ViridianCity/scripts.pory"

# 73 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_GymDoor::
# 74 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymDoorsAreLocked, MSGBOX_SIGN
# 75 "data/maps/ViridianCity/scripts.pory"
	end
# 76 "data/maps/ViridianCity/scripts.pory"

# 77 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Boy::
# 78 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_CanCarryMonsAnywhere, MSGBOX_NPC
# 79 "data/maps/ViridianCity/scripts.pory"
	end
# 80 "data/maps/ViridianCity/scripts.pory"

# 81 "data/maps/ViridianCity/scripts.pory"
@ Other old man, not the tutorial old man
# 82 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldMan::
# 83 "data/maps/ViridianCity/scripts.pory"
	lock
# 84 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 85 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_GYM_DOOR, 1, ViridianCity_EventScript_OldManGymLeaderReturned
# 86 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GymClosedWonderWhoLeaderIs
# 87 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 88 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_OLD_MAN, Common_Movement_FaceOriginalDirection
# 89 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 90 "data/maps/ViridianCity/scripts.pory"
	release
# 91 "data/maps/ViridianCity/scripts.pory"
	end
# 92 "data/maps/ViridianCity/scripts.pory"

# 93 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_OldManGymLeaderReturned::
# 94 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ViridiansGymLeaderReturned
# 95 "data/maps/ViridianCity/scripts.pory"
	release
# 96 "data/maps/ViridianCity/scripts.pory"
	end
# 97 "data/maps/ViridianCity/scripts.pory"

# 98 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialOldMan::
# 99 "data/maps/ViridianCity/scripts.pory"
	lock
# 100 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 101 "data/maps/ViridianCity/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, ViridianCity_EventScript_AskIfTeachyTVHelpful
# 102 "data/maps/ViridianCity/scripts.pory"
	goto_if_ge VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2, ViridianCity_EventScript_TutorialCompleted
# 103 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 1, ViridianCity_EventScript_TutorialStart
# 104 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_TutorialNotReady
# 105 "data/maps/ViridianCity/scripts.pory"
	end
# 106 "data/maps/ViridianCity/scripts.pory"

# 107 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_AskIfTeachyTVHelpful::
# 108 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_HowsTeachyTVHelping, MSGBOX_YESNO
# 109 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_TeachyTVNotHelpful
# 110 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_MyGrandsonOnTheShow
# 111 "data/maps/ViridianCity/scripts.pory"
	release
# 112 "data/maps/ViridianCity/scripts.pory"
	end
# 113 "data/maps/ViridianCity/scripts.pory"

# 114 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TeachyTVNotHelpful::
# 115 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_TooBusyForTeachyTV
# 116 "data/maps/ViridianCity/scripts.pory"
	release
# 117 "data/maps/ViridianCity/scripts.pory"
	end
# 118 "data/maps/ViridianCity/scripts.pory"

# 119 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialCompleted::
# 120 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WeakenMonsFirstToCatch
# 121 "data/maps/ViridianCity/scripts.pory"
	release
# 122 "data/maps/ViridianCity/scripts.pory"
	end
# 123 "data/maps/ViridianCity/scripts.pory"

# 124 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialStart::
# 125 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 126 "data/maps/ViridianCity/scripts.pory"
	release
# 127 "data/maps/ViridianCity/scripts.pory"
	end
# 128 "data/maps/ViridianCity/scripts.pory"

# 129 "data/maps/ViridianCity/scripts.pory"
@ Unused
# 130 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_WatchToLearnBasics::
# 131 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 132 "data/maps/ViridianCity/scripts.pory"
	release
# 133 "data/maps/ViridianCity/scripts.pory"
	end
# 134 "data/maps/ViridianCity/scripts.pory"

# 135 "data/maps/ViridianCity/scripts.pory"
@ Unused. Starts battle after the post battle text, which is odd.
# 136 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialUnused::
# 137 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 138 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 139 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 140 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 141 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 142 "data/maps/ViridianCity/scripts.pory"
	release
# 143 "data/maps/ViridianCity/scripts.pory"
	end
# 144 "data/maps/ViridianCity/scripts.pory"

# 145 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialNotReady::
# 146 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 147 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 148 "data/maps/ViridianCity/scripts.pory"
	release
# 149 "data/maps/ViridianCity/scripts.pory"
	end
# 150 "data/maps/ViridianCity/scripts.pory"

# 151 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Youngster::
# 152 "data/maps/ViridianCity/scripts.pory"
	lock
# 153 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 154 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WantToKnowAboutCaterpillarMons, MSGBOX_YESNO
# 155 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, ViridianCity_EventScript_YoungsterExplainCaterpillars
# 156 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, ViridianCity_EventScript_YoungsterDeclineExplanation
# 157 "data/maps/ViridianCity/scripts.pory"
	end
# 158 "data/maps/ViridianCity/scripts.pory"

# 159 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterExplainCaterpillars::
# 160 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ExplainCaterpieWeedle
# 161 "data/maps/ViridianCity/scripts.pory"
	release
# 162 "data/maps/ViridianCity/scripts.pory"
	end
# 163 "data/maps/ViridianCity/scripts.pory"

# 164 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_YoungsterDeclineExplanation::
# 165 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_OhOkayThen
# 166 "data/maps/ViridianCity/scripts.pory"
	release
# 167 "data/maps/ViridianCity/scripts.pory"
	end
# 168 "data/maps/ViridianCity/scripts.pory"

# 169 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_Woman::
# 170 "data/maps/ViridianCity/scripts.pory"
	lock
# 171 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 172 "data/maps/ViridianCity/scripts.pory"
	goto_if_eq VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 0, ViridianCity_EventScript_WomanRoadBlocked
# 173 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GoShoppingInPewterOccasionally
# 174 "data/maps/ViridianCity/scripts.pory"
	release
# 175 "data/maps/ViridianCity/scripts.pory"
	end
# 176 "data/maps/ViridianCity/scripts.pory"

# 177 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_WomanRoadBlocked::
# 178 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_GrandpaHasntHadCoffeeYet
# 179 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 180 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_VIRIDIAN_WOMAN, Common_Movement_FaceOriginalDirection
# 181 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 182 "data/maps/ViridianCity/scripts.pory"
	release
# 183 "data/maps/ViridianCity/scripts.pory"
	end
# 184 "data/maps/ViridianCity/scripts.pory"

# 185 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DreamEaterTutor::
# 186 "data/maps/ViridianCity/scripts.pory"
	goto EventScript_DreamEaterTutor
# 187 "data/maps/ViridianCity/scripts.pory"
	end
# 188 "data/maps/ViridianCity/scripts.pory"

# 189 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_RoadBlocked::
# 190 "data/maps/ViridianCity/scripts.pory"
	lockall
# 191 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 192 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThisIsPrivateProperty
# 193 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 194 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, ViridianCity_Movement_WalkDown
# 195 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 196 "data/maps/ViridianCity/scripts.pory"
	releaseall
# 197 "data/maps/ViridianCity/scripts.pory"
	end
# 198 "data/maps/ViridianCity/scripts.pory"

# 199 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerLeft::
# 200 "data/maps/ViridianCity/scripts.pory"
	lockall
# 201 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 202 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterLeft
# 203 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 204 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 205 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 206 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 207 "data/maps/ViridianCity/scripts.pory"
	release
# 208 "data/maps/ViridianCity/scripts.pory"
	end
# 209 "data/maps/ViridianCity/scripts.pory"

# 210 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_TutorialTriggerRight::
# 211 "data/maps/ViridianCity/scripts.pory"
	lockall
# 212 "data/maps/ViridianCity/scripts.pory"
	textcolor NPC_TEXT_COLOR_MALE
# 213 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_TUTORIAL_MAN, Common_Movement_WalkInPlaceFasterRight
# 214 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 215 "data/maps/ViridianCity/scripts.pory"
	applymovement LOCALID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 216 "data/maps/ViridianCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/ViridianCity/scripts.pory"
	call ViridianCity_EventScript_DoTutorialBattle
# 218 "data/maps/ViridianCity/scripts.pory"
	release
# 219 "data/maps/ViridianCity/scripts.pory"
	end
# 220 "data/maps/ViridianCity/scripts.pory"

# 221 "data/maps/ViridianCity/scripts.pory"
ViridianCity_EventScript_DoTutorialBattle::
# 222 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ShowYouHowToCatchMons
# 223 "data/maps/ViridianCity/scripts.pory"
	closemessage
# 224 "data/maps/ViridianCity/scripts.pory"
	goto_if_questlog EventScript_ReleaseEnd
# 225 "data/maps/ViridianCity/scripts.pory"
	special QuestLog_CutRecording
# 226 "data/maps/ViridianCity/scripts.pory"
	special StartOldManTutorialBattle
# 227 "data/maps/ViridianCity/scripts.pory"
	waitstate
# 228 "data/maps/ViridianCity/scripts.pory"
	lock
# 229 "data/maps/ViridianCity/scripts.pory"
	faceplayer
# 230 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_ThatWasEducationalTakeThis
# 231 "data/maps/ViridianCity/scripts.pory"
	setvar VAR_MAP_SCENE_VIRIDIAN_CITY_OLD_MAN, 2
# 232 "data/maps/ViridianCity/scripts.pory"
	giveitem ITEM_TEACHY_TV
# 233 "data/maps/ViridianCity/scripts.pory"
	msgbox ViridianCity_Text_WatchThatToLearnBasics
# 234 "data/maps/ViridianCity/scripts.pory"
	return
