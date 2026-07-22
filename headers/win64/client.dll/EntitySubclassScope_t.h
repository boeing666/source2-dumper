#pragma once

enum EntitySubclassScope_t : uint32_t  // sizeof 0x4
{
    SUBCLASS_SCOPE_NONE = -1,
    SUBCLASS_SCOPE_PRECIPITATION = 0,
    SUBCLASS_SCOPE_PLAYER_WEAPONS = 1,
    SUBCLASS_SCOPE_COUNT = 2,
};
