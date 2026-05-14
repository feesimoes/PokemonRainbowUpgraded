LindenTown_MansionHall_R_1F_MapScripts::
	.byte 0


LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC::
# 5 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	lock
# 6 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	faceplayer
# 7 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_0, MSGBOX_YESNO
# 8 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_2
# 17 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_5
LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_1:
# 19 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	closemessage
# 20 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	release
	end

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_2:
# 10 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_1
# 11 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_2
# 12 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_3
# 13 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_4
	goto LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_1


LindenTown_MansionHall_R_1F_Beauty::
# 26 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	lock
# 27 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	faceplayer
# 28 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_Beauty_Text_0
# 29 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	closemessage
# 30 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	release
	end


LindenTown_MansionHall_R_1F_Woman::
# 37 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	lock
# 38 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	faceplayer
# 39 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	msgbox LindenTown_MansionHall_R_1F_Woman_Text_0
# 40 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	closemessage
# 41 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	release
	end


LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_0:
# 7 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "Oh, hello...\n"
	.string "You are new here, yes?$"

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_1:
# 10 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "Oh dear, this won't do...\n"
	.string "Child... I must educate you.\p"
	.string "Very strong TRAINERS gather here in\n"
	.string "both of GEORGE'S BALLROOMS.$"

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_2:
# 11 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "These trainers are also very, very\n"
	.string "wealthy, internationally as well...\p"
	.string "JACINTHE is the reigning LEADER of\n"
	.string "our little society, here.$"

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_3:
# 12 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "It is quite an achievement to earn\n"
	.string "the right to challenge her.\p"
	.string "Typical type effectiveness may not\n"
	.string "apply against her... Teehee!$"

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_4:
# 13 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "But, naturally, being wealthy means\n"
	.string "better rewards if victorious!$"

LindenTown_MansionHall_R_1F_InfoLady_Explain_SBC_Text_5:
# 17 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "Wow, you're a regular? I see...\n"
	.string "Enjoy!$"

LindenTown_MansionHall_R_1F_Beauty_Text_0:
# 28 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "Ugh! I saw JACINTHE here once.\n"
	.string "She's insane!\p"
	.string "...She is also, like, crazy strong!\n"
	.string "...Yes, I lost to her!$"

LindenTown_MansionHall_R_1F_Woman_Text_0:
# 39 "data/maps/LindenTown_MansionHall_R_1F/scripts.pory"
	.string "The SBC started up in KALOS.\n"
	.string "Those BATTLE CONNOISSEURS...\p"
	.string "Most of them are no joke!\n"
	.string "They take battling seriously!$"
