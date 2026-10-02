#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xDF8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xBB0, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xC48, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x57]; // offset 0xC51
    bool m_bSuppressAnimEventSounds; // offset 0xCA8, size 0x1, align 1
    char _pad_0CA9[0x7]; // offset 0xCA9
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xCB0, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xCD0, size 0x18, align 255
    char _pad_0CE8[0x8]; // offset 0xCE8
    bool m_bAnimGraphUpdateEnabled; // offset 0xCF0, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xCF1, size 0x1, align 1 | MNotSaved
    char _pad_0CF2[0x2]; // offset 0xCF2
    Vector m_vecForce; // offset 0xCF4, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xD00, size 0x4, align 4 | MNotSaved
    char _pad_0D04[0x4]; // offset 0xD04
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xD08, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xD10, size 0x1, align 1 | MNotSaved
    char _pad_0D11[0xF]; // offset 0xD11
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xD20, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xD28, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xD70, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xD71, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xD72, size 0x1, align 1
    char _pad_0D73[0xD]; // offset 0xD73
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD80, size 0x1, align 1 | MNotSaved
    char _pad_0D81[0x27]; // offset 0xD81
    CUtlHashtable< AnimTagID, CBaseAnimGraph::ModifierHandleVector_t > m_bodyGroupModifiers; // offset 0xDA8, size 0x20, align 8
    char _pad_0DC8[0x30]; // offset 0xDC8
};
