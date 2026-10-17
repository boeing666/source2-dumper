#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xD48, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xB78, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xC10, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC18, size 0x1, align 1
    char _pad_0C19[0x1]; // offset 0xC19
    bool m_bSuppressAnimEventSounds; // offset 0xC1A, size 0x1, align 1
    char _pad_0C1B[0x5]; // offset 0xC1B
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xC20, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xC40, size 0x18, align 255
    char _pad_0C58[0x8]; // offset 0xC58
    bool m_bAnimGraphUpdateEnabled; // offset 0xC60, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xC61, size 0x1, align 1 | MNotSaved
    char _pad_0C62[0x2]; // offset 0xC62
    Vector m_vecForce; // offset 0xC64, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xC70, size 0x4, align 4 | MNotSaved
    char _pad_0C74[0x4]; // offset 0xC74
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xC78, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xC80, size 0x1, align 1 | MNotSaved
    char _pad_0C81[0xF]; // offset 0xC81
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xC90, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xC98, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xCE0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xCE1, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xCE2, size 0x1, align 1
    char _pad_0CE3[0xD]; // offset 0xCE3
    bool m_bHasAnimatedMaterialAttributes; // offset 0xCF0, size 0x1, align 1 | MNotSaved
    char _pad_0CF1[0x57]; // offset 0xCF1
};
