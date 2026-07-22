#pragma once

enum NmFootPhase_t : uint8_t  // sizeof 0x1
{
    LeftFootDown = 0,
    RightFootPassing = 1,
    RightFootDown = 2,
    LeftFootPassing = 3,
    None = 4,
};
