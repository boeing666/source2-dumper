#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0x1268, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x1098, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0x1130, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0x1138, size 0x1, align 1
    char _pad_1139[0x1]; // offset 0x1139
    bool m_bSuppressAnimEventSounds; // offset 0x113A, size 0x1, align 1
    char _pad_113B[0x5]; // offset 0x113B
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0x1140, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x1160, size 0x18, align 255
    char _pad_1178[0x8]; // offset 0x1178
    bool m_bAnimGraphUpdateEnabled; // offset 0x1180, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x1181, size 0x1, align 1 | MNotSaved
    char _pad_1182[0x2]; // offset 0x1182
    Vector m_vecForce; // offset 0x1184, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x1190, size 0x4, align 4 | MNotSaved
    char _pad_1194[0x4]; // offset 0x1194
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0x1198, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0x11A0, size 0x1, align 1 | MNotSaved
    char _pad_11A1[0xF]; // offset 0x11A1
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x11B0, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x11B8, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0x1200, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x1201, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0x1202, size 0x1, align 1
    char _pad_1203[0xD]; // offset 0x1203
    bool m_bHasAnimatedMaterialAttributes; // offset 0x1210, size 0x1, align 1 | MNotSaved
    char _pad_1211[0x57]; // offset 0x1211
};
