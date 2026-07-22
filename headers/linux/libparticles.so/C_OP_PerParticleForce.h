#pragma once

class C_OP_PerParticleForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x9E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flForceScale; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vForce; // offset 0x348, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nCP; // offset 0x9D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_09DC[0x4]; // offset 0x9DC
};
