#pragma once

class CCitadelModifier : public CBaseModifier /*0x0*/  // sizeof 0x140, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0x120]; // offset 0x0
    float32 m_flEffectiveness; // offset 0x120, size 0x4, align 4
    char _pad_0124[0x1C]; // offset 0x124
};
