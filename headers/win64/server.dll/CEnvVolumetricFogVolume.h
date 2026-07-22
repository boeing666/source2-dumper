#pragma once

class CEnvVolumetricFogVolume : public CBaseEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bActive; // offset 0x4A0, size 0x1, align 1 | MNetworkEnable
    char _pad_04A1[0x3]; // offset 0x4A1
    Vector m_vBoxMins; // offset 0x4A4, size 0xC, align 4 | MNetworkEnable
    Vector m_vBoxMaxs; // offset 0x4B0, size 0xC, align 4 | MNetworkEnable
    bool m_bStartDisabled; // offset 0x4BC, size 0x1, align 1 | MNetworkEnable
    bool m_bIndirectUseLPVs; // offset 0x4BD, size 0x1, align 1 | MNetworkEnable
    char _pad_04BE[0x2]; // offset 0x4BE
    float32 m_flStrength; // offset 0x4C0, size 0x4, align 4 | MNetworkEnable
    int32 m_nFalloffShape; // offset 0x4C4, size 0x4, align 4 | MNetworkEnable
    float32 m_flFalloffExponent; // offset 0x4C8, size 0x4, align 4 | MNetworkEnable
    float32 m_flHeightFogDepth; // offset 0x4CC, size 0x4, align 4 | MNetworkEnable
    float32 m_fHeightFogEdgeWidth; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable
    float32 m_fIndirectLightStrength; // offset 0x4D4, size 0x4, align 4 | MNetworkEnable
    float32 m_fSunLightStrength; // offset 0x4D8, size 0x4, align 4 | MNetworkEnable
    float32 m_fNoiseStrength; // offset 0x4DC, size 0x4, align 4 | MNetworkEnable
    Color m_TintColor; // offset 0x4E0, size 0x4, align 1 | MNetworkEnable
    bool m_bOverrideTintColor; // offset 0x4E4, size 0x1, align 1 | MNetworkEnable
    bool m_bOverrideIndirectLightStrength; // offset 0x4E5, size 0x1, align 1 | MNetworkEnable
    bool m_bOverrideSunLightStrength; // offset 0x4E6, size 0x1, align 1 | MNetworkEnable
    bool m_bOverrideNoiseStrength; // offset 0x4E7, size 0x1, align 1 | MNetworkEnable
};
