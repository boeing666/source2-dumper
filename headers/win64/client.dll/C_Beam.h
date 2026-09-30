#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xC68, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    float32 m_flFrameRate; // offset 0xBB0, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xBB4, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xBB8, size 0x4, align 255
    float32 m_flDamage; // offset 0xBBC, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x3]; // offset 0xBC1
    int32 m_queryHandleHalo; // offset 0xBC4, size 0x4, align 4 | MNotSaved
    char _pad_0BC8[0x20]; // offset 0xBC8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xBE8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xBF0, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xBF8, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xBFC, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xC00, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xC28, size 0xA, align 1
    char _pad_0C32[0x2]; // offset 0xC32
    float32 m_fWidth; // offset 0xC34, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xC38, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xC3C, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xC40, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xC44, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xC48, size 0x4, align 4
    float32 m_fSpeed; // offset 0xC4C, size 0x4, align 4
    float32 m_flFrame; // offset 0xC50, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xC54, size 0x1, align 1
    char _pad_0C55[0x3]; // offset 0xC55
    VectorWS m_vecEndPos; // offset 0xC58, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xC64, size 0x4, align 4
};
