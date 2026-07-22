#pragma once

class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x640, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CPerParticleFloatInput m_InputRadius; // offset 0x1E0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_InputMagnitude; // offset 0x350, size 0x170, align 8 | MPropertyFriendlyName
    ParticleFalloffFunction_t m_nFalloffFunction; // offset 0x4C0, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04C4[0x4]; // offset 0x4C4
    CPerParticleFloatInput m_InputFalloffExp; // offset 0x4C8, size 0x170, align 8 | MPropertyFriendlyName
    ParticleImpulseType_t m_nImpulseType; // offset 0x638, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_063C[0x4]; // offset 0x63C
};
