#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xE28, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xDF8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xE00, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xE04, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xE08, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xE0C, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xE10, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xE14, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xE18, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xE1C, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xE20, size 0x4, align 4
    bool m_bMaster; // offset 0xE24, size 0x1, align 1
    bool m_bExposureControl; // offset 0xE25, size 0x1, align 1
    char _pad_0E26[0x2]; // offset 0xE26
};
