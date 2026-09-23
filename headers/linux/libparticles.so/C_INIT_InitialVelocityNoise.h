#pragma once

class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    Vector m_vecAbsVal; // offset 0x1DC, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecAbsValInv; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01F4[0x4]; // offset 0x1F4
    CPerParticleVecInput m_vecOffsetLoc; // offset 0x1F8, size 0x6B0, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x8A8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMin; // offset 0xA18, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMax; // offset 0x10C8, size 0x6B0, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScale; // offset 0x1778, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScaleLoc; // offset 0x18E8, size 0x170, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x1A58, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    bool m_bIgnoreDt; // offset 0x1AB8, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1AB9[0x7]; // offset 0x1AB9
};
