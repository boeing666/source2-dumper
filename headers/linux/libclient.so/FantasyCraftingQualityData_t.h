#pragma once

struct FantasyCraftingQualityData_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults MPropertyAutoExpandSelf}
{
    FantasyGemQuality_t m_unQualityID; // offset 0x0, size 0x1, align 255 | MPropertyDescription
    char _pad_0001[0x7]; // offset 0x1
    CUtlString m_sLocName; // offset 0x8, size 0x8, align 8 | MPropertyDescription
    int32 m_nBonus; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    int32 m_nRollWeight; // offset 0x14, size 0x4, align 4 | MPropertyDescription
};
