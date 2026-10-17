#pragma once

class C_INIT_AddVectorToVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x210, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    Vector m_vecScale; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x1EC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    Vector m_vOffsetMin; // offset 0x1F0, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vOffsetMax; // offset 0x1FC, size 0xC, align 4 | MPropertyFriendlyName
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x208, size 0x8, align 4 | MPropertyFriendlyName
};
