#pragma once

class CCitadel_Modifier_Afterburn_DOT : public CCitadel_Modifier_Burning /*0x0*/  // sizeof 0x408, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bCheckForExplosion; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    GameTime_t m_flLastBurnTime; // offset 0x144, size 0x4, align 255
    char _pad_0148[0x2C0]; // offset 0x148
};
