#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xF58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xED0]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xED0, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xEE8, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xF00, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0xF18, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xF1C, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xF20, size 0x1, align 255 | MNotSaved
    char _pad_0F21[0x3]; // offset 0xF21
    float32 m_flBlendWeightCurrent; // offset 0xF24, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xF28, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xF40, size 0x18, align 8 | MNotSaved
};
