#pragma once

class C_OP_PinRopeSegmentParticleToParent : public CParticleFunctionOperator /*0x0*/  // sizeof 0x4C0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleSelection_t m_nParticleSelection; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleCollectionFloatInput m_nParticleNumber; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInterpolation; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
};
