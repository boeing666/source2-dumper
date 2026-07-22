#pragma once

enum AI_MotorGroundAnimGraph_Flags_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eDelayStop = 1,
    eWaitingForFacing = 2,
    eWaitingForNavigatorArrivalFacing = 4,
    eDelayIdleTurn = 8,
};
