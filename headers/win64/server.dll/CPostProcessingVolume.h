#pragma once

class CPostProcessingVolume : public CBaseTrigger /*0x0*/  // sizeof 0xA08, align 0x8 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x9D8]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0x9D8, size 0x8, align 8
    float32 m_flFadeDuration; // offset 0x9E0, size 0x4, align 4
    float32 m_flMinLogExposure; // offset 0x9E4, size 0x4, align 4
    float32 m_flMaxLogExposure; // offset 0x9E8, size 0x4, align 4
    float32 m_flMinExposure; // offset 0x9EC, size 0x4, align 4
    float32 m_flMaxExposure; // offset 0x9F0, size 0x4, align 4
    float32 m_flExposureCompensation; // offset 0x9F4, size 0x4, align 4
    float32 m_flExposureFadeSpeedUp; // offset 0x9F8, size 0x4, align 4
    float32 m_flExposureFadeSpeedDown; // offset 0x9FC, size 0x4, align 4
    float32 m_flTonemapEVSmoothingRange; // offset 0xA00, size 0x4, align 4
    bool m_bMaster; // offset 0xA04, size 0x1, align 1
    bool m_bExposureControl; // offset 0xA05, size 0x1, align 1
    char _pad_0A06[0x2]; // offset 0xA06
};
