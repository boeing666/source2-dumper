#pragma once

enum MovementMotionState_t : uint32_t  // sizeof 0x4
{
    eInvalid = -1,
    eStart = 0,
    eInProgress = 1,
    eSucceeded = 2,
    eFailed = 3,
    eEnd = 4,
};
