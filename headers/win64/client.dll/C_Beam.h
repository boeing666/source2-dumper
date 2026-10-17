#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xB78]; // offset 0x0
    float32 m_flFrameRate; // offset 0xB78, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xB7C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xB80, size 0x4, align 255
    float32 m_flDamage; // offset 0xB84, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xB88, size 0x1, align 1
    char _pad_0B89[0x3]; // offset 0xB89
    int32 m_queryHandleHalo; // offset 0xB8C, size 0x4, align 4 | MNotSaved
    char _pad_0B90[0x20]; // offset 0xB90
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xBB0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xBB8, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xBC0, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xBC4, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xBC8, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xBF0, size 0xA, align 1
    char _pad_0BFA[0x2]; // offset 0xBFA
    float32 m_fWidth; // offset 0xBFC, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xC00, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xC04, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xC08, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xC0C, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xC10, size 0x4, align 4
    float32 m_fSpeed; // offset 0xC14, size 0x4, align 4
    float32 m_flFrame; // offset 0xC18, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xC1C, size 0x1, align 1
    char _pad_0C1D[0x3]; // offset 0xC1D
    VectorWS m_vecEndPos; // offset 0xC20, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xC2C, size 0x4, align 4
};
