#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xDD0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD48]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xD48, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xD60, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xD78, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0xD90, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xD94, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xD98, size 0x1, align 255 | MNotSaved
    char _pad_0D99[0x3]; // offset 0xD99
    float32 m_flBlendWeightCurrent; // offset 0xD9C, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xDA0, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xDB8, size 0x18, align 8 | MNotSaved
};
