#pragma once

enum TargetWarpTimingMethod : uint32_t  // sizeof 0x4
{
    ReachDestinationOnRootMotionEnd = 0,
    ReachDestinationOnWarpTagEnd = 1,
};
