#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xC40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xA50, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xAE8, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xAF0, size 0x1, align 1
    char _pad_0AF1[0x7]; // offset 0xAF1
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xAF8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xB18, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0xB30, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0xB38, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB39, size 0x1, align 1 | MNotSaved
    char _pad_0B3A[0x2]; // offset 0xB3A
    Vector m_vecForce; // offset 0xB3C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xB48, size 0x4, align 4 | MNotSaved
    char _pad_0B4C[0xC]; // offset 0xB4C
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xB58, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xB60, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0xB88, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xB89, size 0x1, align 1 | MNotSaved
    char _pad_0B8A[0x6]; // offset 0xB8A
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xB90, size 0x20, align 16
    char _pad_0BB0[0x90]; // offset 0xBB0
};
