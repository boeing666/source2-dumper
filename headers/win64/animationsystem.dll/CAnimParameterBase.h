#pragma once

class CAnimParameterBase  // sizeof 0x70, align 0xFF [vtable abstract] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CGlobalSymbol m_name; // offset 0x18, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    CUtlString m_sComment; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertyAttributeEditor MPropertySortPriority
    CUtlString m_group; // offset 0x28, size 0x8, align 8 | MPropertyReadOnly MPropertySortPriority
    AnimParamID m_id; // offset 0x30, size 0x4, align 4 | MPropertyReadOnly MPropertySortPriority
    char _pad_0034[0x14]; // offset 0x34
    CUtlString m_componentName; // offset 0x48, size 0x8, align 8 | MPropertySuppressField MPropertyAutoRebuildOnChange
    char _pad_0050[0x18]; // offset 0x50
    bool m_bNetworkingRequested; // offset 0x68, size 0x1, align 1 | MPropertySuppressField
    bool m_bIsReferenced; // offset 0x69, size 0x1, align 1 | MPropertySuppressField
    char _pad_006A[0x6]; // offset 0x6A
};
