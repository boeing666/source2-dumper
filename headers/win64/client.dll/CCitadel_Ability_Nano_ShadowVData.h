#pragma once

class CCitadel_Ability_Nano_ShadowVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1850, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_ShadowModifier; // offset 0x1818, size 0x10, align 8 | MPropertyGroupName
    CEmbeddedSubclass< CCitadelModifier > m_PurgeModifier; // offset 0x1828, size 0x10, align 8
    CEmbeddedSubclass< CCitadelModifier > m_EnemyAura; // offset 0x1838, size 0x10, align 8
    float32 m_flAuraRadius; // offset 0x1848, size 0x4, align 4 | MPropertyGroupName
    char _pad_184C[0x4]; // offset 0x184C
};
