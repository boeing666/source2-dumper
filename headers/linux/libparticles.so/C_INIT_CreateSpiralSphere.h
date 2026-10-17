#pragma once

class C_INIT_CreateSpiralSphere : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x808, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flDensity; // offset 0x240, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialRadius; // offset 0x3B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMin; // offset 0x520, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flInitialSpeedMax; // offset 0x690, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUseParticleCount; // offset 0x800, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_0801[0x7]; // offset 0x801
};
