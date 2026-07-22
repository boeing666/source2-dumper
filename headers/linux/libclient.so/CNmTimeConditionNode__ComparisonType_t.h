#pragma once

enum CNmTimeConditionNode::ComparisonType_t : uint8_t  // sizeof 0x1
{
    PercentageThroughState = 0,
    PercentageThroughSyncEvent = 1,
    ElapsedTime = 2,
};
