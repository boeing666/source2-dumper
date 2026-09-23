#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0x1150, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    float32 m_flFrameRate; // offset 0x1098, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x109C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x10A0, size 0x4, align 255
    float32 m_flDamage; // offset 0x10A4, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x10A8, size 0x1, align 1
    char _pad_10A9[0x3]; // offset 0x10A9
    int32 m_queryHandleHalo; // offset 0x10AC, size 0x4, align 4 | MNotSaved
    char _pad_10B0[0x20]; // offset 0x10B0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x10D0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x10D8, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0x10E0, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0x10E4, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0x10E8, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x1110, size 0xA, align 1
    char _pad_111A[0x2]; // offset 0x111A
    float32 m_fWidth; // offset 0x111C, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x1120, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x1124, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x1128, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x112C, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x1130, size 0x4, align 4
    float32 m_fSpeed; // offset 0x1134, size 0x4, align 4
    float32 m_flFrame; // offset 0x1138, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x113C, size 0x1, align 1
    char _pad_113D[0x3]; // offset 0x113D
    VectorWS m_vecEndPos; // offset 0x1140, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0x114C, size 0x4, align 4
};
