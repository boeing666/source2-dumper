#pragma once

class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1080]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // offset 0x1080, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTimeToActivate; // offset 0x1090, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTimeForHint; // offset 0x1094, size 0x4, align 4
};
