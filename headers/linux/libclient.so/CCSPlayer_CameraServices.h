#pragma once

class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices /*0x0*/  // sizeof 0x360, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2B8]; // offset 0x0
    float32 m_flDeathCamTilt; // offset 0x2B8, size 0x4, align 4
    CHandle< C_PointDeathcamBounds > m_hDeathCamBounds; // offset 0x2BC, size 0x4, align 4
    bool m_bDeathCamBoundsSearched; // offset 0x2C0, size 0x1, align 1
    char _pad_02C1[0x7]; // offset 0x2C1
    Vector m_vClientScopeInaccuracy; // offset 0x2C8, size 0xC, align 4
    char _pad_02D4[0x8C]; // offset 0x2D4
};
