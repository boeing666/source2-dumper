#pragma once

class C_OP_PerParticleForce : public CParticleFunctionForce /*0x0*/  // sizeof 0xA48, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1F0]; // offset 0x0
    CPerParticleFloatInput m_flForceScale; // offset 0x1F0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vForce; // offset 0x368, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    int32 m_nCP; // offset 0xA40, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0A44[0x4]; // offset 0xA44
};
