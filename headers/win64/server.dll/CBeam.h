#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x770]; // offset 0x0
    float32 m_flFrameRate; // offset 0x770, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x774, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x778, size 0x4, align 255
    float32 m_flDamage; // offset 0x77C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x7]; // offset 0x781
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x788, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x790, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0x798, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0x79C, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0x7A0, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x7C8, size 0xA, align 1
    char _pad_07D2[0x2]; // offset 0x7D2
    float32 m_fWidth; // offset 0x7D4, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x7D8, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x7DC, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x7E0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x7E4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x7E8, size 0x4, align 4
    float32 m_fSpeed; // offset 0x7EC, size 0x4, align 4
    float32 m_flFrame; // offset 0x7F0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x7F4, size 0x1, align 1
    char _pad_07F5[0x3]; // offset 0x7F5
    VectorWS m_vecEndPos; // offset 0x7F8, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0x804, size 0x4, align 4
    int32 m_nDissolveType; // offset 0x808, size 0x4, align 4
    char _pad_080C[0x4]; // offset 0x80C
};
