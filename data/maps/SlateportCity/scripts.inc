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
	pokemartdecoration SlateportCity_SecretBase_FurnitureDecorItems
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
# 130 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SMALL_DESK
# 131 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SMALL_CHAIR
# 132 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_COMFORT_DESK
# 133 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_COMFORT_CHAIR
# 134 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_TROPICAL_PLANT
# 135 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_GORGEOUS_PLANT
# 136 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
	.2byte ITEM_NONE

SlateportCity_SecretBase_DollClerk::
# 141 "data/maps/SlateportCity/scripts.pory"
	lock
# 142 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 143 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_DollClerk_Text_0
# 144 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_SecretBase_DollDecorItems
# 145 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 146 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 147 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_SecretBase_DollDecorItems:
# 153 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_POKE_DOLL
# 154 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_FLUFFY_TAIL
	.2byte ITEM_NONE

SlateportCity_TMClerk1_6::
# 159 "data/maps/SlateportCity/scripts.pory"
	lock
# 160 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 161 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 162 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM1_6List
# 163 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 164 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 165 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM1_6List:
# 171 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM01
# 172 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM02
# 173 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM03
# 174 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM04
# 175 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM05
# 176 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM06
	.2byte ITEM_NONE

SlateportCity_TMClerk7_13::
# 181 "data/maps/SlateportCity/scripts.pory"
	lock
# 182 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 183 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 184 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM7_13List
# 185 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 186 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 187 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM7_13List:
# 193 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM07
# 194 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM08
# 195 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM09
# 196 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM11
# 197 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM12
# 198 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM13
	.2byte ITEM_NONE

SlateportCity_TMClerk14_19::
# 203 "data/maps/SlateportCity/scripts.pory"
	lock
# 204 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 205 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 206 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM14_19List
# 207 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 208 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 209 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM14_19List:
# 215 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM14
# 216 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM15
# 217 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM16
# 218 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM17
# 219 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM18
# 220 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM19
	.2byte ITEM_NONE

SlateportCity_TMClerk20_25::
# 225 "data/maps/SlateportCity/scripts.pory"
	lock
# 226 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 228 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM20_25List
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 230 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 231 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM20_25List:
# 237 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM20
# 238 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM21
# 239 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM22
# 240 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM23
# 241 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM24
# 242 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM25
	.2byte ITEM_NONE

SlateportCity_TMClerk26_31::
# 247 "data/maps/SlateportCity/scripts.pory"
	lock
# 248 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 249 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 250 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM26_31List
# 251 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 252 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 253 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM26_31List:
# 259 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM26
# 260 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM27
# 261 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM28
# 262 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM29
# 263 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM30
# 264 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM31
	.2byte ITEM_NONE

SlateportCity_TMClerk32_37::
# 269 "data/maps/SlateportCity/scripts.pory"
	lock
# 270 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 272 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM32_37List
# 273 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 274 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 275 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 279 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM32_37List:
# 281 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM32
# 282 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM33
# 283 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM34
# 284 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM35
# 285 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM36
# 286 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM37
	.2byte ITEM_NONE

SlateportCity_TMClerk38_44::
# 291 "data/maps/SlateportCity/scripts.pory"
	lock
# 292 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 293 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 294 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM38_44List
# 295 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 296 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 297 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM38_44List:
# 303 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM38
# 304 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM39
# 305 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM40
# 306 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM41
# 307 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM42
# 308 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM44
	.2byte ITEM_NONE

SlateportCity_TMClerk45_50::
# 313 "data/maps/SlateportCity/scripts.pory"
	lock
# 314 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 315 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_TMClerk1_6_Text_0
# 316 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_TM45_50List
# 317 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_SecretBase_FurnitureClerk_Text_1
# 318 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 319 "data/maps/SlateportCity/scripts.pory"
	release
	end


	.align 2
# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_TM45_50List:
# 325 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM45
# 326 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM46
# 327 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM47
# 328 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM48
# 329 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM49
# 330 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM50
	.2byte ITEM_NONE

SlateportCity_Lass::
# 335 "data/maps/SlateportCity/scripts.pory"
	lock
