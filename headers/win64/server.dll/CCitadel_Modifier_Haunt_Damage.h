#pragma once

class CCitadel_Modifier_Haunt_Damage : public CCitadel_Modifier_Base /*0x0*/  // sizeof 0x418, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bCheckForExplosion; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    GameTime_t m_flLastBurnTime; // offset 0x154, size 0x4, align 255
    char _pad_0158[0x2C0]; // offset 0x158
};
