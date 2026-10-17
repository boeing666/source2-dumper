#pragma once

class C_INIT_RingWave : public CParticleFunctionInitializer /*0x0*/  // sizeof 0xE18, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    CParticleCollectionFloatInput m_flParticlesPerOrbit; // offset 0x250, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3C8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flThickness; // offset 0x540, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x6B8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x830, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRoll; // offset 0x9A8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flPitch; // offset 0xB20, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flYaw; // offset 0xC98, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bEvenDistribution; // offset 0xE10, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bXYVelocityOnly; // offset 0xE11, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0E12[0x6]; // offset 0xE12
};
