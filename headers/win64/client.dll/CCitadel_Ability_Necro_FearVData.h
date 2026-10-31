#pragma once

class CCitadel_Ability_Necro_FearVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_DebuffModifier; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x1090, size 0x10, align 8 | MPropertyStartGroup
};
