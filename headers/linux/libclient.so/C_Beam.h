#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xE20, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    float32 m_flFrameRate; // offset 0xD68, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xD6C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xD70, size 0x4, align 255
    float32 m_flDamage; // offset 0xD74, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x3]; // offset 0xD79
    int32 m_queryHandleHalo; // offset 0xD7C, size 0x4, align 4 | MNotSaved
    char _pad_0D80[0x20]; // offset 0xD80
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xDA0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xDA8, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xDB0, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xDB4, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xDB8, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xDE0, size 0xA, align 1
    char _pad_0DEA[0x2]; // offset 0xDEA
    float32 m_fWidth; // offset 0xDEC, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xDF0, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xDF4, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xDF8, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xDFC, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xE00, size 0x4, align 4
    float32 m_fSpeed; // offset 0xE04, size 0x4, align 4
    float32 m_flFrame; // offset 0xE08, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xE0C, size 0x1, align 1
    char _pad_0E0D[0x3]; // offset 0xE0D
    VectorWS m_vecEndPos; // offset 0xE10, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xE1C, size 0x4, align 4
};
