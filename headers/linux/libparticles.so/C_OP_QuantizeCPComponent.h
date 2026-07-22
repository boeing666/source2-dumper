#pragma once

class C_OP_QuantizeCPComponent : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleCollectionFloatInput m_flInputValue; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    int32 m_nCPOutput; // offset 0x340, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x344, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionFloatInput m_flQuantizeValue; // offset 0x348, size 0x168, align 8 | MPropertyFriendlyName
};
