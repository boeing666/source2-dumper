#pragma once

struct PhysicsRagdollPose_t  // sizeof 0x48, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    C_NetworkUtlVectorBase< CTransform > m_Transforms; // offset 0x8, size 0x18, align 8
    CHandle< C_BaseEntity > m_hOwner; // offset 0x20, size 0x4, align 4
    bool m_bSetFromDebugHistory; // offset 0x24, size 0x1, align 1 | MNotSaved
    char _pad_0025[0x23]; // offset 0x25
};
