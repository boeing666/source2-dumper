#pragma once

class CPlayerVisibility : public CBaseEntity /*0x0*/  // sizeof 0x4B8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    float32 m_flVisibilityStrength; // offset 0x4A0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogDistanceMultiplier; // offset 0x4A4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFogMaxDensityMultiplier; // offset 0x4A8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flFadeTime; // offset 0x4AC, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    bool m_bStartDisabled; // offset 0x4B0, size 0x1, align 1 | MNetworkEnable
    bool m_bIsEnabled; // offset 0x4B1, size 0x1, align 1 | MNetworkEnable
    char _pad_04B2[0x6]; // offset 0x4B2
};
