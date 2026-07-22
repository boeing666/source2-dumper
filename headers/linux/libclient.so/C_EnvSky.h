#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xF98, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF38]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xF38, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xF40, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xF48, size 0x1, align 1
    Color m_vTintColor; // offset 0xF49, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xF4D, size 0x4, align 1
    char _pad_0F51[0x3]; // offset 0xF51
    float32 m_flBrightnessScale; // offset 0xF54, size 0x4, align 4
    int32 m_nFogType; // offset 0xF58, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xF5C, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xF60, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xF64, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xF68, size 0x4, align 4
    bool m_bEnabled; // offset 0xF6C, size 0x1, align 1
    char _pad_0F6D[0x2B]; // offset 0xF6D
};
