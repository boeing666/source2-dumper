#pragma once

class CCitadel_Ability_Priest_StackingDefenseVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_StackingModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
};
