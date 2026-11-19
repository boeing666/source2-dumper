#pragma once

enum MovementCapability_t : uint32_t  // sizeof 0x4
{
    eStrafe = 0,
    eIdleTurn = 1,
    eStart = 2,
    eStop = 3,
    eInstantStop = 4,
    eShuffle = 5,
    ePlantedTurn = 6,
    eUseStartAsPlantedTurn = 7,
    eLean = 8,
    eTurnToStart = 9,
    eAim = 10,
    eForwardStopOnly = 11,
    eCount = 12,
};
