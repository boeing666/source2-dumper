#pragma once

class CCitadel_Ability_LifeDrainVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_LifeDrainTargetModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_LifeDrainCasterModifier; // offset 0x13F8, size 0x10, align 8
};
