#pragma once

class CCitadel_Werewolf_HuntVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1428, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffWerewolfModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffHumanModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraWerewolfModifier; // offset 0x1408, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraHumanModifier; // offset 0x1418, size 0x10, align 8
};
