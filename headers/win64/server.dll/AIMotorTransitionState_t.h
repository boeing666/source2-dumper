#pragma once

enum AIMotorTransitionState_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eFacingNotStarted = 1,
    eFacingStarted = 2,
    eFacingSuccessful = 3,
    eExecuting = 4,
};
