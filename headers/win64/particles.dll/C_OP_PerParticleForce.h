#pragma once

class C_OP_PerParticleForce : public CParticleFunctionForce /*0x0*/  // sizeof 0xA18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_flForceScale; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vForce; // offset 0x358, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nCP; // offset 0xA10, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A14[0x4]; // offset 0xA14
};
