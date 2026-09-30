#pragma once

class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x838, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x250, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3C8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x540, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x6B8, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x830, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0831[0x7]; // offset 0x831
};
