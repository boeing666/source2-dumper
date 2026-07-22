#pragma once

class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1D8, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x238, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3A0, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x508, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x670, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x7D8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07D9[0x7]; // offset 0x7D9
};
