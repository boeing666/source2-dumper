#pragma once

enum AI_MovementGaitSetRequestSource_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eMoveStrategy = 0,
    eBase = 1,
    eOverride = 2,
    eCount = 3,
};
