#pragma once

class C_OP_RemapCrossProductOfTwoVectorsToVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0xF40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleVecInput m_InputVec1; // offset 0x1D8, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_InputVec2; // offset 0x888, size 0x6B0, align 8 | MPropertyFriendlyName
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0xF38, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    bool m_bNormalize; // offset 0xF3C, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0F3D[0x3]; // offset 0xF3D
};
