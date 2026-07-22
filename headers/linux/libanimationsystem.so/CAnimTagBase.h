#pragma once

class CAnimTagBase  // sizeof 0x50, align 0x8 [vtable] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_name; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlString m_sComment; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CGlobalSymbol m_group; // offset 0x28, size 0x8, align 8 | MPropertySuppressField
    AnimTagID m_tagID; // offset 0x30, size 0x4, align 4 | MPropertySuppressField
    char _pad_0034[0x14]; // offset 0x34
    bool m_bIsReferenced; // offset 0x48, size 0x1, align 1 | MPropertySuppressField
    char _pad_0049[0x7]; // offset 0x49
};
