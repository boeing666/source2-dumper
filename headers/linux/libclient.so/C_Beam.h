#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xDB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD00]; // offset 0x0
    float32 m_flFrameRate; // offset 0xD00, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xD04, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xD08, size 0x4, align 255
    float32 m_flDamage; // offset 0xD0C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xD10, size 0x1, align 1
    char _pad_0D11[0x3]; // offset 0xD11
    int32 m_queryHandleHalo; // offset 0xD14, size 0x4, align 4 | MNotSaved
    char _pad_0D18[0x20]; // offset 0xD18
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xD38, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xD40, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xD48, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xD4C, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xD50, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xD78, size 0xA, align 1
    char _pad_0D82[0x2]; // offset 0xD82
    float32 m_fWidth; // offset 0xD84, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xD88, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xD8C, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xD90, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xD94, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xD98, size 0x4, align 4
    float32 m_fSpeed; // offset 0xD9C, size 0x4, align 4
    float32 m_flFrame; // offset 0xDA0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xDA4, size 0x1, align 1
    char _pad_0DA5[0x3]; // offset 0xDA5
    VectorWS m_vecEndPos; // offset 0xDA8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xDB4, size 0x4, align 4
};
