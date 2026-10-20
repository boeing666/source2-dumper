#pragma once

class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x1080, size 0x10, align 8 | MPropertyStartGroup
    CUtlString m_strDebuffStatName; // offset 0x1090, size 0x8, align 8 | MPropertyStartGroup
};
