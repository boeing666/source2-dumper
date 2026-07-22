#pragma once

class C_INIT_RandomScalar : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    float32 m_flMin; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMax; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flExponent; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
};
