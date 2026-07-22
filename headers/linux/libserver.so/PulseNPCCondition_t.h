#pragma once

enum PulseNPCCondition_t : uint32_t  // sizeof 0x4
{
    COND_SEE_PLAYER = 1,
    COND_LOST_PLAYER = 2,
    COND_HEAR_PLAYER = 3,
    COND_PLAYER_PUSHING = 4,
    COND_NO_PRIMARY_AMMO = 5,
};
