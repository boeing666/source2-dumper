#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x8D8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x878]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x878, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x880, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x3]; // offset 0x889
    Color m_vTintColor; // offset 0x88C, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0x890, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x894, size 0x4, align 4
    int32 m_nFogType; // offset 0x898, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x89C, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x8A0, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x8A4, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x8A8, size 0x4, align 4
    bool m_bEnabled; // offset 0x8AC, size 0x1, align 1
    char _pad_08AD[0x2B]; // offset 0x8AD
};
