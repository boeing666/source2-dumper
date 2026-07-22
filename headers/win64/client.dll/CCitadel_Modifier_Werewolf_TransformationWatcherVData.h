#pragma once

class CCitadel_Modifier_Werewolf_TransformationWatcherVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_WerewolfModifier; // offset 0x750, size 0x10, align 8 | MPropertyStartGroup
    CEmbeddedSubclass< CCitadelModifier > m_HunterModifier; // offset 0x760, size 0x10, align 8
    CUtlVector< EAbilitySlots_t > m_vecWerewolfAbilitySlots; // offset 0x770, size 0x18, align 8 | MPropertyStartGroup
    CUtlVector< EAbilitySlots_t > m_vecHunterAbilitySlots; // offset 0x788, size 0x18, align 8
};
