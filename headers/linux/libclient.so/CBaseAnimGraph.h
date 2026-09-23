#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0x11F0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x1020, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x10B8, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x10C0, size 0x1, align 1
    char _pad_10C1[0x1]; // offset 0x10C1
    bool m_bSuppressAnimEventSounds; // offset 0x10C2, size 0x1, align 1
    char _pad_10C3[0x5]; // offset 0x10C3
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x10C8, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x10E8, size 0x18, align 255
    char _pad_1100[0x8]; // offset 0x1100
    bool m_bAnimGraphUpdateEnabled; // offset 0x1108, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x1109, size 0x1, align 1 | MNotSaved
    char _pad_110A[0x2]; // offset 0x110A
    Vector m_vecForce; // offset 0x110C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x1118, size 0x4, align 4 | MNotSaved
    char _pad_111C[0x4]; // offset 0x111C
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0x1120, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0x1128, size 0x1, align 1 | MNotSaved
    char _pad_1129[0xF]; // offset 0x1129
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x1138, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x1140, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0x1188, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x1189, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0x118A, size 0x1, align 1
    char _pad_118B[0xD]; // offset 0x118B
    bool m_bHasAnimatedMaterialAttributes; // offset 0x1198, size 0x1, align 1 | MNotSaved
    char _pad_1199[0x57]; // offset 0x1199
};
