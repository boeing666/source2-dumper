#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0x960, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x770, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x808, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x810, size 0x1, align 1
    char _pad_0811[0x7]; // offset 0x811
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x818, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x838, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x850, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x858, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x859, size 0x1, align 1 | MNotSaved
    char _pad_085A[0x2]; // offset 0x85A
    Vector m_vecForce; // offset 0x85C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x868, size 0x4, align 4 | MNotSaved
    char _pad_086C[0xC]; // offset 0x86C
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x878, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x880, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0x8A8, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x8A9, size 0x1, align 1 | MNotSaved
    char _pad_08AA[0x6]; // offset 0x8AA
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0x8B0, size 0x20, align 16
    char _pad_08D0[0x90]; // offset 0x8D0
};
