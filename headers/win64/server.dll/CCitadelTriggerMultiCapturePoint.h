#pragma once

class CCitadelTriggerMultiCapturePoint : public CBaseTrigger /*0x0*/  // sizeof 0xD30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA00]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0xA00, size 0x20, align 255
    CEntityIOOutput m_OnBecomeCapturable; // offset 0xA20, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_OnFullyCaptured; // offset 0xA38, size 0x20, align 8
    CUtlSymbolLarge m_iszGroupName; // offset 0xA58, size 0x8, align 8
    ParticleIndex_t m_nEnabledParticle; // offset 0xA60, size 0x4, align 255
    ParticleIndex_t m_nPreEnableFX; // offset 0xA64, size 0x4, align 255
    char _pad_0A68[0x2C0]; // offset 0xA68
    uint8 m_nEnableState; // offset 0xD28, size 0x1, align 1
    char _pad_0D29[0x7]; // offset 0xD29
};
