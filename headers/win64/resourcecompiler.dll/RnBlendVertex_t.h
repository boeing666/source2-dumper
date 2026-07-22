#pragma once

struct RnBlendVertex_t  // sizeof 0x10, align 0x10 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    uint16 m_nWeight0; // offset 0x0, size 0x2, align 2
    uint16 m_nIndex0; // offset 0x2, size 0x2, align 2
    uint16 m_nWeight1; // offset 0x4, size 0x2, align 2
    uint16 m_nIndex1; // offset 0x6, size 0x2, align 2
    uint16 m_nWeight2; // offset 0x8, size 0x2, align 2
    uint16 m_nIndex2; // offset 0xA, size 0x2, align 2
    uint16 m_nFlags; // offset 0xC, size 0x2, align 2
    uint16 m_nTargetIndex; // offset 0xE, size 0x2, align 2
};
