#pragma once

enum ReplayEventType_t : uint32_t  // sizeof 0x4
{
    REPLAY_EVENT_CANCEL = 0,
    REPLAY_EVENT_DEATH = 1,
    REPLAY_EVENT_GENERIC = 2,
    REPLAY_EVENT_STUCK_NEED_FULL_UPDATE = 3,
    REPLAY_EVENT_VICTORY = 4,
};
