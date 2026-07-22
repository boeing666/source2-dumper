#pragma once

enum SndBeatLaunchSyncType_t : uint32_t  // sizeof 0x4
{
    eSndBeatLaunchSyncTypeInvalid = 0,
    eSndBeatLaunchSyncTypeQueue = 1,
    eSndBeatLaunchSyncTypeSeek = 2,
    eSndBeatLaunchSyncTypeReset = 3,
};
