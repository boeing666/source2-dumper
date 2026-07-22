#pragma once

class CAnimGraphDoc_Node  // sizeof 0x40, align 0xFF [vtable abstract] (animgraphdoclib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x20]; // offset 0x0
    CUtlString m_sName; // offset 0x20, size 0x8, align 8 | MPropertyFriendlyName MPropertySortPriority
    Vector2D m_vecPosition; // offset 0x28, size 0x8, align 4 | MPropertyGroupName MPropertySortPriority
    AnimNodeID m_nNodeID; // offset 0x30, size 0x4, align 4 | MPropertyGroupName MPropertySortPriority
    bool m_bDebugThisNode; // offset 0x34, size 0x1, align 1 | MPropertyGroupName MPropertyFriendlyName MPropertySortPriority
    char _pad_0035[0x3]; // offset 0x35
    AnimNodeNetworkMode m_networkMode; // offset 0x38, size 0x4, align 4 | MPropertyFriendlyName MPropertySortPriority
    char _pad_003C[0x4]; // offset 0x3C
};
