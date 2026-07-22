#pragma once

enum ELeaguePhase : uint32_t  // sizeof 0x4
{
    LEAGUE_PHASE_UNSET = 0,
    LEAGUE_PHASE_REGIONAL_QUALIFIER = 1,
    LEAGUE_PHASE_GROUP_STAGE = 2,
    LEAGUE_PHASE_MAIN_EVENT = 3,
};
