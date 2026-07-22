#pragma once

class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x620, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CPerParticleFloatInput m_InputRadius; // offset 0x1D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_InputMagnitude; // offset 0x340, size 0x168, align 8 | MPropertyFriendlyName
    ParticleFalloffFunction_t m_nFalloffFunction; // offset 0x4A8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04AC[0x4]; // offset 0x4AC
    CPerParticleFloatInput m_InputFalloffExp; // offset 0x4B0, size 0x168, align 8 | MPropertyFriendlyName
    ParticleImpulseType_t m_nImpulseType; // offset 0x618, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_061C[0x4]; // offset 0x61C
};
