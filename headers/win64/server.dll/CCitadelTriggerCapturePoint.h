#pragma once

class CCitadelTriggerCapturePoint : public CBaseTrigger /*0x0*/  // sizeof 0x11F0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x9F0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x9F0, size 0x20, align 255
    CEntityIOOutput m_OnBecomeCapturable; // offset 0xA10, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_OnFullyCaptured; // offset 0xA28, size 0x20, align 8
    CUtlSymbolLarge m_iszGroupName; // offset 0xA48, size 0x8, align 8
    ParticleIndex_t m_nEnabledParticle; // offset 0xA50, size 0x4, align 255
    ParticleIndex_t m_nPreEnableFX; // offset 0xA54, size 0x4, align 255
    char _pad_0A58[0x780]; // offset 0xA58
    GameTime_t m_tQueuedEnableTime; // offset 0x11D8, size 0x4, align 255
    float32 m_flCaptureProgress; // offset 0x11DC, size 0x4, align 4
    int32 m_nCaptureProgressOwner; // offset 0x11E0, size 0x4, align 4
    int32 m_nActivelyCapturingTeam; // offset 0x11E4, size 0x4, align 4
    int32 m_nActiveCapturers; // offset 0x11E8, size 0x4, align 4
    uint8 m_nEnableState; // offset 0x11EC, size 0x1, align 1
    char _pad_11ED[0x3]; // offset 0x11ED
};
