#pragma once

class C_EnvWindController : public C_BaseEntity /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    C_EnvWindShared m_EnvWindShared; // offset 0x780, size 0xF8, align 8
    float32 m_fDirectionVariation; // offset 0x878, size 0x4, align 4
    float32 m_fSpeedVariation; // offset 0x87C, size 0x4, align 4
    float32 m_fTurbulence; // offset 0x880, size 0x4, align 4
    float32 m_fVolumeHalfExtentXY; // offset 0x884, size 0x4, align 4
    float32 m_fVolumeHalfExtentZ; // offset 0x888, size 0x4, align 4
    int32 m_nVolumeResolutionXY; // offset 0x88C, size 0x4, align 4
    int32 m_nVolumeResolutionZ; // offset 0x890, size 0x4, align 4
    int32 m_nClipmapLevels; // offset 0x894, size 0x4, align 4
    bool m_bIsMaster; // offset 0x898, size 0x1, align 1
    bool m_bFirstTime; // offset 0x899, size 0x1, align 1
    char _pad_089A[0x6]; // offset 0x89A
};
