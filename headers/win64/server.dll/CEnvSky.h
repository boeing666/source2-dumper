#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x7D8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x778, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x780, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x788, size 0x1, align 1
    Color m_vTintColor; // offset 0x789, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0x78D, size 0x4, align 1
    char _pad_0791[0x3]; // offset 0x791
    float32 m_flBrightnessScale; // offset 0x794, size 0x4, align 4
    int32 m_nFogType; // offset 0x798, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x79C, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x7A0, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x7A4, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x7A8, size 0x4, align 4
    bool m_bEnabled; // offset 0x7AC, size 0x1, align 1
    char _pad_07AD[0x2B]; // offset 0x7AD
};
