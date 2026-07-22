#pragma once

struct ShopGroups_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MPropertyArrayElementNameKey}
{
    EShopGroups m_eShopGroup; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlVector< CSubclassName< 4 > > m_vecUpgrades; // offset 0x8, size 0x18, align 8
};
