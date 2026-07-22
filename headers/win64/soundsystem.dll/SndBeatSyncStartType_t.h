#pragma once

enum SndBeatSyncStartType_t : uint32_t  // sizeof 0x4
{
    eSndBeatSyncStartTypeInvalid = 0,
    eSndBeatSyncStartTypeImmediate = 1,
    eSndBeatSyncStartTypeQueue = 2,
};
