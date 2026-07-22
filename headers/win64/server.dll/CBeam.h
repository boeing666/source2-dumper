#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    float32 m_flFrameRate; // offset 0x778, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0x77C, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0x780, size 0x4, align 255
    float32 m_flDamage; // offset 0x784, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x7]; // offset 0x789
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0x790, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0x798, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0x7A0, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0x7A4, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0x7A8, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0x7D0, size 0xA, align 1
    char _pad_07DA[0x2]; // offset 0x7DA
    float32 m_fWidth; // offset 0x7DC, size 0x4, align 4
    float32 m_fEndWidth; // offset 0x7E0, size 0x4, align 4
    float32 m_fFadeLength; // offset 0x7E4, size 0x4, align 4
    float32 m_fHaloScale; // offset 0x7E8, size 0x4, align 4
    float32 m_fAmplitude; // offset 0x7EC, size 0x4, align 4
    float32 m_fStartFrame; // offset 0x7F0, size 0x4, align 4
    float32 m_fSpeed; // offset 0x7F4, size 0x4, align 4
    float32 m_flFrame; // offset 0x7F8, size 0x4, align 4
    bool m_bTurnedOff; // offset 0x7FC, size 0x1, align 1
    char _pad_07FD[0x3]; // offset 0x7FD
    VectorWS m_vecEndPos; // offset 0x800, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0x80C, size 0x4, align 4
    int32 m_nDissolveType; // offset 0x810, size 0x4, align 4
    char _pad_0814[0x4]; // offset 0x814
};
