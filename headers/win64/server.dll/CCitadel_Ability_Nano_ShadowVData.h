#pragma once

class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // offset 0x13F8, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // offset 0x1408, size 0x10, align 8
    float32 m_flAuraRadius; // offset 0x1418, size 0x4, align 4 | MPropertyGroupName
    char _pad_141C[0x4]; // offset 0x141C
};
