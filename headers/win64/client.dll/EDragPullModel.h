#pragma once

enum EDragPullModel : uint8_t  // sizeof 0x1
{
    EDragPull_SourceVelocityPlusDistance = 0,
    EDragPull_CombinedSpeedTowardsHold = 1,
    EDragPull_SpringDamped = 2,
};
