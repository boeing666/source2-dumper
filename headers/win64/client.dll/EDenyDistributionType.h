#pragma once

enum EDenyDistributionType : uint32_t  // sizeof 0x4
{
    EDenyToDenier = 0,
    EDenyToDenierNearbyTeammates = 1,
    EDenyToDenierTeam = 2,
    EDenyToNobody = 3,
    EDenyInLaningPhase = 4,
    EDenyToDenierAndSplitWithClaimer = 5,
    EDenyTypesCount = 6,
};
