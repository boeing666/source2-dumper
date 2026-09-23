#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0x1080, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1020]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x1020, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x1028, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x1030, size 0x1, align 1
    char _pad_1031[0x3]; // offset 0x1031
    Color m_vTintColor; // offset 0x1034, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0x1038, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x103C, size 0x4, align 4
    int32 m_nFogType; // offset 0x1040, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x1044, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x1048, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x104C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x1050, size 0x4, align 4
    bool m_bEnabled; // offset 0x1054, size 0x1, align 1
    char _pad_1055[0x2B]; // offset 0x1055
};
