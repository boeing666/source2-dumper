#pragma once

enum ChoreoExternalAnimgraphControlState_t : uint32_t  // sizeof 0x4
{
    eNone = 0,
    eExit = 1,
    eFallbackExit = 2,
    eState01 = 3,
    eState02 = 4,
    eState03 = 5,
    eState04 = 6,
    eState05 = 7,
    eLooping = 8,
    eCount = 9,
};
