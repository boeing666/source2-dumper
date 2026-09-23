#pragma once

class C_INIT_CreateInEpitrochoid : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x840, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1E8]; // offset 0x0
    int32 m_nComponent1; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    int32 m_nComponent2; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName MPropertyAttributeChoiceName
    CParticleTransformInput m_TransformInput; // offset 0x1F0, size 0x68, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flParticleDensity; // offset 0x258, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flOffset; // offset 0x3D0, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius1; // offset 0x548, size 0x178, align 8 | MPropertyFriendlyName
    CPerParticleFloatInput m_flRadius2; // offset 0x6C0, size 0x178, align 8 | MPropertyFriendlyName
    bool m_bUseCount; // offset 0x838, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bUseLocalCoords; // offset 0x839, size 0x1, align 1 | MPropertyFriendlyName
    bool m_bOffsetExistingPos; // offset 0x83A, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_083B[0x5]; // offset 0x83B
};
