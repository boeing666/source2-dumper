#pragma once

class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1840, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x1828, size 0x10, align 8
    float32 m_flDamageFalloffEndScale; // offset 0x1838, size 0x4, align 4 | MPropertyStartGroup
    char _pad_183C[0x4]; // offset 0x183C
};
