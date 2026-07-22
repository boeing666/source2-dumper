#pragma once

class C_RagdollProp : public CBaseAnimGraph /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    C_NetworkUtlVectorBase< bool > m_ragEnabled; // offset 0xCB0, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback MNotSaved
    C_NetworkUtlVectorBase< Vector > m_ragPos; // offset 0xCC8, size 0x18, align 8 | MNetworkEnable MNetworkEncoder MNotSaved
    C_NetworkUtlVectorBase< QAngle > m_ragAngles; // offset 0xCE0, size 0x18, align 8 | MNetworkEnable MNetworkEncoder MNetworkBitCount MNotSaved
    float32 m_flBlendWeight; // offset 0xCF8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNotSaved
    CHandle< C_BaseEntity > m_hRagdollSource; // offset 0xCFC, size 0x4, align 4 | MNetworkEnable MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xD00, size 0x1, align 255 | MNotSaved
    char _pad_0D01[0x3]; // offset 0xD01
    float32 m_flBlendWeightCurrent; // offset 0xD04, size 0x4, align 4 | MNotSaved
    CUtlVector< int32 > m_parentPhysicsBoneIndices; // offset 0xD08, size 0x18, align 8 | MNotSaved
    CUtlVector< int32 > m_worldSpaceBoneComputationOrder; // offset 0xD20, size 0x18, align 8 | MNotSaved
};
