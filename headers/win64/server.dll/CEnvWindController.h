#pragma once

class CEnvWindController : public CBaseEntity /*0x0*/  // sizeof 0x5F8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CEnvWindShared m_EnvWindShared; // offset 0x4A0, size 0x130, align 255 | MNetworkEnable
    float32 m_fDirectionVariation; // offset 0x5D0, size 0x4, align 4 | MNetworkEnable
    float32 m_fSpeedVariation; // offset 0x5D4, size 0x4, align 4 | MNetworkEnable
    float32 m_fTurbulence; // offset 0x5D8, size 0x4, align 4 | MNetworkEnable
    float32 m_fVolumeHalfExtentXY; // offset 0x5DC, size 0x4, align 4 | MNetworkEnable
    float32 m_fVolumeHalfExtentZ; // offset 0x5E0, size 0x4, align 4 | MNetworkEnable
    int32 m_nVolumeResolutionXY; // offset 0x5E4, size 0x4, align 4 | MNetworkEnable
    int32 m_nVolumeResolutionZ; // offset 0x5E8, size 0x4, align 4 | MNetworkEnable
    int32 m_nClipmapLevels; // offset 0x5EC, size 0x4, align 4 | MNetworkEnable
    bool m_bIsMaster; // offset 0x5F0, size 0x1, align 1 | MNetworkEnable
    bool m_bFirstTime; // offset 0x5F1, size 0x1, align 1
    char _pad_05F2[0x6]; // offset 0x5F2
};
