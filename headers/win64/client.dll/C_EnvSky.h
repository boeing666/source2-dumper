#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xC10, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBB0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xBB0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xBB8, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xBC0, size 0x1, align 1
    char _pad_0BC1[0x3]; // offset 0xBC1
    Color m_vTintColor; // offset 0xBC4, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xBC8, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xBCC, size 0x4, align 4
    int32 m_nFogType; // offset 0xBD0, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xBD4, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xBD8, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xBDC, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xBE0, size 0x4, align 4
    bool m_bEnabled; // offset 0xBE4, size 0x1, align 1
    char _pad_0BE5[0x2B]; // offset 0xBE5
};
