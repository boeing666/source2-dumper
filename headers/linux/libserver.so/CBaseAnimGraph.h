#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xD20, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xB30, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xBC8, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xBD0, size 0x1, align 1
    char _pad_0BD1[0x7]; // offset 0xBD1
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xBD8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xBF8, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0xC10, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0xC18, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xC19, size 0x1, align 1 | MNotSaved
    char _pad_0C1A[0x2]; // offset 0xC1A
    Vector m_vecForce; // offset 0xC1C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xC28, size 0x4, align 4 | MNotSaved
    char _pad_0C2C[0xC]; // offset 0xC2C
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xC38, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xC40, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0xC68, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xC69, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xC6A, size 0x1, align 1
    char _pad_0C6B[0x5]; // offset 0xC6B
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xC70, size 0x20, align 16
    char _pad_0C90[0x90]; // offset 0xC90
};
