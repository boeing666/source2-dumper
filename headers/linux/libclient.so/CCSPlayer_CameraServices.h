#pragma once

class CCSPlayer_CameraServices : public CCSPlayerBase_CameraServices /*0x0*/  // sizeof 0x350, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x2B0]; // offset 0x0
    float32 m_flDeathCamTilt; // offset 0x2B0, size 0x4, align 4
    char _pad_02B4[0x4]; // offset 0x2B4
    Vector m_vClientScopeInaccuracy; // offset 0x2B8, size 0xC, align 4
    char _pad_02C4[0x8C]; // offset 0x2C4
};
