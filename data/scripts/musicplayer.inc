EventScript_UseMusicPlayer::
# 3 "data/scripts/musicplayer.pory"
	lockall
# 4 "data/scripts/musicplayer.pory"
	switch VAR_MUSIC_PLAYER_TRACK
# 6 "data/scripts/musicplayer.pory"
	case 0, EventScript_UseMusicPlayer_3
# 10 "data/scripts/musicplayer.pory"
	msgbox EventScript_UseMusicPlayer_Text_1
# 11 "data/scripts/musicplayer.pory"
	waitmessage
# 12 "data/scripts/musicplayer.pory"
	closemessage
# 13 "data/scripts/musicplayer.pory"
	setvar VAR_MUSIC_PLAYER_TRACK, 0
# 14 "data/scripts/musicplayer.pory"
	call EventScript_UseMusicPlayer
EventScript_UseMusicPlayer_1:
	end

EventScript_UseMusicPlayer_3:
# 7 "data/scripts/musicplayer.pory"
	msgbox EventScript_UseMusicPlayer_Text_0
# 8 "data/scripts/musicplayer.pory"
	waitmessage
	goto EventScript_UseMusicPlayer_1


EventScript_PromptPlaySong::
# 21 "data/scripts/musicplayer.pory"
	lockall
# 22 "data/scripts/musicplayer.pory"
	msgbox EventScript_PromptPlaySong_Text_0, MSGBOX_YESNO
# 23 "data/scripts/musicplayer.pory"
	goto_if_eq VAR_RESULT, NO, EventScript_UseMusicPlayer
	end


EventScript_TryPlayMusic::
# 29 "data/scripts/musicplayer.pory"
	lockall
# 30 "data/scripts/musicplayer.pory"
	switch VAR_MUSIC_PLAYER_TRACK
# 32 "data/scripts/musicplayer.pory"
	case 0, EventScript_TryPlayMusic_3
EventScript_TryPlayMusic_1:
	end

EventScript_TryPlayMusic_3:
# 33 "data/scripts/musicplayer.pory"
	playbgm MUS_MUSIC_MENU, FALSE
# 34 "data/scripts/musicplayer.pory"
	msgbox EventScript_TryPlayMusic_Text_0
# 35 "data/scripts/musicplayer.pory"
	waitmessage
# 36 "data/scripts/musicplayer.pory"
	closemessage
	goto EventScript_TryPlayMusic_1


EventScript_MusicPlayerGuide::
# 43 "data/scripts/musicplayer.pory"
	lockall
# 44 "data/scripts/musicplayer.pory"
	msgbox EventScript_MusicPlayerGuide_Text_0
# 45 "data/scripts/musicplayer.pory"
	waitmessage
# 46 "data/scripts/musicplayer.pory"
	closemessage
# 47 "data/scripts/musicplayer.pory"
	call EventScript_UseMusicPlayer
	end


EventScript_ExitMusicPlayer::
# 53 "data/scripts/musicplayer.pory"
	fadedefaultbgm
# 54 "data/scripts/musicplayer.pory"
	msgbox EventScript_ExitMusicPlayer_Text_0
# 55 "data/scripts/musicplayer.pory"
	waitmessage
# 56 "data/scripts/musicplayer.pory"
	closemessage
# 57 "data/scripts/musicplayer.pory"
	releaseall
	end


EventScript_UseMusicPlayer_Text_0:
# 7 "data/scripts/musicplayer.pory"
	.string "Song 0: Music Player Menu Theme\n"
	.string "Unlocks: When using MUSIC PLAYER.$"

EventScript_UseMusicPlayer_Text_1:
# 10 "data/scripts/musicplayer.pory"
	.string "???:\n"
	.string "Track unknown... Going back to Track 0.$"

EventScript_PromptPlaySong_Text_0:
# 22 "data/scripts/musicplayer.pory"
	.string "Play this song?$"

EventScript_TryPlayMusic_Text_0:
# 34 "data/scripts/musicplayer.pory"
	.string "Playing: Music Player Menu Theme\n"
	.string "HG/SS Goldenrod City (FR/LG Remix)$"

EventScript_MusicPlayerGuide_Text_0:
# 44 "data/scripts/musicplayer.pory"
	.string "Welcome to the MUSIC PLAYER,\n"
	.string "{PLAYER}! Here's the controls...\p"
	.string "Press A to PLAY, B to QUIT\n"
	.string "<- Previous, Next ->\p"
	.string "Enjoy the music!\n"
	.string "- RODOLFO$"

EventScript_ExitMusicPlayer_Text_0:
# 54 "data/scripts/musicplayer.pory"
	.string "Closing the MUSIC PLAYER...$"
