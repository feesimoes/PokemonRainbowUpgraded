#include "global.h"
#include "music_track.h"
#include "constants/songs.h"
#include "data/music_tracks.h"

const u8 * MusicTrackId_GetName(u16 trackId)
{
    return gMusicTracks[trackId].trackName;
}