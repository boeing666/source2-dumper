#pragma once

struct FeModelSelfCollisionLayer_t  // sizeof 0x38, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8
    CUtlVector< uint16 > m_Nodes; // offset 0x8, size 0x18, align 8
    float32 m_flParentReaction; // offset 0x20, size 0x4, align 4
    uint32 m_nFlags; // offset 0x24, size 0x4, align 4
    uint32[4] m_nEndIdx; // offset 0x28, size 0x10, align 4
};
