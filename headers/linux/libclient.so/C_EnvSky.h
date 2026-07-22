#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xC70, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC10]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xC10, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xC18, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xC20, size 0x1, align 1
    Color m_vTintColor; // offset 0xC21, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xC25, size 0x4, align 1
    char _pad_0C29[0x3]; // offset 0xC29
    float32 m_flBrightnessScale; // offset 0xC2C, size 0x4, align 4
    int32 m_nFogType; // offset 0xC30, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xC34, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xC38, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xC3C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xC40, size 0x4, align 4
    bool m_bEnabled; // offset 0xC44, size 0x1, align 1
    char _pad_0C45[0x2B]; // offset 0xC45
};
