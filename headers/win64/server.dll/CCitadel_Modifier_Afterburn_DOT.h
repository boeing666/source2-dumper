#pragma once

class CCitadel_Modifier_Afterburn_DOT : public CCitadel_Modifier_Burning /*0x0*/  // sizeof 0x2D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bCheckForExplosion; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    GameTime_t m_flLastBurnTime; // offset 0xD4, size 0x4, align 255
    char _pad_00D8[0x200]; // offset 0xD8
};
