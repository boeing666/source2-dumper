#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x1208, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1180]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0x1180, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0x1198, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0x11B0, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0x11C8, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0x11CC, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0x11D0, size 0x1, align 255 | MNotSaved
    char _pad_11D1[0x3]; // offset 0x11D1
    float32 m_flBlendWeightCurrent; // offset 0x11D4, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0x11D8, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0x11F0, size 0x18, align 8 | MNotSaved
};
