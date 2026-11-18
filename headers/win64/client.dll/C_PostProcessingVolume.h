#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xD00, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xCD0]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xCD0, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xCD8, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xCDC, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xCE0, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xCE4, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xCE8, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xCEC, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xCF0, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xCF4, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xCF8, size 0x4, align 4
    bool m_bMaster; // offset 0xCFC, size 0x1, align 1
    bool m_bExposureControl; // offset 0xCFD, size 0x1, align 1
    char _pad_0CFE[0x2]; // offset 0xCFE
};
