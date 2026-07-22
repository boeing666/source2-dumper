#pragma once

class C_INIT_AddVectorToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x218, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecScale; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1EC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1F0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vOffsetMin; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vOffsetMax; // offset 0x200, size 0xC, align 4 | MPropertyFriendlyName
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x20C, size 0x8, align 4 | MPropertyFriendlyName
    char _pad_0214[0x4]; // offset 0x214
};
