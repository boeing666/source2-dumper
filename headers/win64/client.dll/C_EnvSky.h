#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xA88, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xA90, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xA98, size 0x1, align 1
    Color m_vTintColor; // offset 0xA99, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xA9D, size 0x4, align 1
    char _pad_0AA1[0x3]; // offset 0xAA1
    float32 m_flBrightnessScale; // offset 0xAA4, size 0x4, align 4
    int32 m_nFogType; // offset 0xAA8, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xAAC, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xAB0, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xAB4, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xAB8, size 0x4, align 4
    bool m_bEnabled; // offset 0xABC, size 0x1, align 1
    char _pad_0ABD[0x2B]; // offset 0xABD
};
