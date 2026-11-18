#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDA8]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xDA8, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xDC0, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xDD8, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0xDF0, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xDF4, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xDF8, size 0x1, align 255 | MNotSaved
    char _pad_0DF9[0x3]; // offset 0xDF9
    float32 m_flBlendWeightCurrent; // offset 0xDFC, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xE00, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xE18, size 0x18, align 8 | MNotSaved
};
