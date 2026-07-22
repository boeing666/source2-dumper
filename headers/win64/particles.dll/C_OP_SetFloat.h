#pragma once

class C_OP_SetFloat : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4E0, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_InputValue; // offset 0x1D8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x348, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x34C, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_Lerp; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    char _pad_04C0[0x20]; // offset 0x4C0
};
