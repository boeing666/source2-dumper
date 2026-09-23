#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0x1278, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0x11F0, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0x1208, size 0x18, align 8 | MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0x1220, size 0x18, align 8 | MNotSaved
    float32 m_flBlendWeight; // offset 0x1238, size 0x4, align 4 | MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0x123C, size 0x4, align 4 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0x1240, size 0x1, align 255 | MNotSaved
    char _pad_1241[0x3]; // offset 0x1241
    float32 m_flBlendWeightCurrent; // offset 0x1244, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0x1248, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0x1260, size 0x18, align 8 | MNotSaved
};
