#pragma once

struct NodeData_t  // sizeof 0x30, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
    Vector m_vOrigin; // offset 0x0, size 0xC, align 4
    Vector m_vMinBounds; // offset 0xC, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0x18, size 0xC, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlString m_worldNodePrefix; // offset 0x28, size 0x8, align 8
};
