#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1060, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1030]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0x1030, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0x1038, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0x103C, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0x1040, size 0x4, align 4
    float32 m_flMinExposure; // offset 0x1044, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0x1048, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0x104C, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0x1050, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0x1054, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x1058, size 0x4, align 4
    bool m_bMaster; // offset 0x105C, size 0x1, align 1
    bool m_bExposureControl; // offset 0x105D, size 0x1, align 1
    char _pad_105E[0x2]; // offset 0x105E
};
