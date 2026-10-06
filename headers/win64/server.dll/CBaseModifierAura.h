#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x180, align 0xFF [vtable abstract] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x148]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_hAuraUnits; // offset 0x148, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< CBaseEntity > > m_hOldAuraUnits; // offset 0x160, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0x178, size 0x4, align 4
    char _pad_017C[0x4]; // offset 0x17C
};
