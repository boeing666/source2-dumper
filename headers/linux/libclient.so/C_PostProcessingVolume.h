#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xE90, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xE60]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xE60, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xE68, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xE6C, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xE70, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xE74, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xE78, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xE7C, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xE80, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xE84, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xE88, size 0x4, align 4
    bool m_bMaster; // offset 0xE8C, size 0x1, align 1
    bool m_bExposureControl; // offset 0xE8D, size 0x1, align 1
    char _pad_0E8E[0x2]; // offset 0xE8E
};
