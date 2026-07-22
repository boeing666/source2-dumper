#pragma once

class C_OP_PointVectorAtNextParticle : public CParticleFunctionOperator /*0x0*/  // sizeof 0x358, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    ParticleAttributeIndex_t m_nFieldOutput; // offset 0x1D8, size 0x4, align 255 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CPerParticleFloatInput m_flInterpolation; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bPrevious; // offset 0x350, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0351[0x7]; // offset 0x351
};
