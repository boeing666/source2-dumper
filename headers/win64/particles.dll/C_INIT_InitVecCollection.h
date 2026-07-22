#pragma once

class C_INIT_InitVecCollection : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionVecInput m_InputValue; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x898, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_089C[0x4]; // offset 0x89C
};
