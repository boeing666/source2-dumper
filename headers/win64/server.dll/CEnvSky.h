#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x8B0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x850]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x850, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x858, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x860, size 0x1, align 1
    char _pad_0861[0x3]; // offset 0x861
    Color m_vTintColor; // offset 0x864, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0x868, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x86C, size 0x4, align 4
    int32 m_nFogType; // offset 0x870, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x874, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x878, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x87C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x880, size 0x4, align 4
    bool m_bEnabled; // offset 0x884, size 0x1, align 1
    char _pad_0885[0x2B]; // offset 0x885
};
