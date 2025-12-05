#ifndef GUARD_MUSIC_TRACK_H
#define GUARD_MUSIC_TRACK_H

#include "global.h"

struct MusicTrack
{
    u8 trackName[ITEM_NAME_LENGTH];
    const u8 *trackHint;
    u16 trackId;
};

extern const struct MusicTrack gMusicTracks[];

#endif // GUARD_MUSIC_TRACK_H