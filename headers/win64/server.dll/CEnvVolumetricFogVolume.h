#pragma once

class CEnvVolumetricFogVolume : public CBaseEntity /*0x0*/  // sizeof 0x4F8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bActive; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    Vector m_vBoxMins; // offset 0x4B4, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x4C0, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x4CC, size 0x1, align 1
    bool m_bIndirectUseLPVs; // offset 0x4CD, size 0x1, align 1
    char _pad_04CE[0x2]; // offset 0x4CE
    float32 m_flStrength; // offset 0x4D0, size 0x4, align 4
    int32 m_nFalloffShape; // offset 0x4D4, size 0x4, align 4
    float32 m_flFalloffExponent; // offset 0x4D8, size 0x4, align 4
    float32 m_flHeightFogDepth; // offset 0x4DC, size 0x4, align 4
    float32 m_fHeightFogEdgeWidth; // offset 0x4E0, size 0x4, align 4
    float32 m_fIndirectLightStrength; // offset 0x4E4, size 0x4, align 4
    float32 m_fSunLightStrength; // offset 0x4E8, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x4EC, size 0x4, align 4
    Color m_TintColor; // offset 0x4F0, size 0x4, align 4
    bool m_bOverrideTintColor; // offset 0x4F4, size 0x1, align 1
    bool m_bOverrideIndirectLightStrength; // offset 0x4F5, size 0x1, align 1
    bool m_bOverrideSunLightStrength; // offset 0x4F6, size 0x1, align 1
    bool m_bOverrideNoiseStrength; // offset 0x4F7, size 0x1, align 1
};
