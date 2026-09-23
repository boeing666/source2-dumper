#pragma once

class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices /*0x0*/  // sizeof 0x350, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2B0]; // offset 0x0
    float32 m_flDeathCamTilt; // offset 0x2B0, size 0x4, align 4
    CHandle< C_PointDeathcamBounds > m_hDeathCamBounds; // offset 0x2B4, size 0x4, align 4
    bool m_bDeathCamBoundsSearched; // offset 0x2B8, size 0x1, align 1
    char _pad_02B9[0x7]; // offset 0x2B9
    Vector m_vClientScopeInaccuracy; // offset 0x2C0, size 0xC, align 4
    char _pad_02CC[0x84]; // offset 0x2CC
};
