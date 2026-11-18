#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x8B8, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x950, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x958, size 0x1, align 1
    char _pad_0959[0x7]; // offset 0x959
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x960, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x980, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x998, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x9A0, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x9A1, size 0x1, align 1 | MNotSaved
    char _pad_09A2[0x2]; // offset 0x9A2
    Vector m_vecForce; // offset 0x9A4, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x9B0, size 0x4, align 4 | MNotSaved
    char _pad_09B4[0xC]; // offset 0x9B4
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x9C0, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x9C8, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0x9F0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x9F1, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0x9F2, size 0x1, align 1
    char _pad_09F3[0xD]; // offset 0x9F3
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xA00, size 0x20, align 16
    char _pad_0A20[0xD0]; // offset 0xA20
};
