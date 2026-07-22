#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xCE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC58]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xC58, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xC70, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xC88, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0xCA0, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xCA4, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xCA8, size 0x1, align 255 | MNotSaved
    char _pad_0CA9[0x3]; // offset 0xCA9
    float32 m_flBlendWeightCurrent; // offset 0xCAC, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xCB0, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xCC8, size 0x18, align 8 | MNotSaved
};
