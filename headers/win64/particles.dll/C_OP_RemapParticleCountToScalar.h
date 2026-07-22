#pragma once

class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x7A8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionFloatInput m_nInputMin; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nInputMax; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4C0, size 0x170, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x630, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x7A0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07A1[0x3]; // offset 0x7A1
    ParticleSetMethod_t m_nSetMethod; // offset 0x7A4, size 0x4, align 4 | MPropertyFriendlyName
};
