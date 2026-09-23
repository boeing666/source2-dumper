#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xA40, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x850, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x8E8, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x8F0, size 0x1, align 1
    char _pad_08F1[0x7]; // offset 0x8F1
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x8F8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x918, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x930, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x938, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x939, size 0x1, align 1 | MNotSaved
    char _pad_093A[0x2]; // offset 0x93A
    Vector m_vecForce; // offset 0x93C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x948, size 0x4, align 4 | MNotSaved
    char _pad_094C[0xC]; // offset 0x94C
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x958, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x960, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0x988, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x989, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0x98A, size 0x1, align 1
    char _pad_098B[0x5]; // offset 0x98B
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0x990, size 0x20, align 16
    char _pad_09B0[0x90]; // offset 0x9B0
};
