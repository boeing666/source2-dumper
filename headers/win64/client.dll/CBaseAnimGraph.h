#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xDA0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0xBB0, size 0x98, align 255
    CAnimGraphControllerPtr m_pMainGraphController; // offset 0xC48, size 0x8, align 255
    bool m_bInitiallyPopulateInterpHistory; // offset 0xC50, size 0x1, align 1
    char _pad_0C51[0x1]; // offset 0xC51
    bool m_bSuppressAnimEventSounds; // offset 0xC52, size 0x1, align 1
    char _pad_0C53[0x5]; // offset 0xC53
    CEntityOutputTemplate< float32 > m_OnLayerCycleUpdated; // offset 0xC58, size 0x20, align 8
    CEntityIOOutput m_OnExternalChoreoGraphChanged; // offset 0xC78, size 0x18, align 255
    char _pad_0C90[0x8]; // offset 0xC90
    bool m_bAnimGraphUpdateEnabled; // offset 0xC98, size 0x1, align 1
    bool m_bAnimationUpdateScheduled; // offset 0xC99, size 0x1, align 1 | MNotSaved
    char _pad_0C9A[0x2]; // offset 0xC9A
    Vector m_vecForce; // offset 0xC9C, size 0xC, align 4 | MNotSaved
    int32 m_nForceBone; // offset 0xCA8, size 0x4, align 4 | MNotSaved
    char _pad_0CAC[0x4]; // offset 0xCAC
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xCB0, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xCB8, size 0x1, align 1 | MNotSaved
    char _pad_0CB9[0xF]; // offset 0xCB9
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xCC8, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xCD0, size 0x48, align 8
    bool m_bRagdollEnabled; // offset 0xD18, size 0x1, align 1
    bool m_bRagdollClientSide; // offset 0xD19, size 0x1, align 1 | MNotSaved
    bool m_bShouldUpdateTransformations; // offset 0xD1A, size 0x1, align 1
    char _pad_0D1B[0xD]; // offset 0xD1B
    bool m_bHasAnimatedMaterialAttributes; // offset 0xD28, size 0x1, align 1 | MNotSaved
    char _pad_0D29[0x27]; // offset 0xD29
    CUtlHashtable< AnimTagID, CBaseAnimGraph::ModifierHandleVector_t > m_bodyGroupModifiers; // offset 0xD50, size 0x20, align 8
    char _pad_0D70[0x30]; // offset 0xD70
};
