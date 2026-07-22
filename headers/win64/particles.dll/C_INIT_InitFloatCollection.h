#pragma once

class C_INIT_InitFloatCollection : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleCollectionFloatInput m_InputValue; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x350, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0354[0x4]; // offset 0x354
};
