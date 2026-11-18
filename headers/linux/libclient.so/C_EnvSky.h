#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xDC8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xD68, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xD70, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xD78, size 0x1, align 1
    char _pad_0D79[0x3]; // offset 0xD79
    Color m_vTintColor; // offset 0xD7C, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xD80, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xD84, size 0x4, align 4
    int32 m_nFogType; // offset 0xD88, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xD8C, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xD90, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xD94, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xD98, size 0x4, align 4
    bool m_bEnabled; // offset 0xD9C, size 0x1, align 1
    char _pad_0D9D[0x2B]; // offset 0xD9D
};
