#pragma once

enum PlayBackMode_t : uint32_t  // sizeof 0x4
{
    Random = 0,
    RandomNoRepeats = 1,
    RandomAvoidLast = 2,
    Sequential = 3,
    RandomWeights = 4,
};
