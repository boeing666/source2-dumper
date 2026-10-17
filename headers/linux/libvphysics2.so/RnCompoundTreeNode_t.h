#pragma once

struct RnCompoundTreeNode_t  // sizeof 0x1C, align 0x4 [trivial_ctor trivial_dtor] (physicslib) {MGetKV3ClassDefaults}
{
    Vector m_vMin; // offset 0x0, size 0xC, align 4
    uint8_t m_nType : 3; // offset 0x0
    uint32_t m_nSubtreeEndOrCompoundId : 29; // offset 0x0
    Vector m_vMax; // offset 0xC, size 0xC, align 4
    char _pad_0018[0x4]; // offset 0x18
};
