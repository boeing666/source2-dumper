#pragma once

enum ELeagueBroadcastProvider : uint32_t  // sizeof 0x4
{
    LEAGUE_BROADCAST_UNKNOWN = 0,
    LEAGUE_BROADCAST_STEAM = 1,
    LEAGUE_BROADCAST_TWITCH = 2,
    LEAGUE_BROADCAST_YOUTUBE = 3,
    LEAGUE_BROADCAST_OTHER = 100,
};
