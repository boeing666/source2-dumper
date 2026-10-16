#pragma once

class CCitadel_Ability_Artist_PillarVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1410, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDebug; // offset 0x13F8, size 0x1, align 1 | MPropertyStartGroup
    char _pad_13F9[0x3]; // offset 0x13F9
    float32 m_flGroundHeightOffset; // offset 0x13FC, size 0x4, align 4
    float32 m_flGroundDistance; // offset 0x1400, size 0x4, align 4
    float32 m_flSearchUpDistance; // offset 0x1404, size 0x4, align 4
    float32 m_flSearchDownDistance; // offset 0x1408, size 0x4, align 4
    char _pad_140C[0x4]; // offset 0x140C
};
