#pragma once

class CBaseAnimGraph : public C_BaseModelEntity /*0x0*/  // sizeof 0xCA8, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CAnimGraphControllerManager m_graphControllerManager; // offset 0x9A8, size 0xB0, align 255 | MSaveOpsForField
    CAnimGraphControllerBase* m_pMainGraphController; // offset 0xA58, size 0x8, align 8 | MSaveOpsForField
    bool m_bInitiallyPopulateInterpHistory; // offset 0xA60, size 0x1, align 1 | MNetworkEnable
    char _pad_0A61[0x1]; // offset 0xA61
    bool m_bSuppressAnimEventSounds; // offset 0xA62, size 0x1, align 1
    char _pad_0A63[0xD]; // offset 0xA63
    bool m_bAnimGraphUpdateEnabled; // offset 0xA70, size 0x1, align 1 | MNetworkEnable
    char _pad_0A71[0x3]; // offset 0xA71
    float32 m_flMaxSlopeDistance; // offset 0xA74, size 0x4, align 4
    VectorWS m_vLastSlopeCheckPos; // offset 0xA78, size 0xC, align 4 | MNotSaved
    uint32 m_nAnimGraphUpdateId; // offset 0xA84, size 0x4, align 4
    bool m_bAnimationUpdateScheduled; // offset 0xA88, size 0x1, align 1 | MNotSaved
    char _pad_0A89[0x3]; // offset 0xA89
    Vector m_vecForce; // offset 0xA8C, size 0xC, align 4 | MNetworkEnable MNotSaved
    int32 m_nForceBone; // offset 0xA98, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0A9C[0x4]; // offset 0xA9C
    CBaseAnimGraph* m_pClientsideRagdoll; // offset 0xAA0, size 0x8, align 8 | MNotSaved
    bool m_bBuiltRagdoll; // offset 0xAA8, size 0x1, align 1 | MNotSaved
    char _pad_0AA9[0xF]; // offset 0xAA9
    IPhysicsRagdollControl* m_pRagdollControl; // offset 0xAB8, size 0x8, align 8 | MPhysPtr
    PhysicsRagdollPose_t m_RagdollPose; // offset 0xAC0, size 0x48, align 8 | MNetworkEnable
    bool m_bRagdollEnabled; // offset 0xB08, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bRagdollClientSide; // offset 0xB09, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback MNotSaved
    char _pad_0B0A[0xE]; // offset 0xB0A
    bool m_bHasAnimatedMaterialAttributes; // offset 0xB18, size 0x1, align 1 | MNotSaved
    char _pad_0B19[0x107]; // offset 0xB19
    CUtlHashtable< AnimTagID, CBaseAnimGraph::ModifierHandleVector_t > m_bodyGroupModifiers; // offset 0xC20, size 0x20, align 8
    char _pad_0C40[0x68]; // offset 0xC40
};
