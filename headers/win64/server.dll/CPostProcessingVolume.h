#pragma once

class CPostProcessingVolume : public CBaseTrigger /*0x0*/  // sizeof 0x928, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x8F8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0x8F8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0x900, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0x904, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0x908, size 0x4, align 4
    float32 m_flMinExposure; // offset 0x90C, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0x910, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0x914, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0x918, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0x91C, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x920, size 0x4, align 4
    bool m_bMaster; // offset 0x924, size 0x1, align 1
    bool m_bExposureControl; // offset 0x925, size 0x1, align 1
    char _pad_0926[0x2]; // offset 0x926
};
