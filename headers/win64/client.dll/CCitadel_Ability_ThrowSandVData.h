#pragma once

class CCitadel_Ability_ThrowSandVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_DebuffModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SilenceDebuff; // offset 0x13B0, size 0x10, align 8
};
