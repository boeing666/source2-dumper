#pragma once

class CCitadel_Ability_IcePathVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x10A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // offset 0x1070, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMomentumDecayRate; // offset 0x1080, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMomentumWeight; // offset 0x1084, size 0x4, align 4
    float32 m_flMaxPitchChange; // offset 0x1088, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x108C, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1090, size 0x4, align 4
    float32 m_flMaxHeight; // offset 0x1094, size 0x4, align 4
    float32 m_flForwardAngleBias; // offset 0x1098, size 0x4, align 4
    char _pad_109C[0x4]; // offset 0x109C
};
