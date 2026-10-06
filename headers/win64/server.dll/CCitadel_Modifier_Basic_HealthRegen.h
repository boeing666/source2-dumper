#pragma once

class CCitadel_Modifier_Basic_HealthRegen : public CCitadelModifier /*0x0*/  // sizeof 0x158, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    float32 m_flHealthRegen; // offset 0x148, size 0x4, align 4
    float32 m_flHealthRegenSnapShot; // offset 0x14C, size 0x4, align 4
    float32 m_flExternalHealthRegen; // offset 0x150, size 0x4, align 4
    float32 m_flExternalHealthRegenSnapShot; // offset 0x154, size 0x4, align 4
};
