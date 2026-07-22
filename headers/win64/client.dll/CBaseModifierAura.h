#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x110, align 0xFF [vtable abstract] (client)
{
public:
    char _pad_0000[0xC0]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // offset 0xC0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< C_BaseEntity > > m_hOldAuraUnits; // offset 0xD8, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0xF0, size 0x4, align 4
    char _pad_00F4[0x1C]; // offset 0xF4
};
