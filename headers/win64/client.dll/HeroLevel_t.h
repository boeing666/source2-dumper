#pragma once

struct HeroLevel_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults}
{
    uint32 m_unRequiredGold; // offset 0x0, size 0x4, align 4
    char _pad_0004[0x4]; // offset 0x4
    CUtlOrderedMap< ECurrencyType, int32 > m_mapBonusCurrencies; // offset 0x8, size 0x28, align 8
    bool m_bUseStandardUpgrade; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x7]; // offset 0x31
    CUtlVector< BonusUpgrade_t > m_vecBonusUpgrades; // offset 0x38, size 0x18, align 8
};
