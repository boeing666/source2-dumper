#pragma once

enum PointOrientGoalDirectionType_t : uint32_t  // sizeof 0x4
{
    eAbsOrigin = 0,
    eCenter = 1,
    eHead = 2,
    eForward = 3,
    eEyesForward = 4,
};
