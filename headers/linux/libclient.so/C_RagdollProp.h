#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xE68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDE0]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xDE0, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xDF8, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xE10, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0xE28, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xE2C, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xE30, size 0x1, align 255 | MNotSaved
    char _pad_0E31[0x3]; // offset 0xE31
    float32 m_flBlendWeightCurrent; // offset 0xE34, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xE38, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xE50, size 0x18, align 8 | MNotSaved
};
