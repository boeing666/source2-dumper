#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xA68, align 0x8 [vtable] (client) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    float32 m_flFrameRate; // offset 0x9A8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flHDRColorScale; // offset 0x9AC, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flFireTime; // offset 0x9B0, size 0x4, align 255
    float32 m_flDamage; // offset 0x9B4, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x9B8, size 0x1, align 1 | MNetworkEnable
    char _pad_09B9[0x3]; // offset 0x9B9
    int32 m_queryHandleHalo; // offset 0x9BC, size 0x4, align 4 | MNotSaved
    char _pad_09C0[0x20]; // offset 0x9C0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x9E0, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x9E8, size 0x8, align 8 | MNetworkEnable
    BeamType_t m_nBeamType; // offset 0x9F0, size 0x4, align 4 | MNetworkEnable
    uint32 m_nBeamFlags; // offset 0x9F4, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0x9F8, size 0x28, align 4 | MNetworkEnable
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xA20, size 0xA, align 1 | MNetworkEnable
    char _pad_0A2A[0x2]; // offset 0xA2A
    float32 m_fWidth; // offset 0xA2C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fEndWidth; // offset 0xA30, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fFadeLength; // offset 0xA34, size 0x4, align 4 | MNetworkEnable
    float32 m_fHaloScale; // offset 0xA38, size 0x4, align 4 | MNetworkEnable
    float32 m_fAmplitude; // offset 0xA3C, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fStartFrame; // offset 0xA40, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fSpeed; // offset 0xA44, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue
    float32 m_flFrame; // offset 0xA48, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkPriority
    BeamClipStyle_t m_nClipStyle; // offset 0xA4C, size 0x4, align 4 | MNetworkEnable
    bool m_bTurnedOff; // offset 0xA50, size 0x1, align 1 | MNetworkEnable
    char _pad_0A51[0x3]; // offset 0xA51
    VectorWS m_vecEndPos; // offset 0xA54, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xA60, size 0x4, align 4
    char _pad_0A64[0x4]; // offset 0xA64
};
