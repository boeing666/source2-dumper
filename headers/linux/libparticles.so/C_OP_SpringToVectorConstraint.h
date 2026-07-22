#pragma once

class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xE00, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flRestLength; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMinDistance; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMaxDistance; // offset 0x4A0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRestingLength; // offset 0x608, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecAnchorVector; // offset 0x770, size 0x690, align 8 | MPropertyFriendlyName
};
