#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA58]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xA58, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xA60, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xA68, size 0x1, align 1
    Color m_vTintColor; // offset 0xA69, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xA6D, size 0x4, align 1
    char _pad_0A71[0x3]; // offset 0xA71
    float32 m_flBrightnessScale; // offset 0xA74, size 0x4, align 4
    int32 m_nFogType; // offset 0xA78, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xA7C, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xA80, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xA84, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xA88, size 0x4, align 4
    bool m_bEnabled; // offset 0xA8C, size 0x1, align 1
    char _pad_0A8D[0x2B]; // offset 0xA8D
};
