#pragma once

class CCitadelModifier : public CBaseModifier /*0x0*/  // sizeof 0xC0, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xA0]; // offset 0x0
    float32 m_flEffectiveness; // offset 0xA0, size 0x4, align 4
    char _pad_00A4[0x1C]; // offset 0xA4
};
