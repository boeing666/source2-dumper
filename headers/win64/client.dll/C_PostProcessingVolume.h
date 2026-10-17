#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xCA0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC70]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xC70, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xC78, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xC7C, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xC80, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xC84, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xC88, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xC8C, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xC90, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xC94, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xC98, size 0x4, align 4
    bool m_bMaster; // offset 0xC9C, size 0x1, align 1
    bool m_bExposureControl; // offset 0xC9D, size 0x1, align 1
    char _pad_0C9E[0x2]; // offset 0xC9E
};
