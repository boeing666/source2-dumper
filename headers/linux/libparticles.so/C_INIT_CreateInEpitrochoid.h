#pragma once

class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x7E8, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    int32 m_nComponent1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nComponent2; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01DC[0x4]; // offset 0x1DC
    CParticleTransformInput m_TransformInput; // offset 0x1E0, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flParticleDensity; // offset 0x240, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOffset; // offset 0x3A8, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius1; // offset 0x510, size 0x168, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius2; // offset 0x678, size 0x168, align 8 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0x7E0, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseLocalCoords; // offset 0x7E1, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffsetExistingPos; // offset 0x7E2, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_07E3[0x5]; // offset 0x7E3
};
