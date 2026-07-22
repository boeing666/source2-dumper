#pragma once

class C_OP_RemapDotProductToScalar : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nInputCP1; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputCP2; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bUseParticleVelocity; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
    ParticleSetMethod_t m_nSetMethod; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bActiveRange; // offset 0x1F4, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseParticleNormal; // offset 0x1F5, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01F6[0x2]; // offset 0x1F6
};
