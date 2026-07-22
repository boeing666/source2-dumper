#pragma once

class C_INIT_RandomVector : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    Vector m_vecMin; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    Vector m_vecMax; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1EC, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CRandomNumberGeneratorParameters m_randomnessParameters; // offset 0x1F0, size 0x8, align 4 | MPropertyFriendlyName
};
