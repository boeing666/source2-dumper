#pragma once

class C_OP_RemapTransformVisibilityToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x278, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    ParticleSetMethod_t m_nSetMethod; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x250, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flInputMin; // offset 0x254, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flInputMax; // offset 0x258, size 0x4, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMin; // offset 0x25C, size 0xC, align 4 | MPropertyFriendlyName
    Vector m_vecOutputMax; // offset 0x268, size 0xC, align 4 | MPropertyFriendlyName
    float32 m_flRadius; // offset 0x274, size 0x4, align 4 | MPropertyFriendlyName
};
