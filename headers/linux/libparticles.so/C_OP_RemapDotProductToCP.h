#pragma once

class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x788, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nInputCP1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP2; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_flInputMin; // offset 0x1E8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInputMax; // offset 0x350, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4B8, size 0x168, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x620, size 0x168, align 8 | MPropertyFriendlyName
};
