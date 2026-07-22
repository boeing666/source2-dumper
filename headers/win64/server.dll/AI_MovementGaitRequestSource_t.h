#pragma once

enum AI_MovementGaitRequestSource_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eOverride = 0,
    eModifier = 1,
    eMoveStrategy = 2,
    eBase = 3,
    eCount = 4,
};