# 336 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 337 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Lass_Text_0
# 338 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 339 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Beauty::
# 345 "data/maps/SlateportCity/scripts.pory"
	lock
# 346 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 347 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Beauty_Text_0
# 348 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 349 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Little_Boy::
# 355 "data/maps/SlateportCity/scripts.pory"
	lock
# 356 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 357 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Little_Boy_Text_0
# 358 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 359 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Old_Woman::
# 365 "data/maps/SlateportCity/scripts.pory"
	lock
# 366 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Old_Woman_Text_0
# 368 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 369 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Fisher::
# 375 "data/maps/SlateportCity/scripts.pory"
	lock
# 376 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 377 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Fisher_Text_0
# 378 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 379 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Scientist::
# 385 "data/maps/SlateportCity/scripts.pory"
	lock
# 386 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 387 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Scientist_Text_0
# 388 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 389 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Super_Nerd::
# 395 "data/maps/SlateportCity/scripts.pory"
	lock
# 396 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 397 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Super_Nerd_Text_0
# 398 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 399 "data/maps/SlateportCity/scripts.pory"
	release
	end


SlateportCity_Woman_1::
# 405 "data/maps/SlateportCity/scripts.pory"
	lock
# 406 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 407 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Woman_1_Text_0
# 408 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 409 "data/maps/SlateportCity/scripts.pory"
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
# 143 "data/maps/SlateportCity/scripts.pory"
	.string "I've got several POKéMON\n"
	.string "DOLLS for sale!\p"
	.string "Does anything interest you for\n"
	.string "your SECRET BASE?$"

SlateportCity_TMClerk1_6_Text_0:
# 161 "data/maps/SlateportCity/scripts.pory"
	.string "I have several TMs for\n"
	.string "sale, here! Want any?$"

SlateportCity_Lass_Text_0:
# 337 "data/maps/SlateportCity/scripts.pory"
	.string "I shop here regularly, but\n"
	.string "at the LILYCOVE DEPT. STORE too!$"

SlateportCity_Beauty_Text_0:
# 347 "data/maps/SlateportCity/scripts.pory"
	.string "There's a tranquil FLOWER SHOP on\n"
	.string "ROUTE 104.\p"
	.string "I often stop by for free BERRIES,\n"
	.string "almost daily!$"

SlateportCity_Little_Boy_Text_0:
# 357 "data/maps/SlateportCity/scripts.pory"
	.string "You can't join the FAN CLUB if\n"
	.string "you don't even like POKéMON!$"

SlateportCity_Old_Woman_Text_0:
# 367 "data/maps/SlateportCity/scripts.pory"
	.string "The ocean out there is very much\n"
	.string "like life in itself...\p"
	.string "There is a constant flow, a never\n"
	.string "ending cycle...\p"
	.string "Things aren't always the same, but\n"
	.string "patterns repeat themselves.$"

SlateportCity_Fisher_Text_0:
# 377 "data/maps/SlateportCity/scripts.pory"
	.string "There's a really rare type of\n"
	.string "MAGIKARP that shines gold!\p"
	.string "Hm... Have you seen it?\n"
	.string "It's definitely a must!$"

SlateportCity_Scientist_Text_0:
# 387 "data/maps/SlateportCity/scripts.pory"
	.string "If you attract a CORSAIR'S\n"
	.string "attention, do what they say.\p"
	.string "Trust me...$"

SlateportCity_Super_Nerd_Text_0:
# 397 "data/maps/SlateportCity/scripts.pory"
	.string "Apparently, MAXIE used to help out\n"
	.string "here, in SLATEPORT.\p"
	.string "CAPT. STERN is very good at\n"
	.string "reading his old jumbled blueprints.$"

SlateportCity_Woman_1_Text_0:
# 407 "data/maps/SlateportCity/scripts.pory"
	.string "ARCHIE from TEAM CORSAIR is, uh...\n"
	.string "actually... Really handsome!\p"
	.string "MAXIE is just such a geek...\n"
	.string "Ah! No, don't mind me!$"
