#pragma once

enum AmmoPosition_t : uint32_t  // sizeof 0x4
{
    AMMO_POSITION_INVALID = -1,
    AMMO_POSITION_PRIMARY = 0,
    AMMO_POSITION_SECONDARY = 1,
    AMMO_POSITION_COUNT = 2,
};
