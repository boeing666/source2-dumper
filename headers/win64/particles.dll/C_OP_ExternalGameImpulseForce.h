#pragma once

class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x360, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_flForceScale; // offset 0x1E8, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bRopes; // offset 0x358, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRopesZOnly; // offset 0x359, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bExplosions; // offset 0x35A, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bParticles; // offset 0x35B, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_035C[0x4]; // offset 0x35C
};
