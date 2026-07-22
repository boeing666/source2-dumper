#pragma once

enum EShopFilters_t : uint16_t  // sizeof 0x2
{
    EShopFilterNone = 0,
    EShopFilterWeaponDamage = 1,
    EShopFilterMagicDamage = 2,
    EShopFilterDurability = 4,
    EShopFilterFireRate = 8,
    EShopFilterClipSize = 16,
    EShopFilterMelee = 32,
    EShopFilterHealing = 64,
    EShopFilterMovement = 128,
    EShopFilterDisruption = 256,
    EShopFilterMax = 512,
};
