#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x108, align 0xFF [vtable abstract] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // offset 0xD0, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_hOldAuraUnits; // offset 0xE8, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0x100, size 0x4, align 4
    char _pad_0104[0x4]; // offset 0x104
};
