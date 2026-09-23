#pragma once

class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x810, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1DC]; // offset 0x0
    int32 m_nComponent1; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nComponent2; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    char _pad_01E4[0x4]; // offset 0x1E4
    CParticleTransformInput m_TransformInput; // offset 0x1E8, size 0x60, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flParticleDensity; // offset 0x248, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOffset; // offset 0x3B8, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius1; // offset 0x528, size 0x170, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius2; // offset 0x698, size 0x170, align 8 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0x808, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseLocalCoords; // offset 0x809, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffsetExistingPos; // offset 0x80A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_080B[0x5]; // offset 0x80B
};
