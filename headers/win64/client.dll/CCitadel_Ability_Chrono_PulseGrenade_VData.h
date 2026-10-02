#pragma once

class CCitadel_Ability_Chrono_PulseGrenade_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1410, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_PulseAreaModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_strHitSound; // offset 0x13F8, size 0x10, align 8 | MPropertyStartGroup
    CUtlString m_strDebuffStatName; // offset 0x1408, size 0x8, align 8 | MPropertyStartGroup
};
