#pragma once

class CAbilityDustStormVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DustStormAura; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_GrenadeTrailModifier; // offset 0x1828, size 0x10, align 8
};
