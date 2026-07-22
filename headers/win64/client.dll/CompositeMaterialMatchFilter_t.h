#pragma once

struct CompositeMaterialMatchFilter_t  // sizeof 0x20, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    CompositeMaterialMatchFilterType_t m_nCompositeMaterialMatchFilterType; // offset 0x0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0004[0x4]; // offset 0x4
    CUtlString m_strMatchFilter; // offset 0x8, size 0x8, align 8 | MPropertyFriendlyName
    CUtlString m_strMatchValue; // offset 0x10, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttrStateCallback
    bool m_bPassWhenTrue; // offset 0x18, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0019[0x7]; // offset 0x19
};
