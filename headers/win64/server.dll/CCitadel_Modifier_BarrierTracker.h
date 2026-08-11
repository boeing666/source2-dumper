#pragma once

class CCitadel_Modifier_BarrierTracker : public CCitadelModifier /*0x0*/  // sizeof 0xF8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD4]; // offset 0x0
    float32 m_flMaxHealth; // offset 0xD4, size 0x4, align 4
    float32 m_flCurrentHealth; // offset 0xD8, size 0x4, align 4
    char _pad_00DC[0x1C]; // offset 0xDC
};
