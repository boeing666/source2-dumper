#pragma once

class CCitadel_Modifier_Rutger_Pulse_Aura : public CCitadelModifierAura /*0x0*/  // sizeof 0x198, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x188]; // offset 0x0
    float32 m_flStartRadius; // offset 0x188, size 0x4, align 4
    float32 m_flEndRadius; // offset 0x18C, size 0x4, align 4
    float32 m_flSpreadDuration; // offset 0x190, size 0x4, align 4
    char _pad_0194[0x4]; // offset 0x194
};
