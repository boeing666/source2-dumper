#pragma once

struct PropertyUpgrade_t  // sizeof 0x38, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    CUtlString m_strPropertyName; // offset 0x0, size 0x8, align 8
    CUtlString m_strBonus; // offset 0x8, size 0x8, align 8
    CUtlString m_strStreetBrawlBonus; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x8]; // offset 0x18
    EAbilityUpgradeType m_eUpgradeType; // offset 0x20, size 0x4, align 4
    EStatsType m_eScaleStatFilter; // offset 0x24, size 0x4, align 4 | MPropertyDescription MPropertySuppressExpr
    char _pad_0028[0x10]; // offset 0x28
};
