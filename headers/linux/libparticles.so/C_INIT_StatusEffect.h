#pragma once

class C_INIT_StatusEffect : public CParticleFunctionInitializer /*0x0*/  // sizeof 0x238, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D4]; // offset 0x0
    Detail2Combo_t m_nDetail2Combo; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDetail2Rotation; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDetail2Scale; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDetail2BlendFactor; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flColorWarpIntensity; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flDiffuseWarpBlendToFull; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flEnvMapIntensity; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flAmbientScale; // offset 0x1F0, size 0x4, align 4 | MPropertyFriendlyName
    Color m_specularColor; // offset 0x1F4, size 0x4, align 1 | MPropertyFriendlyName
    float32 m_flSpecularScale; // offset 0x1F8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpecularExponent; // offset 0x1FC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpecularExponentBlendToFull; // offset 0x200, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSpecularBlendToFull; // offset 0x204, size 0x4, align 4 | MPropertyFriendlyName
    Color m_rimLightColor; // offset 0x208, size 0x4, align 1 | MPropertyFriendlyName
    float32 m_flRimLightScale; // offset 0x20C, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flReflectionsTintByBaseBlendToNone; // offset 0x210, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMetalnessBlendToFull; // offset 0x214, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flSelfIllumBlendToFull; // offset 0x218, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_021C[0x1C]; // offset 0x21C
};
