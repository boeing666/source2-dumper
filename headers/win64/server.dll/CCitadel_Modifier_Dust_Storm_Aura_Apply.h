#pragma once

class CCitadel_Modifier_Dust_Storm_Aura_Apply : public CCitadelModifier /*0x0*/  // sizeof 0x258, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    float32 m_flDamagePerTick; // offset 0xD0, size 0x4, align 4
    bool m_bFirstTick; // offset 0xD4, size 0x1, align 1
    char _pad_00D5[0x183]; // offset 0xD5
};
