#pragma once

class CAnimGraphDoc_Component  // sizeof 0x38, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x18]; // offset 0x0
    CUtlString m_group; // offset 0x18, size 0x8, align 8 | MPropertySuppressField
    char _pad_0020[0x8]; // offset 0x20
    AnimComponentID m_id; // offset 0x28, size 0x4, align 4 | MPropertySuppressField
    bool m_bStartEnabled; // offset 0x2C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_002D[0x3]; // offset 0x2D
    int32 m_nPriority; // offset 0x30, size 0x4, align 4 | MPropertyFriendlyName
    AnimNodeNetworkMode m_networkMode; // offset 0x34, size 0x4, align 4 | MPropertyFriendlyName
};
