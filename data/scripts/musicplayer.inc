#include "constants/songs.h"

EventScript_UseMusicPlayer::
    msgbox Text_CurrentSong, MSGBOX_SIGN
    end

Text_CurrentSong::
	.string "Currently Playing:\n"
	.string "...$"
