#pragma once

class CCitadel_Ability_Necro_FearVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_DebuffModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x1828, size 0x10, align 8 | MPropertyStartGroup
};
