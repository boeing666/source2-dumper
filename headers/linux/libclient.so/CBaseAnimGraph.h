#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0x1108, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xF38, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xFD0, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xFD8, size 0x1, align 1
    char _pad_0FD9[0x1]; // offset 0xFD9
    bool m_bSuppressAnimEventSounds; // offset 0xFDA, size 0x1, align 1
    char _pad_0FDB[0x5]; // offset 0xFDB
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xFE0, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0x1000, size 0x18, align 255
    char _pad_1018[0x8]; // offset 0x1018
    bool m_bAnimGraphUpdateEnabled; // offset 0x1020, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0x1021, size 0x1, align 1 | MNotSaved
    char _pad_1022[0x2]; // offset 0x1022
    Vector m_vecForce; // offset 0x1024, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0x1030, size 0x4, align 4 | MNotSaved
    char _pad_1034[0x4]; // offset 0x1034
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0x1038, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0x1040, size 0x1, align 1 | MNotSaved
    char _pad_1041[0xF]; // offset 0x1041
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0x1050, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0x1058, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0x10A0, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0x10A1, size 0x1, align 1 | MNotSaved
    char _pad_10A2[0xE]; // offset 0x10A2
    bool m_bHasAnimatedMaterialAttributes; // offset 0x10B0, size 0x1, align 1 | MNotSaved
    char _pad_10B1[0x57]; // offset 0x10B1
};
