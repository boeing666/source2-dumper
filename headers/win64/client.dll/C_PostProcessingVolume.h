#pragma once

class C_PostProcessingVolume : public C_BaseTrigger /*0x0*/  // sizeof 0xAB8, align 0x8 [vtable] (client) {MEntityAllowsPortraitWorldSpawn MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xA88]; // offset 0x0
    CStrongHandle< InfoForResourceTypeCPostProcessingResource > m_hPostSettings; // offset 0xA88, size 0x8, align 8 | MNetworkEnable
    float32 m_flFadeDuration; // offset 0xA90, size 0x4, align 4 | MNetworkEnable
    float32 m_flMinLogExposure; // offset 0xA94, size 0x4, align 4 | MNetworkEnable
    float32 m_flMaxLogExposure; // offset 0xA98, size 0x4, align 4 | MNetworkEnable
    float32 m_flMinExposure; // offset 0xA9C, size 0x4, align 4 | MNetworkEnable
    float32 m_flMaxExposure; // offset 0xAA0, size 0x4, align 4 | MNetworkEnable
    float32 m_flExposureCompensation; // offset 0xAA4, size 0x4, align 4 | MNetworkEnable
    float32 m_flExposureFadeSpeedUp; // offset 0xAA8, size 0x4, align 4 | MNetworkEnable
    float32 m_flExposureFadeSpeedDown; // offset 0xAAC, size 0x4, align 4 | MNetworkEnable
    float32 m_flTonemapEVSmoothingRange; // offset 0xAB0, size 0x4, align 4 | MNetworkEnable
    bool m_bMaster; // offset 0xAB4, size 0x1, align 1 | MNetworkEnable
    bool m_bExposureControl; // offset 0xAB5, size 0x1, align 1 | MNetworkEnable
    char _pad_0AB6[0x2]; // offset 0xAB6
};
