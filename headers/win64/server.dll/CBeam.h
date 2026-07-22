#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0x820, align 0x8 [vtable] (server) {MNetworkIncludeByUserGroup MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkIncludeByName MNetworkOverride MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    float32 m_flFrameRate; // offset 0x780, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_flHDRColorScale; // offset 0x784, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_flFireTime; // offset 0x788, size 0x4, align 255
    float32 m_flDamage; // offset 0x78C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x790, size 0x1, align 1 | MNetworkEnable
    char _pad_0791[0x7]; // offset 0x791
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x798, size 0x8, align 8 | MNetworkEnable
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x7A0, size 0x8, align 8 | MNetworkEnable
    BeamType_t m_nBeamType; // offset 0x7A8, size 0x4, align 4 | MNetworkEnable
    uint32 m_nBeamFlags; // offset 0x7AC, size 0x4, align 4 | MNetworkEnable
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0x7B0, size 0x28, align 4 | MNetworkEnable
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x7D8, size 0xA, align 1 | MNetworkEnable
    char _pad_07E2[0x2]; // offset 0x7E2
    float32 m_fWidth; // offset 0x7E4, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fEndWidth; // offset 0x7E8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fFadeLength; // offset 0x7EC, size 0x4, align 4 | MNetworkEnable
    float32 m_fHaloScale; // offset 0x7F0, size 0x4, align 4 | MNetworkEnable
    float32 m_fAmplitude; // offset 0x7F4, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fStartFrame; // offset 0x7F8, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags
    float32 m_fSpeed; // offset 0x7FC, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue
    float32 m_flFrame; // offset 0x800, size 0x4, align 4 | MNetworkEnable MNetworkBitCount MNetworkMinValue MNetworkMaxValue MNetworkEncodeFlags MNetworkPriority
    BeamClipStyle_t m_nClipStyle; // offset 0x804, size 0x4, align 4 | MNetworkEnable
    bool m_bTurnedOff; // offset 0x808, size 0x1, align 1 | MNetworkEnable
    char _pad_0809[0x3]; // offset 0x809
    VectorWS m_vecEndPos; // offset 0x80C, size 0xC, align 4 | MNetworkEnable MNetworkEncoder
    CHandle< CBaseEntity > m_hEndEntity; // offset 0x818, size 0x4, align 4
    int32 m_nDissolveType; // offset 0x81C, size 0x4, align 4
};
