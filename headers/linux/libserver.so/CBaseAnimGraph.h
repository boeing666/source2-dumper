#pragma once

class CBaseAnimGraph : public CBaseModelEntity /*0x0*/  // sizeof 0xC50, align 0x10 [vtable] (server)
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xA58, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xAF0, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xAF8, size 0x1, align 1
    char _pad_0AF9[0x7]; // offset 0xAF9
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xB00, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xB20, size 0x18, align 255
    IChoreoServices* m_pChoreoServices; // offset 0xB38, size 0x8, align 8 | MKV3TransferSaveOpsForField
    bool m_bAnimGraphUpdateEnabled; // offset 0xB40, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB41, size 0x1, align 1 | MNotSaved
    char _pad_0B42[0x2]; // offset 0xB42
    Vector m_vecForce; // offset 0xB44, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xB50, size 0x4, align 4 | MNotSaved
    char _pad_0B54[0xC]; // offset 0xB54
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xB60, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xB68, size 0x28, align 8
    bool m_bRagdollEnabled; // offset 0xB90, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xB91, size 0x1, align 1 | MNotSaved
    char _pad_0B92[0xE]; // offset 0xB92
    CTransform m_xParentedRagdollRootInEntitySpace; // offset 0xBA0, size 0x20, align 16
    char _pad_0BC0[0x90]; // offset 0xBC0
};
