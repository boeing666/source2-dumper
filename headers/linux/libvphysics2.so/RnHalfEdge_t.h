#pragma once

struct RnHalfEdge_t  // sizeof 0x4, align 0x1 [trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint8 m_nNext; // offset 0x0, size 0x1, align 1
    uint8 m_nTwin; // offset 0x1, size 0x1, align 1
    uint8 m_nOrigin; // offset 0x2, size 0x1, align 1
    uint8 m_nFace; // offset 0x3, size 0x1, align 1
};
