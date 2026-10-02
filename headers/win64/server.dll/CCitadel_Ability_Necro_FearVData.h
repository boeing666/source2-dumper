#pragma once

class CCitadel_Ability_Necro_FearVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1408, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Base_Buildup > m_DebuffModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strProcSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
};
