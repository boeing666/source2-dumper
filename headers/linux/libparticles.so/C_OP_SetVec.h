#pragma once

class C_OP_SetVec : public CParticleFunctionOperator /*0x0*/  // sizeof 0x9D8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleVecInput m_InputValue; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x860, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x864, size 0x4, align 4 | MPropertyFriendlyName
    CPerParticleFloatInput m_Lerp; // offset 0x868, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bNormalizedOutput; // offset 0x9D0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_09D1[0x7]; // offset 0x9D1
};
