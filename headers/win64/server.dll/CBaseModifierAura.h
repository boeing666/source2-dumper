#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x178, align 0xFF [vtable abstract] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // offset 0x140, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_hOldAuraUnits; // offset 0x158, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0x170, size 0x4, align 4
    char _pad_0174[0x4]; // offset 0x174
};
