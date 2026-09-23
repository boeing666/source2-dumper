#pragma once

class C_INIT_InitFloatCollection : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x368, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleCollectionFloatInput m_InputValue; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x360, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0364[0x4]; // offset 0x364
};
