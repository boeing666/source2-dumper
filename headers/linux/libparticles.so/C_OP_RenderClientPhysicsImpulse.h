#pragma once

class C_OP_RenderClientPhysicsImpulse : public CParticleFunctionRenderer /*0x0*/  // sizeof 0x508, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x220]; // offset 0x0
    CPerParticleFloatInput m_flRadius; // offset 0x220, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flMagnitude; // offset 0x390, size 0x170, align 8 | MPropertyFriendlyName
    int32 m_nSimIdFilter; // offset 0x500, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0504[0x4]; // offset 0x504
};
