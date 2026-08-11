#pragma once

class CCitadelModifier : public CBaseModifier /*0x0*/  // sizeof 0xD0, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xB0]; // offset 0x0
    float32 m_flEffectiveness; // offset 0xB0, size 0x4, align 4
    char _pad_00B4[0x1C]; // offset 0xB4
};
