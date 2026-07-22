#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0xAF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA54]; // offset 0x0
    float32 m_flFrameRate; // offset 0xA54, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xA58, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xA5C, size 0x4, align 255
    float32 m_flDamage; // offset 0xA60, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xA64, size 0x1, align 1
    char _pad_0A65[0x3]; // offset 0xA65
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xA68, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xA70, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xA78, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xA7C, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0xA80, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xAA8, size 0xA, align 1
    char _pad_0AB2[0x2]; // offset 0xAB2
    float32 m_fWidth; // offset 0xAB4, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xAB8, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xABC, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xAC0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xAC4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xAC8, size 0x4, align 4
    float32 m_fSpeed; // offset 0xACC, size 0x4, align 4
    float32 m_flFrame; // offset 0xAD0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xAD4, size 0x1, align 1
    char _pad_0AD5[0x3]; // offset 0xAD5
    VectorWS m_vecEndPos; // offset 0xAD8, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0xAE4, size 0x4, align 4
    int32 m_nDissolveType; // offset 0xAE8, size 0x4, align 4
    char _pad_0AEC[0x4]; // offset 0xAEC
};
