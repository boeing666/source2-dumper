#pragma once

class CCitadel_Ability_Bookworm_AOEMagicVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x13C0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13A0]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x13A0, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flGroundHeightOffset; // offset 0x13B0, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flGroundDistance; // offset 0x13B4, size 0x4, align 4
    float32 m_flSearchUpDistance; // offset 0x13B8, size 0x4, align 4
    float32 m_flSearchDownDistance; // offset 0x13BC, size 0x4, align 4
};
