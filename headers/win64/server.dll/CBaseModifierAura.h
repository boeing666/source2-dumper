#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x188, align 0xFF [vtable abstract] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x150]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // offset 0x150, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_hOldAuraUnits; // offset 0x168, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0x180, size 0x4, align 4
    char _pad_0184[0x4]; // offset 0x184
};
