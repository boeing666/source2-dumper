#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xFF0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    float32 m_flFrameRate; // offset 0xF38, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xF3C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xF40, size 0x4, align 255
    float32 m_flDamage; // offset 0xF44, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xF48, size 0x1, align 1
    char _pad_0F49[0x3]; // offset 0xF49
    int32 m_queryHandleHalo; // offset 0xF4C, size 0x4, align 4 | MNotSaved
    char _pad_0F50[0x20]; // offset 0xF50
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xF70, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xF78, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xF80, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xF84, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xF88, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xFB0, size 0xA, align 1
    char _pad_0FBA[0x2]; // offset 0xFBA
    float32 m_fWidth; // offset 0xFBC, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xFC0, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xFC4, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xFC8, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xFCC, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xFD0, size 0x4, align 4
    float32 m_fSpeed; // offset 0xFD4, size 0x4, align 4
    float32 m_flFrame; // offset 0xFD8, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xFDC, size 0x1, align 1
    char _pad_0FDD[0x3]; // offset 0xFDD
    VectorWS m_vecEndPos; // offset 0xFE0, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xFEC, size 0x4, align 4
};
