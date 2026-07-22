#pragma once

class C_EnvVolumetricFogVolume : public C_BaseEntity /*0x0*/  // sizeof 0x648, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    bool m_bActive; // offset 0x600, size 0x1, align 1
    char _pad_0601[0x3]; // offset 0x601
    Vector m_vBoxMins; // offset 0x604, size 0xC, align 4
    Vector m_vBoxMaxs; // offset 0x610, size 0xC, align 4
    bool m_bStartDisabled; // offset 0x61C, size 0x1, align 1
    bool m_bIndirectUseLPVs; // offset 0x61D, size 0x1, align 1
    char _pad_061E[0x2]; // offset 0x61E
    float32 m_flStrength; // offset 0x620, size 0x4, align 4
    int32 m_nFalloffShape; // offset 0x624, size 0x4, align 4
    float32 m_flFalloffExponent; // offset 0x628, size 0x4, align 4
    float32 m_flHeightFogDepth; // offset 0x62C, size 0x4, align 4
    float32 m_fHeightFogEdgeWidth; // offset 0x630, size 0x4, align 4
    float32 m_fIndirectLightStrength; // offset 0x634, size 0x4, align 4
    float32 m_fSunLightStrength; // offset 0x638, size 0x4, align 4
    float32 m_fNoiseStrength; // offset 0x63C, size 0x4, align 4
    Color m_TintColor; // offset 0x640, size 0x4, align 1
    bool m_bOverrideTintColor; // offset 0x644, size 0x1, align 1
    bool m_bOverrideIndirectLightStrength; // offset 0x645, size 0x1, align 1
    bool m_bOverrideSunLightStrength; // offset 0x646, size 0x1, align 1
    bool m_bOverrideNoiseStrength; // offset 0x647, size 0x1, align 1
};
