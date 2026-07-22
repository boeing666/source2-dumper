#pragma once

class C_OP_ClampVector : public CParticleFunctionOperator /*0x0*/  // sizeof 0xF50, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleVecInput m_vecOutputMin; // offset 0x1E0, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsSometimesCoordinate
    CPerParticleVecInput m_vecOutputMax; // offset 0x898, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsSometimesCoordinate
};
