#pragma once

class CCitadel_Ability_Artist_PillarVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1098, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_AreaModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    bool m_bDebug; // offset 0x1080, size 0x1, align 1 | MPropertyStartGroup
    char _pad_1081[0x3]; // offset 0x1081
    float32 m_flGroundHeightOffset; // offset 0x1084, size 0x4, align 4
    float32 m_flGroundDistance; // offset 0x1088, size 0x4, align 4
    float32 m_flSearchUpDistance; // offset 0x108C, size 0x4, align 4
    float32 m_flSearchDownDistance; // offset 0x1090, size 0x4, align 4
    char _pad_1094[0x4]; // offset 0x1094
};
