#pragma once

enum AmmoFlags_t : uint32_t  // sizeof 0x4
{
    AMMO_FORCE_DROP_IF_CARRIED = 1,
    AMMO_RESERVE_STAYS_WITH_WEAPON = 2,
    AMMO_FLAG_MAX = 2,
};
