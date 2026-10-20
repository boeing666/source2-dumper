#pragma once

class CCitadel_Modifier_Dust_Storm_Aura_Apply : public CCitadelModifier /*0x0*/  // sizeof 0x368, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x150]; // offset 0x0
    float32 m_flDamagePerTick; // offset 0x150, size 0x4, align 4
    bool m_bFirstTick; // offset 0x154, size 0x1, align 1
    char _pad_0155[0x213]; // offset 0x155
};
