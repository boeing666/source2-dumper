#pragma once

enum AnimationAlgorithm_t : uint8_t  // sizeof 0x1
{
    eInvalid = -1,
    eNone = 0,
    eSequence = 1,
    eAnimGraph2 = 2,
    eAnimGraph2Secondary = 3,
    eAnimGraph1 = 4,
    eCount = 5,
};
