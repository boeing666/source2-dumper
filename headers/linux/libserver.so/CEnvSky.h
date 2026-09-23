#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0xB90, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB30]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xB30, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xB38, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xB40, size 0x1, align 1
    char _pad_0B41[0x3]; // offset 0xB41
    Color m_vTintColor; // offset 0xB44, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xB48, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xB4C, size 0x4, align 4
    int32 m_nFogType; // offset 0xB50, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xB54, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xB58, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xB5C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xB60, size 0x4, align 4
    bool m_bEnabled; // offset 0xB64, size 0x1, align 1
    char _pad_0B65[0x2B]; // offset 0xB65
};
