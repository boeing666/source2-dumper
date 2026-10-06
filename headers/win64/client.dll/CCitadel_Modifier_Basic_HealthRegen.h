#pragma once

class CCitadel_Modifier_Basic_HealthRegen : public CCitadelModifier /*0x0*/  // sizeof 0x148, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x138]; // offset 0x0
    float32 m_flHealthRegen; // offset 0x138, size 0x4, align 4
    float32 m_flHealthRegenSnapShot; // offset 0x13C, size 0x4, align 4
    float32 m_flExternalHealthRegen; // offset 0x140, size 0x4, align 4
    float32 m_flExternalHealthRegenSnapShot; // offset 0x144, size 0x4, align 4
};
