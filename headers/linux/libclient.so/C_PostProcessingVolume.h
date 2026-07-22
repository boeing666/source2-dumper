#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xD38, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xD08]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xD08, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xD10, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xD14, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xD18, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xD1C, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xD20, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xD24, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xD28, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xD2C, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xD30, size 0x4, align 4
    bool m_bMaster; // offset 0xD34, size 0x1, align 1
    bool m_bExposureControl; // offset 0xD35, size 0x1, align 1
    char _pad_0D36[0x2]; // offset 0xD36
};
