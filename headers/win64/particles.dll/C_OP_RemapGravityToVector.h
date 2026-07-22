#pragma once

class C_OP_RemapGravityToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0x900, align 0x10 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_vInput1; // offset 0x1D8, size 0x6B8, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nOutputField; // offset 0x890, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    ParticleSetMethod_t m_nSetMethod; // offset 0x894, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bNormalizedOutput; // offset 0x898, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0899[0x67]; // offset 0x899
};
