#pragma once

enum AI_ScheduleFacingTargetPriority_t : uint8_t  // sizeof 0x1
{
    eDefault = 0,
    eHigh = 0,
    eTaskBlocking = 1,
    eTaskBlockingForceFacing = 2,
};
