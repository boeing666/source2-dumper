#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0x1010, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xFB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xFB0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xFB8, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xFC0, size 0x1, align 1
    Color m_vTintColor; // offset 0xFC1, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xFC5, size 0x4, align 1
    char _pad_0FC9[0x3]; // offset 0xFC9
    float32 m_flBrightnessScale; // offset 0xFCC, size 0x4, align 4
    int32 m_nFogType; // offset 0xFD0, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xFD4, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xFD8, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xFDC, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xFE0, size 0x4, align 4
    bool m_bEnabled; // offset 0xFE4, size 0x1, align 1
    char _pad_0FE5[0x2B]; // offset 0xFE5
};
