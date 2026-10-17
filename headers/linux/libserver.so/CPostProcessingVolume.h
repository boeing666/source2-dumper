#pragma once

class CPostProcessingVolume : public CBaseTrigger /*0x0*/  // sizeof 0xCE8, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xCB8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xCB8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xCC0, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xCC4, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xCC8, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xCCC, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xCD0, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xCD4, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xCD8, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xCDC, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xCE0, size 0x4, align 4
    bool m_bMaster; // offset 0xCE4, size 0x1, align 1
    bool m_bExposureControl; // offset 0xCE5, size 0x1, align 1
    char _pad_0CE6[0x2]; // offset 0xCE6
};
