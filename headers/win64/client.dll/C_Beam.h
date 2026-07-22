#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xB40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    float32 m_flFrameRate; // offset 0xA88, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xA8C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xA90, size 0x4, align 255
    float32 m_flDamage; // offset 0xA94, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xA98, size 0x1, align 1
    char _pad_0A99[0x3]; // offset 0xA99
    int32 m_queryHandleHalo; // offset 0xA9C, size 0x4, align 4 | MNotSaved
    char _pad_0AA0[0x20]; // offset 0xAA0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xAC0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xAC8, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xAD0, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xAD4, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xAD8, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xB00, size 0xA, align 1
    char _pad_0B0A[0x2]; // offset 0xB0A
    float32 m_fWidth; // offset 0xB0C, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xB10, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xB14, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xB18, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xB1C, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xB20, size 0x4, align 4
    float32 m_fSpeed; // offset 0xB24, size 0x4, align 4
    float32 m_flFrame; // offset 0xB28, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xB2C, size 0x1, align 1
    char _pad_0B2D[0x3]; // offset 0xB2D
    VectorWS m_vecEndPos; // offset 0xB30, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xB3C, size 0x4, align 4
};
