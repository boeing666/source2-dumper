#pragma once

class CBaseModifierAura : public CCitadelModifier /*0x0*/  // sizeof 0x180, align 0xFF [vtable abstract] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x130]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_hAuraUnits; // offset 0x130, size 0x18, align 8 | MNotSaved
    CUtlVector< CHandle< C_BaseEntity > > m_hOldAuraUnits; // offset 0x148, size 0x18, align 8
    float32 m_flOverrideRadius; // offset 0x160, size 0x4, align 4
    char _pad_0164[0x1C]; // offset 0x164
};
