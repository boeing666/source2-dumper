#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xA50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x858]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x858, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x8F0, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x8F8, size 0x1, align 1
    char _pad_08F9[0x7]; // offset 0x8F9
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x900, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x920, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x938, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x940, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x941, size 0x1, align 1 | MNotSaved
    char _pad_0942[0x2]; // offset 0x942
    Vector m_vecForce; // offset 0x944, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x950, size 0x4, align 4 | MNotSaved
    char _pad_0954[0xC]; // offset 0x954
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x960, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x968, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0x990, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x991, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0x992, size 0x1, align 1
    char _pad_0993[0xD]; // offset 0x993
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0x9A0, size 0x20, align 16
    char _pad_09C0[0x90]; // offset 0x9C0
};
