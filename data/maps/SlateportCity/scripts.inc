SlateportCity_MapScripts::
	.byte 0


SlateportCity_Sign::
# 5 "data/maps/SlateportCity/scripts.pory"
	lock
# 6 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_Text_0
# 7 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 8 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Harbor::
# 14 "data/maps/SlateportCity/scripts.pory"
	lock
# 15 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Harbor_Text_0
# 16 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 17 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_ContestHall::
# 23 "data/maps/SlateportCity/scripts.pory"
	lock
# 24 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_ContestHall_Text_0
# 25 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 26 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_FanClub::
# 32 "data/maps/SlateportCity/scripts.pory"
	lock
# 33 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_FanClub_Text_0
# 34 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 35 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_Market::
# 41 "data/maps/SlateportCity/scripts.pory"
	lock
# 42 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_Market_Text_0
# 43 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 44 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_Oceanic_Museum::
# 50 "data/maps/SlateportCity/scripts.pory"
	lock
# 51 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_Oceanic_Museum_Text_0
# 52 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 53 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_SternsShipyard::
# 59 "data/maps/SlateportCity/scripts.pory"
	lock
# 60 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_SternsShipyard_Text_0
# 61 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 62 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_NameRater::
# 68 "data/maps/SlateportCity/scripts.pory"
	lock
# 69 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sign_NameRater_Text_0
# 70 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 71 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sailor::
# 77 "data/maps/SlateportCity/scripts.pory"
	lock
# 78 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 79 "data/maps/SlateportCity/scripts.pory"
	checkitem ITEM_HM08, 1
# 80 "data/maps/SlateportCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SlateportCity_Sailor_2
# 87 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sailor_Text_2
# 88 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_HM08, 1
# 89 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sailor_Text_3
# 90 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sailor_Text_4
SlateportCity_Sailor_1:
# 92 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 93 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_Sailor_2:
# 82 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sailor_Text_0
# 83 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Sailor_Text_1
	goto SlateportCity_Sailor_1


SlateportCity_SecretHiddenPowerClerk::
# 99 "data/maps/SlateportCity/scripts.pory"
	lock
# 100 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 101 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretHiddenPowerClerk_Text_0
# 102 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_SecretHiddenTMItems
# 103 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretHiddenPowerClerk_Text_1
# 104 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 105 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 109 "data/maps/SlateportCity/scripts.pory"
SlateportCity_SecretHiddenTMItems:
# 111 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM10
# 112 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM43
	.2byte ITEM_NONE

SlateportCity_SecretBase_FurnitureClerk::
# 118 "data/maps/SlateportCity/scripts.pory"
	lock
# 119 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 120 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_0
# 121 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_SecretBase_FurnitureDecorItems
# 122 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 123 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 124 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 128 "data/maps/SlateportCity/scripts.pory"
SlateportCity_SecretBase_FurnitureDecorItems:
	.2byte ITEM_NONE

SlateportCity_SecretBase_DollClerk::
# 135 "data/maps/SlateportCity/scripts.pory"
	lock
# 136 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 137 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_DollClerk_Text_0
# 138 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_SecretBase_DollDecorItems
# 139 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 140 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 141 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 145 "data/maps/SlateportCity/scripts.pory"
SlateportCity_SecretBase_DollDecorItems:
	.2byte ITEM_NONE

SlateportCity_TMClerk1_6::
# 152 "data/maps/SlateportCity/scripts.pory"
	lock
# 153 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 154 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 155 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM1_6List
# 156 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 157 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 158 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 162 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM1_6List:
# 164 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM01
# 165 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM02
# 166 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM03
# 167 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM04
# 168 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM05
# 169 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

SlateportCity_TMClerk7_13::
# 174 "data/maps/SlateportCity/scripts.pory"
	lock
# 175 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 177 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM7_13List
# 178 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 179 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 180 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM7_13List:
# 186 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM07
# 187 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM08
# 188 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM09
# 189 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM11
# 190 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM12
# 191 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM13
	.2byte ITEM_NONE

SlateportCity_TMClerk14_19::
# 196 "data/maps/SlateportCity/scripts.pory"
	lock
# 197 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 198 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 199 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM14_19List
# 200 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 201 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 202 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM14_19List:
# 208 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM14
# 209 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM15
# 210 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM16
# 211 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM17
# 212 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM18
# 213 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

SlateportCity_TMClerk20_25::
# 218 "data/maps/SlateportCity/scripts.pory"
	lock
# 219 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 220 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 221 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM20_25List
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 223 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 224 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM20_25List:
# 230 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM20
# 231 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM21
# 232 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM22
# 233 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM23
# 234 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM24
# 235 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM25
	.2byte ITEM_NONE

