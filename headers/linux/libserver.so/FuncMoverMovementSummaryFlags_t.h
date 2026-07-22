#pragma once

enum FuncMoverMovementSummaryFlags_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eMovementBegin = 1,
    eStopBegin = 2,
    eStopComplete = 4,
    eReversing = 8,
    eEventsDispatched = 16,
    eLoopToStart = 32,
    eLoopToEnd = 64,
    eTransitionComplete = 128,
};
