#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0x10D8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    float32 m_flFrameRate; // offset 0x1020, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x1024, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x1028, size 0x4, align 255
    float32 m_flDamage; // offset 0x102C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x1030, size 0x1, align 1
    char _pad_1031[0x3]; // offset 0x1031
    int32 m_queryHandleHalo; // offset 0x1034, size 0x4, align 4 | MNotSaved
    char _pad_1038[0x20]; // offset 0x1038
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x1058, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x1060, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0x1068, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0x106C, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0x1070, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x1098, size 0xA, align 1
    char _pad_10A2[0x2]; // offset 0x10A2
    float32 m_fWidth; // offset 0x10A4, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x10A8, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x10AC, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x10B0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x10B4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x10B8, size 0x4, align 4
    float32 m_fSpeed; // offset 0x10BC, size 0x4, align 4
    float32 m_flFrame; // offset 0x10C0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x10C4, size 0x1, align 1
    char _pad_10C5[0x3]; // offset 0x10C5
    VectorWS m_vecEndPos; // offset 0x10C8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0x10D4, size 0x4, align 4
};
