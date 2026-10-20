#pragma once

class CCitadel_Werewolf_HuntVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffWerewolfModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_SelfBuffHumanModifier; // offset 0x1080, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraWerewolfModifier; // offset 0x1090, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_AuraHumanModifier; // offset 0x10A0, size 0x10, align 8
};
