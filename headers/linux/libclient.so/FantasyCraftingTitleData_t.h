#pragma once

struct FantasyCraftingTitleData_t  // sizeof 0x50, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyTitle_t m_unTitle; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sLocName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocNameIndividual; // offset 0x10, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocExplanation; // offset 0x18, size 0x8, align 8 | MPropertyDescription
    CUtlString m_sLocExplanationMouseOver; // offset 0x20, size 0x8, align 8 | MPropertyDescription
    EFantasyStatMatchMode m_eMode; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< FantasyCraftingTrackedStat_t > m_vecStats; // offset 0x30, size 0x18, align 8 | MPropertyDescription
    int32 m_nBonus; // offset 0x48, size 0x4, align 4 | MPropertyDescription
    char _pad_004C[0x4]; // offset 0x4C
};
