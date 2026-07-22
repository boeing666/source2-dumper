#pragma once

class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1A40, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    Vector m_vecAbsVal; // offset 0x1D4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecAbsValInv; // offset 0x1E0, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    char _pad_01EC[0x4]; // offset 0x1EC
    CPerParticleVecInput m_vecOffsetLoc; // offset 0x1F0, size 0x690, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x880, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMin; // offset 0x9E8, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMax; // offset 0x1078, size 0x690, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScale; // offset 0x1708, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScaleLoc; // offset 0x1870, size 0x168, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x19D8, size 0x60, align 8 | MPropertyFriendlyName MParticleInputOptional
    bool m_bIgnoreDt; // offset 0x1A38, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1A39[0x7]; // offset 0x1A39
};
