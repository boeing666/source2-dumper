#pragma once

class CCitadel_Ability_ZipLineBoost_VData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13B8, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ZipboostModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyGroupName
    float32 m_flTimeToActivate; // offset 0x13B0, size 0x4, align 4 | MPropertyGroupName
    float32 m_flTimeForHint; // offset 0x13B4, size 0x4, align 4
};
