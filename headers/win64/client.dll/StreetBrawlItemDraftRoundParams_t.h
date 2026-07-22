#pragma once

struct StreetBrawlItemDraftRoundParams_t  // sizeof 0x14, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    ItemDraftRoundParams_t m_DraftParams; // offset 0x0, size 0x8, align 4
    EModTier_t m_eNormalModTier; // offset 0x8, size 0x1, align 1 | MPropertyDescription
    EModTier_t m_eRareModTier; // offset 0x9, size 0x1, align 1 | MPropertyDescription
    char _pad_000A[0x2]; // offset 0xA
    float32 m_flRareWeight; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    float32 m_flEnhancedWeight; // offset 0x10, size 0x4, align 4 | MPropertyDescription
};
