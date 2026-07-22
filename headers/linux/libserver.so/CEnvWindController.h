#pragma once

class CEnvWindController : public CBaseEntity /*0x0*/  // sizeof 0x8D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x778]; // offset 0x0
    CEnvWindShared m_EnvWindShared; // offset 0x778, size 0x130, align 8
    float32 m_fDirectionVariation; // offset 0x8A8, size 0x4, align 4
    float32 m_fSpeedVariation; // offset 0x8AC, size 0x4, align 4
    float32 m_fTurbulence; // offset 0x8B0, size 0x4, align 4
    float32 m_fVolumeHalfExtentXY; // offset 0x8B4, size 0x4, align 4
    float32 m_fVolumeHalfExtentZ; // offset 0x8B8, size 0x4, align 4
    int32 m_nVolumeResolutionXY; // offset 0x8BC, size 0x4, align 4
    int32 m_nVolumeResolutionZ; // offset 0x8C0, size 0x4, align 4
    int32 m_nClipmapLevels; // offset 0x8C4, size 0x4, align 4
    bool m_bIsMaster; // offset 0x8C8, size 0x1, align 1
    bool m_bFirstTime; // offset 0x8C9, size 0x1, align 1
    char _pad_08CA[0x6]; // offset 0x8CA
};
