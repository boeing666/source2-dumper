#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xDD0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xBA0, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xC38, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC40, size 0x1, align 1
    char _pad_0C41[0x7]; // offset 0xC41
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xC48, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xC68, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0xC80, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0xC88, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xC89, size 0x1, align 1 | MNotSaved
    char _pad_0C8A[0x2]; // offset 0xC8A
    Vector m_vecForce; // offset 0xC8C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xC98, size 0x4, align 4 | MNotSaved
    char _pad_0C9C[0xC]; // offset 0xC9C
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xCA8, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xCB0, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0xCD8, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xCD9, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xCDA, size 0x1, align 1
    char _pad_0CDB[0x5]; // offset 0xCDB
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xCE0, size 0x20, align 16
    char _pad_0D00[0xD0]; // offset 0xD00
};
