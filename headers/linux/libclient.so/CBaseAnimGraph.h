#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xED0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xD00, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xD98, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xDA0, size 0x1, align 1
    char _pad_0DA1[0x1]; // offset 0xDA1
    bool m_bSuppressAnimEventSounds; // offset 0xDA2, size 0x1, align 1
    char _pad_0DA3[0x5]; // offset 0xDA3
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xDA8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xDC8, size 0x18, align 255
    char _pad_0DE0[0x8]; // offset 0xDE0
    bool m_bAnimGraphUpdateEnabled; // offset 0xDE8, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xDE9, size 0x1, align 1 | MNotSaved
    char _pad_0DEA[0x2]; // offset 0xDEA
    Vector m_vecForce; // offset 0xDEC, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xDF8, size 0x4, align 4 | MNotSaved
    char _pad_0DFC[0x4]; // offset 0xDFC
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xE00, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xE08, size 0x1, align 1 | MNotSaved
    char _pad_0E09[0xF]; // offset 0xE09
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xE18, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xE20, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xE68, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xE69, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xE6A, size 0x1, align 1
    char _pad_0E6B[0xD]; // offset 0xE6B
    bool m_bHasAnimatedMaterialAttributes; // offset 0xE78, size 0x1, align 1 | MNotSaved
    char _pad_0E79[0x57]; // offset 0xE79
};
