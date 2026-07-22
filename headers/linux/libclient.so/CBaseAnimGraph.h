#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xC10, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xCA8, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xCB0, size 0x1, align 1
    char _pad_0CB1[0x1]; // offset 0xCB1
    bool m_bSuppressAnimEventSounds; // offset 0xCB2, size 0x1, align 1
    char _pad_0CB3[0x5]; // offset 0xCB3
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xCB8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xCD8, size 0x18, align 255
    char _pad_0CF0[0x8]; // offset 0xCF0
    bool m_bAnimGraphUpdateEnabled; // offset 0xCF8, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xCF9, size 0x1, align 1 | MNotSaved
    char _pad_0CFA[0x2]; // offset 0xCFA
    Vector m_vecForce; // offset 0xCFC, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xD08, size 0x4, align 4 | MNotSaved
    char _pad_0D0C[0x4]; // offset 0xD0C
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xD10, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xD18, size 0x1, align 1 | MNotSaved
    char _pad_0D19[0xF]; // offset 0xD19
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xD28, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xD30, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xD78, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xD79, size 0x1, align 1 | MNotSaved
    char _pad_0D7A[0xE]; // offset 0xD7A
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD88, size 0x1, align 1 | MNotSaved
    char _pad_0D89[0x57]; // offset 0xD89
};
