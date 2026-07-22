#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0x1180, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xFB0, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x1048, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x1050, size 0x1, align 1
    char _pad_1051[0x1]; // offset 0x1051
    bool m_bSuppressAnimEventSounds; // offset 0x1052, size 0x1, align 1
    char _pad_1053[0x5]; // offset 0x1053
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x1058, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x1078, size 0x18, align 255
    char _pad_1090[0x8]; // offset 0x1090
    bool m_bAnimGraphUpdateEnabled; // offset 0x1098, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x1099, size 0x1, align 1 | MNotSaved
    char _pad_109A[0x2]; // offset 0x109A
    Vector m_vecForce; // offset 0x109C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x10A8, size 0x4, align 4 | MNotSaved
    char _pad_10AC[0x4]; // offset 0x10AC
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0x10B0, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0x10B8, size 0x1, align 1 | MNotSaved
    char _pad_10B9[0xF]; // offset 0x10B9
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x10C8, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x10D0, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0x1118, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x1119, size 0x1, align 1 | MNotSaved
    char _pad_111A[0xE]; // offset 0x111A
    bool m_bHasAnimatedMaterialAttributes; // offset 0x1128, size 0x1, align 1 | MNotSaved
    char _pad_1129[0x57]; // offset 0x1129
};
