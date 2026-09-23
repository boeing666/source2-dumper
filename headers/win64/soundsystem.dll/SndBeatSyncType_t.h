#pragma once

enum SndBeatSyncType_t : uint32_t  // sizeof 0x4
{
    eSndBeatSyncTypeInvalid = 0,
    eSndBeatSyncTypeReset = 1,
    eSndBeatSyncTypeSeekImmediate = 2,
};
