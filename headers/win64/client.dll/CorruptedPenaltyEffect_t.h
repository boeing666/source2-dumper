#pragma once

struct CorruptedPenaltyEffect_t  // sizeof 0x70, align 0x8 (client) {MGetKV3ClassDefaults}
{
    EModifierValue m_eModifierValue; // offset 0x0, size 0x4, align 4 | MPropertyDescription
    char _pad_0004[0x4]; // offset 0x4
    CUtlString[6] m_strBonusPerTier; // offset 0x8, size 0x30, align 8 | MPropertyDescription
    EStatsType m_eDisplayType; // offset 0x38, size 0x4, align 4 | MPropertyDescription
    char _pad_003C[0x4]; // offset 0x3C
    CUtlString m_strLocTokenOverride; // offset 0x40, size 0x8, align 8 | MPropertyDescription
    CUtlString m_strCSSClass; // offset 0x48, size 0x8, align 8
    bool m_bDisplay; // offset 0x50, size 0x1, align 1 | MPropertyDescription
    char _pad_0051[0x1F]; // offset 0x51
};
