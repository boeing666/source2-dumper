#pragma once

class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1AE0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E0]; // offset 0x0
    Vector m_vecAbsVal; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecAbsValInv; // offset 0x1EC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetLoc; // offset 0x1F8, size 0x6B8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x8B0, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMin; // offset 0xA20, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMax; // offset 0x10D8, size 0x6B8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScale; // offset 0x1790, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScaleLoc; // offset 0x1900, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x1A70, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    bool m_bIgnoreDt; // offset 0x1AD8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1AD9[0x7]; // offset 0x1AD9
};
