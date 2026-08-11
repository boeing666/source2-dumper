#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xA90, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x780, size 0xB0, align 255 | MSaveOpsForField
    CAnimGraphControllerBase* m_pMainGraphController; // offset 0x830, size 0x8, align 8 | MSaveOpsForField
    bool m_bInitiallyPopulateInterpHistory; // offset 0x838, size 0x1, align 1 | MNetworkEnable
    char _pad_0839[0x7]; // offset 0x839
    IChoreoServices* m_pChoreoServices; // offset 0x840, size 0x8, align 8 | MSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x848, size 0x1, align 1 | MNetworkEnable
    char _pad_0849[0x3]; // offset 0x849
    float32 m_flMaxSlopeDistance; // offset 0x84C, size 0x4, align 4
    VectorWS m_vLastSlopeCheckPos; // offset 0x850, size 0xC, align 4 | MNotSaved
    uint32 m_nAnimGraphUpdateId; // offset 0x85C, size 0x4, align 4
    bool m_bAnimationUpdateScheduled; // offset 0x860, size 0x1, align 1 | MNotSaved
    char _pad_0861[0x3]; // offset 0x861
    Vector m_vecForce; // offset 0x864, size 0xC, align 4 | MNetworkEnable MNotSaved
    int32 m_nForceBone; // offset 0x870, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0874[0xC]; // offset 0x874
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x880, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x888, size 0x28, align 8 | MNetworkEnable
    bool m_bRagdollEnabled; // offset 0x8B0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bRagdollClientSide; // offset 0x8B1, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_08B2[0xE]; // offset 0x8B2
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0x8C0, size 0x20, align 16
    char _pad_08E0[0x140]; // offset 0x8E0
    CUtlHashtable< AnimTagID, CBaseAnimGraph::ModifierHandleVector_t > m_bodyGroupModifiers; // offset 0xA20, size 0x20, align 8
    char _pad_0A40[0x50]; // offset 0xA40
};
