#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xF38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xD68, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xE00, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xE08, size 0x1, align 1
    char _pad_0E09[0x1]; // offset 0xE09
    bool m_bSuppressAnimEventSounds; // offset 0xE0A, size 0x1, align 1
    char _pad_0E0B[0x5]; // offset 0xE0B
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xE10, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xE30, size 0x18, align 255
    char _pad_0E48[0x8]; // offset 0xE48
    bool m_bAnimGraphUpdateEnabled; // offset 0xE50, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xE51, size 0x1, align 1 | MNotSaved
    char _pad_0E52[0x2]; // offset 0xE52
    Vector m_vecForce; // offset 0xE54, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xE60, size 0x4, align 4 | MNotSaved
    char _pad_0E64[0x4]; // offset 0xE64
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xE68, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xE70, size 0x1, align 1 | MNotSaved
    char _pad_0E71[0xF]; // offset 0xE71
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xE80, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xE88, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xED0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xED1, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xED2, size 0x1, align 1
    char _pad_0ED3[0xD]; // offset 0xED3
    bool m_bHasAnimatedMaterialAttributes; // offset 0xEE0, size 0x1, align 1 | MNotSaved
    char _pad_0EE1[0x57]; // offset 0xEE1
};
