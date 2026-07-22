#pragma once

class C_OP_RemapTransformOrientationToYaw : public CParticleFunctionOperator /*0x0*/  // sizeof 0x250, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x68, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x240, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    float32 m_flRotOffset; // offset 0x244, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpinStrength; // offset 0x248, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_024C[0x4]; // offset 0x24C
};
