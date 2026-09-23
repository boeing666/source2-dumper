#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0x8F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x850]; // offset 0x0
    float32 m_flFrameRate; // offset 0x850, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x854, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x858, size 0x4, align 255
    float32 m_flDamage; // offset 0x85C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x7]; // offset 0x861
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x868, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x870, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0x878, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0x87C, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0x880, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x8A8, size 0xA, align 1
    char _pad_08B2[0x2]; // offset 0x8B2
    float32 m_fWidth; // offset 0x8B4, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x8B8, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x8BC, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x8C0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x8C4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x8C8, size 0x4, align 4
    float32 m_fSpeed; // offset 0x8CC, size 0x4, align 4
    float32 m_flFrame; // offset 0x8D0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x8D4, size 0x1, align 1
    char _pad_08D5[0x3]; // offset 0x8D5
    VectorWS m_vecEndPos; // offset 0x8D8, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0x8E4, size 0x4, align 4
    int32 m_nDissolveType; // offset 0x8E8, size 0x4, align 4
    char _pad_08EC[0x4]; // offset 0x8EC
};
