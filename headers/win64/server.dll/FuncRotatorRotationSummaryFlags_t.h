#pragma once

enum FuncRotatorRotationSummaryFlags_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eRotateBegin = 1,
    eEventsDispatched = 2,
    eRotateCompleted = 4,
    eOscillateStart = 8,
    eOscillateEnd = 16,
    eOscillateArrived = 32,
    eOscillateDepart = 64,
};
