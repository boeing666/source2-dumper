#pragma once

class CCitadel_Ability_IcePathVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1418, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x13E8]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // offset 0x13E8, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMomentumDecayRate; // offset 0x13F8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMomentumWeight; // offset 0x13FC, size 0x4, align 4
    float32 m_flMaxPitchChange; // offset 0x1400, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x1404, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1408, size 0x4, align 4
    float32 m_flMaxHeight; // offset 0x140C, size 0x4, align 4
    float32 m_flForwardAngleBias; // offset 0x1410, size 0x4, align 4
    char _pad_1414[0x4]; // offset 0x1414
};
