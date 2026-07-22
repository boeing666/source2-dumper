#pragma once

class CCitadel_Ability_IcePathVData : public CitadelAbilityVData /*0x0*/  // sizeof 0x1848, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1818]; // offset 0x0
    CEmbeddedSubclass< CCitadelModifier > m_IcePathModifier; // offset 0x1818, size 0x10, align 8 | MPropertyStartGroup
    float32 m_flMomentumDecayRate; // offset 0x1828, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMomentumWeight; // offset 0x182C, size 0x4, align 4
    float32 m_flMaxPitchChange; // offset 0x1830, size 0x4, align 4
    float32 m_flMaxPitchUp; // offset 0x1834, size 0x4, align 4
    float32 m_flMaxPitchDown; // offset 0x1838, size 0x4, align 4
    float32 m_flMaxHeight; // offset 0x183C, size 0x4, align 4
    float32 m_flForwardAngleBias; // offset 0x1840, size 0x4, align 4
    char _pad_1844[0x4]; // offset 0x1844
};
