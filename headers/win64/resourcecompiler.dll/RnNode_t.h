#pragma once

struct RnNode_t  // sizeof 0x20, align 0x10 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    Vector m_vMin; // offset 0x0, size 0xC, align 4
    uint32 m_nChildren; // offset 0xC, size 0x4, align 4
    Vector m_vMax; // offset 0x10, size 0xC, align 4
    uint32 m_nTriangleOffset; // offset 0x1C, size 0x4, align 4
};
