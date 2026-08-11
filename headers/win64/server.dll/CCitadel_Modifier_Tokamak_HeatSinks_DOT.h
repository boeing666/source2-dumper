#pragma once

class CCitadel_Modifier_Tokamak_HeatSinks_DOT : public CCitadel_Modifier_Burning /*0x0*/  // sizeof 0x1D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    GameTime_t m_flLastBurnTime; // offset 0xD0, size 0x4, align 255
    float32 m_flScaledDPS; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x100]; // offset 0xD8
};
