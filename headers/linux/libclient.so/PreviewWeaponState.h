#pragma once

enum PreviewWeaponState : uint32_t  // sizeof 0x4
{
    DROPPED = 0,
    HOLSTERED = 1,
    DEPLOYED = 2,
    PLANTED = 3,
    INSPECT = 4,
    ICON = 5,
};
