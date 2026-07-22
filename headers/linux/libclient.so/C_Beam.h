#pragma once

class C_Beam : public C_BaseModelEntity /*0x0*/  // sizeof 0xCC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    float32 m_flFrameRate; // offset 0xC10, size 0x4, align 4
    float32 m_flHDRColorScale; // offset 0xC14, size 0x4, align 4
    GameTime_t m_flFireTime; // offset 0xC18, size 0x4, align 255
    float32 m_flDamage; // offset 0xC1C, size 0x4, align 4
    uint8 m_nNumBeamEnts; // offset 0xC20, size 0x1, align 1
    char _pad_0C21[0x3]; // offset 0xC21
    int32 m_queryHandleHalo; // offset 0xC24, size 0x4, align 4 | MNotSaved
    char _pad_0C28[0x20]; // offset 0xC28
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hBaseMaterial; // offset 0xC48, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_nHaloIndex; // offset 0xC50, size 0x8, align 8
    BeamType_t m_nBeamType; // offset 0xC58, size 0x4, align 4
    uint32 m_nBeamFlags; // offset 0xC5C, size 0x4, align 4
    CHandle< C_BaseEntity >[10] m_hAttachEntity; // offset 0xC60, size 0x28, align 4
    AttachmentHandle_t[10] m_nAttachIndex; // offset 0xC88, size 0xA, align 1
    char _pad_0C92[0x2]; // offset 0xC92
    float32 m_fWidth; // offset 0xC94, size 0x4, align 4
    float32 m_fEndWidth; // offset 0xC98, size 0x4, align 4
    float32 m_fFadeLength; // offset 0xC9C, size 0x4, align 4
    float32 m_fHaloScale; // offset 0xCA0, size 0x4, align 4
    float32 m_fAmplitude; // offset 0xCA4, size 0x4, align 4
    float32 m_fStartFrame; // offset 0xCA8, size 0x4, align 4
    float32 m_fSpeed; // offset 0xCAC, size 0x4, align 4
    float32 m_flFrame; // offset 0xCB0, size 0x4, align 4
    bool m_bTurnedOff; // offset 0xCB4, size 0x1, align 1
    char _pad_0CB5[0x3]; // offset 0xCB5
    VectorWS m_vecEndPos; // offset 0xCB8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hEndEntity; // offset 0xCC4, size 0x4, align 4
};
