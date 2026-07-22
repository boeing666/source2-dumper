#pragma once

class CEnvVolumetricFogVolume : public CBaseEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bActive; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    Vector m_vBoxMins; // offset 0x78C, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x798, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x7A4, size 0x1, align 1
    bool m_bIndirectUseLPVs; // offset 0x7A5, size 0x1, align 1
    char _pad_07A6[0x2]; // offset 0x7A6
    float32 m_flStrength; // offset 0x7A8, size 0x4, align 4
    int32 m_nFalloffShape; // offset 0x7AC, size 0x4, align 4
    float32 m_flFalloffExponent; // offset 0x7B0, size 0x4, align 4
    float32 m_flHeightFogDepth; // offset 0x7B4, size 0x4, align 4
    float32 m_fHeightFogEdgeWidth; // offset 0x7B8, size 0x4, align 4
    float32 m_fIndirectLightStrength; // offset 0x7BC, size 0x4, align 4
    float32 m_fSunLightStrength; // offset 0x7C0, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x7C4, size 0x4, align 4
    Color m_TintColor; // offset 0x7C8, size 0x4, align 1
    bool m_bOverrideTintColor; // offset 0x7CC, size 0x1, align 1
    bool m_bOverrideIndirectLightStrength; // offset 0x7CD, size 0x1, align 1
    bool m_bOverrideSunLightStrength; // offset 0x7CE, size 0x1, align 1
    bool m_bOverrideNoiseStrength; // offset 0x7CF, size 0x1, align 1
};
