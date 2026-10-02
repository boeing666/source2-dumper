#pragma once

class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1410, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x13F8, size 0x10, align 8
    float32 m_flDamageFalloffEndScale; // offset 0x1408, size 0x4, align 4 | MPropertyStartGroup
    char _pad_140C[0x4]; // offset 0x140C
};
