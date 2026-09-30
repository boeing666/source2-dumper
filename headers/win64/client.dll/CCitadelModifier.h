#pragma once

class CCitadelModifier : public CBaseModifier /*0x0*/  // sizeof 0x130, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0x110]; // offset 0x0
    float32 m_flEffectiveness; // offset 0x110, size 0x4, align 4
    char _pad_0114[0x1C]; // offset 0x114
};
