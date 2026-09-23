#pragma once

class C_INIT_CreateParticleImpulse : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x660, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CPerParticleFloatInput m_InputRadius; // offset 0x1E8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_InputMagnitude; // offset 0x360, size 0x178, align 8 | MPropertyFriendlyName
    ParticleFalloffFunction_t m_nFalloffFunction; // offset 0x4D8, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_04DC[0x4]; // offset 0x4DC
    CPerParticleFloatInput m_InputFalloffExp; // offset 0x4E0, size 0x178, align 8 | MPropertyFriendlyName
    ParticleImpulseType_t m_nImpulseType; // offset 0x658, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_065C[0x4]; // offset 0x65C
};
