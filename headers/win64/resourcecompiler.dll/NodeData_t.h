#pragma once

struct NodeData_t  // sizeof 0x50, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    int32 m_nParent; // offset 0x0, size 0x4, align 4
    Vector m_vOrigin; // offset 0x4, size 0xC, align 4
    Vector m_vMinBounds; // offset 0x10, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0x1C, size 0xC, align 4
    float32 m_flMinimumDistance; // offset 0x28, size 0x4, align 4
    char _pad_002C[0x4]; // offset 0x2C
    CUtlVector< int32 > m_ChildNodeIndices; // offset 0x30, size 0x18, align 8
    CUtlString m_worldNodePrefix; // offset 0x48, size 0x8, align 8
};
