#pragma once

class CCitadel_Ability_Bookworm_AOEMagicVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1838, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flGroundHeightOffset; // offset 0x1828, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGroundDistance; // offset 0x182C, size 0x4, align 4
    float32 m_flSearchUpDistance; // offset 0x1830, size 0x4, align 4
    float32 m_flSearchDownDistance; // offset 0x1834, size 0x4, align 4
};
