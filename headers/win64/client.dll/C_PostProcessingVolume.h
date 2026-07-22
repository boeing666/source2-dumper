#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xBB0, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xB80]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xB80, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0xB88, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0xB8C, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0xB90, size 0x4, align 4
    float32 m_flMinExposure; // offset 0xB94, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0xB98, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0xB9C, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0xBA0, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0xBA4, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xBA8, size 0x4, align 4
    bool m_bMaster; // offset 0xBAC, size 0x1, align 1
    bool m_bExposureControl; // offset 0xBAD, size 0x1, align 1
    char _pad_0BAE[0x2]; // offset 0xBAE
};
