#pragma once

class CPostProcessingVolume : public CBaseTrigger /*0x0*/  // sizeof 0xA30, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xA00, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xA08, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xA0C, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xA10, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xA14, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xA18, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xA1C, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xA20, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xA24, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xA28, size 0x4, align 4
    bool m_bMaster; // offset 0xA2C, size 0x1, align 1
    bool m_bExposureControl; // offset 0xA2D, size 0x1, align 1
    char _pad_0A2E[0x2]; // offset 0xA2E
};
