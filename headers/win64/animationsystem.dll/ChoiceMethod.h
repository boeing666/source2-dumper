#pragma once

enum ChoiceMethod : uint32_t  // sizeof 0x4
{
    WeightedRandom = 0,
    WeightedRandomNoRepeat = 1,
    Iterate = 2,
    IterateRandom = 3,
};
