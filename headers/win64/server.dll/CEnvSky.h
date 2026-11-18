#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x918, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8B8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x8B8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x8C0, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x8C8, size 0x1, align 1
    char _pad_08C9[0x3]; // offset 0x8C9
    Color m_vTintColor; // offset 0x8CC, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0x8D0, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0x8D4, size 0x4, align 4
    int32 m_nFogType; // offset 0x8D8, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x8DC, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x8E0, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x8E4, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x8E8, size 0x4, align 4
    bool m_bEnabled; // offset 0x8EC, size 0x1, align 1
    char _pad_08ED[0x2B]; // offset 0x8ED
};
