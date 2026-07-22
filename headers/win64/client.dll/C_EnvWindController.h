#pragma once

class C_EnvWindController : public C_BaseEntity /*0x0*/  // sizeof 0x720, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x600]; // offset 0x0
    C_EnvWindShared m_EnvWindShared; // offset 0x600, size 0xF8, align 8
    float32 m_fDirectionVariation; // offset 0x6F8, size 0x4, align 4
    float32 m_fSpeedVariation; // offset 0x6FC, size 0x4, align 4
    float32 m_fTurbulence; // offset 0x700, size 0x4, align 4
    float32 m_fVolumeHalfExtentXY; // offset 0x704, size 0x4, align 4
    float32 m_fVolumeHalfExtentZ; // offset 0x708, size 0x4, align 4
    int32 m_nVolumeResolutionXY; // offset 0x70C, size 0x4, align 4
    int32 m_nVolumeResolutionZ; // offset 0x710, size 0x4, align 4
    int32 m_nClipmapLevels; // offset 0x714, size 0x4, align 4
    bool m_bIsMaster; // offset 0x718, size 0x1, align 1
    bool m_bFirstTime; // offset 0x719, size 0x1, align 1
    char _pad_071A[0x6]; // offset 0x71A
};
