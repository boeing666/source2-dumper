#pragma once

class C_INIT_InitialVelocityNoise : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x1B60, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults MGPUParticleFunction}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    Vector m_vecAbsVal; // offset 0x1E8, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    Vector m_vecAbsValInv; // offset 0x1F4, size 0xC, align 4 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleVecInput m_vecOffsetLoc; // offset 0x200, size 0x6D8, align 8 | MPropertyFriendlyName MVectorIsCoordinate
    CPerParticleFloatInput m_flOffset; // offset 0x8D8, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMin; // offset 0xA50, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleVecInput m_vecOutputMax; // offset 0x1128, size 0x6D8, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScale; // offset 0x1800, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flNoiseScaleLoc; // offset 0x1978, size 0x178, align 8 | MPropertyFriendlyName
    CParticleTransformInput m_TransformInput; // offset 0x1AF0, size 0x68, align 8 | MPropertyFriendlyName MParticleInputOptional
    bool m_bIgnoreDt; // offset 0x1B58, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_1B59[0x7]; // offset 0x1B59
};