SlateportCity_TMClerk26_31::
# 240 "data/maps/SlateportCity/scripts.pory"
	lock
# 241 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 242 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 243 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM26_31List
# 244 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 245 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 246 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM26_31List:
# 252 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM26
# 253 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM27
# 254 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM28
# 255 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM29
# 256 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM30
# 257 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM31
	.2byte ITEM_NONE

SlateportCity_TMClerk32_37::
# 262 "data/maps/SlateportCity/scripts.pory"
	lock
# 263 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 265 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM32_37List
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 267 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 268 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 272 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM32_37List:
# 274 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM32
# 275 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM33
# 276 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM34
# 277 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM35
# 278 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM36
# 279 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM37
	.2byte ITEM_NONE

SlateportCity_TMClerk38_44::
# 284 "data/maps/SlateportCity/scripts.pory"
	lock
# 285 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 286 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 287 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM38_44List
# 288 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 289 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 290 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM38_44List:
# 296 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM38
# 297 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM39
# 298 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM40
# 299 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM41
# 300 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM42
# 301 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM44
	.2byte ITEM_NONE

SlateportCity_TMClerk45_50::
# 306 "data/maps/SlateportCity/scripts.pory"
	lock
# 307 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 308 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 309 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM45_50List
# 310 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 311 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 312 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 316 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM45_50List:
# 318 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM45
# 319 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM46
# 320 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM47
# 321 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM48
# 322 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM49
# 323 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM50
	.2byte ITEM_NONE

SlateportCity_Lass::
# 328 "data/maps/SlateportCity/scripts.pory"
	lock
# 329 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 330 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Lass_Text_0
# 331 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 332 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Beauty::
# 338 "data/maps/SlateportCity/scripts.pory"
	lock
# 339 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 340 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Beauty_Text_0
# 341 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 342 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Little_Boy::
# 348 "data/maps/SlateportCity/scripts.pory"
	lock
# 349 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 350 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Little_Boy_Text_0
# 351 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 352 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Old_Woman::
# 358 "data/maps/SlateportCity/scripts.pory"
	lock
# 359 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Old_Woman_Text_0
# 361 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 362 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Fisher::
# 368 "data/maps/SlateportCity/scripts.pory"
	lock
# 369 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 370 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Fisher_Text_0
# 371 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 372 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Scientist::
# 378 "data/maps/SlateportCity/scripts.pory"
	lock
# 379 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 380 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Scientist_Text_0
# 381 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 382 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Super_Nerd::
# 388 "data/maps/SlateportCity/scripts.pory"
	lock
# 389 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 390 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Super_Nerd_Text_0
# 391 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 392 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Woman_1::
# 398 "data/maps/SlateportCity/scripts.pory"
	lock
# 399 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 400 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Woman_1_Text_0
# 401 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 402 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Sign_Text_0:
# 6 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "A bustling port city!\p"
	.string "People from different regions\n"
	.string "gather and mingle here.$"

SlateportCity_Harbor_Text_0:
# 15 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "SLATEPORT HARBOR\p"
	.string "An entry point for people and\n"
	.string "ships alike, to the HOENN REGION.$"

SlateportCity_ContestHall_Text_0:
# 24 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "HOENN'S CONTEST HALL\p"
	.string "POKéMON CONTEST COORDINATOR:\n"
	.string "LISIA$"

SlateportCity_Sign_FanClub_Text_0:
# 33 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "POKéMON FAN CLUB\p"
	.string "All POKéMON fans welcome!$"

SlateportCity_Sign_Market_Text_0:
# 42 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET -\n"
	.string "Unique items are sold here!$"

SlateportCity_Sign_Oceanic_Museum_Text_0:
# 51 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "OCEANIC MUSEUM\p"
	.string "The endless sea sustains all life!$"

SlateportCity_Sign_SternsShipyard_Text_0:
# 60 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "STERN'S SHIPYARD\p"
	.string "Need a boat? CAPT. STERN'S\n"
	.string "got you covered!$"

SlateportCity_Sign_NameRater_Text_0:
# 69 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY -\n"
	.string "NAME RATER\p"
	.string "Stop by to have POKéMON nicknames\n"
	.string "evaluated, or changed!$"

SlateportCity_Sailor_Text_0:
# 82 "data/maps/SlateportCity/scripts.pory"
	.string "When using SURF over a body\n"
	.string "of water, the darker water...\p"
	.string "Use DIVE on those spots to\n"
	.string "go underwater!$"

