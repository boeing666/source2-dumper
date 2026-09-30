#pragma once

enum ECitadelItemGamePhase : uint8_t  // sizeof 0x1
{
    ECitadelItemGamePhase_Invalid = 0,
    ECitadelItemGamePhase_EarlyGame = 1,
    ECitadelItemGamePhase_MidGame = 2,
    ECitadelItemGamePhase_LateGame = 4,
};
