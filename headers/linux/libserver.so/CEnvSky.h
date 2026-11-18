#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0xC00, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBA0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0xBA0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0xBA8, size 0x8, align 8
    bool m_bStartDisabled; // offset 0xBB0, size 0x1, align 1
    char _pad_0BB1[0x3]; // offset 0xBB1
    Color m_vTintColor; // offset 0xBB4, size 0x4, align 4
    Color m_vTintColorLightingOnly; // offset 0xBB8, size 0x4, align 4
    float32 m_flBrightnessScale; // offset 0xBBC, size 0x4, align 4
    int32 m_nFogType; // offset 0xBC0, size 0x4, align 4
    float32 m_flFogMinStart; // offset 0xBC4, size 0x4, align 4
    float32 m_flFogMinEnd; // offset 0xBC8, size 0x4, align 4
    float32 m_flFogMaxStart; // offset 0xBCC, size 0x4, align 4
    float32 m_flFogMaxEnd; // offset 0xBD0, size 0x4, align 4
    bool m_bEnabled; // offset 0xBD4, size 0x1, align 1
    char _pad_0BD5[0x2B]; // offset 0xBD5
};
