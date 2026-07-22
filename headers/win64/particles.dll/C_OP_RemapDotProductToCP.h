#pragma once

class C_OP_RemapDotProductToCP : public CParticleFunctionPreEmission /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    int32 m_nInputCP1; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP2; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutputCP; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nOutVectorField; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleCollectionFloatInput m_flInputMin; // offset 0x1F0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flInputMax; // offset 0x360, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4D0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x640, size 0x170, align 8 | MPropertyFriendlyName
};
