#pragma once

class C_EnvVolumetricFogVolume : public C_BaseEntity /*0x0*/  // sizeof 0x7B8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x76C]; // offset 0x0
    bool m_bActive; // offset 0x76C, size 0x1, align 1
    char _pad_076D[0x3]; // offset 0x76D
    Vector m_vBoxMins; // offset 0x770, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x77C, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x788, size 0x1, align 1
    bool m_bIndirectUseLPVs; // offset 0x789, size 0x1, align 1
    char _pad_078A[0x2]; // offset 0x78A
    float32 m_flStrength; // offset 0x78C, size 0x4, align 4
    int32 m_nFalloffShape; // offset 0x790, size 0x4, align 4
    float32 m_flFalloffExponent; // offset 0x794, size 0x4, align 4
    float32 m_flHeightFogDepth; // offset 0x798, size 0x4, align 4
    float32 m_fHeightFogEdgeWidth; // offset 0x79C, size 0x4, align 4
    float32 m_fIndirectLightStrength; // offset 0x7A0, size 0x4, align 4
    float32 m_fSunLightStrength; // offset 0x7A4, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x7A8, size 0x4, align 4
    Color m_TintColor; // offset 0x7AC, size 0x4, align 1
    bool m_bOverrideTintColor; // offset 0x7B0, size 0x1, align 1
    bool m_bOverrideIndirectLightStrength; // offset 0x7B1, size 0x1, align 1
    bool m_bOverrideSunLightStrength; // offset 0x7B2, size 0x1, align 1
    bool m_bOverrideNoiseStrength; // offset 0x7B3, size 0x1, align 1
    char _pad_07B4[0x4]; // offset 0x7B4
};
