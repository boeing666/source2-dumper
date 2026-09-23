#pragma once

class C_INIT_RingWave : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flParticlesPerOrbit; // offset 0x240, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flThickness; // offset 0x520, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x690, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x800, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRoll; // offset 0x970, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flPitch; // offset 0xAE0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flYaw; // offset 0xC50, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0xDC0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bXYVelocityOnly; // offset 0xDC1, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0DC2[0x6]; // offset 0xDC2
};
