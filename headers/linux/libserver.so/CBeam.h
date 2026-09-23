#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB2C]; // offset 0x0
    float32 m_flFrameRate; // offset 0xB2C, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xB30, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xB34, size 0x4, align 255
    float32 m_flDamage; // offset 0xB38, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xB3C, size 0x1, align 1
    char _pad_0B3D[0x3]; // offset 0xB3D
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xB40, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xB48, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xB50, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xB54, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0xB58, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xB80, size 0xA, align 1
    char _pad_0B8A[0x2]; // offset 0xB8A
    float32 m_fWidth; // offset 0xB8C, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xB90, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xB94, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xB98, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xB9C, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xBA0, size 0x4, align 4
    float32 m_fSpeed; // offset 0xBA4, size 0x4, align 4
    float32 m_flFrame; // offset 0xBA8, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xBAC, size 0x1, align 1
    char _pad_0BAD[0x3]; // offset 0xBAD
    VectorWS m_vecEndPos; // offset 0xBB0, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0xBBC, size 0x4, align 4
    int32 m_nDissolveType; // offset 0xBC0, size 0x4, align 4
    char _pad_0BC4[0x4]; // offset 0xBC4
};
