#pragma once

class C_OP_LerpToOtherAttribute : public CParticleFunctionOperator /*0x0*/  // sizeof 0x390, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldInputFrom; // offset 0x358, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldInput; // offset 0x35C, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x360, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_0364[0x2C]; // offset 0x364
};
