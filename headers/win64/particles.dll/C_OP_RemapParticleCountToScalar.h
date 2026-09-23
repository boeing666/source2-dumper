#pragma once

class C_OP_RemapParticleCountToScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1E0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleCollectionFloatInput m_nInputMin; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_nInputMax; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMin; // offset 0x4D8, size 0x178, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flOutputMax; // offset 0x650, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x7C8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07C9[0x3]; // offset 0x7C9
    ParticleSetMethod_t m_nSetMethod; // offset 0x7CC, size 0x4, align 4 | MPropertyFriendlyName
};
