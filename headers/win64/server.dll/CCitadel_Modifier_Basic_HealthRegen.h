#pragma once

class CCitadel_Modifier_Basic_HealthRegen : public CCitadelModifier /*0x0*/  // sizeof 0xD8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flHealthRegen; // offset 0xD0, size 0x4, align 4
    float32 m_flExternalHealthRegen; // offset 0xD4, size 0x4, align 4
};
