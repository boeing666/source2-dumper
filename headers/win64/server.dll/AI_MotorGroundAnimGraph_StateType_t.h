#pragma once

enum AI_MotorGroundAnimGraph_StateType_t : uint32_t  // sizeof 0x4
{
    eIdle = 0,
    eIdleTurn = 1,
    eStart = 2,
    eLoop = 3,
    eStop = 4,
    eInstantStop = 5,
    eHop = 6,
    ePlantedTurn = 7,
    eCustom = 8,
    eCustomMantle = 9,
    eOther = 10,
    eInvalid = 11,
    eCount = 11,
};
