#pragma once

class C_OP_SetFloatCollection : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4D0, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CParticleCollectionFloatInput m_InputValue; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x338, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x33C, size 0x4, align 4 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_Lerp; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    char _pad_04A8[0x28]; // offset 0x4A8
};
