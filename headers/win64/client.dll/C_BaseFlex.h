#pragma once

class C_BaseFlex : public CBaseAnimGraph /*0x0*/  // sizeof 0xE60, align 0x8 [vtable] (client) {MNetworkVarNames}
{
public:
    char _pad_0000[0xCB0]; // offset 0x0
    C_NetworkUtlVectorBase< float32 > m_flexWeight; // offset 0xCB0, size 0x18, align 8 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    VectorWS m_vLookTargetPosition; // offset 0xCC8, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_0CD4[0xAC]; // offset 0xCD4
    int32 m_nLastFlexUpdateFrameCount; // offset 0xD80, size 0x4, align 4 | MNotSaved
    Vector m_CachedViewTarget; // offset 0xD84, size 0xC, align 4 | MNotSaved
    AttachmentHandle_t m_iMouthAttachment; // offset 0xD90, size 0x1, align 255 | MNotSaved
    AttachmentHandle_t m_iEyeAttachment; // offset 0xD91, size 0x1, align 255 | MNotSaved
    bool m_bResetFlexWeightsOnModelChange; // offset 0xD92, size 0x1, align 1 | MNotSaved
    char _pad_0D93[0x1D]; // offset 0xD93
    int32 m_nEyeOcclusionRendererBone; // offset 0xDB0, size 0x4, align 4 | MNotSaved
    matrix3x4_t m_mEyeOcclusionRendererCameraToBoneTransform; // offset 0xDB4, size 0x30, align 4 | MNotSaved
    Vector m_vEyeOcclusionRendererHalfExtent; // offset 0xDE4, size 0xC, align 4 | MNotSaved
    char _pad_0DF0[0x10]; // offset 0xDF0
    C_BaseFlex::Emphasized_Phoneme[3] m_PhonemeClasses; // offset 0xE00, size 0x60, align 8 | MNotSaved
};
