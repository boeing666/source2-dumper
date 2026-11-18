#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xC38, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xBD8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xBE0, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xBE8, size 0x1, align 1
    char _pad_0BE9[0x3]; // offset 0xBE9
    Color m_vTintColor; // offset 0xBEC, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xBF0, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xBF4, size 0x4, align 4
    int32 m_nFogType; // offset 0xBF8, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xBFC, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xC00, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xC04, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xC08, size 0x4, align 4
    bool m_bEnabled; // offset 0xC0C, size 0x1, align 1
    char _pad_0C0D[0x2B]; // offset 0xC0D
};