SlateportCity_Sailor_Text_1:
# 83 "data/maps/SlateportCity/scripts.pory"
	.string "If you need to return to the\n"
	.string "surface, just use DIVE again!\p"
	.string "You can't always re-surface in\n"
	.string "any spot, though. Be careful!$"

SlateportCity_Sailor_Text_2:
# 87 "data/maps/SlateportCity/scripts.pory"
	.string "You definitely seem capable of...\n"
	.string "Hm? You don't have HM08: DIVE?!\p"
	.string "You're lucky I keep extras!\n"
	.string "Here, take this!$"

SlateportCity_Sailor_Text_3:
# 89 "data/maps/SlateportCity/scripts.pory"
	.string "When using SURF over a body of\n"
	.string "water, there are these...\p"
	.string "Well, deep, spots of water.\n"
	.string "You can DIVE underwater, too!$"

SlateportCity_Sailor_Text_4:
# 90 "data/maps/SlateportCity/scripts.pory"
	.string "Although, in most cases, DIVE\n"
	.string "underwater takes you back up...\p"
	.string "I wonder why there isn't really\n"
	.string "a separate HM for that?$"

SlateportCity_SecretHiddenPowerClerk_Text_0:
# 101 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, you found me!$"

SlateportCity_SecretHiddenPowerClerk_Text_1:
# 103 "data/maps/SlateportCity/scripts.pory"
	.string "Please keep my location a\n"
	.string "secret, okay?\p"
	.string "...Or tell everyone, your choice!\n"
	.string "...It's good for business...$"

SlateportCity_SecretBase_FurnitureClerk_Text_0:
# 120 "data/maps/SlateportCity/scripts.pory"
	.string "I've got a wide range of\n"
	.string "furniture for sale!\p"
	.string "Does anything interest you for\n"
	.string "your SECRET BASE?$"

SlateportCity_SecretBase_FurnitureClerk_Text_1:
# 122 "data/maps/SlateportCity/scripts.pory"
	.string "Please come again!$"

SlateportCity_SecretBase_DollClerk_Text_0:
# 137 "data/maps/SlateportCity/scripts.pory"
	.string "I've got several POKéMON\n"
	.string "DOLLS for sale!\p"
	.string "Does anything interest you for\n"
	.string "your SECRET BASE?$"

SlateportCity_TMClerk1_6_Text_0:
# 154 "data/maps/SlateportCity/scripts.pory"
	.string "I have several TMs for\n"
	.string "sale, here! Want any?$"

SlateportCity_Lass_Text_0:
# 330 "data/maps/SlateportCity/scripts.pory"
	.string "I shop here regularly, but\n"
	.string "at the LILYCOVE DEPT. STORE too!$"

SlateportCity_Beauty_Text_0:
# 340 "data/maps/SlateportCity/scripts.pory"
	.string "There's a tranquil FLOWER SHOP on\n"
	.string "ROUTE 104.\p"
	.string "I often stop by for free BERRIES,\n"
	.string "almost daily!$"

SlateportCity_Little_Boy_Text_0:
# 350 "data/maps/SlateportCity/scripts.pory"
	.string "You can't join the FAN CLUB if\n"
	.string "you don't even like POKéMON!$"

SlateportCity_Old_Woman_Text_0:
# 360 "data/maps/SlateportCity/scripts.pory"
	.string "The ocean out there is very much\n"
	.string "like life in itself...\p"
	.string "There is a constant flow, a never\n"
	.string "ending cycle...\p"
	.string "Things aren't always the same, but\n"
	.string "patterns repeat themselves.$"

SlateportCity_Fisher_Text_0:
# 370 "data/maps/SlateportCity/scripts.pory"
	.string "There's a really rare type of\n"
	.string "MAGIKARP that shines gold!\p"
	.string "Hm... Have you seen it?\n"
	.string "It's definitely a must!$"

SlateportCity_Scientist_Text_0:
# 380 "data/maps/SlateportCity/scripts.pory"
	.string "If you attract a CORSAIR'S\n"
	.string "attention, do what they say.\p"
	.string "Trust me...$"

SlateportCity_Super_Nerd_Text_0:
# 390 "data/maps/SlateportCity/scripts.pory"
	.string "Apparently, MAXIE used to help out\n"
	.string "here, in SLATEPORT.\p"
	.string "CAPT. STERN is very good at\n"
	.string "reading his old jumbled blueprints.$"

SlateportCity_Woman_1_Text_0:
# 400 "data/maps/SlateportCity/scripts.pory"
	.string "ARCHIE from TEAM CORSAIR is, uh...\n"
	.string "actually... Really handsome!\p"
	.string "MAXIE is just such a geek...\n"
	.string "Ah! No, don't mind me!$"
