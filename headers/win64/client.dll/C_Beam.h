#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0x1068, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    float32 m_flFrameRate; // offset 0xFB0, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xFB4, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xFB8, size 0x4, align 255
    float32 m_flDamage; // offset 0xFBC, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xFC0, size 0x1, align 1
    char _pad_0FC1[0x3]; // offset 0xFC1
    int32 m_queryHandleHalo; // offset 0xFC4, size 0x4, align 4 | MNotSaved
    char _pad_0FC8[0x20]; // offset 0xFC8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xFE8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xFF0, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xFF8, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xFFC, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0x1000, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x1028, size 0xA, align 1
    char _pad_1032[0x2]; // offset 0x1032
    float32 m_fWidth; // offset 0x1034, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x1038, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x103C, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x1040, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x1044, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x1048, size 0x4, align 4
    float32 m_fSpeed; // offset 0x104C, size 0x4, align 4
    float32 m_flFrame; // offset 0x1050, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x3]; // offset 0x1055
    VectorWS m_vecEndPos; // offset 0x1058, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0x1064, size 0x4, align 4
};
