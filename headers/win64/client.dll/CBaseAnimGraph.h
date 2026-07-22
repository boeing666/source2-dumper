#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xC58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xA88, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xB20, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xB28, size 0x1, align 1
    char _pad_0B29[0x1]; // offset 0xB29
    bool m_bSuppressAnimEventSounds; // offset 0xB2A, size 0x1, align 1
    char _pad_0B2B[0x5]; // offset 0xB2B
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xB30, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xB50, size 0x18, align 255
    char _pad_0B68[0x8]; // offset 0xB68
    bool m_bAnimGraphUpdateEnabled; // offset 0xB70, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xB71, size 0x1, align 1 | MNotSaved
    char _pad_0B72[0x2]; // offset 0xB72
    Vector m_vecForce; // offset 0xB74, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xB80, size 0x4, align 4 | MNotSaved
    char _pad_0B84[0x4]; // offset 0xB84
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xB88, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xB90, size 0x1, align 1 | MNotSaved
    char _pad_0B91[0xF]; // offset 0xB91
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xBA0, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xBA8, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xBF0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xBF1, size 0x1, align 1 | MNotSaved
    char _pad_0BF2[0xE]; // offset 0xBF2
    bool m_bHasAnimatedMaterialAttributes; // offset 0xC00, size 0x1, align 1 | MNotSaved
    char _pad_0C01[0x57]; // offset 0xC01
};
