#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xAE0, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x878, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x910, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x918, size 0x1, align 1
    char _pad_0919[0x57]; // offset 0x919
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x970, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x990, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0x9A8, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0x9B0, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x9B1, size 0x1, align 1 | MNotSaved
    char _pad_09B2[0x2]; // offset 0x9B2
    Vector m_vecForce; // offset 0x9B4, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x9C0, size 0x4, align 4 | MNotSaved
    char _pad_09C4[0xC]; // offset 0x9C4
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x9D0, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x9D8, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0xA00, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xA01, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xA02, size 0x1, align 1
    char _pad_0A03[0xD]; // offset 0xA03
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xA10, size 0x20, align 16
    char _pad_0A30[0x60]; // offset 0xA30
    CUtlHashtable< AnimTagID, CBaseAnimGraph::ModifierHandleVector_t > m_bodyGroupModifiers; // offset 0xA90, size 0x20, align 8
    char _pad_0AB0[0x30]; // offset 0xAB0
};
