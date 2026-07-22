#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x10D8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x10A8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0x10A8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0x10B0, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0x10B4, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0x10B8, size 0x4, align 4
    float32 m_flMinExposure; // offset 0x10BC, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0x10C0, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0x10C4, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0x10C8, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0x10CC, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x10D0, size 0x4, align 4
    bool m_bMaster; // offset 0x10D4, size 0x1, align 1
    bool m_bExposureControl; // offset 0x10D5, size 0x1, align 1
    char _pad_10D6[0x2]; // offset 0x10D6
};
