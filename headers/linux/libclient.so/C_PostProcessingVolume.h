#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0x1148, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x1118]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0x1118, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0x1120, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0x1124, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0x1128, size 0x4, align 4
    float32 m_flMinExposure; // offset 0x112C, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0x1130, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0x1134, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0x1138, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0x113C, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0x1140, size 0x4, align 4
    bool m_bMaster; // offset 0x1144, size 0x1, align 1
    bool m_bExposureControl; // offset 0x1145, size 0x1, align 1
    char _pad_1146[0x2]; // offset 0x1146
};
