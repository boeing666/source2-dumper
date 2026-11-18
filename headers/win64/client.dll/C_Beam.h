#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xC90, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    float32 m_flFrameRate; // offset 0xBD8, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xBDC, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xBE0, size 0x4, align 255
    float32 m_flDamage; // offset 0xBE4, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xBE8, size 0x1, align 1
    char _pad_0BE9[0x3]; // offset 0xBE9
    int32 m_queryHandleHalo; // offset 0xBEC, size 0x4, align 4 | MNotSaved
    char _pad_0BF0[0x20]; // offset 0xBF0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xC10, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xC18, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xC20, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xC24, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xC28, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xC50, size 0xA, align 1
    char _pad_0C5A[0x2]; // offset 0xC5A
    float32 m_fWidth; // offset 0xC5C, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xC60, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xC64, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xC68, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xC6C, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xC70, size 0x4, align 4
    float32 m_fSpeed; // offset 0xC74, size 0x4, align 4
    float32 m_flFrame; // offset 0xC78, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xC7C, size 0x1, align 1
    char _pad_0C7D[0x3]; // offset 0xC7D
    VectorWS m_vecEndPos; // offset 0xC80, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xC8C, size 0x4, align 4
};
