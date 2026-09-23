#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0x10F8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1098]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x1098, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x10A0, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x10A8, size 0x1, align 1
    char _pad_10A9[0x3]; // offset 0x10A9
    Color m_vTintColor; // offset 0x10AC, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0x10B0, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x10B4, size 0x4, align 4
    int32 m_nFogType; // offset 0x10B8, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x10BC, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x10C0, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x10C4, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x10C8, size 0x4, align 4
    bool m_bEnabled; // offset 0x10CC, size 0x1, align 1
    char _pad_10CD[0x2B]; // offset 0x10CD
};
