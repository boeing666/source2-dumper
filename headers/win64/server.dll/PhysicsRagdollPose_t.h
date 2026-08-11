#pragma once

struct PhysicsRagdollPose_t  // sizeof 0x28, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    CNetworkUtlVectorBase< CTransform > m_Transforms; // offset 0x8, size 0x18, align 8 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    CHandle< CBaseEntity > m_hOwner; // offset 0x20, size 0x4, align 4 | MNetworkEnable
    bool m_bSetFromDebugHistory; // offset 0x24, size 0x1, align 1 | MNotSaved
    char _pad_0025[0x3]; // offset 0x25
};
