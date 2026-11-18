#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xBD8, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xC70, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC78, size 0x1, align 1
    char _pad_0C79[0x1]; // offset 0xC79
    bool m_bSuppressAnimEventSounds; // offset 0xC7A, size 0x1, align 1
    char _pad_0C7B[0x5]; // offset 0xC7B
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xC80, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xCA0, size 0x18, align 255
    char _pad_0CB8[0x8]; // offset 0xCB8
    bool m_bAnimGraphUpdateEnabled; // offset 0xCC0, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xCC1, size 0x1, align 1 | MNotSaved
    char _pad_0CC2[0x2]; // offset 0xCC2
    Vector m_vecForce; // offset 0xCC4, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xCD0, size 0x4, align 4 | MNotSaved
    char _pad_0CD4[0x4]; // offset 0xCD4
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xCD8, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xCE0, size 0x1, align 1 | MNotSaved
    char _pad_0CE1[0xF]; // offset 0xCE1
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xCF0, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xCF8, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xD40, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xD41, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xD42, size 0x1, align 1
    char _pad_0D43[0xD]; // offset 0xD43
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD50, size 0x1, align 1 | MNotSaved
    char _pad_0D51[0x57]; // offset 0xD51
};
