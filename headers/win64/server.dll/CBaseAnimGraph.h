#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0x970, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x778, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x810, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x818, size 0x1, align 1
    char _pad_0819[0x7]; // offset 0x819
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x820, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x840, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x858, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x860, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x861, size 0x1, align 1 | MNotSaved
    char _pad_0862[0x2]; // offset 0x862
    Vector m_vecForce; // offset 0x864, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x870, size 0x4, align 4 | MNotSaved
    char _pad_0874[0xC]; // offset 0x874
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x880, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x888, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0x8B0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x8B1, size 0x1, align 1 | MNotSaved
    char _pad_08B2[0xE]; // offset 0x8B2
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0x8C0, size 0x20, align 16
    char _pad_08E0[0x90]; // offset 0x8E0
};
