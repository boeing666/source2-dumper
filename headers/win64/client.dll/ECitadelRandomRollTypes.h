#pragma once

enum ECitadelRandomRollTypes : uint32_t  // sizeof 0x4
{
    ECitadelRandomRoll_BulletCritChance = 0,
    ECitadelRandomRoll_BulletCritDebuffChance = 1,
    ECitadelRandomRoll_BreakableGoldPickup = 2,
    ECitadelRandomRoll_BreakablePowerupPickup = 3,
    ECitadelRandomRoll_LastEnum = 4,
};
