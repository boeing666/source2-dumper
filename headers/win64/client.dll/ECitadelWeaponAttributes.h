#pragma once

enum ECitadelWeaponAttributes : uint16_t  // sizeof 0x2
{
    EWeaponAttribute_None = 0,
    EWeaponAttribute_RapidFire = 1,
    EWeaponAttribute_BurstFire = 2,
    EWeaponAttribute_Spreadshot = 4,
    EWeaponAttribute_BeamWeapon = 8,
    EWeaponAttribute_CloseRange = 16,
    EWeaponAttribute_MediumRange = 32,
    EWeaponAttribute_LongRange = 64,
    EWeaponAttribute_HeavyHitter = 128,
    EWeaponAttribute_Projectile = 256,
    EWeaponAttribute_Bouncy = 512,
};
