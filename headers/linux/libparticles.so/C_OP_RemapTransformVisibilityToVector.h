#pragma once

class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x260, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    ParticleSetMethod_t m_nSetMethod; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01D4[0x4]; // offset 0x1D4
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x238, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x23C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x240, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x244, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMax; // offset 0x250, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flRadius; // offset 0x25C, size 0x4, align 4 | MPropertyFriendlyName
};
