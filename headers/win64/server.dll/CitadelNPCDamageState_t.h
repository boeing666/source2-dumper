#pragma once

enum CitadelNPCDamageState_t : uint32_t  // sizeof 0x4
{
    INVALID = -1,
    NONE = 0,
    LIGHT = 1,
    MEDIUM = 2,
    HEAVY = 3,
    NEAR_DEATH = 4,
    DEAD = 5,
    COUNT = 6,
};
