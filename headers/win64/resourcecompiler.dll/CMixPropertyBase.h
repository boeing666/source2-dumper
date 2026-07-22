#pragma once

class CMixPropertyBase  // sizeof 0x20, align 0x8 [vtable] (sounddoc_lib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_name; // offset 0x8, size 0x8, align 8 | MPropertyDescription MPropertyFriendlyName MPropertySortPriority
    CUtlString m_Comment; // offset 0x10, size 0x8, align 8 | MPropertyDescription MPropertySortPriority
    bool m_bActive; // offset 0x18, size 0x1, align 1 | MPropertySortPriority MPropertyHideField
    bool m_bSolo; // offset 0x19, size 0x1, align 1 | MPropertySortPriority MPropertyHideField
    bool m_bEditProperties; // offset 0x1A, size 0x1, align 1 | MPropertySortPriority MPropertyHideField
    char _pad_001B[0x5]; // offset 0x1B
};
