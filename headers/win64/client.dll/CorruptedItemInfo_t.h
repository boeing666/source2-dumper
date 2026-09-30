#pragma once

struct CorruptedItemInfo_t  // sizeof 0x60, align 0x8 (client) {MGetKV3ClassDefaults}
{
    int32 m_nSoulCostOverride; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    AbilityUpgrade_t m_Upgrade; // offset 0x8, size 0x28, align 8 | MPropertyDescription MPropertyAutoExpandSelf
    CUtlVector< CEmbeddedSubclass< CBaseModifier > > m_vecIntrinsicModifiers; // offset 0x30, size 0x18, align 8 | MPropertyDescription
    CUtlVector< CUtlString > m_vecExcludedPenalties; // offset 0x48, size 0x18, align 8 | MPropertyDescription
};
