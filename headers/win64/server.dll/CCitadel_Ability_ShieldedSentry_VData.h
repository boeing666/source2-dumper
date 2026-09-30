#pragma once

class CCitadel_Ability_ShieldedSentry_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CBaseModifier > m_InnateModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CBaseModifier > m_DebuffModifier; // offset 0x13B0, size 0x10, align 8
    float32 m_flDamageFalloffEndScale; // offset 0x13C0, size 0x4, align 4 | MPropertyStartGroup
    char _pad_13C4[0x4]; // offset 0x13C4
};
