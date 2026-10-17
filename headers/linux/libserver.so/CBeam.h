#pragma once

class CBeam : public CBaseModelEntity /*0x0*/  // sizeof 0xBD0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB34]; // offset 0x0
    float32 m_flFrameRate; // offset 0xB34, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xB38, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xB3C, size 0x4, align 255
    float32 m_flDamage; // offset 0xB40, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xB44, size 0x1, align 1
    char _pad_0B45[0x3]; // offset 0xB45
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xB48, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xB50, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xB58, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xB5C, size 0x4, align 4
    CHandle< CBaseEntity >[10] m_hAttachEntity; // offset 0xB60, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xB88, size 0xA, align 1
    char _pad_0B92[0x2]; // offset 0xB92
    float32 m_fWidth; // offset 0xB94, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xB98, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xB9C, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xBA0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xBA4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xBA8, size 0x4, align 4
    float32 m_fSpeed; // offset 0xBAC, size 0x4, align 4
    float32 m_flFrame; // offset 0xBB0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xBB4, size 0x1, align 1
    char _pad_0BB5[0x3]; // offset 0xBB5
    VectorWS m_vecEndPos; // offset 0xBB8, size 0xC, align 4
    CHandle< CBaseEntity > m_hEndEntity; // offset 0xBC4, size 0x4, align 4
    int32 m_nDissolveType; // offset 0xBC8, size 0x4, align 4
    char _pad_0BCC[0x4]; // offset 0xBCC
};
