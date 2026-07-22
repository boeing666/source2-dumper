#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0xAB0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA50]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xA50, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xA58, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xA60, size 0x1, align 1
    Color m_vTintColor; // offset 0xA61, size 0x4, align 1
    Color m_vTintColorLightingOnly; // offset 0xA65, size 0x4, align 1
    char _pad_0A69[0x3]; // offset 0xA69
    float32 m_flBrightnessScale; // offset 0xA6C, size 0x4, align 4
    int32 m_nFogType; // offset 0xA70, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xA74, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xA78, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xA7C, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xA80, size 0x4, align 4
    bool m_bEnabled; // offset 0xA84, size 0x1, align 1
    char _pad_0A85[0x2B]; // offset 0xA85
};
