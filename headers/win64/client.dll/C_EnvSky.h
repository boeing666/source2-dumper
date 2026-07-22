#pragma once

class C_EnvSky : public C_BaseModelEntity /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x9A8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x9A8, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x9B0, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartDisabled; // offset 0x9B8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    Color m_vTintColor; // offset 0x9B9, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    Color m_vTintColorLightingOnly; // offset 0x9BD, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_09C1[0x3]; // offset 0x9C1
    float32 m_flBrightnessScale; // offset 0x9C4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nFogType; // offset 0x9C8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMinStart; // offset 0x9CC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMinEnd; // offset 0x9D0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxStart; // offset 0x9D4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxEnd; // offset 0x9D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bEnabled; // offset 0x9DC, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_09DD[0x2B]; // offset 0x9DD
};
