#pragma once

class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0xEF8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleVecInput m_InputVec1; // offset 0x1D0, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_InputVec2; // offset 0x860, size 0x690, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0xEF0, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bNormalize; // offset 0xEF4, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0EF5[0x3]; // offset 0xEF5
};
