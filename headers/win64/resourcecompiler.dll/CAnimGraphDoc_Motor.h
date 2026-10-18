#pragma once

class CAnimGraphDoc_Motor  // sizeof 0x30, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_name; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    bool m_bDefault; // offset 0x28, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0029[0x7]; // offset 0x29
};
