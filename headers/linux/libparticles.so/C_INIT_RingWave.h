#pragma once

class C_INIT_RingWave : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xD80, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flParticlesPerOrbit; // offset 0x238, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3A0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flThickness; // offset 0x508, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x670, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x7D8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRoll; // offset 0x940, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flPitch; // offset 0xAA8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flYaw; // offset 0xC10, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0xD78, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bXYVelocityOnly; // offset 0xD79, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0D7A[0x6]; // offset 0xD7A
};
