#pragma once

class C_OP_RemapParticleCountOnScalarEndCap : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nInputMin; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nInputMax; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMin; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flOutputMax; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bBackwards; // offset 0x1EC, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01ED[0x3]; // offset 0x1ED
    ParticleSetMethod_t m_nSetMethod; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01F4[0x4]; // offset 0x1F4
};
