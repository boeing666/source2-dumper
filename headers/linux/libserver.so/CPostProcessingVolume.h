#pragma once

class CPostProcessingVolume : public CBaseTrigger /*0x0*/  // sizeof 0xC08, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xBD8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xBE0, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xBE4, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xBE8, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xBEC, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xBF0, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xBF4, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xBF8, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xBFC, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xC00, size 0x4, align 4
    bool m_bMaster; // offset 0xC04, size 0x1, align 1
    bool m_bExposureControl; // offset 0xC05, size 0x1, align 1
    char _pad_0C06[0x2]; // offset 0xC06
};
