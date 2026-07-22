#pragma once

struct ItemDraftWeight_t  // sizeof 0x10, align 0x8 (client) {MGetKV3ClassDefaults}
{
    CUtlString m_strBucket; // offset 0x0, size 0x8, align 8 | MPropertyLeafChoiceProviderFn MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel
    float32 m_flWeight; // offset 0x8, size 0x4, align 4 | MPropertyFlattenIntoParentRow MPropertyFlattenStretchFactor MPropertyFlattenIncludeLabel
    char _pad_000C[0x4]; // offset 0xC
};
