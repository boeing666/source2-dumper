#pragma once

struct HeroLevel_t  // sizeof 0x48, align 0x8 (client) {MGetKV3ClassDefaults}
{
    uint32 m_unRequiredGold; // offset 0x0, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel
    bool m_bUseStandardUpgrade; // offset 0x4, size 0x1, align 1 | MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel
    char _pad_0005[0x3]; // offset 0x5
    CUtlOrderedMap< ECurrencyType, int32 > m_mapBonusCurrencies; // offset 0x8, size 0x28, align 8
    CUtlVector< BonusUpgrade_t > m_vecBonusUpgrades; // offset 0x30, size 0x18, align 8
};
