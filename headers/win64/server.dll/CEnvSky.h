#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x7D0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x770]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x770, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x778, size 0x8, align 8
    bool m_bStartDisabled; // offset 0x780, size 0x1, align 1
    Color m_vTintColor; // offset 0x781, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0x785, size 0x4, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flBrightnessScale; // offset 0x78C, size 0x4, align 4
    int32 m_nFogType; // offset 0x790, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0x794, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0x798, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0x79C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0x7A0, size 0x4, align 4
    bool m_bEnabled; // offset 0x7A4, size 0x1, align 1
    char _pad_07A5[0x2B]; // offset 0x7A5
};
