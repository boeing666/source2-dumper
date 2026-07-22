#pragma once

enum CNmSyncEventIndexConditionNode::TriggerMode_t : uint8_t  // sizeof 0x1
{
    ExactlyAtEventIndex = 0,
    GreaterThanEqualToEventIndex = 1,
};
