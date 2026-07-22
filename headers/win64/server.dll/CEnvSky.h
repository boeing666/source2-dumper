#pragma once

class CEnvSky : public CBaseModelEntity /*0x0*/  // sizeof 0x7E0, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterial; // offset 0x780, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    CStrongHandle< InfoForResourceTypeIMaterial2 > m_hSkyMaterialLightingOnly; // offset 0x788, size 0x8, align 8 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartDisabled; // offset 0x790, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    Color m_vTintColor; // offset 0x791, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    Color m_vTintColorLightingOnly; // offset 0x795, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0799[0x3]; // offset 0x799
    float32 m_flBrightnessScale; // offset 0x79C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    int32 m_nFogType; // offset 0x7A0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMinStart; // offset 0x7A4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMinEnd; // offset 0x7A8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxStart; // offset 0x7AC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxEnd; // offset 0x7B0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bEnabled; // offset 0x7B4, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_07B5[0x2B]; // offset 0x7B5
};
