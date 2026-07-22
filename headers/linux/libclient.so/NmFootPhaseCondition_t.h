#pragma once

enum NmFootPhaseCondition_t : uint8_t  // sizeof 0x1
{
    LeftFootDown = 0,
    LeftFootPassing = 1,
    LeftPhase = 4,
    RightFootDown = 2,
    RightFootPassing = 3,
    RightPhase = 5,
    None = 6,
};
