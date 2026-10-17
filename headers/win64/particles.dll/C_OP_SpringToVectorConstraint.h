#pragma once

class C_OP_SpringToVectorConstraint : public CParticleFunctionConstraint /*0x0*/  // sizeof 0xE98, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flRestLength; // offset 0x1E0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMinDistance; // offset 0x358, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMaxDistance; // offset 0x4D0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRestingLength; // offset 0x648, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecAnchorVector; // offset 0x7C0, size 0x6D8, align 8 | MPropertyFriendlyName
};
