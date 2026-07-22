#pragma once

class C_OP_CollideWithParentParticles : public CParticleFunctionConstraint /*0x0*/  // sizeof 0x4A0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    CPerParticleFloatInput m_flParentRadiusScale; // offset 0x1D0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadiusScale; // offset 0x338, size 0x168, align 8 | MPropertyFriendlyName
};
