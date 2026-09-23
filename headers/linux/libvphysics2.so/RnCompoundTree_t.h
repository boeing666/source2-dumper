#pragma once

struct RnCompoundTree_t  // sizeof 0x18, align 0x8 (physicslib) {MGetKV3ClassDefaults}
{
    CUtlLeanVector< RnCompoundTreeNode_t > m_Nodes; // offset 0x0, size 0x10, align 8
    uint32 m_nStartIterationIndex; // offset 0x10, size 0x4, align 4
    char _pad_0014[0x4]; // offset 0x14
};
