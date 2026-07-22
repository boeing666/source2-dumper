#pragma once

class C_OP_ExternalGameImpulseForce : public CParticleFunctionForce /*0x0*/  // sizeof 0x350, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_flForceScale; // offset 0x1E0, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bRopes; // offset 0x348, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bRopesZOnly; // offset 0x349, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bExplosions; // offset 0x34A, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bParticles; // offset 0x34B, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_034C[0x4]; // offset 0x34C
};
