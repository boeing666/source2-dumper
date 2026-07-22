#pragma once

enum EStreetBrawlGameState : uint32_t  // sizeof 0x4
{
    ESBGS_Init = 0,
    ESBGS_PreBuy = 1,
    ESBGS_Buy = 2,
    ESBGS_Combat = 3,
    ESBGS_PreScoring = 4,
    ESBGS_Scoring = 5,
    ESBGS_Count = 6,
};
