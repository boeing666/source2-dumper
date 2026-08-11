#pragma once

class CCitadelTriggerCapturePoint : public CBaseTrigger /*0x0*/  // sizeof 0x10E8, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x8E0]; // offset 0x0
    CCitadelMinimapComponent m_CCitadelMinimapComponent; // offset 0x8E0, size 0x20, align 255 | MNetworkEnable MNetworkUserGroup MNetworkAlias MNetworkTypeAlias
    CEntityIOOutput m_OnBecomeCapturable; // offset 0x900, size 0x18, align 255
    CEntityOutputTemplate< int32 > m_OnFullyCaptured; // offset 0x918, size 0x20, align 8
    CUtlSymbolLarge m_iszGroupName; // offset 0x938, size 0x8, align 8
    ParticleIndex_t m_nEnabledParticle; // offset 0x940, size 0x4, align 255
    ParticleIndex_t m_nPreEnableFX; // offset 0x944, size 0x4, align 255
    char _pad_0948[0x780]; // offset 0x948
    CHandle< CNPC_Escort > m_hEscort; // offset 0x10C8, size 0x4, align 4
    GameTime_t m_tQueuedEnableTime; // offset 0x10CC, size 0x4, align 255 | MNetworkEnable MNetworkChangeCallback
    float32 m_flCaptureProgress; // offset 0x10D0, size 0x4, align 4 | MNetworkEnable
    int32 m_nCaptureProgressOwner; // offset 0x10D4, size 0x4, align 4 | MNetworkEnable
    int32 m_nActivelyCapturingTeam; // offset 0x10D8, size 0x4, align 4 | MNetworkEnable
    int32 m_nActiveCapturers; // offset 0x10DC, size 0x4, align 4 | MNetworkEnable
    uint8 m_nEnableState; // offset 0x10E0, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_10E1[0x7]; // offset 0x10E1
};
