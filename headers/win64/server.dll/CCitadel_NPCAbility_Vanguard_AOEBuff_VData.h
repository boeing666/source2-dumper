#pragma once

class CCitadel_NPCAbility_Vanguard_AOEBuff_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_HealingModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_BuffModifier; // offset 0x13F8, size 0x10, align 8
};
