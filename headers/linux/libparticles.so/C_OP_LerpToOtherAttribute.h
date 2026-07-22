#pragma once

class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator /*0x0*/  // sizeof 0x370, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flInterpolation; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldInputFrom; // offset 0x338, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x33C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x340, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0344[0x2C]; // offset 0x344
};
